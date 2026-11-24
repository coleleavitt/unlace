// Fixture for loader/unlace_machodataincode.rs: a dense switch whose jump table
// clang places inside __text and records in LC_DATA_IN_CODE.
//   clang -O2 -target x86_64-apple-macos12 -c macho_dataincode.c -o macho_dataincode_x86_64.o
//   clang -O2 -target armv7-apple-ios9 -mthumb -c macho_dataincode.c -o macho_dataincode_armv7.o
int g(int);
int sw(int x)
{
    switch (x) {
    case 0: return g(1);
    case 1: return g(7);
    case 2: return g(3) + 1;
    case 3: return g(9) * 2;
    case 4: return g(11);
    case 5: return g(2) - 3;
    case 6: return g(5);
    default: return 0;
    }
}
