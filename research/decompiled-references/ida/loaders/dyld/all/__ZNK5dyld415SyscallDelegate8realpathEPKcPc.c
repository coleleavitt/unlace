bool __fastcall dyld4::SyscallDelegate::realpath(dyld4::SyscallDelegate *this, dyld3 *a2, char *a3)
{
  const char *v4; // x20
  int v5; // w0
  int v6; // w21
  _BOOL8 v7; // x19
  char *v8; // x0
  int v9; // w0
  int v10; // w21
  int v11; // w22
  char __dst[1024]; // [xsp+8h] [xbp-438h] BYREF

  v4 = (const char *)a2;
  v5 = dyld3::open(a2, nullptr, 0);
  if ( v5 == -1 )
  {
    strlcpy(__dst, v4, 0x400u);
    v8 = strrchr(__dst, 47);
    if ( v8 )
    {
      *v8 = 0;
      v4 += v8 - __dst + 1;
    }
    else
    {
      strcpy(__dst, ".");
    }
    v9 = dyld3::open((dyld3 *)__dst, (const char *)0x100000, 0);
    if ( v9 == -1 )
      return 0;
    v10 = v9;
    v11 = fcntl(v9, 50, a3);
    close(v10);
    if ( v11 )
    {
      return 0;
    }
    else
    {
      strlcat(a3, "/", 0x400u);
      strlcat(a3, v4, 0x400u);
      return 1;
    }
  }
  else
  {
    v6 = v5;
    v7 = fcntl(v5, 50, a3) == 0;
    close(v6);
  }
  return v7;
}
