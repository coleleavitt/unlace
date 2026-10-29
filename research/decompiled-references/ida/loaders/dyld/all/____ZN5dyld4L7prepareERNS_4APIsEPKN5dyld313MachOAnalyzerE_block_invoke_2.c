__int64 __fastcall ___ZN5dyld4L7prepareERNS_4APIsEPKN5dyld313MachOAnalyzerE_block_invoke_2(
        __int64 a1,
        unsigned int *a2)
{
  unsigned __int64 v4; // x0
  __int64 v5; // x9
  __int64 v6; // x8
  __int64 v7; // x1
  __int64 v8; // x2
  _QWORD v10[7]; // [xsp+8h] [xbp-48h] BYREF

  v4 = dyld4::PrebuiltLoader::BindTargetRef::value(
         (dyld4::PrebuiltLoader::BindTargetRef *)(a2 + 2),
         *(dyld4::RuntimeState **)(a1 + 32));
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 200LL);
  v7 = *a2;
  v8 = a2[1];
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 0x40000000;
  v10[2] = ___ZN5dyld4L7prepareERNS_4APIsEPKN5dyld313MachOAnalyzerE_block_invoke_3;
  v10[3] = &__block_descriptor_tmp_34;
  v10[4] = v5;
  v10[5] = v4;
  v10[6] = *(_QWORD *)(a1 + 40);
  return DyldSharedCache::forEachPatchableUseOfExport(v6, v7, v8, v10);
}
