/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1DE40
// Address: 0x0001DE40

//----- (0001DE40) --------------------------------------------------------
char __cdecl sub_1DE40(int a1, int a2, int a3)
{
  int v3; // ecx
  int v4; // eax
  int *v5; // esi
  void *v6; // eax

  if ( *(_BYTE *)(a1 + 634) )
  {
    if ( ptrace(PTRACE_GETSIGINFO|PTRACE_POKETEXT, a2, 0, 0) )
      goto LABEL_6;
    v4 = ptrace(PTRACE_SETSIGINFO|PTRACE_POKETEXT, a2, 0, 0);
  }
  else
  {
    v4 = ptrace(PTRACE_ATTACH, a2, 0, 0);
  }
  if ( !v4 )
    return sub_1F5C0(a1, a2, a3, 0);
LABEL_6:
  v5 = (int *)__errno(v3);
  v6 = winerr(*v5);
  sub_1C9D0(a1, "Attaching to %d thread: %s\n", a2, v6);
  if ( (*v5 | 2) != 3 )
  {
    if ( !(_BYTE)under_debugger )
      interr(30197);
    BUG();
  }
  return 0;
}
// 1DE9B: variable 'v3' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 13E34C: using guessed type int under_debugger;
