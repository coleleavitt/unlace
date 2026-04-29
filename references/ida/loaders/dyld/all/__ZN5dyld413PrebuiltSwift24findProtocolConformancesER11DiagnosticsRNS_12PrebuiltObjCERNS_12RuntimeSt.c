bool __fastcall dyld4::PrebuiltSwift::findProtocolConformances(
        dyld4::PrebuiltSwift *this,
        Diagnostics *a2,
        dyld4::PrebuiltObjC *a3,
        dyld4::RuntimeState *a4)
{
  _QWORD *v6; // x9
  bool v7; // zf
  __int64 v9; // x8
  dyld4::Loader **v10; // x19
  __int64 v11; // x28
  dyld4::Loader **v12; // x23
  dyld4::Loader *v13; // x24
  dyld3::MachOFile *v14; // x25
  __int64 Address; // x26
  dyld3::MachOFile *v16; // x27
  int v17; // w0
  const dyld3::MachOAnalyzer *v18; // x0
  __int64 v19; // [xsp+40h] [xbp-1E0h]
  __int64 v20; // [xsp+48h] [xbp-1D8h]
  _QWORD v23[16]; // [xsp+60h] [xbp-1C0h] BYREF
  char v24; // [xsp+E0h] [xbp-140h]
  _BYTE v25[7]; // [xsp+E1h] [xbp-13Fh]
  __int64 v26; // [xsp+E8h] [xbp-138h] BYREF
  __int64 *v27; // [xsp+F0h] [xbp-130h]
  __int64 v28; // [xsp+F8h] [xbp-128h]
  __int64 (__fastcall *v29)(); // [xsp+100h] [xbp-120h]
  __int64 (__fastcall *v30)(); // [xsp+108h] [xbp-118h]
  __int64 v31; // [xsp+110h] [xbp-110h] BYREF
  _QWORD v32[8]; // [xsp+130h] [xbp-F0h] BYREF
  int v33; // [xsp+170h] [xbp-B0h]
  _QWORD v34[6]; // [xsp+178h] [xbp-A8h] BYREF
  int v35; // [xsp+1A8h] [xbp-78h]
  _DWORD v36[3]; // [xsp+1B1h] [xbp-6Fh]

  if ( !*((_QWORD *)a3 + 2) )
  {
    Diagnostics::error(
      a2,
      "Skipped optimizing Swift protocols due to missing objc class optimisations from the on-disk binary");
    return 0;
  }
  v6 = *((_QWORD **)a4 + 1);
  v20 = v6[32];
  if ( !v20 )
  {
    Diagnostics::error(a2, "Skipped optimizing Swift protocols due to missing objc class optimisations");
    return 0;
  }
  if ( v6[29] )
    v7 = v6[30] == 0;
  else
    v7 = 1;
  if ( v7 )
  {
    Diagnostics::error(a2, "Skipped optimizing Swift protocols due to missing objc header infos");
    return 0;
  }
  v9 = *((_QWORD *)a4 + 6);
  if ( v9 )
  {
    v19 = v6[27];
    v10 = *((dyld4::Loader ***)a4 + 5);
    v11 = 8 * v9;
    v12 = v10;
    do
    {
      if ( (*((_WORD *)*v12 + 2) & 1) == 0 )
      {
        v13 = *v12;
        v14 = (dyld3::MachOFile *)dyld4::Loader::mf(*v12, a4);
        Address = dyld3::MachOFile::preferredLoadAddress(v14);
        v16 = (dyld3::MachOFile *)dyld4::Loader::analyzer(v13, a4);
        v17 = dyld3::MachOFile::pointerSize(v16);
        v34[0] = _NSConcreteStackBlock;
        v34[1] = 0x40000000;
        v34[2] = ___ZN5dyld413PrebuiltSwift24findProtocolConformancesER11DiagnosticsRNS_12PrebuiltObjCERNS_12RuntimeStateE_block_invoke;
        v34[3] = &__block_descriptor_tmp_3;
        v35 = v17;
        v34[4] = Address;
        v34[5] = v16;
        v32[0] = _NSConcreteStackBlock;
        v32[1] = 0x40000000;
        v32[2] = ___ZN5dyld413PrebuiltSwift24findProtocolConformancesER11DiagnosticsRNS_12PrebuiltObjCERNS_12RuntimeStateE_block_invoke_2;
        v32[3] = &__block_descriptor_tmp_5;
        v32[4] = Address;
        v32[5] = v13;
        v33 = v17;
        v32[6] = v16;
        v32[7] = a4;
        v26 = 0;
        v27 = &v26;
        v28 = 0x4802000000LL;
        v29 = __Block_byref_object_copy__2;
        v30 = __Block_byref_object_dispose__2;
        v18 = (const dyld3::MachOAnalyzer *)dyld4::Loader::analyzer(v13, a4);
        metadata_visitor::Visitor::Visitor((metadata_visitor::Visitor *)&v31, v18);
        v23[0] = _NSConcreteStackBlock;
        v23[1] = 0x40000000;
        v23[2] = ___ZN5dyld413PrebuiltSwift24findProtocolConformancesER11DiagnosticsRNS_12PrebuiltObjCERNS_12RuntimeStateE_block_invoke_6;
        v23[3] = &unk_95A48;
        v23[8] = v14;
        v23[9] = a2;
        v23[6] = &v26;
        v23[7] = this;
        v23[4] = v34;
        v23[5] = v32;
        v23[10] = Address;
        v23[11] = v13;
        v23[12] = a4;
        v23[13] = a3;
        v23[14] = v20;
        v23[15] = v19;
        v24 = 1;
        *(_DWORD *)&v25[3] = *(_DWORD *)((char *)v36 + 3);
        *(_DWORD *)v25 = v36[0];
        metadata_visitor::SwiftVisitor::forEachProtocolConformance(
          (metadata_visitor::SwiftVisitor *)(v27 + 5),
          (__int64)v23);
        _Block_object_dispose(&v26, 8);
      }
      ++v12;
      ++v10;
      v11 -= 8;
    }
    while ( v11 );
  }
  return !Diagnostics::hasError(a2);
}
