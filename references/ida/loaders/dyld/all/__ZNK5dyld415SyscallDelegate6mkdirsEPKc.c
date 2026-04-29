bool __fastcall dyld4::SyscallDelegate::mkdirs(dyld4::SyscallDelegate *this, const char *__s)
{
  char *v3; // x19
  char *v4; // x0
  stat *v5; // x2
  char *v6; // x20
  char *v7; // x0
  char *v8; // x21
  char v11[144]; // [xsp+8h] [xbp-B8h] BYREF

  _platform_strlen(__s);
  v3 = &v11[-((__chkstk_darwin() + 16) & 0xFFFFFFFFFFFFFFF0LL) - 8];
  strcpy(v3, __s);
  v4 = strrchr(v3, 47);
  v6 = v4;
  if ( v4 )
  {
    v4[1] = 0;
    if ( (unsigned int)dyld3::stat((dyld3 *)v3, v11, v5) )
    {
      v7 = _platform_strchr(v3 + 1, 47);
      if ( v7 )
      {
        v8 = v7;
        do
        {
          *v8 = 0;
          mkdir(v3, 0x1EDu);
          *v8 = 47;
          v8 = _platform_strchr(v8 + 1, 47);
        }
        while ( v8 );
      }
    }
  }
  return v6 != nullptr;
}
