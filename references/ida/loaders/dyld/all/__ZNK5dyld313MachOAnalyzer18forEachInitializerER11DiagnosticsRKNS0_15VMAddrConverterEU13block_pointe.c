void __fastcall dyld3::MachOAnalyzer::forEachInitializer(dyld3::MachOFile *a1, Diagnostics *a2, __int64 a3, __int64 a4)
{
  __int64 Address; // x23
  _QWORD v9[10]; // [xsp+48h] [xbp-178h] BYREF
  int v10; // [xsp+98h] [xbp-128h]
  _QWORD v11[8]; // [xsp+A0h] [xbp-120h] BYREF
  _QWORD v12[5]; // [xsp+E0h] [xbp-E0h] BYREF
  __int64 v13; // [xsp+108h] [xbp-B8h] BYREF
  __int64 *v14; // [xsp+110h] [xbp-B0h]
  __int64 v15; // [xsp+118h] [xbp-A8h]
  __int64 (__fastcall *v16)(); // [xsp+120h] [xbp-A0h]
  __int64 (__fastcall *v17)(); // [xsp+128h] [xbp-98h]
  _QWORD v18[5]; // [xsp+130h] [xbp-90h] BYREF
  __int64 v19; // [xsp+158h] [xbp-68h]
  vm_address_t v20; // [xsp+160h] [xbp-60h]
  vm_size_t v21; // [xsp+168h] [xbp-58h]

  v13 = 0;
  v14 = &v13;
  v15 = 0x6802000000LL;
  v16 = __Block_byref_object_copy__13;
  v17 = __Block_byref_object_dispose__13;
  v18[3] = v18;
  v18[4] = 1;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v12[0] = _NSConcreteStackBlock;
  v12[1] = 0x40000000;
  v12[2] = ___ZNK5dyld313MachOAnalyzer18forEachInitializerER11DiagnosticsRKNS0_15VMAddrConverterEU13block_pointerFvjEPKv_block_invoke;
  v12[3] = &unk_97EC0;
  v12[4] = &v13;
  dyld3::MachOFile::forEachSegment(a1, (__int64)v12);
  if ( v14[10] )
  {
    Address = dyld3::MachOFile::preferredLoadAddress(a1);
    dyld3::MachOLoaded::getSlide(a1);
    v11[0] = _NSConcreteStackBlock;
    v11[1] = 0x40000000;
    v11[2] = ___ZNK5dyld313MachOAnalyzer18forEachInitializerER11DiagnosticsRKNS0_15VMAddrConverterEU13block_pointerFvjEPKv_block_invoke_2;
    v11[3] = &unk_97EE8;
    v11[4] = a4;
    v11[5] = &v13;
    v11[6] = Address;
    v11[7] = a2;
    dyld3::MachOFile::forEachLoadCommand(a1, a2, (__int64)v11);
    v9[0] = _NSConcreteStackBlock;
    v9[1] = 0x40000000;
    v9[2] = ___ZNK5dyld313MachOAnalyzer18forEachInitializerER11DiagnosticsRKNS0_15VMAddrConverterEU13block_pointerFvjEPKv_block_invoke_3;
    v9[3] = &unk_97F10;
    v10 = dyld3::MachOFile::pointerSize(a1);
    v9[6] = a1;
    v9[7] = a3;
    v9[4] = a4;
    v9[5] = &v13;
    v9[8] = a2;
    v9[9] = Address;
    dyld3::MachOFile::forEachInitializerPointerSection(a1, a2, v9);
    dyld3::MachOFile::forEachSection((int)a1);
  }
  else
  {
    Diagnostics::error(a2, "no exeutable segments");
  }
  _Block_object_dispose(&v13, 8);
  v19 = 0;
  if ( v20 )
    vm_deallocate(mach_task_self_, v20, v21);
}
