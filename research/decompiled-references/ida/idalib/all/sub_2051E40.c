bool __fastcall sub_2051E40(__int64 a1)
{
  unsigned __int8 v1; // dl
  bool result; // al
  unsigned int v3; // ecx

  v1 = *(_BYTE *)(a1 + 8);
  result = 1;
  if ( v1 > 3u )
  {
    result = 0;
    if ( v1 == 12 )
    {
      v3 = (*(_DWORD *)(a1 + 8) >> 8) - 8;
      if ( v3 <= 0x38 )
        return ((1LL << v3) & 0x100000001000101LL) != 0;
    }
  }
  return result;
}
