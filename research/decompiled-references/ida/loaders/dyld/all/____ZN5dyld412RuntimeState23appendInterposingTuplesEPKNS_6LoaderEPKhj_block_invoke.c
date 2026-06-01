void __fastcall ___ZN5dyld412RuntimeState23appendInterposingTuplesEPKNS_6LoaderEPKhj_block_invoke(_QWORD *a1)
{
  __int64 v2; // x8
  __int64 v3; // x0
  __int64 v4; // x9
  Diagnostics *v5; // x1
  __int64 v6; // x10
  _QWORD v7[10]; // [xsp+68h] [xbp-948h] BYREF
  _QWORD v8[7]; // [xsp+B8h] [xbp-8F8h] BYREF
  __int64 v9; // [xsp+F0h] [xbp-8C0h]
  vm_address_t address; // [xsp+F8h] [xbp-8B8h]
  vm_size_t size; // [xsp+100h] [xbp-8B0h]
  _QWORD v12[7]; // [xsp+108h] [xbp-8A8h] BYREF
  __int64 v13; // [xsp+140h] [xbp-870h]
  vm_address_t v14; // [xsp+148h] [xbp-868h]
  vm_size_t v15; // [xsp+150h] [xbp-860h]
  char v16; // [xsp+158h] [xbp-858h] BYREF
  char v17; // [xsp+560h] [xbp-450h] BYREF

  v2 = a1[7];
  v12[0] = 0;
  v12[1] = v12;
  v12[2] = 0x5002000000LL;
  v12[3] = __Block_byref_object_copy__25;
  v12[4] = __Block_byref_object_dispose__26;
  v12[5] = &v17;
  v12[6] = 128;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v8[0] = 0;
  v8[1] = v8;
  v8[2] = 0x5002000000LL;
  v8[3] = __Block_byref_object_copy__27_0;
  v8[4] = __Block_byref_object_dispose__28_0;
  v8[5] = &v16;
  v8[6] = 128;
  v9 = 0;
  address = 0;
  size = 0;
  v3 = a1[8];
  v4 = a1[4];
  v5 = (Diagnostics *)(*(_QWORD *)(v4 + 8) + 40LL);
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 0x40000000;
  v7[2] = ___ZN5dyld412RuntimeState23appendInterposingTuplesEPKNS_6LoaderEPKhj_block_invoke_29;
  v7[3] = &unk_956B8;
  v6 = a1[9];
  v7[8] = v2;
  v7[9] = v6;
  v7[4] = v4;
  v7[5] = v12;
  v7[6] = a1[5];
  v7[7] = v8;
  dyld3::MachOAnalyzer::forEachChainedFixupTarget(v3, v5, (__int64)v7);
  if ( !Diagnostics::hasError((Diagnostics *)(*(_QWORD *)(a1[4] + 8LL) + 40LL)) )
  {
    dyld3::MachOFile::preferredLoadAddress((dyld3::MachOFile *)a1[8]);
    dyld3::MachOLoaded::forEachFixupInAllChains(a1[8], *(_DWORD *)(a1[4] + 8LL) + 40);
  }
  _Block_object_dispose(v8, 8);
  v9 = 0;
  if ( address )
    vm_deallocate(mach_task_self_, address, size);
  _Block_object_dispose(v12, 8);
  v13 = 0;
  if ( v14 )
    vm_deallocate(mach_task_self_, v14, v15);
}
