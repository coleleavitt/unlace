bool __fastcall sub_ECDD40(__int64 a1)
{
  bool result; // al
  unsigned int v2; // ecx

  result = 1;
  if ( *(_BYTE *)(a1 + 216) )
  {
    v2 = *(_DWORD *)(a1 + 64);
    result = 0;
    if ( v2 <= 0x25 )
      return ((1LL << v2) & 0x31E01FF9E0LL) != 0;
  }
  return result;
}
