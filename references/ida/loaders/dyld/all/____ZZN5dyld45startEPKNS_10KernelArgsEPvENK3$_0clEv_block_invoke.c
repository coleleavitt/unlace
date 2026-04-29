void __fastcall ___ZZN5dyld45startEPKNS_10KernelArgsEPvENK3__0clEv_block_invoke(
        __int64 a1,
        lsl::Allocator *a2,
        dyld4::Atlas::ProcessSnapshot *this)
{
  __int64 v6; // x0
  __int64 v7; // x8
  _QWORD *v8; // x9
  unsigned __int64 v9; // x1
  unsigned __int64 v10; // x2
  _BYTE *v11; // x0
  unsigned __int64 v12; // x10
  unsigned __int64 v13; // x9
  __int64 v14; // x8
  dyld4::FileManager *v15; // x0
  const char *v16; // x2
  __int64 v17; // x0
  __int64 v18; // x8
  _QWORD *v19; // x9
  unsigned __int64 v20; // x1
  unsigned __int64 v21; // x2
  _BYTE *v22; // x0
  unsigned __int64 v23; // x10
  unsigned __int64 v24; // x9
  __int64 v25; // x8
  dyld4::FileManager *v26; // x0
  const char *v27; // x2
  __int64 v28; // x0
  __int64 v29; // [xsp+0h] [xbp-1A0h] BYREF
  _BYTE v30[80]; // [xsp+8h] [xbp-198h] BYREF
  _BYTE v31[24]; // [xsp+58h] [xbp-148h] BYREF
  _BYTE v32[32]; // [xsp+70h] [xbp-130h] BYREF
  __int64 v33; // [xsp+90h] [xbp-110h] BYREF
  __int128 v34; // [xsp+C0h] [xbp-E0h] BYREF
  __int128 v35; // [xsp+D0h] [xbp-D0h]
  __int128 v36; // [xsp+E0h] [xbp-C0h]
  __int128 v37; // [xsp+F0h] [xbp-B0h]
  __int64 v38; // [xsp+100h] [xbp-A0h]
  __int16 v39; // [xsp+108h] [xbp-98h]
  char v40; // [xsp+10Ah] [xbp-96h]
  __int64 v41[10]; // [xsp+118h] [xbp-88h] BYREF

  dyld4::Atlas::ProcessSnapshot::setPlatform(this, *(int *)(*(_QWORD *)(**(_QWORD **)(a1 + 32) + 8LL) + 68LL));
  dyld4::Atlas::ProcessSnapshot::setDyldState(this, 0x10u);
  dyld4::FileManager::fileRecordForVolumeDevIDAndObjID(
    v41,
    (dyld4::FileManager *)(**(_QWORD **)(a1 + 32) + 336LL),
    *((_QWORD *)gProcessInfo + 36),
    *((_QWORD *)gProcessInfo + 37));
  if ( (unsigned int)dyld4::FileRecord::exists((dyld4::FileRecord *)v41) )
  {
    v6 = dyld4::Atlas::ProcessSnapshot::identityMapper(this);
    dyld4::Atlas::SharedCache::SharedCache(
      &v29,
      a2,
      v41,
      v6,
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 200LL),
      *((unsigned __int8 *)gProcessInfo + 24));
    dyld4::Atlas::ProcessSnapshot::addSharedCache(this, &v29);
    lsl::SharedPtr<dyld4::Atlas::Mapper>::~SharedPtr(&v33);
    dyld4::Atlas::Mapper::Pointer<dyld_cache_header>::~Pointer(v32);
    dyld4::FileRecord::~FileRecord((dyld4::FileRecord *)v30);
  }
  if ( !(unsigned int)dyld3::MachOFile::inDyldCache(**(dyld3::MachOFile ***)(a1 + 48))
    || !*(_QWORD *)dyld4::Atlas::ProcessSnapshot::sharedCache(this) )
  {
    v36 = 0u;
    v37 = 0u;
    v34 = 0u;
    v35 = 0u;
    v38 = 0x1FFFFFFFFLL;
    v39 = 0;
    v40 = 1;
    v7 = **(_QWORD **)(a1 + 32);
    v8 = *(_QWORD **)(v7 + 8);
    v9 = v8[10];
    if ( v9 && (v10 = v8[11]) != 0 )
    {
      dyld4::FileManager::fileRecordForVolumeDevIDAndObjID(&v29, (dyld4::FileManager *)(v7 + 336), v9, v10);
      dyld4::FileRecord::operator=(&v34, &v29);
      dyld4::FileRecord::~FileRecord((dyld4::FileRecord *)&v29);
      v11 = (_BYTE *)dyld4::FileRecord::volume((dyld4::FileRecord *)&v34);
      if ( *v11 )
        goto LABEL_16;
      v12 = 0;
      do
      {
        v13 = v12;
        if ( v12 == 15 )
          break;
        ++v12;
      }
      while ( !v11[v13 + 1] );
      if ( v13 < 0xF )
        goto LABEL_16;
      v14 = **(_QWORD **)(a1 + 32);
      v15 = (dyld4::FileManager *)(v14 + 336);
      v16 = *(const char **)(*(_QWORD *)(v14 + 8) + 72LL);
    }
    else
    {
      v15 = (dyld4::FileManager *)(v7 + 336);
      v16 = (const char *)v8[9];
    }
    dyld4::FileManager::fileRecordForPath(&v29, v15, a2, v16);
    dyld4::FileRecord::operator=(&v34, &v29);
    dyld4::FileRecord::~FileRecord((dyld4::FileRecord *)&v29);
LABEL_16:
    v17 = dyld4::Atlas::ProcessSnapshot::identityMapper(this);
    dyld4::Atlas::Image::Image(&v29, a2, &v34, v17, &dword_0);
    dyld4::Atlas::ProcessSnapshot::addImage(this, &v29);
    dyld4::Atlas::Mapper::Pointer<dyld3::MachOLoaded>::~Pointer(v32);
    lsl::SharedPtr<dyld4::Atlas::Mapper>::~SharedPtr(v31);
    dyld4::FileRecord::~FileRecord((dyld4::FileRecord *)v30);
    dyld4::FileRecord::~FileRecord((dyld4::FileRecord *)&v34);
    goto LABEL_17;
  }
  dyld4::Atlas::ProcessSnapshot::addSharedCacheImage(this, **(const mach_header ***)(a1 + 48));
LABEL_17:
  v36 = 0u;
  v37 = 0u;
  v34 = 0u;
  v35 = 0u;
  v38 = 0x1FFFFFFFFLL;
  v39 = 0;
  v40 = 1;
  v18 = **(_QWORD **)(a1 + 32);
  v19 = *(_QWORD **)(v18 + 8);
  v20 = v19[4];
  if ( !v20 || (v21 = v19[5]) == 0 )
  {
    v26 = (dyld4::FileManager *)(v18 + 336);
    v27 = (const char *)v19[2];
    goto LABEL_26;
  }
  dyld4::FileManager::fileRecordForVolumeDevIDAndObjID(&v29, (dyld4::FileManager *)(v18 + 336), v20, v21);
  dyld4::FileRecord::operator=(&v34, &v29);
  dyld4::FileRecord::~FileRecord((dyld4::FileRecord *)&v29);
  v22 = (_BYTE *)dyld4::FileRecord::volume((dyld4::FileRecord *)&v34);
  if ( !*v22 )
  {
    v23 = 0;
    do
    {
      v24 = v23;
      if ( v23 == 15 )
        break;
      ++v23;
    }
    while ( !v22[v24 + 1] );
    if ( v24 >= 0xF )
    {
      v25 = **(_QWORD **)(a1 + 32);
      v26 = (dyld4::FileManager *)(v25 + 336);
      v27 = *(const char **)(*(_QWORD *)(v25 + 8) + 16LL);
LABEL_26:
      dyld4::FileManager::fileRecordForPath(&v29, v26, a2, v27);
      dyld4::FileRecord::operator=(&v34, &v29);
      dyld4::FileRecord::~FileRecord((dyld4::FileRecord *)&v29);
    }
  }
  v28 = dyld4::Atlas::ProcessSnapshot::identityMapper(this);
  dyld4::Atlas::Image::Image(&v29, a2, &v34, v28, *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 32) + 8LL) + 8LL));
  dyld4::Atlas::ProcessSnapshot::addImage(this, &v29);
  dyld4::Atlas::ProcessSnapshot::setInitialImageCount(this, *(unsigned int *)(**(_QWORD **)(a1 + 32) + 708LL));
  dyld4::Atlas::Mapper::Pointer<dyld3::MachOLoaded>::~Pointer(v32);
  lsl::SharedPtr<dyld4::Atlas::Mapper>::~SharedPtr(v31);
  dyld4::FileRecord::~FileRecord((dyld4::FileRecord *)v30);
  dyld4::FileRecord::~FileRecord((dyld4::FileRecord *)&v34);
  dyld4::FileRecord::~FileRecord((dyld4::FileRecord *)v41);
}
