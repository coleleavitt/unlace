__int64 __fastcall sub_FF7C60(void *s1, size_t n)
{
  char **v2; // rbx
  const char *v3; // r13
  char **v4; // r12
  char *v5; // r13
  const char *v6; // r13
  char *v7; // r12

  v2 = (char **)&unk_2B54A00;
  while ( 1 )
  {
    v7 = v2[1];
    if ( v7 )
    {
      if ( n == strlen(v2[1]) && (!n || !memcmp(s1, v7, n)) )
        return *(unsigned int *)v2;
      v3 = v2[4];
      v4 = v2 + 3;
      if ( !v3 )
      {
        if ( !n )
          break;
LABEL_21:
        v5 = v2[7];
        v4 = v2 + 6;
        if ( !v5 )
          goto LABEL_13;
        if ( n == strlen(v2[7]) )
        {
LABEL_11:
          if ( !n || !memcmp(s1, v5, n) )
            break;
LABEL_13:
          v6 = v2[10];
          v4 = v2 + 9;
          if ( !v6 )
            goto LABEL_17;
          goto LABEL_14;
        }
        goto LABEL_23;
      }
    }
    else
    {
      if ( !n )
        return *(unsigned int *)v2;
      v3 = v2[4];
      v4 = v2 + 3;
      if ( !v3 )
        goto LABEL_21;
    }
    if ( n == strlen(v3) && (!n || !memcmp(s1, v3, n)) )
      break;
    v5 = v2[7];
    v4 = v2 + 6;
    if ( !v5 )
    {
      if ( !n )
        break;
      goto LABEL_13;
    }
    if ( n == strlen(v2[7]) )
      goto LABEL_11;
LABEL_23:
    v6 = v2[10];
    v4 = v2 + 9;
    if ( !v6 )
    {
      if ( !n )
        break;
      goto LABEL_17;
    }
LABEL_14:
    if ( n == strlen(v6) && (!n || !memcmp(s1, v6, n)) )
      break;
LABEL_17:
    v2 += 12;
    if ( v2 == &off_2B551E0 )
      return 1;
  }
  if ( v4 != &off_2B551E0 )
  {
    v2 = v4;
    return *(unsigned int *)v2;
  }
  return 1;
}
