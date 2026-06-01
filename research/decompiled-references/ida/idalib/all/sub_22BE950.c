bool __fastcall sub_22BE950(_QWORD *s2, char *n)
{
  char **v2; // rbx
  void *v3; // r13
  bool result; // al
  int v5; // eax

  v2 = off_2BF7B80;
  do
  {
    if ( v2[1] == n && (!n || !memcmp(*v2, s2, (size_t)n)) )
      return v2 != (char **)&unk_2BF97F0;
    if ( v2[8] == n )
    {
      v3 = v2 + 7;
      if ( !n || !memcmp(v2[7], s2, (size_t)n) )
        return v3 != &unk_2BF97F0;
    }
    if ( v2[15] == n )
    {
      v3 = v2 + 14;
      if ( !n || !memcmp(v2[14], s2, (size_t)n) )
        return v3 != &unk_2BF97F0;
    }
    if ( v2[22] == n )
    {
      v3 = v2 + 21;
      if ( !n || !memcmp(v2[21], s2, (size_t)n) )
        return v3 != &unk_2BF97F0;
    }
    v2 += 28;
  }
  while ( v2 != &off_2BF9780 );
  if ( n == byte_9 )
  {
    if ( *s2 == 0x762D34362D363878LL && *((_BYTE *)s2 + 8) == 52 )
    {
      v5 = 0;
      return v5 == 0;
    }
LABEL_21:
    v5 = 1;
    return v5 == 0;
  }
  result = 0;
  if ( n == &byte_5 )
  {
    if ( *(_DWORD *)s2 == 1685022055 && *((_BYTE *)s2 + 4) == 101 )
    {
      v5 = 0;
      return v5 == 0;
    }
    goto LABEL_21;
  }
  return result;
}
