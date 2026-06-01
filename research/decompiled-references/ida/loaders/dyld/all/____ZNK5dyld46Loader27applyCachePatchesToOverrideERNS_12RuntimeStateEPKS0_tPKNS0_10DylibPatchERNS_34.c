__int64 __fastcall ___ZNK5dyld46Loader27applyCachePatchesToOverrideERNS_12RuntimeStateEPKS0_tPKNS0_10DylibPatchERNS_34DyldCacheDataConstLazyScopedWriterE_block_invoke(
        __int64 result,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 v5; // x20
  dyld4::Loader *v6; // x21
  __int64 v7; // x8
  __int64 *v8; // x22
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x1
  __int64 v12; // x3
  __int64 v13; // x0
  __int64 v14; // x9
  __int64 v15; // x11
  _QWORD v16[12]; // [xsp+0h] [xbp-80h] BYREF

  v5 = result;
  v6 = *(dyld4::Loader **)(result + 48);
  v7 = *(_QWORD *)(*(_QWORD *)(result + 32) + 8LL);
  v8 = *(__int64 **)(v7 + 24);
  *(_QWORD *)(v7 + 24) = v8 + 1;
  if ( a4 != 1 )
  {
    if ( a4 != 8 )
    {
      if ( *v8 )
        goto LABEL_5;
      goto LABEL_9;
    }
    v9 = *v8;
    if ( *v8 == 1 )
      return result;
LABEL_4:
    if ( v9 )
    {
LABEL_5:
      v10 = *v8 + dyld4::Loader::loadAddress(v6, *(dyld4::RuntimeState **)(result + 56));
LABEL_10:
      v11 = *(unsigned __int16 *)(v5 + 100);
      v12 = *(unsigned int *)(v5 + 96);
      v16[0] = _NSConcreteStackBlock;
      v16[1] = 0x40000000;
      v16[2] = ___ZNK5dyld46Loader27applyCachePatchesToOverrideERNS_12RuntimeStateEPKS0_tPKNS0_10DylibPatchERNS_34DyldCacheDataConstLazyScopedWriterE_block_invoke_2;
      v16[3] = &unk_95E10;
      v16[4] = *(_QWORD *)(v5 + 40);
      v16[5] = v6;
      v14 = *(_QWORD *)(v5 + 56);
      v13 = *(_QWORD *)(v5 + 64);
      v15 = *(_QWORD *)(v5 + 80);
      v16[6] = *(_QWORD *)(v5 + 72);
      v16[7] = v14;
      v16[8] = v15;
      v16[9] = v10;
      v16[10] = *(_QWORD *)(v5 + 88);
      v16[11] = v8;
      return DyldSharedCache::forEachPatchableUseOfExportInImage(v13, v11, a2, v12, v16);
    }
LABEL_9:
    v10 = 195903495;
    goto LABEL_10;
  }
  v9 = *v8;
  if ( *v8 != 2 )
    goto LABEL_4;
  return result;
}
