void __fastcall dyld4::Loader::applyInterposingToDyldCache(dyld4::Loader *this, dyld4::RuntimeState *a2)
{
  DyldSharedCache *v2; // x20
  __int64 v4; // x8
  __int64 v5; // x23
  __int64 v6; // x26
  __int64 IndexedImageEntry; // x0
  dyld3::MachOFile *v8; // x22
  unsigned __int64 v9; // [xsp+48h] [xbp-88h] BYREF
  unsigned __int64 v10; // [xsp+50h] [xbp-80h] BYREF
  unsigned int v11; // [xsp+5Ch] [xbp-74h] BYREF
  _BYTE v12[16]; // [xsp+60h] [xbp-70h] BYREF

  v2 = *(DyldSharedCache **)(*((_QWORD *)this + 1) + 200LL);
  if ( v2 && *((_QWORD *)this + 18) )
  {
    dyld4::DyldCacheDataConstScopedWriter::DyldCacheDataConstScopedWriter(
      (dyld4::DyldCacheDataConstScopedWriter *)v12,
      this);
    dyld4::RuntimeState::setVMAccountingSuspending((__int64)this, 1);
    v4 = *((_QWORD *)this + 18);
    if ( v4 )
    {
      v5 = *((_QWORD *)this + 17);
      v6 = 16 * v4;
      do
      {
        v11 = 0;
        if ( (unsigned int)DyldSharedCache::addressInText(v2, *(_QWORD *)(v5 + 8) - (_QWORD)v2, &v11) )
        {
          v9 = 0;
          v10 = 0;
          IndexedImageEntry = DyldSharedCache::getIndexedImageEntry(v2, v11, &v10, &v9);
          if ( IndexedImageEntry )
          {
            v8 = (dyld3::MachOFile *)IndexedImageEntry;
            DyldSharedCache::unslidLoadAddress(v2);
            dyld3::MachOFile::preferredLoadAddress(v8);
            DyldSharedCache::forEachPatchableExport(v2);
          }
        }
        v5 += 16;
        v6 -= 16;
      }
      while ( v6 );
    }
    dyld4::RuntimeState::setVMAccountingSuspending((__int64)this, 0);
    dyld4::DyldCacheDataConstLazyScopedWriter::~DyldCacheDataConstLazyScopedWriter((dyld4::DyldCacheDataConstLazyScopedWriter *)v12);
  }
}
