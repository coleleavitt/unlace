#include "dwz_common.h"
int main(int argc, char **argv) { struct point q = { argc, (long)argv[0][0], 'c' }; struct box b = { q, q, 3 }; return (int)area(&q, 2) - (int)boxw(&b); }
