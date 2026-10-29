void __fastcall dyld4::JustInTimeLoader::applyFixups(
        dyld4::JustInTimeLoader *this,
        Diagnostics *a2,
        dyld4::RuntimeState *a3,
        dyld4::DyldCacheDataConstLazyScopedWriter *a4)
{
  __int64 v4; // x0
  Diagnostics *v5; // x1
  __int64 v6; // x2
  dyld4::DyldCacheDataConstLazyScopedWriter *v7; // x3
  char v8; // w4
  dyld4::DyldCacheDataConstLazyScopedWriter *v9; // x22
  dyld4::RuntimeState *v10; // x20
  const dyld4::Loader *v11; // x19
  Diagnostics *v12; // x21
  dyld3::MachOFile *v13; // x22
  __int64 v14; // x8
  dyld4::Loader **v15; // x21
  __int64 v16; // x23
  dyld4::Loader **v17; // x24
  dyld4::Loader *v18; // t1
  _QWORD v19[6]; // [xsp+8h] [xbp-13D8h] BYREF
  _QWORD v20[8]; // [xsp+38h] [xbp-13A8h] BYREF
  _QWORD v21[8]; // [xsp+78h] [xbp-1368h] BYREF
  _QWORD v22[7]; // [xsp+B8h] [xbp-1328h] BYREF
  __int64 v23; // [xsp+F0h] [xbp-12F0h]
  vm_address_t address; // [xsp+F8h] [xbp-12E8h]
  vm_size_t size; // [xsp+100h] [xbp-12E0h]
  _QWORD v26[7]; // [xsp+108h] [xbp-12D8h] BYREF
  __int64 v27; // [xsp+140h] [xbp-12A0h]
  vm_address_t v28; // [xsp+148h] [xbp-1298h]
  vm_size_t v29; // [xsp+150h] [xbp-1290h]
  _QWORD v30[7]; // [xsp+158h] [xbp-1288h] BYREF
  __int64 v31; // [xsp+190h] [xbp-1250h]
  vm_address_t v32; // [xsp+198h] [xbp-1248h]
  vm_size_t v33; // [xsp+1A0h] [xbp-1240h]
  _QWORD v34[16]; // [xsp+1A8h] [xbp-1238h] BYREF
  char v35; // [xsp+228h] [xbp-11B8h]
  char v36; // [xsp+230h] [xbp-11B0h] BYREF
  char v37; // [xsp+278h] [xbp-1168h] BYREF
  char v38; // [xsp+380h] [xbp-1060h] BYREF

  v4 = __chkstk_darwin();
  v9 = v7;
  v10 = (dyld4::RuntimeState *)v6;
  v11 = (const dyld4::Loader *)v4;
  if ( (*(_WORD *)(v4 + 4) & 2) != 0 )
  {
    if ( *(_BYTE *)(v6 + 822) )
    {
      v14 = *(_QWORD *)(v6 + 48);
      if ( v14 )
      {
        v15 = *(dyld4::Loader ***)(v6 + 40);
        v16 = 8 * v14;
        v17 = v15;
        do
        {
          v18 = *v17++;
          dyld4::Loader::applyCachePatchesTo(v18, v10, v11, v9);
          ++v15;
          v16 -= 8;
        }
        while ( v16 );
      }
    }
  }
  else
  {
    v12 = v5;
    v34[0] = _NSConcreteStackBlock;
    v34[1] = 0x40000000;
    v34[2] = ___ZNK5dyld416JustInTimeLoader11applyFixupsER11DiagnosticsRNS_12RuntimeStateERNS_34DyldCacheDataConstLazyScopedWriterEb_block_invoke;
    v34[3] = &__block_descriptor_tmp_22;
    v34[4] = v6;
    v34[5] = v7;
    v30[0] = 0;
    v30[1] = v30;
    v30[2] = 0x5002000000LL;
    v30[3] = __Block_byref_object_copy__23_0;
    v30[4] = __Block_byref_object_dispose__24_0;
    v30[5] = &v38;
    v30[6] = 512;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v26[0] = 0;
    v26[1] = v26;
    v26[2] = 0x5002000000LL;
    v26[3] = __Block_byref_object_copy__23_0;
    v26[4] = __Block_byref_object_dispose__24_0;
    v26[5] = &v37;
    v26[6] = 32;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v22[0] = 0;
    v22[1] = v22;
    v22[2] = 0x5002000000LL;
    v22[3] = __Block_byref_object_copy__25_0;
    v22[4] = __Block_byref_object_dispose__26_0;
    v22[5] = &v36;
    v22[6] = 4;
    v23 = 0;
    address = 0;
    size = 0;
    v21[0] = _NSConcreteStackBlock;
    v21[1] = 0x40000000;
    v21[2] = ___ZNK5dyld416JustInTimeLoader11applyFixupsER11DiagnosticsRNS_12RuntimeStateERNS_34DyldCacheDataConstLazyScopedWriterEb_block_invoke_27;
    v21[3] = &unk_96020;
    v21[6] = v4;
    v21[7] = v6;
    v21[4] = v30;
    v21[5] = v22;
    v20[0] = _NSConcreteStackBlock;
    v20[1] = 0x40000000;
    v20[2] = ___ZNK5dyld416JustInTimeLoader11applyFixupsER11DiagnosticsRNS_12RuntimeStateERNS_34DyldCacheDataConstLazyScopedWriterEb_block_invoke_2;
    v20[3] = &unk_96048;
    v20[6] = v4;
    v20[7] = v6;
    v20[4] = v26;
    v20[5] = v22;
    v34[6] = _NSConcreteStackBlock;
    v34[7] = 0x40000000;
    v34[8] = ___ZNK5dyld416JustInTimeLoader17forEachBindTargetER11DiagnosticsRNS_12RuntimeStateEU13block_pointerFvjjRKNS_6Loader14ResolvedSymbolEEbU13block_pointerFvS8_RbESD__block_invoke;
    v34[9] = &unk_960E0;
    v35 = v8;
    v34[14] = v5;
    v34[15] = v6;
    v34[10] = v34;
    v34[11] = v21;
    v34[13] = v4;
    v34[12] = v20;
    dyld3::MachOAnalyzer::withVMLayout(*(_QWORD *)(v4 + 8));
    if ( !Diagnostics::hasError(v12) )
    {
      dyld4::Loader::applyFixupsGeneric((int)v11, (int)v12, v10);
      if ( *(_DWORD *)(*((_QWORD *)v10 + 1) + 68LL) == 1 )
      {
        if ( *((_QWORD *)v10 + 9) )
        {
          v13 = *((dyld3::MachOFile **)v11 + 1);
          if ( (dyld3::MachOFile::inDyldCache(v13) & 1) == 0 )
          {
            v19[0] = _NSConcreteStackBlock;
            v19[1] = 0x40000000;
            v19[2] = ___ZNK5dyld416JustInTimeLoader11applyFixupsER11DiagnosticsRNS_12RuntimeStateERNS_34DyldCacheDataConstLazyScopedWriterEb_block_invoke_3;
            v19[3] = &__block_descriptor_tmp_38_0;
            v19[4] = v13;
            v19[5] = v10;
            dyld3::MachOFile::forEachSupportedPlatform(v13, v19);
          }
        }
      }
      if ( (unsigned int)dyld4::Loader::hasConstantSegmentsToProtect(v11) )
        dyld4::Loader::makeSegmentsReadOnly(v11, v10);
      if ( Diagnostics::noError(v12) )
        *((_QWORD *)v11 + 2) |= 0x20000uLL;
    }
    _Block_object_dispose(v22, 8);
    v23 = 0;
    if ( address )
      vm_deallocate(mach_task_self_, address, size);
    _Block_object_dispose(v26, 8);
    v27 = 0;
    if ( v28 )
      vm_deallocate(mach_task_self_, v28, v29);
    _Block_object_dispose(v30, 8);
    v31 = 0;
    if ( v32 )
      vm_deallocate(mach_task_self_, v32, v33);
  }
}
