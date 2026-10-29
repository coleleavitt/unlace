bool __fastcall sub_22AFAB0(_WORD *s2, char *n, char a3)
{
  char v3; // al
  char **v5; // rbp
  char v7; // al

  if ( n != &byte_9[6] )
  {
    if ( n == &byte_7 )
    {
      if ( *(_DWORD *)s2 != 1701733735 || s2[2] != 26994 || *((_BYTE *)s2 + 6) != 99 )
        goto LABEL_7;
    }
    else if ( n == &byte_9[2] )
    {
      if ( *(_QWORD *)s2 != 0x2D636972656E6567LL || s2[4] != 28527 || *((_BYTE *)s2 + 10) != 111 )
        goto LABEL_7;
    }
    else if ( n != &byte_6 || *(_DWORD *)s2 != 1801678706 || s2[2] != 29797 )
    {
      goto LABEL_7;
    }
    return 1;
  }
  if ( *(_QWORD *)s2 != 0x35342D7365646E61LL
    || *((_DWORD *)s2 + 2) != 1919251245
    || s2[6] != 25961
    || (v3 = 1, *((_BYTE *)s2 + 14) != 115) )
  {
    v3 = 0;
  }
  if ( v3
    || *(_QWORD *)s2 == 0x372D657669666973LL
    && *((_DWORD *)s2 + 2) == 1919251245
    && s2[6] == 25961
    && *((_BYTE *)s2 + 14) == 115 )
  {
    return 1;
  }
LABEL_7:
  v5 = &off_2BF4CA0;
  while ( n != v5[1] || n && memcmp(*v5, s2, (size_t)n) )
  {
    v5 += 8;
    if ( v5 == &off_2BF5820 )
      return 0;
  }
  v7 = 0;
  if ( (unsigned __int64)v5[3] > 3 )
    v7 = *(_DWORD *)v5[2] == 875984498;
  return a3 == v7;
}
