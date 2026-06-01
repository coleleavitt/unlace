bool __fastcall dyld_parse_boot_arg_cstr(char *a1, const char *a2, char *a3, size_t a4)
{
  char *v8; // x0
  char *v9; // x8
  signed __int64 v10; // x0
  char *v11; // x26
  size_t v12; // x22
  char *v13; // x0
  char *v14; // x0
  int v15; // t1
  const char *v16; // x23
  const char *v18; // x0
  const char *v20; // x1
  char v21; // [xsp+0h] [xbp-450h] BYREF
  _BYTE v22[7]; // [xsp+1h] [xbp-44Fh] BYREF

  while ( 1 )
  {
    _platform_memset(&v21, 170, 0x400u);
    v8 = _platform_strchr(a1, 32);
    if ( v8 )
    {
      v9 = v8;
      v10 = v8 - a1;
      if ( v10 < 0 )
        dyld_halt("value not representable as size_t");
      v11 = v9 + 1;
    }
    else
    {
      v10 = _platform_strlen(a1);
      v11 = nullptr;
    }
    v12 = v10 + 1;
    if ( (unsigned __int64)(v10 + 1) > 0x3FF )
      break;
    strlcpy(&v21, a1, v12);
    v13 = _platform_strchr(&v21, 61);
    if ( v13 )
    {
      *v13 = 0;
      v15 = (unsigned __int8)v13[1];
      v14 = v13 + 1;
      if ( v15 )
        v16 = v14;
      else
        v16 = nullptr;
    }
    else
    {
      v16 = nullptr;
    }
    if ( v21 == 45 && v16 == nullptr )
      v18 = v22;
    else
      v18 = &v21;
    if ( !_platform_strcmp(v18, a2) )
    {
      if ( v16 )
        v20 = v16;
      else
        v20 = (const char *)&unk_7E832;
      if ( a3 )
      {
        if ( v20 )
          strlcpy(a3, v20, a4);
      }
      return v12 < 0x400;
    }
    a1 = v11;
    if ( !v11 )
      return 0;
  }
  return v12 < 0x400;
}
