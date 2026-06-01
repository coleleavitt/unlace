void __fastcall dyld4::Loader::applyCachePatchesTo(
        dyld4::Loader *this,
        dyld4::RuntimeState *a2,
        const dyld4::Loader *a3,
        dyld4::DyldCacheDataConstLazyScopedWriter *a4)
{
  __int64 CatalystMacTwinPatches; // x0
  unsigned __int16 v8; // w2
  __int64 v9; // x23
  unsigned int v10; // w0
  __int64 v11; // [xsp+0h] [xbp-40h] BYREF
  dyld4::RuntimeState *v12; // [xsp+Eh] [xbp-32h] BYREF

  LOWORD(v12) = 0;
  v11 = 0;
  if ( (unsigned int)dyld4::Loader::overridesDylibInCache((__int64)this, (__int64)&v11, (__int64)&v12) )
  {
    if ( v11 )
      dyld4::Loader::applyCachePatchesToOverride((int)this, a2, a3, (unsigned __int16)v12, v11);
    if ( (*((_WORD *)this + 2) & 1) == 0 )
    {
      if ( *(_BYTE *)(*((_QWORD *)a2 + 1) + 157LL) )
      {
        CatalystMacTwinPatches = dyld4::JustInTimeLoader::getCatalystMacTwinPatches(this);
        if ( CatalystMacTwinPatches )
        {
          v9 = CatalystMacTwinPatches;
          v10 = dyld4::Loader::indexOfUnzipperedTwin(a2, (const dyld4::RuntimeState *)(unsigned __int16)v12, v8);
          if ( v10 != 0xFFFF )
            dyld4::Loader::applyCachePatchesToOverride((int)this, a2, a3, v10, v9);
        }
      }
    }
  }
}
