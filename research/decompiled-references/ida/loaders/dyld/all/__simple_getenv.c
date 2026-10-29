const char *__fastcall _simple_getenv(const char **a1, char *__s)
{
  size_t v4; // x0
  size_t v5; // x21
  const char *result; // x0
  const char *v7; // x8
  size_t v8; // x9
  const char *v9; // x10
  char *v10; // x11
  const char *v11; // t1

  v4 = _platform_strlen(__s);
  if ( !a1 )
    return nullptr;
  v5 = v4;
  result = *a1;
  if ( !*a1 )
    return result;
  while ( 1 )
  {
    if ( _platform_strlen(result) >= v5 )
    {
      v7 = *a1;
      if ( v5 )
      {
        v8 = v5;
        v9 = *a1;
        v10 = __s;
        while ( *(unsigned __int8 *)v9 == (unsigned __int8)*v10 )
        {
          ++v10;
          ++v9;
          if ( !--v8 )
            goto LABEL_8;
        }
        goto LABEL_9;
      }
LABEL_8:
      if ( v7[v5] == 61 )
        return &v7[v5 + 1];
    }
LABEL_9:
    v11 = a1[1];
    ++a1;
    result = v11;
    if ( !v11 )
      return result;
  }
}
