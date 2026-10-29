__int64 **__fastcall sub_4CDC20(__int64 **a1, const char *a2)
{
  __int64 **v2; // rbx
  size_t v4; // r13
  char *v5; // r12
  const char *v6; // r12

  v2 = a1;
  if ( !(unsigned __int8)qisabspath(a2) )
  {
    v4 = strlen(a2);
    if ( !a1 )
      return nullptr;
    while ( 1 )
    {
      if ( v2[21] )
      {
        v6 = (const char *)v2[20];
        if ( !strcmp(v6, a2) )
          return v2;
        if ( strncasecmp(v6, a2, v4) )
          goto LABEL_16;
      }
      else
      {
        if ( !*a2 )
          return v2;
        if ( strncasecmp(haystack, a2, v4) )
          goto LABEL_16;
        v5 = &byte_2CA12E1;
        if ( !v4 )
          goto LABEL_14;
        v6 = (const char *)v2[20];
      }
      v5 = (char *)&v6[v4];
LABEL_14:
      if ( *v5 == 51 && v5[1] == 50 )
        return v2;
LABEL_16:
      v2 = (__int64 **)*v2;
      if ( !v2 )
        return nullptr;
    }
  }
  if ( !a1 )
    return nullptr;
  while ( strcasecmp((const char *)v2[1], a2) )
  {
    v2 = (__int64 **)*v2;
    if ( !v2 )
      return nullptr;
  }
  return v2;
}

