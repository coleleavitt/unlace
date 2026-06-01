size_t __fastcall dyld4::Utils::concatenatePaths(dyld4::Utils *this, char *a2, const char *a3)
{
  const char *v6; // x1
  char *v7; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( *((_BYTE *)this + _platform_strlen((const char *)this) - 1) == 47 && *a2 == 47 )
  {
    v6 = a2 + 1;
    v7 = (char *)this;
  }
  else
  {
    v7 = (char *)this;
    v6 = a2;
  }
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return strlcat(v7, v6, (size_t)a3);
}
