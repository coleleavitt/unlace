/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C9F8
// Address: 0x0001C9F8

//----- (0001C9F8) --------------------------------------------------------
int __fastcall sub_1C9F8(int a1, int a2, int a3)
{
  int v6; // r1
  enum __ptrace_request v7; // r0
  int v8; // r1
  int *v9; // r6
  const char *v10; // r0
  int result; // r0

  v6 = *(unsigned __int8 *)(a1 + 978);
  v7 = PTRACE_ATTACH;
  if ( !v6 || (v8 = ptrace(PTRACE_GETSIGINFO|PTRACE_POKETEXT, a2, 0, 0), v7 = PTRACE_SETSIGINFO|PTRACE_POKETEXT, !v8) )
  {
    v7 = ptrace(v7, a2, 0, 0);
    if ( v7 == PTRACE_TRACEME )
      return sub_1DB90(a1, a2, a3, 0);
  }
  v9 = (int *)_errno(v7);
  v10 = (const char *)winerr(*v9);
  sub_1BC48(a1, "Attaching to %d thread: %s\n", a2, v10);
  result = 0;
  if ( (*v9 | 2) != 3 )
  {
    if ( !under_debugger )
      interr(30197);
    __debugbreak();
  }
  return result;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// E0550: using guessed type char under_debugger;
