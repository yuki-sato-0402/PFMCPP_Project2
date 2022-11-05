#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 int
float 
bool
double
char
unsigned int
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int num = 1;
    int num2 = -2;
    int num3 = 3;

    float num4 = 1.5f;
    float num5 = -1.55f;
    float num6 = 1.28f;

    bool A = true;
    bool B = false;
    bool C = true;

    double num7 = 1.5;
    double num8 = -1.55;
    double num9 = 1.28;

    char chr1 = 'a';
    char chr2 = 'b';
    char chr3 = 'c';
    

    unsigned int num10 = 4;
    unsigned int num11 = 5;
    unsigned int num12 = 6;
 

    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */

int num(int num1 = 1, num2 = 2 )
{
    ignoreUnused(num1, num2 ); 
    return{};
}

/*
 2)
 */

int cost (int grade = 1, num size = 2, bool specialOption =true)
{
    ignoreUnused(grade ,size, specialOption); 
    return{};
}

/*
 3)
 */
int numberOfAnimals(int dog, int cat  )
{
    ignoreUnused(dog1, cat ); 
    return{};
}

/*
 4)
 */

bool score(float = score1 , float = score2  )
{
    ignoreUnused(score1, score1 ); 
    return{};
}

/*
 5)
 */

bool select(int money=300  , float gold =25.5  )
{
    ignoreUnused(money, gold ); 
    return{};
}

/*
 6)
 */

float calculation( float num3= 55.6 float num4= 43.6)
{
    ignoreUnused(money, gold ); 
    return{};
}

/*
 7)
 */

void printNum ( int num5 =54  float num6 = 44.2)
{
    ignoreUnused(num5, num6 ); 
}
/*
 8)
 */
void printChar (char chr1= 'a' char chr2= 'b')
{
    ignoreUnused(chr1, chr2 ); 
}
/*
 9)
 */

float priceOfLand (float pricePerUnitOfArea= 33.5,float landSize= 42.1)
{
    ignoreUnused(pricePerUnitOfArea, landSize ); 
    return{};
}


/*
 10)
 */

float mileage (float distance =78.3 fuelConsumption = 4.3)
{
    ignoreUnused(distance,fuelConsumption ); 
    return{};
}




/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto count = num(1,2);
    //2)
    auto purchase =cost ( 1, 2,true);
    //3)
    auto animals =numberOfAnimals(dog,cat  );
    //4)
    auto sum = score(score1 ,score2 );
    //5)
    auto whichIsExpensive =select(300  , 25.5  );
    //6)
    auto calaculated =calculation(55.6 ,43.6);
    //7)
    printNum (54 ,44.2);
    //8)
    printChar ('a' , 'b');
    //9)
    auto  autoLand =priceOfLand (33.5,42.1);
    //10)
    auto car =mileage (78.3,4.3);
    
    ignoreUnused(carRented,count,purchasem,animals,sum,whichIsExpensive,calaculated,printNum, printChar,autoLand,car);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
