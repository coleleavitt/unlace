dyld4::ProcessConfig::DyldCache *__fastcall dyld4::ProcessConfig::DyldCache::DyldCache(
        dyld4::ProcessConfig::DyldCache *this,
        dyld4::ProcessConfig::Process *a2,
        const dyld4::ProcessConfig::Security *a3,
        const dyld4::ProcessConfig::Logging *a4,
        dyld4::SyscallDelegate *a5,
        lsl::Allocator *a6)
{
  unsigned __int64 v12; // x25
  unsigned __int64 v13; // x27
  bool v14; // w26
  const char *v15; // x0
  const char *v16; // x25
  bool v17; // w8
  __int64 DyldCache; // x0
  const char *v19; // x1
  __int64 v20; // x8
  __int64 v21; // x8
  DyldSharedCache *v22; // x0
  const char *v23; // x1
  const char *v24; // x1
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x9
  const char *v28; // x23
  __int64 v30; // [xsp+18h] [xbp-4D8h] BYREF
  __int64 v31; // [xsp+20h] [xbp-4D0h]
  __int64 v32; // [xsp+28h] [xbp-4C8h]
  char v33; // [xsp+30h] [xbp-4C0h]
  unsigned __int64 v34; // [xsp+38h] [xbp-4B8h]
  uint64_t v35; // [xsp+40h] [xbp-4B0h]
  char v36; // [xsp+48h] [xbp-4A8h]
  __int128 v37; // [xsp+50h] [xbp-4A0h] BYREF
  dyld4::SyscallDelegate *v38[6]; // [xsp+60h] [xbp-490h] BYREF
  int v39; // [xsp+94h] [xbp-45Ch]
  char __s[8]; // [xsp+98h] [xbp-458h] BYREF
  __int64 v41; // [xsp+A0h] [xbp-450h]
  __int64 (__fastcall *v42)(); // [xsp+A8h] [xbp-448h]
  void *v43; // [xsp+B0h] [xbp-440h]
  dyld4::ProcessConfig::DyldCache *v44; // [xsp+B8h] [xbp-438h]
  const dyld4::ProcessConfig::Logging *v45; // [xsp+C0h] [xbp-430h]
  dyld4::SyscallDelegate *v46; // [xsp+C8h] [xbp-428h]
  int v47; // [xsp+D0h] [xbp-420h]

  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 15) = 0;
  v12 = *((_QWORD *)a2 + 16);
  dyld4::CacheFinder::CacheFinder((dyld4::CacheFinder *)v38, a2, a4, a5);
  if ( *((_DWORD *)a2 + 36) == 1 )
  {
    if ( *(_BYTE *)a3 )
    {
      v13 = ((unsigned __int64)((unsigned int)*((_QWORD *)a2 + 16) | (unsigned int)v12) >> 2) & 1;
      v14 = (*((_QWORD *)a2 + 16) & 5LL) == 1;
    }
    else
    {
      LOBYTE(v13) = 0;
      v14 = 1;
    }
  }
  else
  {
    v14 = v12 & 1;
    v13 = (v12 >> 2) & 1;
  }
  v15 = (const char *)_simple_getenv(*((_QWORD *)a2 + 13), "DYLD_SHARED_REGION");
  v16 = v15;
  v17 = 0;
  LODWORD(v37) = v38[0];
  if ( *((_BYTE *)a3 + 4) && v15 )
    v17 = _platform_strcmp(v15, "private") == 0;
  BYTE4(v37) = v17;
  BYTE5(v37) = dyld4::SyscallDelegate::onHaswell(a5);
  WORD3(v37) = *((unsigned __int8 *)a4 + 1);
  BYTE8(v37) = *((_BYTE *)a2 + 150);
  BYTE9(v37) = v14;
  BYTE10(v37) = v13;
  BYTE11(v37) = *((_BYTE *)a2 + 148);
  HIDWORD(v37) = *((_DWORD *)a2 + 15);
  *(_OWORD *)this = 0u;
  *((_OWORD *)this + 1) = 0u;
  *((_OWORD *)this + 2) = 0u;
  *((_OWORD *)this + 3) = 0u;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 16) = 0;
  *(_QWORD *)((char *)this + 134) = 0;
  if ( !v16 || (DyldCache = _platform_strcmp(v16, "avoid"), (_DWORD)DyldCache) )
  {
    v30 = 0;
    v31 = 0;
    v33 = 0;
    v32 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    DyldCache = (__int64)dyld4::SyscallDelegate::getDyldCache((__int64)a5, &v37, (__int64)&v30);
    v20 = v30;
    if ( v30 )
    {
      *(_QWORD *)this = v30;
      *((_BYTE *)this + 140) = v36;
      *((_BYTE *)this + 141) = *(_BYTE *)(v20 + 221) & 1;
      *((_QWORD *)this + 1) = v31;
      dyld4::ProcessConfig::DyldCache::setPlatformOSVersion(this, a2);
      *((_QWORD *)this + 2) = DyldSharedCache::unslidLoadAddress(*(DyldSharedCache **)this);
      *((_QWORD *)this + 4) = DyldSharedCache::objcHeaderInfoRO(*(DyldSharedCache **)this);
      *((_QWORD *)this + 5) = DyldSharedCache::objcHeaderInfoRW(*(DyldSharedCache **)this);
      *((_QWORD *)this + 6) = DyldSharedCache::objcSelectorHashTable(*(DyldSharedCache **)this);
      *((_QWORD *)this + 7) = DyldSharedCache::objcClassHashTable(*(DyldSharedCache **)this);
      *((_QWORD *)this + 8) = DyldSharedCache::objcProtocolHashTable(*(DyldSharedCache **)this);
      *((_QWORD *)this + 11) = DyldSharedCache::swiftOpt(*(DyldSharedCache **)this);
      *((_DWORD *)this + 34) = DyldSharedCache::imagesCount(*(DyldSharedCache **)this);
      *((_QWORD *)this + 12) = 0;
      v21 = *((_QWORD *)this + 4);
      v22 = *(DyldSharedCache **)this;
      if ( v21 )
        *((_QWORD *)this + 12) = v21 - *(_QWORD *)this + *((_QWORD *)this + 2);
      *((_QWORD *)this + 13) = 0;
      v25 = DyldSharedCache::patchTable(v22);
      v26 = *(_QWORD *)this;
      v27 = *(_QWORD *)(*(_QWORD *)this + 152LL);
      *((_QWORD *)this + 14) = v25;
      *((_QWORD *)this + 15) = v27;
      if ( !BYTE8(v37) )
      {
        *(_QWORD *)__s = _NSConcreteStackBlock;
        v41 = 0x40000000;
        v42 = ___ZNK5dyld413ProcessConfig9DyldCache21makeDataConstWritableERKNS0_7LoggingERKNS_15SyscallDelegateEb_block_invoke;
        v43 = &__block_descriptor_tmp_59;
        v44 = this;
        v45 = a4;
        v47 = 19;
        v46 = a5;
        DyldSharedCache::forEachCache(v26, __s);
      }
      if ( !v34 || !v35 )
        dyld4::halt((dyld4 *)"dyld shared region dynamic config data was not set\n", v24);
      DyldCache = dyld4::SyscallDelegate::fsgetpath(a5, __s, 0x400u, (fsid_t)v34, v35);
      if ( DyldCache != -1 )
      {
        DyldCache = lsl::Allocator::strdup(a6, __s);
        *((_QWORD *)this + 3) = DyldCache;
      }
    }
    else
    {
      if ( v33 )
        DyldCache = dyld4::console((dyld4 *)"dyld cache '%s' not loaded: %s\n", v19, *((_QWORD *)this + 3), v32);
      if ( v16 )
      {
        DyldCache = _platform_strcmp(v16, "private");
        if ( !(_DWORD)DyldCache && !v33 )
          dyld4::halt((dyld4 *)"dyld private shared cache could not be found\n", v23);
      }
    }
  }
  if ( v39 != -1 )
  {
    DyldCache = dyld4::SyscallDelegate::getpath(a5, v39, __s);
    if ( (_DWORD)DyldCache )
    {
      v28 = (const char *)lsl::Allocator::strdup(a6, __s);
      DyldCache = _platform_strlen(v28);
      *((_QWORD *)this + 9) = v28;
      *((_QWORD *)this + 10) = DyldCache;
    }
  }
  if ( *((_DWORD *)a2 + 36) == 1 )
    dyld4::ProcessConfig::DyldCache::setupDyldCommPage((dyld4::ProcessConfig::DyldCache *)DyldCache, a2, a3, a5);
  dyld4::CacheFinder::~CacheFinder(v38);
  return this;
}
