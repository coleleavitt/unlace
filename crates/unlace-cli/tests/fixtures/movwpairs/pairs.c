volatile int counter;
int table[4] = {1, 2, 3, 4};
const char msg[] = "hello from movw/movt";
void sink(const char *s);
typedef void (*fp)(void);
void call_ptr(fp f);
void use_str(void) { sink(msg); }
int read_tab(int i) { return table[i]; }
void bump(void) { counter++; }
__attribute__((noinline)) void handler_b(void) { counter = 7; }
void reg(void) { call_ptr(handler_b); }
void sink(const char *s) { (void)s; __asm__ volatile("" ::: "memory"); }
__attribute__((noinline)) void call_ptr(fp f) { f(); }
void reset(void) { use_str(); bump(); reg(); (void)read_tab(2); for (;;) {} }
