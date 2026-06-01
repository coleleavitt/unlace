double __fastcall CoinMpsCardReader::osi_strtod(CoinMpsCardReader *this, char *a2, char **a3)
{
  char v3; // al
  char *v4; // rbx
  double result; // xmm0_8

  if ( *((_BYTE *)this + 1472) )
  {
    v3 = *a2;
    if ( *a2 == 9 || (v4 = a2, v3 == 32) )
    {
      v4 = a2;
      do
      {
        do
          v3 = *++v4;
        while ( *v4 == 32 );
      }
      while ( v3 == 9 );
    }
    if ( v3 == 61 )
    {
      strcpy((char *)this + 1312, v4);
      *a3 = &v4[strlen(v4)];
      return -1.234567e-101;
    }
    else
    {
      result = -1.0e100;
      *a3 = a2;
    }
  }
  else
  {
    *a3 = a2;
    return -1.0e100;
  }
  return result;
}

