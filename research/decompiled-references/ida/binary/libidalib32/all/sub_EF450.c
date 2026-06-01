__int64 __fastcall sub_EF450(__int64 a1)
{
  unsigned int v1; // esi

  v1 = *(_DWORD *)(a1 + 24);
  if ( !dbg || v1 == -1 )
    return 0;
  if ( !dword_2515A4 )
    return sub_ECBA0(v1);
  if ( dword_2515A4 >= 0 )
    return 0;
  return sub_D47A0(dword_251408, v1, *(_BYTE *)(a1 + 12), 0);
}

