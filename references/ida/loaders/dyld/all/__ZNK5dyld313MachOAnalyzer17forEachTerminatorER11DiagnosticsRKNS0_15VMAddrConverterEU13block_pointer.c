void __fastcall dyld3::MachOAnalyzer::forEachTerminator(dyld3::MachOFile *a1, Diagnostics *a2)
{
  _QWORD v4[5]; // [xsp+60h] [xbp-E0h] BYREF
  __int64 v5; // [xsp+88h] [xbp-B8h] BYREF
  __int64 *v6; // [xsp+90h] [xbp-B0h]
  __int64 v7; // [xsp+98h] [xbp-A8h]
  double (__fastcall *v8)(__int64, __int64); // [xsp+A0h] [xbp-A0h]
  _QWORD *(__fastcall *v9)(_QWORD *); // [xsp+A8h] [xbp-98h]
  _QWORD v10[5]; // [xsp+B0h] [xbp-90h] BYREF
  __int64 v11; // [xsp+D8h] [xbp-68h]
  vm_address_t address; // [xsp+E0h] [xbp-60h]
  vm_size_t size; // [xsp+E8h] [xbp-58h]

  v5 = 0;
  v6 = &v5;
  v7 = 0x6802000000LL;
  v8 = __Block_byref_object_copy__13;
  v9 = __Block_byref_object_dispose__13;
  v10[3] = v10;
  v10[4] = 1;
  v11 = 0;
  address = 0;
  size = 0;
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 0x40000000;
  v4[2] = ___ZNK5dyld313MachOAnalyzer17forEachTerminatorER11DiagnosticsRKNS0_15VMAddrConverterEU13block_pointerFvjE_block_invoke;
  v4[3] = &unk_97F60;
  v4[4] = &v5;
  dyld3::MachOFile::forEachSegment(a1, (__int64)v4);
  if ( v6[10] )
  {
    dyld3::MachOFile::preferredLoadAddress(a1);
    dyld3::MachOLoaded::getSlide(a1);
    dyld3::MachOFile::pointerSize(a1);
    dyld3::MachOFile::forEachSection((int)a1);
  }
  else
  {
    Diagnostics::error(a2, "no exeutable segments");
  }
  _Block_object_dispose(&v5, 8);
  v11 = 0;
  if ( address )
    vm_deallocate(mach_task_self_, address, size);
}
