#include "dwz_common.h"
int main(int argc, char **argv) { struct box b = { { argc, 2, 'a' }, { 5, 6, 'b' }, argc }; return (int)area(&b.lo, argc) + (int)boxw(&b); }
