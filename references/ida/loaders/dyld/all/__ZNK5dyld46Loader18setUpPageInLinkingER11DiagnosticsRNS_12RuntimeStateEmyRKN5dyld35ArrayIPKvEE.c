void __fastcall dyld4::Loader::setUpPageInLinking(
        dyld4::Loader *a1,
        Diagnostics *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  dyld4::SyscallDelegate *v12; // x24
  dyld3 *v13; // x0
  int v14; // w0
  int v15; // w24
  int *v16; // x0
  char v18; // w27
  const char *v19; // x20
  int *v20; // x0
  dyld3::MachOAnalyzer *v21; // x26
  __int64 v22; // x0
  _QWORD v23[15]; // [xsp+20h] [xbp-4D0h] BYREF
  int v24; // [xsp+98h] [xbp-458h]
  char v25; // [xsp+9Ch] [xbp-454h]
  _QWORD v26[7]; // [xsp+A0h] [xbp-450h] BYREF
  __int64 v27; // [xsp+D8h] [xbp-418h]
  vm_address_t address; // [xsp+E0h] [xbp-410h]
  vm_size_t size; // [xsp+E8h] [xbp-408h]
  _QWORD v30[7]; // [xsp+F0h] [xbp-400h] BYREF
  __int64 v31; // [xsp+128h] [xbp-3C8h]
  vm_address_t v32; // [xsp+130h] [xbp-3C0h]
  vm_size_t v33; // [xsp+138h] [xbp-3B8h]
  _QWORD v34[3]; // [xsp+140h] [xbp-3B0h] BYREF
  __int16 v35; // [xsp+158h] [xbp-398h]
  _QWORD v36[3]; // [xsp+160h] [xbp-390h] BYREF
  __int16 v37; // [xsp+178h] [xbp-378h]
  char v38; // [xsp+180h] [xbp-370h] BYREF
  char v39; // [xsp+308h] [xbp-1E8h] BYREF

  v12 = *(dyld4::SyscallDelegate **)(a3 + 8);
  v13 = (dyld3 *)dyld4::Loader::path(a1);
  v14 = dyld4::SyscallDelegate::open(v12, v13, nullptr, 0);
  if ( v14 == -1 )
  {
    v19 = (const char *)dyld4::Loader::path(a1);
    v20 = __error();
    Diagnostics::error(a2, "open(\"%s\", O_RDONLY) failed with errno=%d", v19, *v20);
  }
  else
  {
    v15 = v14;
    v16 = *(int **)(a3 + 8);
    if ( v16[41] >= 2 && *(_QWORD *)(a3 + 120) == 0 )
      v18 = dyld4::SyscallDelegate::sandboxBlockedPageInLinking((dyld4::SyscallDelegate *)v16) ^ 1;
    else
      v18 = 0;
    v21 = (dyld3::MachOAnalyzer *)dyld4::Loader::loadAddress(a1, (dyld4::RuntimeState *)a3);
    v36[0] = 0;
    v36[1] = v36;
    v36[2] = 0x2000000000LL;
    v37 = 0;
    v34[0] = 0;
    v34[1] = v34;
    v34[2] = 0x2000000000LL;
    v35 = 0;
    v30[0] = 0;
    v30[1] = v30;
    v30[2] = 0x5002000000LL;
    v30[3] = __Block_byref_object_copy__3;
    v30[4] = __Block_byref_object_dispose__3;
    v30[5] = &v39;
    v30[6] = 8;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v26[0] = 0;
    v26[1] = v26;
    v26[2] = 0x5002000000LL;
    v26[3] = __Block_byref_object_copy__3;
    v26[4] = __Block_byref_object_dispose__3;
    v26[5] = &v38;
    v26[6] = 8;
    v27 = 0;
    address = 0;
    size = 0;
    v22 = dyld3::MachOAnalyzer::chainStartsOffset(v21);
    v23[0] = _NSConcreteStackBlock;
    v23[1] = 0x40000000;
    v23[2] = ___ZNK5dyld46Loader18setUpPageInLinkingER11DiagnosticsRNS_12RuntimeStateEmyRKN5dyld35ArrayIPKvEE_block_invoke;
    v23[3] = &unk_95B38;
    v23[8] = a1;
    v23[9] = v21;
    v23[4] = v36;
    v23[5] = v34;
    v24 = v15;
    v23[10] = a2;
    v23[11] = a5;
    v25 = v18;
    v23[6] = v30;
    v23[7] = v26;
    v23[12] = a4;
    v23[13] = a3;
    v23[14] = a6;
    dyld3::MachOAnalyzer::withChainStarts(v21, a2, v22, (__int64)v23);
    dyld4::SyscallDelegate::close(*(dyld4::SyscallDelegate **)(a3 + 8), v15);
    _Block_object_dispose(v26, 8);
    v27 = 0;
    if ( address )
      vm_deallocate(mach_task_self_, address, size);
    _Block_object_dispose(v30, 8);
    v31 = 0;
    if ( v32 )
      vm_deallocate(mach_task_self_, v32, v33);
    _Block_object_dispose(v34, 8);
    _Block_object_dispose(v36, 8);
  }
}
