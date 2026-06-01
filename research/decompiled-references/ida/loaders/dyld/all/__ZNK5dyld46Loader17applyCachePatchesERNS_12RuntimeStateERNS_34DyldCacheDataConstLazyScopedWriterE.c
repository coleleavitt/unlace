void __fastcall dyld4::Loader::applyCachePatches(
        dyld4::Loader *this,
        dyld4::RuntimeState *a2,
        dyld4::DyldCacheDataConstLazyScopedWriter *a3)
{
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // [xsp+60h] [xbp-70h] BYREF
  __int64 *v7; // [xsp+68h] [xbp-68h]
  __int64 v8; // [xsp+70h] [xbp-60h]
  __int64 v9; // [xsp+78h] [xbp-58h]
  __int64 v10; // [xsp+80h] [xbp-50h] BYREF
  __int64 *v11; // [xsp+88h] [xbp-48h]
  __int64 v12; // [xsp+90h] [xbp-40h]
  char v13; // [xsp+98h] [xbp-38h]
  __int64 v14; // [xsp+A0h] [xbp-30h] BYREF
  __int16 v15; // [xsp+AEh] [xbp-22h] BYREF

  v15 = 0;
  v14 = 0;
  if ( (unsigned int)dyld4::Loader::overridesDylibInCache((__int64)this, (__int64)&v14, (__int64)&v15) && v14 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 200LL);
    v10 = 0;
    v11 = &v10;
    v12 = 0x2000000000LL;
    v13 = 0;
    v6 = 0;
    v7 = &v6;
    v8 = 0x2000000000LL;
    v9 = v14;
    v5 = DyldSharedCache::forEachPatchableExport(v4);
    if ( *(_QWORD *)v7[3] != -1 )
      dyld4::Loader::applyCachePatches(v5);
    if ( *((_BYTE *)v11 + 24) )
      dyld4::RuntimeState::setVMAccountingSuspending((__int64)a2, 0);
    _Block_object_dispose(&v6, 8);
    _Block_object_dispose(&v10, 8);
  }
}
