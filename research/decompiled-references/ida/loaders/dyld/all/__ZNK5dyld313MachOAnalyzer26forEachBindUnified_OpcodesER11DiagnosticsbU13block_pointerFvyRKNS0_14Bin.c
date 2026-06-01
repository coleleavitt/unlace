void __fastcall dyld3::MachOAnalyzer::forEachBindUnified_Opcodes(
        _DWORD *a1,
        Diagnostics *a2,
        char a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v10; // x8
  __int64 (__fastcall *v11)(); // x23
  char v12; // w24
  _QWORD v14[8]; // [xsp+8h] [xbp-2B8h] BYREF
  __int128 v15; // [xsp+48h] [xbp-278h]
  __int128 v16; // [xsp+58h] [xbp-268h]
  __int128 v17; // [xsp+68h] [xbp-258h]
  __int128 v18; // [xsp+78h] [xbp-248h]
  __int128 v19; // [xsp+88h] [xbp-238h]
  __int128 v20; // [xsp+98h] [xbp-228h]
  __int128 v21; // [xsp+A8h] [xbp-218h]
  _QWORD v22[7]; // [xsp+B8h] [xbp-208h] BYREF
  __int128 v23; // [xsp+F0h] [xbp-1D0h]
  __int128 v24; // [xsp+100h] [xbp-1C0h]
  __int128 v25; // [xsp+110h] [xbp-1B0h]
  __int128 v26; // [xsp+120h] [xbp-1A0h]
  __int128 v27; // [xsp+130h] [xbp-190h]
  __int128 v28; // [xsp+140h] [xbp-180h]
  __int128 v29; // [xsp+150h] [xbp-170h]
  char v30; // [xsp+160h] [xbp-160h]
  void **v31; // [xsp+168h] [xbp-158h] BYREF
  __int64 v32; // [xsp+170h] [xbp-150h]
  __int64 v33; // [xsp+178h] [xbp-148h]
  __int64 (__fastcall *v34)(); // [xsp+180h] [xbp-140h]
  __int64 (__fastcall *v35)(); // [xsp+188h] [xbp-138h]
  __int64 v36; // [xsp+1B0h] [xbp-110h] BYREF
  __int64 *v37; // [xsp+1B8h] [xbp-108h]
  __int64 v38; // [xsp+1C0h] [xbp-100h]
  int v39; // [xsp+1C8h] [xbp-F8h]
  __int128 v40; // [xsp+1D0h] [xbp-F0h] BYREF
  __int128 v41; // [xsp+1E0h] [xbp-E0h]
  __int128 v42; // [xsp+1F0h] [xbp-D0h]
  __int128 v43; // [xsp+200h] [xbp-C0h]
  __int128 v44; // [xsp+210h] [xbp-B0h]
  __int128 v45; // [xsp+220h] [xbp-A0h]
  __int128 v46; // [xsp+230h] [xbp-90h]

  dyld3::MachOLoaded::getLinkEditPointers((__int64)a1, a2, (__int64)&v40);
  if ( !Diagnostics::hasError(a2) )
  {
    __chkstk_darwin();
    v11 = (__int64 (__fastcall *)())&v14[-8 * v10 - 1];
    v31 = _NSConcreteStackBlock;
    v32 = 0x40000000;
    v33 = (__int64)___ZNK5dyld313MachOAnalyzer19getAllSegmentsInfosER11DiagnosticsPNS_9MachOFile11SegmentInfoE_block_invoke;
    v34 = (__int64 (__fastcall *)())&__block_descriptor_tmp_58_2;
    v35 = v11;
    dyld3::MachOFile::forEachSegment(a1, (__int64)&v31);
    if ( !Diagnostics::hasError(a2) )
    {
      v36 = 0;
      v37 = &v36;
      v38 = 0x2000000000LL;
      v39 = 0;
      v31 = nullptr;
      v32 = (__int64)&v31;
      v33 = 0x4802000000LL;
      v34 = __Block_byref_object_copy__272;
      v35 = __Block_byref_object_dispose__273;
      v22[0] = _NSConcreteStackBlock;
      v22[1] = 0x40000000;
      v22[2] = ___ZNK5dyld313MachOAnalyzer26forEachBindUnified_OpcodesER11DiagnosticsbU13block_pointerFvyRKNS0_14BindTargetInfoERbES8__block_invoke;
      v22[3] = &unk_980F0;
      v25 = v42;
      v24 = v41;
      v23 = v40;
      v29 = v46;
      v28 = v45;
      v27 = v44;
      v26 = v43;
      v22[5] = &v31;
      v22[6] = &v36;
      v30 = a3;
      v22[4] = a4;
      if ( (dyld3::MachOAnalyzer::forEachBind_OpcodesRegular(a1, a2, &v40, v11, v22) & 1) == 0 )
      {
        v12 = dyld3::MachOAnalyzer::forEachBind_OpcodesLazy(a1, a2, &v40, v11, v22);
        _Block_object_dispose(&v31, 8);
        _Block_object_dispose(&v36, 8);
        if ( (v12 & 1) != 0 )
          return;
        v36 = 0;
        v37 = &v36;
        v38 = 0x2000000000LL;
        v39 = 0;
        v31 = nullptr;
        v32 = (__int64)&v31;
        v33 = 0x4802000000LL;
        v34 = __Block_byref_object_copy__272;
        v35 = __Block_byref_object_dispose__273;
        v14[0] = _NSConcreteStackBlock;
        v14[1] = 0x40000000;
        v14[2] = ___ZNK5dyld313MachOAnalyzer26forEachBindUnified_OpcodesER11DiagnosticsbU13block_pointerFvyRKNS0_14BindTargetInfoERbES8__block_invoke_2;
        v14[3] = &unk_98118;
        v16 = v41;
        v15 = v40;
        v21 = v46;
        v20 = v45;
        v19 = v44;
        v17 = v42;
        v18 = v43;
        v14[6] = &v36;
        v14[7] = v11;
        v14[4] = a5;
        v14[5] = &v31;
        dyld3::MachOAnalyzer::forEachBind_OpcodesWeak(a1, a2, &v40, v11, v14, &__block_literal_global_279);
      }
      _Block_object_dispose(&v31, 8);
      _Block_object_dispose(&v36, 8);
    }
  }
}
