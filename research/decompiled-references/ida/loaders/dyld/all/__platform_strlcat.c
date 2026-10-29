size_t __fastcall _platform_strlcat(const char *a1, char *__s, size_t a3)
{
  size_t v6; // x19
  size_t v7; // x0
  size_t v8; // x20
  size_t v9; // x8
  char *v10; // x0

  v6 = _platform_strlen(__s);
  v7 = _platform_strnlen(a1, a3);
  if ( v7 == a3 )
  {
    v8 = a3;
  }
  else
  {
    v8 = v7;
    v9 = a3 - v7;
    v10 = (char *)&a1[v7];
    if ( v6 >= v9 )
    {
      _platform_memmove(v10, __s, v9 - 1);
      a1[a3 - 1] = 0;
    }
    else
    {
      _platform_memmove(v10, __s, v6 + 1);
    }
  }
  return v8 + v6;
}
