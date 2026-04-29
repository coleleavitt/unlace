__int64 __fastcall ___ZNK5dyld413ProcessConfig9DyldCache21makeDataConstWritableERKNS0_7LoggingERKNS_15SyscallDelegateEb_block_invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int128 v7; // q0
  _QWORD v9[4]; // [xsp+0h] [xbp-40h] BYREF
  __int128 v10; // [xsp+20h] [xbp-20h]
  __int64 v11; // [xsp+30h] [xbp-10h]
  int v12; // [xsp+38h] [xbp-8h]

  v7 = *(_OWORD *)(a1 + 32);
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 0x40000000;
  v9[2] = ___ZNK5dyld413ProcessConfig9DyldCache21makeDataConstWritableERKNS0_7LoggingERKNS_15SyscallDelegateEb_block_invoke_2;
  v9[3] = &__block_descriptor_tmp_57;
  v10 = v7;
  v12 = *(_DWORD *)(a1 + 56);
  v11 = *(_QWORD *)(a1 + 48);
  return DyldSharedCache::forEachRegion(a2, v9, a3, a4, a5, a6, a7);
}
