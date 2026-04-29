__int64 __fastcall dyld4::ProcessConfig::Process::getMainPlatform(dyld4::ProcessConfig::Process *this)
{
  _DWORD *v2; // x0
  __int64 v3; // x0
  unsigned __int8 *v4; // x20
  int v5; // w8
  const char *v6; // x0
  int v7; // w8
  __int64 v8; // x9
  __int64 v9; // x9
  __int64 v10; // x0
  __int64 VersionSetEquivalent; // x0
  __int64 v12; // x19
  _QWORD v14[6]; // [xsp+0h] [xbp-60h] BYREF
  __int64 v15; // [xsp+30h] [xbp-30h] BYREF
  __int64 *v16; // [xsp+38h] [xbp-28h]
  __int64 v17; // [xsp+40h] [xbp-20h]
  int v18; // [xsp+48h] [xbp-18h]

  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 12) = 0;
  v15 = 0;
  v16 = &v15;
  v17 = 0x2000000000LL;
  v18 = 0;
  v2 = *(_DWORD **)this;
  v14[0] = _NSConcreteStackBlock;
  v14[1] = 0x40000000;
  v14[2] = ___ZN5dyld413ProcessConfig7Process15getMainPlatformEv_block_invoke;
  v14[3] = &unk_94CD8;
  v14[4] = &v15;
  v14[5] = this;
  dyld3::MachOFile::forEachSupportedPlatform(v2, (__int64)v14);
  if ( *((_DWORD *)v16 + 6) != 1 )
    goto LABEL_20;
  v3 = _simple_getenv(*((_QWORD *)this + 13), "DYLD_FORCE_PLATFORM");
  if ( !v3 )
    goto LABEL_20;
  v4 = (unsigned __int8 *)v3;
  if ( !(unsigned int)dyld3::MachOFile::allowsAlternatePlatform(*(dyld3::MachOFile **)this) )
    goto LABEL_20;
  v5 = *v4;
  if ( v5 == 54 )
  {
    v7 = 6;
    goto LABEL_9;
  }
  if ( v5 == 50 )
  {
    v6 = dyld3::MachOFile::archName(*(dyld3::MachOFile **)this);
    if ( !_platform_strcmp(v6, "arm64") )
    {
      v7 = 2;
LABEL_9:
      *((_DWORD *)v16 + 6) = v7;
    }
  }
  v8 = 0;
  while ( *(_DWORD *)((char *)&dyld3::sVersionMap + v8 + 12) != *((_DWORD *)this + 10) )
  {
    v8 += 24;
    if ( v8 == 864 )
      goto LABEL_15;
  }
  *((_DWORD *)this + 10) = *(_DWORD *)((char *)&dyld3::sVersionMap + v8 + 8);
LABEL_15:
  v9 = 0;
  while ( *(_DWORD *)((char *)&dyld3::sVersionMap + v9 + 12) != *((_DWORD *)this + 12) )
  {
    v9 += 24;
    if ( v9 == 864 )
      goto LABEL_20;
  }
  *((_DWORD *)this + 12) = *(_DWORD *)((char *)&dyld3::sVersionMap + v9 + 8);
LABEL_20:
  v10 = dyld3::MachOFile::basePlatform(*((_DWORD *)v16 + 6));
  *((_DWORD *)this + 14) = v10;
  VersionSetEquivalent = dyld4::ProcessConfig::Process::findVersionSetEquivalent(v10, v10, *((unsigned int *)this + 10));
  *((_DWORD *)this + 11) = VersionSetEquivalent;
  *((_DWORD *)this + 13) = dyld4::ProcessConfig::Process::findVersionSetEquivalent(
                             VersionSetEquivalent,
                             *((unsigned int *)this + 14),
                             *((unsigned int *)this + 12));
  v12 = *((unsigned int *)v16 + 6);
  _Block_object_dispose(&v15, 8);
  return v12;
}
