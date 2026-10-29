char __fastcall sub_B8BED0(__int64 a1)
{
  unsigned __int8 v1; // dl
  char result; // al

  v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)v1 - 26 <= 0x1A )
    return sub_B799A0(a1);
  if ( v1 == 67 )
    return sub_BBE5D0(a1);
  if ( v1 == 47 )
    return *(_BYTE *)(a1 + 80);
  result = 0;
  if ( v1 == 68 )
    return (*(_BYTE *)(a1 + 80) & 2) != 0;
  return result;
}
