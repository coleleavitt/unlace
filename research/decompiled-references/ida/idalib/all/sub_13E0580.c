char __fastcall sub_13E0580(__int64 a1, char *a2, unsigned __int64 a3)
{
  unsigned __int8 v3; // al
  char result; // al
  char v5; // cl

  v3 = *(_BYTE *)(a1 + 1);
  if ( (v3 & 0x10) == 0 || !a3 )
    return 0;
  v5 = *a2;
  if ( *a2 == 95 && (a3 <= 1 || *(_WORD *)a2 != 24415) )
    return 1;
  if ( (v3 & 0x20) == 0 )
    return 0;
  if ( a3 != 1 )
  {
    if ( a3 == 3 )
    {
      if ( *(_WORD *)a2 == 26989 && a2[2] == 110 )
        return 1;
    }
    else if ( a3 == 2
           && (*(_WORD *)a2 == 29549
            || *(_WORD *)a2 == 29557
            || *(_WORD *)a2 == 29550
            || *(_WORD *)a2 == 27753
            || *(_WORD *)a2 == 26217) )
    {
      return 1;
    }
    return 0;
  }
  if ( v5 == 104 || v5 == 115 || *a2 == 105 )
    return 1;
  result = v3 >> 7;
  if ( v5 != 100 && v5 != 121 )
    return 0;
  return result;
}
