__int64 __fastcall sub_3EAA70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx

  v6 = *(unsigned __int16 *)(a1 + 24);
  v7 = *(_DWORD *)(a1 + 28) & 1;
  v8 = v7;
  if ( (unsigned __int16)v6 > 0x50u )
  {
    if ( (unsigned __int16)(v6 - 521) <= 1u )
      return 1;
    if ( !v7 )
      return v8;
LABEL_10:
    v8 = 1;
    if ( *(_BYTE *)(a1 + 41) == 1 )
      LOBYTE(v8) = *(_WORD *)(a1 + 46) != 15;
    return v8;
  }
  if ( (unsigned __int16)v6 <= 0x11u )
  {
    if ( (_WORD)v6 == 4 )
      goto LABEL_5;
    goto LABEL_9;
  }
  a3 = 1LL << ((unsigned __int8)v6 - 18);
  if ( (a3 & 0x3000000F) != 0 )
    return 1;
  v6 = 0x4000000000002020LL;
  if ( (a3 & 0x4000000000002020LL) == 0 )
  {
LABEL_9:
    if ( !v7 )
      return v8;
    goto LABEL_10;
  }
LABEL_5:
  if ( v7 )
    return 1;
  return (unsigned int)is_call_insn(a1, a2, a3, v6, a5, a6) | v7;
}
