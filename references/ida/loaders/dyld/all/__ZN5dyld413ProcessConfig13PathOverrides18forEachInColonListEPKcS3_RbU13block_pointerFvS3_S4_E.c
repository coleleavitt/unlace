const char *__fastcall dyld4::ProcessConfig::PathOverrides::forEachInColonList(
        const char *__s,
        __int64 a2,
        _BYTE *a3,
        __int64 a4)
{
  const char *v6; // x21
  const char **v7; // x23
  char *v8; // x22
  const char *v9; // x27
  const char *v10; // x28
  _QWORD v12[2]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v13; // [xsp+18h] [xbp-58h] BYREF

  v6 = __s;
  v7 = (const char **)v12;
  v12[0] = __s;
  v12[1] = a2;
  if ( !__s )
  {
    do
    {
LABEL_9:
      if ( ++v7 == (const char **)&v13 )
        return __s;
      v6 = *v7;
    }
    while ( !*v7 );
  }
  _platform_strlen(v6);
  v8 = (char *)&v12[-1] - ((__chkstk_darwin() + 16) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = v6 + 1;
  v10 = v6;
  while ( *(v9 - 1) == 58 )
  {
    _platform_memmove(v8, v6, v10 - v6);
    v10[v8 - v6] = 0;
    __s = (const char *)(*(__int64 (__fastcall **)(__int64, char *, _BYTE *))(a4 + 16))(a4, v8, a3);
    v6 = v9;
    if ( *a3 )
      return __s;
LABEL_7:
    ++v9;
    ++v10;
  }
  if ( *(v9 - 1) )
    goto LABEL_7;
  __s = (const char *)(*(__int64 (__fastcall **)(__int64, const char *, _BYTE *))(a4 + 16))(a4, v6, a3);
  if ( !*a3 )
    goto LABEL_9;
  return __s;
}
