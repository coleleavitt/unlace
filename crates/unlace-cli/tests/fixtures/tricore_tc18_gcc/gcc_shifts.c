/* Built with tricore-elf-gcc 13.4.1 (NoMore201/tricore-gcc-toolchain): -mcpu=tc49xx -O2. */
int g_sar(int a) { return a >> 3; }
unsigned g_shr(unsigned a) { return a >> 5; }
int g_shl(int a) { return a << 4; }
unsigned g_shlv(unsigned a, int s) { return a << (s & 31); }
int g_pop(unsigned a) { return __builtin_popcount(a); }
