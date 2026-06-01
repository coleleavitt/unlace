char **__fastcall sub_10890B0(_DWORD *s2, char *n)
{
  char **v2; // rbx
  char **v3; // r13

  v2 = (char **)&off_2B35E40;
  while ( 1 )
  {
    if ( v2[1] == n && (!n || !memcmp(*v2, s2, (size_t)n)) )
      return v2;
    v3 = v2 + 3;
    if ( v2[4] == n && (!n || !memcmp(v2[3], s2, (size_t)n)) )
      break;
    v3 = v2 + 6;
    if ( v2[7] == n && (!n || !memcmp(v2[6], s2, (size_t)n)) )
      break;
    v3 = v2 + 9;
    if ( v2[10] == n && (!n || !memcmp(v2[9], s2, (size_t)n)) )
      break;
    v2 += 12;
    if ( v2 == &off_2B36140 )
    {
      if ( n != &byte_5 )
        return (char **)&unk_2B36170;
      if ( *s2 != 1852794220 || *((_BYTE *)s2 + 4) != 52 )
      {
        if ( *s2 != 876048999 )
          return (char **)&unk_2B36170;
        v2 = &off_2B36158;
        if ( *((_BYTE *)s2 + 4) != 48 )
          return (char **)&unk_2B36170;
      }
      return v2;
    }
  }
  return v3;
}

