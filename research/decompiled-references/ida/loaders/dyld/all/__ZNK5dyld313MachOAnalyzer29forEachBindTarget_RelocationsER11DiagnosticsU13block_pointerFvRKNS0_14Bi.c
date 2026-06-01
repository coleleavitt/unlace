void __fastcall dyld3::MachOAnalyzer::forEachBindTarget_Relocations(_DWORD *a1, Diagnostics *a2, __int64 a3)
{
  __int64 v6; // x8
  _QWORD *v7; // x22
  _QWORD v8[6]; // [xsp+0h] [xbp-120h] BYREF
  _BYTE v9[108]; // [xsp+30h] [xbp-F0h] BYREF
  void **v10; // [xsp+A0h] [xbp-80h] BYREF
  __int64 v11; // [xsp+A8h] [xbp-78h]
  __int64 v12; // [xsp+B0h] [xbp-70h]
  void *v13; // [xsp+B8h] [xbp-68h]
  _QWORD *v14; // [xsp+C0h] [xbp-60h]

  dyld3::MachOLoaded::getLinkEditPointers((__int64)a1, a2, (__int64)v9);
  if ( !Diagnostics::hasError(a2) )
  {
    __chkstk_darwin();
    v7 = &v8[-8 * v6];
    v10 = _NSConcreteStackBlock;
    v11 = 0x40000000;
    v12 = (__int64)___ZNK5dyld313MachOAnalyzer19getAllSegmentsInfosER11DiagnosticsPNS_9MachOFile11SegmentInfoE_block_invoke;
    v13 = &__block_descriptor_tmp_58_2;
    v14 = v7;
    dyld3::MachOFile::forEachSegment(a1, (__int64)&v10);
    if ( !Diagnostics::hasError(a2) )
    {
      v10 = nullptr;
      v11 = (__int64)&v10;
      v12 = 0x2000000000LL;
      LODWORD(v13) = 0;
      v8[0] = _NSConcreteStackBlock;
      v8[1] = 0x40000000;
      v8[2] = ___ZNK5dyld313MachOAnalyzer29forEachBindTarget_RelocationsER11DiagnosticsU13block_pointerFvRKNS0_14BindTargetInfoERbE_block_invoke;
      v8[3] = &unk_98220;
      v8[4] = a3;
      v8[5] = &v10;
      dyld3::MachOAnalyzer::forEachBind_Relocations(a1, a2, v9, v7, 1, v8);
      _Block_object_dispose(&v10, 8);
    }
  }
}
