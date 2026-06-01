__int64 __fastcall sub_22BE200(_BYTE *s2, char *n, char a3)
{
  char **v5; // rbx
  char **v6; // r13
  char **v7; // rax

  if ( n == byte_9 )
  {
    if ( *(_QWORD *)s2 == 0x762D34362D363878LL && s2[8] == 50
      || *(_QWORD *)s2 == 0x762D34362D363878LL && s2[8] == 51
      || *(_QWORD *)s2 == 0x762D34362D363878LL && s2[8] == 52 )
    {
      return 0;
    }
  }
  else if ( !n )
  {
    v7 = off_2BF7B80;
    while ( 1 )
    {
      v6 = v7;
      if ( !*((_BYTE *)v7 + 49) && !v7[1] && ((*((_BYTE *)v7 + 29) & 2) != 0 || !a3) )
        break;
      v7 += 7;
      if ( v7 == (char **)&unk_2BF97F0 )
        return 0;
    }
    return *((unsigned int *)v6 + 4);
  }
  v5 = off_2BF7B80;
  while ( 1 )
  {
    v6 = v5;
    if ( !*((_BYTE *)v5 + 49) && v5[1] == n && !memcmp(*v5, s2, (size_t)n) && ((*((_BYTE *)v5 + 29) & 2) != 0 || !a3) )
      break;
    v5 += 7;
    if ( &unk_2BF97F0 == (_UNKNOWN *)v5 )
      return 0;
  }
  return *((unsigned int *)v6 + 4);
}
