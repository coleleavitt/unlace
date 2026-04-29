char *__fastcall dyld4::Utils::strrstr(dyld4::Utils *this, const char *__s, const char *a3)
{
  size_t v5; // x21
  size_t v6; // x0
  size_t v7; // x22
  char *v8; // x23

  v5 = _platform_strlen(__s);
  v6 = _platform_strlen((const char *)this);
  if ( !v6 )
    return nullptr;
  v7 = v6;
  while ( 1 )
  {
    v8 = (char *)this + v7;
    if ( !_platform_strncmp((const char *)this + v7, __s, v5) )
      break;
    if ( !--v7 )
      return nullptr;
  }
  return v8;
}
