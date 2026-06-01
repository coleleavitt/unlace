bool __fastcall sub_F34880(__int64 a1)
{
  unsigned __int8 v1; // cl
  bool result; // al

  v1 = *(_BYTE *)(a1 + 16);
  result = 0;
  if ( v1 <= 0x35u )
    return ((1LL << v1) & 0x3FC01801506000LL) != 0;
  return result;
}

