const char *__fastcall _platform_strstr(const char *a1, char *__s)
{
  const char *v2; // x20
  const char *v3; // x19
  int v4; // w23
  size_t v5; // x22
  int v6; // w8
  const char *v7; // x21

  v2 = a1;
  v3 = __s + 1;
  v4 = (unsigned __int8)*__s;
  if ( !*__s )
    return a1;
  v5 = _platform_strlen(__s + 1);
  while ( 1 )
  {
    v6 = *(unsigned __int8 *)v2;
    if ( !*v2 )
      break;
    v7 = v2++;
    if ( v6 == v4 && !_platform_strncmp(v2, v3, v5) )
      return v7;
  }
  return nullptr;
}
