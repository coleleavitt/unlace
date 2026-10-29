bool __fastcall dyld4::Loader::expandAndNormalizeAtExecutablePath(
        dyld4::Loader *this,
        const char *__s1,
        char *a3,
        char *a4)
{
  int v8; // w8
  const char *v9; // x21
  int v10; // t1
  char *v12; // x0
  char *v13; // x20
  const char *v14; // x8
  const char *v15; // x23
  char *v16; // x22
  unsigned __int64 v17; // x9

  if ( _platform_strncmp(__s1, "@executable_path", 0x10u) )
    return 0;
  v10 = *((unsigned __int8 *)__s1 + 16);
  v9 = __s1 + 16;
  v8 = v10;
  if ( v10 != 47 && v8 != 0 )
    return 0;
  strlcpy(a3, (const char *)this, 0x400u);
  v12 = strrchr(a3, 47);
  v13 = v12;
  if ( v12 )
  {
    if ( *v9 == 47 )
    {
      v14 = v12;
      do
      {
        v15 = v9;
        v16 = (char *)v14;
        if ( _platform_strncmp(v9, "/..", 3u) )
          break;
        v17 = (unsigned __int64)(v16 - 1);
        do
        {
          v14 = (const char *)v17;
          if ( v17 <= (unsigned __int64)a3 )
            break;
          --v17;
        }
        while ( *v14 != 47 );
        v9 += 3;
      }
      while ( v14 != a3 );
    }
    else
    {
      v16 = v12 + 1;
      v15 = v9;
    }
    strcpy(v16, v15);
  }
  return v13 != nullptr;
}
