/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_25144
// Address: 0x00025144

//----- (00025144) --------------------------------------------------------
void __fastcall __noreturn sub_25144(int a1)
{
  int *v1; // r4
  __pid_t v2; // r0
  const char *v3; // r0

  v1 = (int *)_errno(a1);
  *v1 = 0;
  if ( !ptrace(PTRACE_TRACEME, 0, 0, 0) )
  {
    v2 = getpid();
    kill(v2, 19);
    if ( !fork() )
      sub_25194();
    exit(0);
  }
  v3 = (const char *)winerr(*v1);
  sub_1BBA0((int)"PTRACE_O_TRACEFORK test: Cannot trace created process: %s\n", v3);
  exit(127);
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
