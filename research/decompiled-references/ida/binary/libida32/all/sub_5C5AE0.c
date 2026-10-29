__int64 __fastcall sub_5C5AE0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ecx
  int v4; // eax

  v2 = *(_DWORD *)(a1 + 208);
  if ( v2 > 7 )
    return 0;
  if ( ((1LL << v2) & 0xCA) == 0 )
  {
    if ( ((1LL << v2) & 0x34) != 0 )
      return set_qerrno(62, a2);
    return 0;
  }
  v4 = *(_DWORD *)(a1 + 728);
  if ( (v4 & 1) != 0 )
    return 0;
  if ( !unk_2C57908 )
    return set_qerrno(84, a2);
  *(_DWORD *)(a1 + 728) = v4 | 1;
  return 0;
}

