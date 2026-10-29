__int64 __fastcall sub_118B80(unsigned int a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v4; // eax
  unsigned int v5; // r8d
  unsigned int v6; // ecx
  __int64 result; // rax

  v4 = a2 - 1;
  _BitScanReverse(&a2, a2);
  _BitScanReverse(&a3, a3);
  _BitScanReverse(&v4, v4);
  v5 = 31 - a4 - (v4 ^ 0x1F);
  v6 = 32 - (a2 ^ 0x1F);
  result = 33 - (a3 ^ 0x1F);
  if ( v6 <= (unsigned int)result )
    result = v6;
  if ( a1 )
  {
    if ( v5 > a1 )
      v5 = a1;
    goto LABEL_5;
  }
  if ( v5 <= 0xA )
  {
LABEL_5:
    if ( (unsigned int)result < v5 )
      result = v5;
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

