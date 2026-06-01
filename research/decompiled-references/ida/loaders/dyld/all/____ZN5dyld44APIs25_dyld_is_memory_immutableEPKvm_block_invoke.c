__int64 __fastcall ___ZN5dyld44APIs25_dyld_is_memory_immutableEPKvm_block_invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD v8[4]; // [xsp+8h] [xbp-38h] BYREF
  __int128 v9; // [xsp+28h] [xbp-18h]
  __int64 v10; // [xsp+38h] [xbp-8h]

  v8[0] = _NSConcreteStackBlock;
  v8[1] = 0x40000000;
  v8[2] = ___ZN5dyld44APIs25_dyld_is_memory_immutableEPKvm_block_invoke_2;
  v8[3] = &unk_96868;
  v10 = *(_QWORD *)(a1 + 48);
  v9 = *(_OWORD *)(a1 + 32);
  return DyldSharedCache::forEachRegion(a2, v8, a3, a4, a5, a6, a7);
}
