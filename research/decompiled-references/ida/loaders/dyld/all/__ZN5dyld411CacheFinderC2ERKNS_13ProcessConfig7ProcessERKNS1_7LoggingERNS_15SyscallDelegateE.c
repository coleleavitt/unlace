dyld4::CacheFinder *__fastcall dyld4::CacheFinder::CacheFinder(
        dyld4::CacheFinder *this,
        const dyld4::ProcessConfig::Process *a2,
        const dyld4::ProcessConfig::Logging *a3,
        dyld4::SyscallDelegate *a4)
{
  char *v7; // x22
  dyld3 *v8; // x0
  int v9; // w0
  int v10; // w9
  int v11; // w9
  __int64 v12; // x0
  const char *v13; // x1
  int v14; // w22
  const char *v15; // x1
  char *v16; // x0
  int v17; // w1
  int v18; // w8
  __int64 v19; // x8
  char *v20; // x1
  __int64 v22; // [xsp+0h] [xbp-50h]
  _DWORD v23[2]; // [xsp+8h] [xbp-48h] BYREF
  __int128 v24; // [xsp+10h] [xbp-40h]
  __int64 v25; // [xsp+20h] [xbp-30h]
  int v26; // [xsp+28h] [xbp-28h]
  int v27; // [xsp+2Ch] [xbp-24h]

  *(_DWORD *)this = -1;
  *((_QWORD *)this + 1) = a4;
  *((_DWORD *)this + 4) = 4;
  v7 = (char *)this + 16;
  *(_QWORD *)((char *)this + 20) = -1;
  *(_QWORD *)((char *)this + 28) = -1;
  *(_QWORD *)((char *)this + 36) = -1;
  *((_DWORD *)this + 11) = -1;
  *((_BYTE *)this + 48) = 0;
  *((_DWORD *)this + 13) = -1;
  v8 = (dyld3 *)_simple_getenv(*((_QWORD *)a2 + 13), "DYLD_SHARED_CACHE_DIR");
  if ( v8 )
  {
    v9 = dyld4::SyscallDelegate::open(*((dyld4::SyscallDelegate **)this + 1), v8, nullptr, 0);
    *(_DWORD *)this = v9;
    if ( v9 == -1 )
      return this;
  }
  if ( (*((_BYTE *)a2 + 128) & 8) != 0 )
    goto LABEL_31;
  v10 = *((_DWORD *)a2 + 22);
  v23[0] = 1;
  v23[1] = v10;
  v24 = *((_OWORD *)a2 + 6);
  v25 = *((_QWORD *)a2 + 14);
  v11 = *((_DWORD *)a2 + 15);
  v26 = -1;
  v27 = v11;
  v12 = ignite(v23, v7);
  if ( (_DWORD)v12 )
  {
    v14 = v12;
    if ( *((_DWORD *)a2 + 36) == 1 )
    {
      dyld4::console((dyld4 *)"ignite() returned %d\n", v13, v12);
      if ( v14 <= 84 )
      {
        if ( v14 == 8 )
        {
          v16 = "ignition disabled\n";
        }
        else
        {
          if ( v14 != 19 )
            goto LABEL_23;
          v16 = "no shared cache available\n";
        }
        goto LABEL_22;
      }
      switch ( v14 )
      {
        case 'Y':
          v16 = "ignition partially disabled\n";
LABEL_22:
          dyld4::console((dyld4 *)v16, v15, v22);
          break;
        case 'U':
          dyld4::halt((dyld4 *)"no shared cache in cryptex", v15);
        case 'Z':
          dyld4::halt((dyld4 *)"ignition failed", v15);
      }
    }
    else if ( (_DWORD)v12 == 85 && *((_BYTE *)a3 + 1) )
    {
      dyld4::console((dyld4 *)"ignite() returned %d\n", v13, 85);
    }
  }
  else
  {
    v17 = *((_DWORD *)this + 6);
    if ( (v17 & 0x80000000) == 0 )
    {
      if ( *(_DWORD *)this == -1 )
      {
        *(_DWORD *)this = v17;
        *((_BYTE *)this + 48) = 1;
      }
      else
      {
        dyld4::SyscallDelegate::close(*((dyld4::SyscallDelegate **)this + 1), v17);
      }
    }
    v18 = *((_DWORD *)this + 8);
    if ( (v18 & 0x80000000) == 0 )
      *((_DWORD *)this + 13) = v18;
  }
LABEL_23:
  if ( *((_BYTE *)this + 48) )
  {
    if ( *((_DWORD *)a2 + 15) == 10 )
      v19 = (*((_QWORD *)a2 + 16) >> 5) & 1LL;
    else
      v19 = *((_QWORD *)a2 + 16) & 0x10LL;
    if ( !v19 )
      return this;
    if ( *(_DWORD *)this != -1 )
      dyld4::SyscallDelegate::close(*((dyld4::SyscallDelegate **)this + 1), *(_DWORD *)this);
    *(_DWORD *)this = -1;
    *((_BYTE *)this + 48) = 0;
  }
LABEL_31:
  if ( *(_DWORD *)this == -1 )
  {
    if ( *((_DWORD *)a2 + 15) == 10 )
      v20 = "/System/DriverKit/System/Library/dyld/";
    else
      v20 = "/System/Library/Caches/com.apple.dyld/";
    *(_DWORD *)this = dyld4::SyscallDelegate::open(*((dyld4::SyscallDelegate **)this + 1), (dyld3 *)v20, nullptr, 0);
  }
  return this;
}
