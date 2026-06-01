void __fastcall dyld4::Loader::applyCachePatchesToOverride(
        int a1,
        dyld4::RuntimeState *a2,
        dyld4::Loader *this,
        unsigned int a4,
        __int64 a5)
{
  DyldSharedCache *v9; // x21
  __int64 v10; // x0
  __int64 v11; // [xsp+70h] [xbp-90h] BYREF
  __int64 *v12; // [xsp+78h] [xbp-88h]
  __int64 v13; // [xsp+80h] [xbp-80h]
  __int64 v14; // [xsp+88h] [xbp-78h]
  __int64 v15; // [xsp+90h] [xbp-70h] BYREF
  __int64 *v16; // [xsp+98h] [xbp-68h]
  __int64 v17; // [xsp+A0h] [xbp-60h]
  char v18; // [xsp+A8h] [xbp-58h]

  v9 = *(DyldSharedCache **)(*((_QWORD *)a2 + 1) + 200LL);
  dyld4::Loader::loadAddress(this, a2);
  if ( (unsigned int)DyldSharedCache::shouldPatchClientOfImage(v9, a4, *((_WORD *)this + 3) & 0x7FFF) )
  {
    if ( (unsigned int)DyldSharedCache::patchInfoVersion(v9) - 2 >= 3 )
      dyld4::Loader::applyCachePatchesToOverride();
    v15 = 0;
    v16 = &v15;
    v17 = 0x2000000000LL;
    v18 = 0;
    v11 = 0;
    v12 = &v11;
    v13 = 0x2000000000LL;
    v14 = a5;
    v10 = DyldSharedCache::forEachPatchableExport(v9);
    if ( *(_QWORD *)v12[3] != -1 )
      dyld4::Loader::applyCachePatchesToOverride(v10);
    if ( *((_BYTE *)v16 + 24) )
      dyld4::RuntimeState::setVMAccountingSuspending((__int64)a2, 0);
    _Block_object_dispose(&v11, 8);
    _Block_object_dispose(&v15, 8);
  }
}
