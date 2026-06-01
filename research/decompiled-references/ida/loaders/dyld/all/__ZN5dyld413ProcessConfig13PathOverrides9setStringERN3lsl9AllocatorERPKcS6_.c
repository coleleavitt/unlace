const char *__fastcall dyld4::ProcessConfig::PathOverrides::setString(
        dyld4::ProcessConfig::PathOverrides *this,
        lsl::Allocator *a2,
        const char **a3,
        const char *__s)
{
  __int64 v7; // x8
  char *v8; // x22
  char *v9; // x0
  const char *result; // x0
  __int64 v11; // [xsp+0h] [xbp-40h] BYREF

  if ( *a3 )
  {
    _platform_strlen(*a3);
    _platform_strlen(__s);
    __chkstk_darwin();
    v8 = (char *)&v11 - v7;
    v9 = strcpy((char *)&v11 - v7, *a3);
    *(_WORD *)&v8[_platform_strlen(v9)] = 58;
    strcat(v8, __s);
    result = (const char *)lsl::Allocator::strdup(a2, v8);
  }
  else
  {
    result = (const char *)lsl::Allocator::strdup(a2, __s);
  }
  *a3 = result;
  return result;
}
