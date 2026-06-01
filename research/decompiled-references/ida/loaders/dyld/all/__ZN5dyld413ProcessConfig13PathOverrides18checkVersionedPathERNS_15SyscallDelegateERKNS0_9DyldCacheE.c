size_t __fastcall dyld4::ProcessConfig::PathOverrides::checkVersionedPath(
        dyld4::ProcessConfig::PathOverrides *a1,
        __int64 a2,
        DyldSharedCache **a3,
        lsl::Allocator *a4,
        const char *a5,
        __int64 a6,
        __int64 a7)
{
  size_t result; // x0
  __int64 **v15; // x25
  char *v16; // x2
  dyld3::MachOFile *IndexedImageEntry; // x0
  unsigned int v18; // [xsp+4h] [xbp-C6Ch] BYREF
  char *__source; // [xsp+8h] [xbp-C68h] BYREF
  unsigned __int64 v20; // [xsp+10h] [xbp-C60h] BYREF
  unsigned int v21; // [xsp+1Ch] [xbp-C54h] BYREF
  unsigned int v22; // [xsp+20h] [xbp-C50h] BYREF
  unsigned int v23; // [xsp+24h] [xbp-C4Ch] BYREF
  unsigned __int64 v24[128]; // [xsp+28h] [xbp-C48h] BYREF
  char __s2[1024]; // [xsp+428h] [xbp-848h] BYREF
  char v26[1024]; // [xsp+828h] [xbp-448h] BYREF

  v23 = 0;
  result = dyld4::SyscallDelegate::getDylibInfo(a2, a5, a6, a7, &v23, v26);
  if ( !(_DWORD)result )
    return result;
  v21 = 0;
  v22 = 0;
  result = dyld4::SyscallDelegate::getDylibInfo(a2, v26, a6, a7, &v22, __s2);
  if ( (result & 1) == 0 )
  {
    if ( !*a3
      || !(unsigned int)DyldSharedCache::hasImagePath(*a3, v26, &v21)
      || (v24[0] = 0,
          v20 = 0,
          IndexedImageEntry = (dyld3::MachOFile *)DyldSharedCache::getIndexedImageEntry(*a3, v21, v24, &v20),
          __source = nullptr,
          v18 = 0,
          !(unsigned int)dyld3::MachOFile::getDylibInstallName(IndexedImageEntry, (const char **)&__source, &v18, &v22)) )
    {
      v16 = v26;
      return dyld4::ProcessConfig::PathOverrides::addPathOverride(a1, a4, v16, a5);
    }
    result = strlcpy(__s2, __source, 0x400u);
  }
  if ( v23 <= v22 )
    return result;
  v15 = *((__int64 ***)a1 + 16);
  if ( !v15 )
  {
LABEL_7:
    v16 = __s2;
    return dyld4::ProcessConfig::PathOverrides::addPathOverride(a1, a4, v16, a5);
  }
  while ( _platform_strcmp((const char *)v15[1], __s2) )
  {
    v15 = (__int64 **)*v15;
    if ( !v15 )
      goto LABEL_7;
  }
  LODWORD(v20) = 0;
  result = dyld4::SyscallDelegate::getDylibInfo(a2, v15[2], a6, a7, &v20, v24);
  if ( (_DWORD)result )
  {
    if ( v23 > (unsigned int)v20 )
    {
      result = lsl::Allocator::strdup(a4, a5);
      v15[2] = (__int64 *)result;
    }
  }
  return result;
}
