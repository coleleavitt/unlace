/* SafeSEH fixture for unlace (PE32). Built without a C runtime: this file supplies the
   load configuration and registers two exception handlers with the .safeseh directive. */
typedef unsigned int u32;

__declspec(noinline) int handler_a(void *rec, void *frame, void *ctx, void *disp) { (void)frame; (void)ctx; (void)disp; return rec != 0; }
__declspec(noinline) int handler_b(void *rec, void *frame, void *ctx, void *disp) { (void)rec; (void)ctx; (void)disp; return frame == 0; }

u32 __security_cookie = 0xbb40e64e;

__asm__(".safeseh _handler_a\n"
        ".safeseh _handler_b\n"
        ".section .rdata,\"dr\"\n"
        ".globl __load_config_used\n"
        ".p2align 2\n"
        "__load_config_used:\n"
        ".long 0x48, 0\n"                        /* Size, TimeDateStamp */
        ".short 0, 0\n"
        ".long 0, 0, 0, 0, 0, 0, 0, 0, 0, 0\n"
        ".short 0, 0\n"
        ".long 0\n"                              /* EditList */
        ".long ___security_cookie\n"
        ".long ___safe_se_handler_table\n"
        ".long ___safe_se_handler_count\n"
        ".text\n");

int mainCRTStartup(void) { return (int)__security_cookie; }
