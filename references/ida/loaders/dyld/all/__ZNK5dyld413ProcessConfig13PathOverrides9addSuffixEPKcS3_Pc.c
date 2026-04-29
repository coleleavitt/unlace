char *__fastcall dyld4::ProcessConfig::PathOverrides::addSuffix(
        dyld4::ProcessConfig::PathOverrides *this,
        const char *a2,
        const char *a3,
        char *__dst)
{
  char *v7; // x0
  char *v8; // x0
  char *v9; // x0
  char *v10; // x22
  char *v11; // x0
  const char *v12; // x1
  __int64 _28; // [xsp+28h] [xbp+8h]

  strcpy(__dst, a2);
  v7 = strrchr(__dst, 47);
  if ( v7 )
    v8 = v7 + 1;
  else
    v8 = __dst;
  v9 = strrchr(v8, 46);
  if ( v9 )
  {
    v10 = v9;
    strcpy(v9, a3);
    v11 = &v10[_platform_strlen(a3)];
    v12 = &a2[v10 - __dst];
  }
  else
  {
    v11 = __dst;
    v12 = a3;
  }
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return strcat(v11, v12);
}
