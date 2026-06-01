bool __fastcall sub_ECDD80(__int64 a1)
{
  bool result; // al
  unsigned int v2; // ecx

  result = 1;
  if ( *(_BYTE *)(a1 + 240) )
  {
    v2 = *(_DWORD *)(a1 + 64);
    result = 0;
    if ( v2 <= 0x25 )
      return ((1LL << v2) & 0x31E01FFFFCLL) != 0;
  }
  return result;
}
