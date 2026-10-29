/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47740
// Address: 0x0000000000047740

//----- (0000000000047740) ----------------------------------------------------
void __fastcall __noreturn sub_47740(__int64 a1)
{
  int *v1; // x19
  __pid_t v2; // w0
  const char *v3; // x0

  v1 = (int *)__errno(a1);
  *v1 = 0;
  if ( !ptrace(PTRACE_TRACEME, 0, 0, 0) )
  {
    v2 = getpid();
    kill(v2, 19);
    if ( !fork() )
      sub_477A8();
    _exit(0);
  }
  v3 = (const char *)winerr(*v1);
  sub_39FA0((__int64)"PTRACE_O_TRACEFORK test: Cannot trace created process: %s\n", v3);
  _exit(127);
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
