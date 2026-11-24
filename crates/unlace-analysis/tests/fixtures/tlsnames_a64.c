/* tlsnames on AArch64: local-exec accesses to three __thread variables */
__thread int counter;
__thread long hits = 1;
__thread char buf[64];
void bump(int a0) { counter = a0; hits = hits + 1; buf[3] = (char)a0; }
int get(void) { return counter; }
