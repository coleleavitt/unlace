__int64 __fastcall dyld3::MachOAnalyzer::forEachRebaseLocation_Opcodes(_DWORD *a1, Diagnostics *a2, __int64 a3)
{
  __int64 v7; // x8
  _QWORD *v8; // x23
  _QWORD v10[5]; // [xsp+8h] [xbp-188h] BYREF
  __int128 v11; // [xsp+30h] [xbp-160h]
  __int128 v12; // [xsp+40h] [xbp-150h]
  __int128 v13; // [xsp+50h] [xbp-140h]
  __int128 v14; // [xsp+60h] [xbp-130h]
  __int128 v15; // [xsp+70h] [xbp-120h]
  __int128 v16; // [xsp+80h] [xbp-110h]
  __int128 v17; // [xsp+90h] [xbp-100h]
  _OWORD v18[7]; // [xsp+A0h] [xbp-F0h] BYREF
  _QWORD v19[5]; // [xsp+110h] [xbp-80h] BYREF

  dyld3::MachOLoaded::getLinkEditPointers((__int64)a1, a2, (__int64)v18);
  if ( Diagnostics::hasError(a2) )
    return 0;
  __chkstk_darwin();
  v8 = &v10[-8 * v7 - 1];
  v19[0] = _NSConcreteStackBlock;
  v19[1] = 0x40000000;
  v19[2] = ___ZNK5dyld313MachOAnalyzer19getAllSegmentsInfosER11DiagnosticsPNS_9MachOFile11SegmentInfoE_block_invoke;
  v19[3] = &__block_descriptor_tmp_58_2;
  v19[4] = v8;
  dyld3::MachOFile::forEachSegment(a1, (__int64)v19);
  if ( Diagnostics::hasError(a2) )
    return 0;
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 0x40000000;
  v10[2] = ___ZNK5dyld313MachOAnalyzer29forEachRebaseLocation_OpcodesER11DiagnosticsU13block_pointerFvyRbE_block_invoke;
  v10[3] = &unk_982E8;
  v14 = v18[3];
  v15 = v18[4];
  v16 = v18[5];
  v17 = v18[6];
  v11 = v18[0];
  v12 = v18[1];
  v13 = v18[2];
  v10[4] = a3;
  return dyld3::MachOAnalyzer::forEachRebase_Opcodes(a1, a2, v18, v8, v10);
}
