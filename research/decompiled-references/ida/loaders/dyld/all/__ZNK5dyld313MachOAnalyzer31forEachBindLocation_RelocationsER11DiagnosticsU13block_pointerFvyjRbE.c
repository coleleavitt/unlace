void __fastcall dyld3::MachOAnalyzer::forEachBindLocation_Relocations(
        dyld3::MachOFile *a1,
        Diagnostics *a2,
        __int64 a3)
{
  __int64 v6; // x8
  _QWORD *v7; // x23
  _QWORD v8[6]; // [xsp+0h] [xbp-190h] BYREF
  __int128 v9; // [xsp+30h] [xbp-160h]
  __int128 v10; // [xsp+40h] [xbp-150h]
  __int128 v11; // [xsp+50h] [xbp-140h]
  __int128 v12; // [xsp+60h] [xbp-130h]
  __int128 v13; // [xsp+70h] [xbp-120h]
  __int128 v14; // [xsp+80h] [xbp-110h]
  __int128 v15; // [xsp+90h] [xbp-100h]
  _OWORD v16[7]; // [xsp+A0h] [xbp-F0h] BYREF
  void **v17; // [xsp+110h] [xbp-80h] BYREF
  __int64 v18; // [xsp+118h] [xbp-78h]
  __int64 v19; // [xsp+120h] [xbp-70h]
  void *v20; // [xsp+128h] [xbp-68h]
  _QWORD *v21; // [xsp+130h] [xbp-60h]

  dyld3::MachOLoaded::getLinkEditPointers((__int64)a1, a2, (__int64)v16);
  if ( !Diagnostics::hasError(a2) )
  {
    __chkstk_darwin();
    v7 = &v8[-8 * v6];
    v17 = _NSConcreteStackBlock;
    v18 = 0x40000000;
    v19 = (__int64)___ZNK5dyld313MachOAnalyzer19getAllSegmentsInfosER11DiagnosticsPNS_9MachOFile11SegmentInfoE_block_invoke;
    v20 = &__block_descriptor_tmp_58_2;
    v21 = v7;
    dyld3::MachOFile::forEachSegment(a1, (__int64)&v17);
    if ( !Diagnostics::hasError(a2) )
    {
      v17 = nullptr;
      v18 = (__int64)&v17;
      v19 = 0x2000000000LL;
      LODWORD(v20) = -1;
      v8[0] = _NSConcreteStackBlock;
      v8[1] = 0x40000000;
      v8[2] = ___ZNK5dyld313MachOAnalyzer31forEachBindLocation_RelocationsER11DiagnosticsU13block_pointerFvyjRbE_block_invoke;
      v8[3] = &unk_98248;
      v13 = v16[4];
      v14 = v16[5];
      v15 = v16[6];
      v9 = v16[0];
      v10 = v16[1];
      v11 = v16[2];
      v12 = v16[3];
      v8[4] = a3;
      v8[5] = &v17;
      dyld3::MachOAnalyzer::forEachBind_Relocations(a1, a2, (__int64)v16, (__int64)v7, 0, (__int64)v8);
      _Block_object_dispose(&v17, 8);
    }
  }
}
