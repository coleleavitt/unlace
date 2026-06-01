__int64 __fastcall sub_21A2B80(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx

  if ( a2 - 105 <= 0x16 )
  {
    v2 = 255;
    if ( ((1LL << ((unsigned __int8)a2 - 105)) & 0x7C00C1) != 0 )
      return a2;
    return v2;
  }
  v2 = 255;
  if ( a2 - 99 > 1 )
    return v2;
  sub_21A2AC0((char **)(a1 + 8), *(char **)(a1 + 16));
  return 255;
}
