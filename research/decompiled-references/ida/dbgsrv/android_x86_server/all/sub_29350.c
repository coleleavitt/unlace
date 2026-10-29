/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_29350
// Address: 0x00029350

//----- (00029350) --------------------------------------------------------
bool __cdecl sub_29350(int a1)
{
  int v1; // edi
  int v2; // eax
  _DWORD v4[2]; // [esp+0h] [ebp-25Ch] BYREF
  _DWORD v5[149]; // [esp+8h] [ebp-254h] BYREF

  v5[144] = __readgsdword(0x14u);
  if ( *(_BYTE *)(a1 + 3440) && ptrace(PTRACE_SETREGS, *(_DWORD *)(a1 + 44), 0, a1 + 48) )
    return 0;
  if ( *(_BYTE *)(a1 + 3443) )
  {
    v1 = *(_DWORD *)(a1 + 44);
    if ( dword_13B010 < 0 )
    {
      v4[0] = v5;
      v4[1] = 576;
      v2 = ptrace(PTRACE_SETOPTIONS|PTRACE_POKETEXT, v1, 514, v4);
      dword_13B010 = v2 == 0;
      if ( v2 )
        return 0;
    }
    else if ( dword_13B010 <= 0 )
    {
      return 0;
    }
    if ( ptrace(PTRACE_GETEVENTMSG|PTRACE_POKETEXT, v1, 514, a1 + 3432) )
      return 0;
  }
  return (!*(_BYTE *)(a1 + 3442) || !ptrace(PTRACE_SETFPXREGS, *(_DWORD *)(a1 + 44), 0, a1 + 224))
      && (!*(_BYTE *)(a1 + 3441) || !ptrace(PTRACE_SETFPREGS, *(_DWORD *)(a1 + 44), 0, a1 + 116));
}
// 13B010: using guessed type int dword_13B010;
