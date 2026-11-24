/* Control Flow Guard and delay-load fixture for unlace. Built without a C runtime:
   this file supplies the load configuration, the guard stubs and the delay-load helper. */
typedef unsigned long long u64;

extern int __declspec(dllimport) dl_add(int, int);
extern int __declspec(dllimport) dl_mul(int, int);
extern int __declspec(dllimport) plain_sub(int, int);

static void guard_check_nop(void *target) { (void)target; }
__attribute__((naked)) static void guard_dispatch_nop(void) { __asm__("jmp *%rax"); }

void *__guard_check_icall_fptr = (void *)guard_check_nop;
void *__guard_dispatch_icall_fptr = (void *)guard_dispatch_nop;
u64 __security_cookie = 0x2b992ddfa232ull;

/* IMAGE_LOAD_CONFIG_DIRECTORY64, laid out field by field. The linker defines the __guard_* tables. */
__asm__(".section .rdata,\"dr\"\n"
        ".globl _load_config_used\n"
        ".p2align 3\n"
        "_load_config_used:\n"
        ".long 0x118, 0\n"                       /* Size, TimeDateStamp */
        ".short 0, 0\n"
        ".long 0, 0, 0\n"
        ".quad 0, 0, 0, 0, 0, 0\n"
        ".long 0\n.short 0, 0\n"
        ".quad 0\n"                              /* EditList */
        ".quad __security_cookie\n"
        ".quad 0, 0\n"                           /* SEHandlerTable, Count */
        ".quad __guard_check_icall_fptr\n"
        ".quad __guard_dispatch_icall_fptr\n"
        ".quad __guard_fids_table\n"
        ".quad __guard_fids_count\n"
        ".long __guard_flags\n"
        ".short 0, 0\n.long 0, 0\n"              /* CodeIntegrity */
        ".quad __guard_iat_table, __guard_iat_count\n"
        ".quad __guard_longjmp_table, __guard_longjmp_count\n"
        ".quad 0, 0, 0, 0\n"
        ".long 0\n.short 0, 0\n"
        ".quad 0\n.long 0, 0\n"
        ".quad 0, 0\n"                           /* Enclave, VolatileMetadata */
        ".quad __guard_eh_cont_table, __guard_eh_cont_count\n"
        ".text\n");

/* The delay-load helper: a real one resolves the slot through LoadLibrary/GetProcAddress. */
void *__delayLoadHelper2(const void *desc, void **slot) { (void)desc; return *slot; }

typedef int (*binop)(int, int);

__declspec(noinline) static int op_add(int a, int b) { return a + b; }
__declspec(noinline) static int op_xor(int a, int b) { return a ^ b; }
__declspec(noinline) static int op_mix(int a, int b) { return a * 3 - b; }
__declspec(noinline) static int op_shl(int a, int b) { return a << (b & 7); }

static const binop ops[3] = {op_add, op_xor, op_mix};

__declspec(noinline) int apply(binop f, int a, int b) { return f(a, b) * 2; }

__declspec(noinline) int run(int sel, int a, int b) { return ops[sel % 3](a, b) + 1; }

int mainCRTStartup(void) {
  volatile int sel = 2;
  return apply(op_shl, 1, 2) + run(sel, 3, 4) + dl_add(5, 6) + dl_mul(7, 8) + plain_sub(9, 1);
}
