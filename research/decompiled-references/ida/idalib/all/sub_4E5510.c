__int64 **__fastcall sub_4E5510(__int64 **a1, const char *a2)
{
  __int64 **v2; // rbx
  const char *v4; // rdi

  v2 = a1;
  if ( (unsigned __int8)qisabspath(a2) )
  {
    if ( !a1 )
      return nullptr;
    if ( strcasecmp((const char *)a1[1], a2) )
    {
      while ( 1 )
      {
        v2 = (__int64 **)*v2;
        if ( !v2 )
          break;
        if ( !strcasecmp((const char *)v2[1], a2) )
          return v2;
      }
      return nullptr;
    }
  }
  else
  {
    if ( !a1 )
      return nullptr;
    while ( 1 )
    {
      v4 = haystack;
      if ( v2[21] )
        v4 = (const char *)v2[20];
      if ( !strcmp(v4, a2) )
        break;
      v2 = (__int64 **)*v2;
      if ( !v2 )
        return nullptr;
    }
  }
  return v2;
}
