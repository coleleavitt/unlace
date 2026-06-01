/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2B8A0
// Address: 0x0002B8A0

//----- (0002B8A0) --------------------------------------------------------
void __fastcall __noreturn sub_2B8A0(int a1)
{
  int *v1; // esi
  __pid_t v2; // eax

  v1 = (int *)__errno(a1);
  *v1 = 0;
  if ( !ptrace(PTRACE_TRACEME, 0, 0, 0) )
  {
    v2 = getpid();
    kill(v2, 19);
    if ( !fork() )
      sub_2B930();
    _exit(0);
  }
  winerr(*v1);
  sub_1C900();
  _exit(127);
}
// 17A90: using guessed type int __fastcall __errno(_DWORD);
