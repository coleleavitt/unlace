char __fastcall sub_798470(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // dl
  char result; // al

  v2 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)v2 - 38 <= 6 )
    return sub_77C7A0(a1);
  if ( v2 == 65 )
    return sub_7D53F0(a1, a2);
  if ( v2 == 45 )
    return *(_BYTE *)(a1 + 80);
  result = 0;
  if ( v2 == 66 )
    return (*(_BYTE *)(a1 + 80) & 2) != 0;
  return result;
}

