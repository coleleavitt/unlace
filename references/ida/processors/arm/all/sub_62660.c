__int64 __fastcall sub_62660(__int64 a1, __int16 a2, __int16 a3, int a4)
{
  *(_BYTE *)(a1 + 1) = 1;
  if ( a4 )
  {
    *(_BYTE *)(a1 + 5) = 4;
    *(_WORD *)(a1 + 6) = (a2 | (16 * a3)) + 61;
    return 4;
  }
  else
  {
    *(_BYTE *)(a1 + 5) = 3;
    *(_WORD *)(a1 + 6) = (a3 | (2 * a2)) + 93;
    return 3;
  }
}
