bool __fastcall dyld4::nameMatch(dyld4 *this, const char *a2, const char *a3)
{
  const char *v4; // x20
  char *v5; // x0
  size_t v6; // x22
  size_t v7; // x0
  size_t v8; // x21

  v4 = (const char *)this;
  v5 = strrchr((char *)this, 47);
  if ( v5 )
    v4 = v5 + 1;
  if ( !_platform_strcmp(v4, a2) )
    return 1;
  v6 = _platform_strlen(v4);
  v7 = _platform_strlen(a2);
  if ( v6 < v7 + 9 )
    return 0;
  v8 = v7;
  return !_platform_strncmp(v4, "lib", 3u)
      && !_platform_strcmp(&v4[v6 - 6], ".dylib")
      && !_platform_strncmp(v4 + 3, a2, v8)
      && v4[v8 + 3] == 46;
}
