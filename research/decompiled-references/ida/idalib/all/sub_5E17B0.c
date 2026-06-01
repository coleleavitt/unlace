__int64 __fastcall sub_5E17B0(__int64 a1)
{
  unsigned int v1; // ecx
  int v3; // eax

  v1 = *(_DWORD *)(a1 + 216);
  if ( v1 > 7 )
    return 0;
  if ( ((1LL << v1) & 0xCA) == 0 )
  {
    if ( ((1LL << v1) & 0x34) != 0 )
      return set_qerrno(62);
    return 0;
  }
  v3 = *(_DWORD *)(a1 + 744);
  if ( (v3 & 1) != 0 )
    return 0;
  if ( !unk_2C81928 )
    return set_qerrno(84);
  *(_DWORD *)(a1 + 744) = v3 | 1;
  return 0;
}
