size_t __fastcall _platform_strlcpy(void *a1, char *__s, size_t a3)
{
  size_t v6; // x0
  size_t v7; // x19
  size_t v8; // x22

  v6 = _platform_strlen(__s);
  v7 = v6;
  if ( v6 >= a3 )
  {
    if ( a3 )
    {
      v8 = a3 - 1;
      _platform_memmove(a1, __s, v8);
      *((_BYTE *)a1 + v8) = 0;
    }
  }
  else
  {
    _platform_memmove(a1, __s, v6 + 1);
  }
  return v7;
}
