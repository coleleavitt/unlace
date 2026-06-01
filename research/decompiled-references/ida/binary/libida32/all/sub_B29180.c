char __fastcall sub_B29180(char *a1, unsigned __int64 a2)
{
  char result; // al
  char v3; // dl
  char v4; // dl
  char v5; // dl
  int v6; // eax

  if ( a2 == 2 )
  {
    v3 = *a1;
    if ( *a1 == 108 )
    {
      return a1[1] == 105;
    }
    else if ( v3 == 116 )
    {
      result = 0;
      if ( (unsigned __int8)(a1[1] - 100) <= 0xEu )
        return ((1LL << (a1[1] - 100)) & 0x4011) != 0;
    }
    else
    {
      result = 0;
      if ( v3 == 100 )
      {
        v4 = a1[1];
        result = 1;
        if ( v4 != 100 )
          return v4 == 116;
      }
    }
  }
  else
  {
    if ( a2 <= 2 )
    {
      if ( a2 == 1 )
        return *a1 == 112;
      return 0;
    }
    if ( a2 != 5 )
    {
      if ( a2 == 8 )
        return *(_QWORD *)a1 == 0x70756F72676C6F63LL;
      return 0;
    }
    result = 0;
    if ( *a1 == 116 )
    {
      v5 = a1[1];
      switch ( v5 )
      {
        case 'f':
          if ( *((_WORD *)a1 + 1) == 28527 && a1[4] == 116 )
          {
            v6 = 0;
            return v6 == 0;
          }
          goto LABEL_26;
        case 'h':
          if ( *((_WORD *)a1 + 1) == 24933 && a1[4] == 100 )
          {
            v6 = 0;
            return v6 == 0;
          }
          goto LABEL_26;
        case 'b':
          if ( *((_WORD *)a1 + 1) == 25711 && a1[4] == 121 )
          {
            v6 = 0;
            return v6 == 0;
          }
LABEL_26:
          v6 = 1;
          return v6 == 0;
      }
    }
  }
  return result;
}

