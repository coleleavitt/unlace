bool __fastcall sub_F5E2A0(__int64 a1)
{
  bool result; // al
  unsigned __int16 v2; // cx

  result = 0;
  v2 = *(_WORD *)(a1 + 18) >> 3;
  if ( v2 <= 0x29u )
    return ((1LL << v2) & 0x23800000000LL) != 0;
  return result;
}
