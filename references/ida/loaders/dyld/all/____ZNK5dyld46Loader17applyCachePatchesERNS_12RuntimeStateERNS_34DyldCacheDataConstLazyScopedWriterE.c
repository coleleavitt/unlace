__int64 __fastcall ___ZNK5dyld46Loader17applyCachePatchesERNS_12RuntimeStateERNS_34DyldCacheDataConstLazyScopedWriterE_block_invoke(
        __int64 result,
        __int64 a2,
        __int64 a3,
        int a4)
{
  dyld4::Loader *v4; // x21
  __int64 v5; // x8
  __int64 *v6; // x22
  __int64 v7; // x8

  v4 = *(dyld4::Loader **)(result + 48);
  v5 = *(_QWORD *)(*(_QWORD *)(result + 32) + 8LL);
  v6 = *(__int64 **)(v5 + 24);
  *(_QWORD *)(v5 + 24) = v6 + 1;
  if ( a4 != 1 )
  {
    if ( a4 != 8 )
    {
      if ( !*v6 )
        return DyldSharedCache::forEachPatchableGOTUseOfExport();
      goto LABEL_5;
    }
    v7 = *v6;
    if ( *v6 == 1 )
      return result;
LABEL_4:
    if ( !v7 )
      return DyldSharedCache::forEachPatchableGOTUseOfExport();
LABEL_5:
    dyld4::Loader::loadAddress(v4, *(dyld4::RuntimeState **)(result + 56));
    return DyldSharedCache::forEachPatchableGOTUseOfExport();
  }
  v7 = *v6;
  if ( *v6 != 2 )
    goto LABEL_4;
  return result;
}
