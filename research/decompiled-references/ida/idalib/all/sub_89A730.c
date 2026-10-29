__int64 __fastcall sub_89A730(__int64 a1, int a2, unsigned __int64 a3, int *a4, int a5)
{
  unsigned __int64 v6; // r9
  unsigned __int8 v7; // di

  v6 = a1 - 1;
  v7 = *(_BYTE *)(a1 - 1);
  if ( a2 == 2 )
  {
    if ( v7 == 10 )
    {
      if ( a3 >= v6 )
        goto LABEL_8;
      goto LABEL_7;
    }
    if ( v7 != 13 )
      return 0;
  }
  else
  {
    if ( v7 > 0xDu )
    {
      if ( v7 == 0x85 )
      {
        *a4 = 1 - ((a5 == 0) - 1);
        return 1;
      }
      return 0;
    }
    if ( v7 <= 0xAu )
    {
      if ( v7 == 10 )
      {
        a2 = 1;
        if ( a3 >= v6 )
          goto LABEL_9;
        a2 = 2;
LABEL_7:
        if ( *(_BYTE *)(a1 - 2) != 13 )
LABEL_8:
          a2 = 1;
LABEL_9:
        *a4 = a2;
        return 1;
      }
      return 0;
    }
  }
  *a4 = 1;
  return 1;
}
