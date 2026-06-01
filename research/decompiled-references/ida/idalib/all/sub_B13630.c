__int64 __fastcall sub_B13630(__int64 a1, __int64 a2, char *a3)
{
  char v4; // al

  if ( a2 != 3 )
  {
    if ( a2 == 7 )
    {
      if ( *(_DWORD *)a1 == 1718960707 && *(_WORD *)(a1 + 4) == 25958 )
      {
        v4 = 2;
        if ( *(_BYTE *)(a1 + 6) == 114 )
          goto LABEL_10;
      }
      if ( *(_DWORD *)a1 == 1886216531 && *(_WORD *)(a1 + 4) == 25964 )
      {
        v4 = 3;
        if ( *(_BYTE *)(a1 + 6) == 114 )
          goto LABEL_10;
      }
    }
    return 0;
  }
  if ( *(_WORD *)a1 != 21075 || (v4 = 0, *(_BYTE *)(a1 + 2) != 86) )
  {
    if ( *(_WORD *)a1 != 16725 )
      return 0;
    v4 = 1;
    if ( *(_BYTE *)(a1 + 2) != 86 )
      return 0;
  }
LABEL_10:
  *a3 = v4;
  return 1;
}
