int __cdecl sysctlbyname(const char *a1, void *a2, size_t *a3, void *a4, size_t a5)
{
  size_t v10; // x0
  int result; // w0
  unsigned __int64 v12; // [xsp+0h] [xbp-80h] BYREF
  __int64 v13; // [xsp+8h] [xbp-78h] BYREF
  _BYTE v14[56]; // [xsp+10h] [xbp-70h] BYREF

  v13 = 0x300000000LL;
  v12 = 56;
  v10 = _platform_strlen(a1);
  result = __sysctl(&v13, 2, v14, &v12, a1, v10);
  if ( (result & 0x80000000) == 0 )
    return __sysctl(v14, v12 >> 2, a2, a3, a4, a5);
  return result;
}
