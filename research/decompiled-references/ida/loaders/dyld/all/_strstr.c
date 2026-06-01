// attributes: thunk
char *__cdecl strstr(char *__s1, const char *__s2)
{
  return (char *)_platform_strstr(__s1, (char *)__s2);
}
