/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48A30
// Address: 0x0000000000048A30

//----- (0000000000048A30) ----------------------------------------------------
void __fastcall __noreturn sub_48A30(__int64 a1)
{
  int *v1; // rbx
  __pid_t v2; // eax
  char *v3; // rax

  v1 = (int *)__errno(a1);
  *v1 = 0;
  if ( !ptrace(PTRACE_TRACEME, 0, 0, 0) )
  {
    v2 = getpid();
    kill(v2, 19);
    if ( !fork() )
      sub_48AA0();
    _exit(0);
  }
  v3 = winerr(*v1);
  sub_390A0((int)"PTRACE_O_TRACEFORK test: Cannot trace created process: %s\n", v3);
  _exit(127);
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
