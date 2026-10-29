/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_29200
// Address: 0x00029200

//----- (00029200) --------------------------------------------------------
char __cdecl sub_29200(int a1)
{
  char v1; // al
  int v2; // edi
  int v3; // ecx
  _DWORD v5[2]; // [esp+0h] [ebp-25Ch] BYREF
  _DWORD v6[149]; // [esp+8h] [ebp-254h] BYREF

  v6[144] = __readgsdword(0x14u);
  if ( !(*(unsigned __int8 (__cdecl **)(int))(*(_DWORD *)a1 + 8))(a1)
    || *(_BYTE *)(a1 + 3440) && ptrace(PTRACE_GETREGS, *(_DWORD *)(a1 + 44), 0, a1 + 48) )
  {
    return 0;
  }
  if ( *(_BYTE *)(a1 + 3441) || (v1 = *(_BYTE *)(a1 + 3442)) == 0 && *(_BYTE *)(a1 + 3443) )
  {
    if ( ptrace(PTRACE_GETFPREGS, *(_DWORD *)(a1 + 44), 0, a1 + 116) )
      return 0;
    v1 = *(_BYTE *)(a1 + 3442);
  }
  if ( !v1 || !ptrace(PTRACE_GETFPXREGS, *(_DWORD *)(a1 + 44), 0, a1 + 224) )
  {
    if ( !*(_BYTE *)(a1 + 3443) )
      return 1;
    v2 = *(_DWORD *)(a1 + 44);
    v3 = dword_13B010;
    if ( dword_13B010 < 0 )
    {
      v5[0] = v6;
      v5[1] = 576;
      v3 = ptrace(PTRACE_SETOPTIONS|PTRACE_POKETEXT, v2, 514, v5) == 0;
      dword_13B010 = v3;
    }
    if ( v3 > 0 && !ptrace(PTRACE_SETOPTIONS|PTRACE_POKETEXT, v2, 514, a1 + 3432) )
      return 1;
  }
  return 0;
}
// 13B010: using guessed type int dword_13B010;
