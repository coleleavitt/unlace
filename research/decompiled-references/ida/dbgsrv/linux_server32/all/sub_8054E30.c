/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8054E30
// Address: 0x08054E30

//----- (08054E30) --------------------------------------------------------
bool __cdecl sub_8054E30(int a1)
{
  bool result; // al
  int v2; // edi

  if ( *(_BYTE *)(a1 + 3448) && ptrace(PTRACE_SETREGS, *(_DWORD *)(a1 + 52), 0, a1 + 56) )
    return 0;
  if ( *(_BYTE *)(a1 + 3451) )
  {
    v2 = *(_DWORD *)(a1 + 52);
    if ( !(unsigned __int8)sub_8054900(v2) || ptrace(PTRACE_GETEVENTMSG|PTRACE_POKETEXT, v2, 514, a1 + 3440) )
      return 0;
    if ( !*(_BYTE *)(a1 + 3450) )
      goto LABEL_4;
  }
  else if ( !*(_BYTE *)(a1 + 3450) )
  {
    goto LABEL_4;
  }
  if ( ptrace(PTRACE_SETFPXREGS, *(_DWORD *)(a1 + 52), 0, a1 + 232) )
    return 0;
LABEL_4:
  result = 1;
  if ( *(_BYTE *)(a1 + 3449) )
    return ptrace(PTRACE_SETFPREGS, *(_DWORD *)(a1 + 52), 0, a1 + 124) == 0;
  return result;
}
