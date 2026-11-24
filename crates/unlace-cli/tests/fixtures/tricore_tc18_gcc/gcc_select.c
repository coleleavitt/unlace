/* Built with tricore-elf-gcc 13.4.1 (NoMore201/tricore-gcc-toolchain): -mcpu=tc49xx -O2. */
int s_min(int a, int b) { return a < b ? a : b; }
unsigned s_umax(unsigned a, unsigned b) { return a > b ? a : b; }
int s_sel(int c, int a, int b) { return c ? a : b; }
int s_sel2(int c, int a, int b) { return c ? a + 1 : b * 3; }
