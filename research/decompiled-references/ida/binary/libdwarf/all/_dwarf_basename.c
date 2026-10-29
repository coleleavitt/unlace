const char *__fastcall dwarf_basename(const char *a1)
{
  const char *result; // rax
  char v2; // dl
  __int64 v3; // rax
  int v4; // ecx

  result = "null-filepath";
  if ( a1 )
  {
    v2 = *a1;
    if ( *a1 )
    {
      v3 = 0;
      v4 = 0;
      do
      {
        if ( v2 == 47 )
          v4 = v3;
        v2 = a1[++v3];
      }
      while ( v2 );
      result = a1;
      if ( v4 )
        return &a1[v4 + 1];
    }
    else
    {
      return a1;
    }
  }
  return result;
}

