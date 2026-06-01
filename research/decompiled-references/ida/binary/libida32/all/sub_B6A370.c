bool __fastcall sub_B6A370(__int64 a1)
{
  bool result; // al
  unsigned __int8 v2; // cl

  result = 0;
  v2 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( v2 <= 0x3Eu )
    return ((1LL << v2) & 0x7C0000FC0FFC01FFLL) != 0;
  return result;
}

