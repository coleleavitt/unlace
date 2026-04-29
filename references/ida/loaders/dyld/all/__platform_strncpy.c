char *__fastcall _platform_strncpy(char *a1, char *__s1, size_t __n)
{
  size_t v6; // x0
  size_t v7; // x22

  v6 = _platform_strnlen(__s1, __n);
  if ( v6 >= __n )
  {
    _platform_memmove(a1, __s1, __n);
  }
  else
  {
    v7 = v6;
    _platform_memmove(a1, __s1, v6);
    _platform_memset(&a1[v7], 0, __n - v7);
  }
  return a1;
}
