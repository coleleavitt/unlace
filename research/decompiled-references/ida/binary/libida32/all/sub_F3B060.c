__int64 __fastcall sub_F3B060(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // r8
  int v5; // r8d
  __int64 v6; // rax
  __int64 v7; // rcx

  v3 = *a1;
  if ( (a3 & 1) != 0 )
  {
    v6 = 0;
    goto LABEL_20;
  }
  if ( (a3 & 2) != 0 )
  {
    v6 = 1;
LABEL_20:
    LOBYTE(v5) = (v3 ^ 1) & 1;
LABEL_8:
    while ( 1 )
    {
      v7 = v6 + 1;
      if ( v6 == 3 )
        break;
      if ( (a3 & (1LL << v7)) == 0 )
      {
        v7 = v6 + 2;
        if ( v6 == 2 )
          return 0;
        if ( (a3 & (1LL << v7)) == 0 )
        {
          if ( v6 || (a3 & 8) == 0 )
            return 0;
          return 259;
        }
      }
      v6 = v7;
      if ( v7 == 3 )
        return 259;
      if ( (_BYTE)v7 == 2 && (_BYTE)v5 )
        return 258;
    }
    return 0;
  }
  if ( (a3 & 4) != 0 )
  {
    v5 = (v3 ^ 1) & 1;
    if ( !v5 )
    {
      v6 = 2;
      goto LABEL_8;
    }
    return 258;
  }
  else
  {
    if ( (a3 & 8) == 0 )
      return 0;
    return 259;
  }
}

