__int64 __fastcall sub_1EAAAB0(unsigned int a1)
{
  unsigned __int8 v1; // dl
  unsigned __int16 v2; // ax

  v1 = a1 & 1;
  if ( (a1 & 8) == 0 )
    return (v1 << 24) | ((unsigned __int8)(2 * (((a1 >> 1) & 3) == 2) - 1) << 16) | (((a1 >> 1) & 3) << 8) & 0x300;
  LOBYTE(v2) = 1;
  HIBYTE(v2) = (a1 >> 1) & 3;
  return (v1 << 24) | (a1 << 12) & 0x1F0000 | v2;
}
