/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1BB74
// Address: 0x0001BB74

//----- (0001BB74) --------------------------------------------------------
int __fastcall sub_1BB74(int a1, int a2, int a3)
{
  int *v6; // r7
  const char *v7; // r0
  int v8; // r0

  if ( *(_BYTE *)(a1 + 1078) )
  {
    if ( ptrace(PTRACE_GETSIGINFO|PTRACE_POKETEXT, a2, 0) )
      goto LABEL_3;
    v8 = ptrace(PTRACE_SETSIGINFO|PTRACE_POKETEXT, a2, 0, 0);
  }
  else
  {
    v8 = ptrace(PTRACE_ATTACH, a2, *(unsigned __int8 *)(a1 + 1078));
  }
  if ( !v8 )
    return sub_1B7A0(a1, a2, a3, 0);
LABEL_3:
  v6 = _errno_location();
  v7 = (const char *)sub_79440(*v6);
  sub_17480(a1, "Attaching to %d thread: %s\n", a2, v7);
  if ( (*v6 & 0xFFFFFFFD) != 1 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(30197);
  }
  return 0;
}
// D6C20: using guessed type char under_debugger;
