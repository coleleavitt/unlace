/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8056290
// Address: 0x08056290

//----- (08056290) --------------------------------------------------------
bool __cdecl sub_8056290(int a1)
{
  int (__cdecl *v1)(int); // eax
  unsigned int v2; // eax
  unsigned __int8 v3; // dl
  char v4; // al
  bool result; // al
  int v6; // edi

  v1 = *(int (__cdecl **)(int))(*(_DWORD *)a1 + 8);
  if ( v1 == sub_8054810 )
  {
    v2 = *(_DWORD *)(a1 + 48);
    if ( (v2 & 0x3F) == 0 )
      return 0;
    v3 = (v2 & 3) != 0;
    *(_DWORD *)(a1 + 3448) = v3 | ((((v2 & 0xC) != 0) | (((v2 >> 4) & 1 | (8 * (_WORD)v2) & 0x100) << 8)) << 8);
  }
  else
  {
    if ( !(unsigned __int8)v1(a1) )
      return 0;
    v3 = *(_BYTE *)(a1 + 3448);
  }
  if ( v3 && ptrace(PTRACE_GETREGS, *(_DWORD *)(a1 + 52), 0, a1 + 56) )
    return 0;
  if ( !*(_BYTE *)(a1 + 3449) )
  {
    v4 = *(_BYTE *)(a1 + 3450);
    if ( *(_BYTE *)(a1 + 3451) != 1 )
      goto LABEL_10;
    if ( v4 )
      goto LABEL_19;
  }
  if ( ptrace(PTRACE_GETFPREGS, *(_DWORD *)(a1 + 52), 0, a1 + 124) )
    return 0;
  v4 = *(_BYTE *)(a1 + 3450);
LABEL_10:
  if ( v4 )
  {
LABEL_19:
    if ( ptrace(PTRACE_GETFPXREGS, *(_DWORD *)(a1 + 52), 0, a1 + 232) )
      return 0;
  }
  result = 1;
  if ( !*(_BYTE *)(a1 + 3451) )
    return result;
  v6 = *(_DWORD *)(a1 + 52);
  if ( (unsigned __int8)sub_8054900(v6) )
    return ptrace(PTRACE_SETOPTIONS|PTRACE_POKETEXT, v6, 514, a1 + 3440) == 0;
  return 0;
}
