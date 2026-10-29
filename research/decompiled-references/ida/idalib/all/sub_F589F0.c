__int64 __fastcall sub_F589F0(__int64 a1)
{
  char v1; // al
  __int16 v2; // ax

  v1 = *(_BYTE *)(a1 + 16);
  if ( v1 != 24 && (v1 & 0xFD) != 0x14 )
    return 0;
  v2 = *(_WORD *)(a1 + 18) >> 3;
  if ( (unsigned __int8)v2 <= 4u )
    return 1;
  if ( (unsigned __int8)v2 > 6u )
    BUG();
  return 0;
}
