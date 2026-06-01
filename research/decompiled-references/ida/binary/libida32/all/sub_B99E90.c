bool __fastcall sub_B99E90(__int64 a1)
{
  bool result; // al
  char v2; // dl

  result = 1;
  v2 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( v2 != 70 )
    return v2 == 74;
  return result;
}

