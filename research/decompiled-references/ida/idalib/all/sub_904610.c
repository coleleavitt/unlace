__int64 __fastcall sub_904610(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v4; // r8d
  unsigned int v5; // ecx
  __int64 result; // rax

  v3 = a2 - 1;
  _BitScanReverse(&a2, a2);
  _BitScanReverse(&a3, a3);
  _BitScanReverse(&v3, v3);
  v4 = 29 - (v3 ^ 0x1F);
  v5 = 32 - (a2 ^ 0x1F);
  result = 33 - (a3 ^ 0x1F);
  if ( v5 <= (unsigned int)result )
    result = v5;
  if ( a1 )
  {
    if ( v4 > a1 )
      v4 = a1;
    goto LABEL_5;
  }
  if ( v4 <= 0xA )
  {
LABEL_5:
    if ( (unsigned int)result < v4 )
      result = v4;
    goto LABEL_7;
  }
  if ( (unsigned int)result <= 0xB )
    return 11;
LABEL_7:
  if ( (unsigned int)result > 0xC )
    result = 12;
  if ( (unsigned int)result < 5 )
    return 5;
  return result;
}
