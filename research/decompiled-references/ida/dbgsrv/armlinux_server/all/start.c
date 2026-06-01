/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: start
// Address: 0x0000000000406FF0

//----- (0000000000406FF0) ----------------------------------------------------
void __fastcall __noreturn start(
        void (*rtld_fini)(),
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int argc,
        char *ubp_av)
{
  __libc_start_main((int (*)(int, char **, char **))main, argc, &ubp_av, (void (*)())init, fini, rtld_fini, &argc);
  abort();
}
