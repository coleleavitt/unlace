__int64 __fastcall dyld4::ProcessConfig::PathOverrides::getFrameworkPartialPath(
        dyld4::ProcessConfig::PathOverrides *this,
        dyld4::Utils *a2,
        const char *a3)
{
  unsigned __int64 v5; // x0
  bool v6; // cf
  dyld4::Utils *v7; // x21
  __int64 i; // x27
  _BOOL8 v10; // x24
  size_t v11; // x22
  __int64 v12; // x8
  const char *v13; // x23
  const char *v14; // x1
  char *v15; // x0
  char *v16; // x24
  const char *v17; // x26
  const char *v18; // x25
  char v20; // w8
  __int64 v21; // [xsp+0h] [xbp-60h] BYREF

  v5 = dyld4::Utils::strrstr(a2, ".framework/", a3);
  if ( v5 )
    v6 = v5 >= (unsigned __int64)a2;
  else
    v6 = 0;
  if ( !v6 )
    return 0;
  v7 = (dyld4::Utils *)v5;
  for ( i = 0; ; ++i )
  {
    if ( *(_BYTE *)v7 == 47 || v7 == a2 )
    {
      v10 = v7 != a2;
      v11 = i - v10;
      __chkstk_darwin();
      v13 = (char *)&v21 - v12;
      strncpy((char *)&v21 - v12, v14, i - v10);
      v13[i - v10] = 0;
      v15 = strrchr((char *)a2, 47);
      if ( v15 )
      {
        v16 = v15;
        v17 = v15 + 1;
        if ( !_platform_strcmp(v13, v15 + 1) )
          break;
        v18 = *((const char **)this + 13);
        if ( v18 )
        {
          if ( !_platform_strncmp(v13, v17, v11) && !_platform_strcmp(v18, &v16[v11 + 1]) )
            break;
        }
      }
    }
    v7 = (dyld4::Utils *)((char *)v7 - 1);
    if ( v7 < a2 )
      return 0;
  }
  if ( v7 == a2 )
    v20 = 2;
  else
    v20 = 1;
  return (__int64)v7 + (v20 & 1);
}
