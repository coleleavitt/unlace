__int64 __fastcall ___ZN5dyld416JustInTimeLoader28handleStrongWeakDefOverridesERNS_12RuntimeStateERNS_34DyldCacheDataConstLazyScopedWriterE_block_invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x0
  _QWORD v8[8]; // [xsp+0h] [xbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 200LL);
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 0x40000000;
  v8[2] = ___ZN5dyld416JustInTimeLoader17cacheWeakDefFixupERNS_12RuntimeStateERNS_34DyldCacheDataConstLazyScopedWriterEjjRKNS_6Loader14ResolvedSymbolE_block_invoke;
  v8[3] = &__block_descriptor_tmp_21;
  v8[4] = v6;
  v8[5] = v4;
  v8[6] = a4;
  v8[7] = v5;
  return DyldSharedCache::forEachPatchableUseOfExport(v6, a2, a3, v8);
}
