void __fastcall dyld3::MachOAnalyzer::withVMLayout(dyld3::MachOLoaded *a1, __int64 a2, __int64 a3)
{
  __int64 Slide; // x25
  __int64 v6; // x23
  int v7; // w0
  __int64 v8; // x8
  __int64 *v9; // x24
  __int64 v10; // [xsp+0h] [xbp-360h] BYREF
  __int64 v11; // [xsp+8h] [xbp-358h]
  _QWORD v12[4]; // [xsp+10h] [xbp-350h] BYREF
  int v13; // [xsp+30h] [xbp-330h] BYREF
  __int64 v14; // [xsp+38h] [xbp-328h]
  _QWORD v15[2]; // [xsp+40h] [xbp-320h]
  int v16; // [xsp+50h] [xbp-310h]
  __int64 v17; // [xsp+58h] [xbp-308h]
  _QWORD v18[2]; // [xsp+60h] [xbp-300h]
  int v19; // [xsp+70h] [xbp-2F0h]
  __int64 v20; // [xsp+78h] [xbp-2E8h]
  _QWORD v21[2]; // [xsp+80h] [xbp-2E0h]
  int v22; // [xsp+90h] [xbp-2D0h]
  __int64 v23; // [xsp+98h] [xbp-2C8h]
  _QWORD v24[2]; // [xsp+A0h] [xbp-2C0h]
  int v25; // [xsp+B0h] [xbp-2B0h]
  __int64 v26; // [xsp+B8h] [xbp-2A8h]
  _QWORD v27[2]; // [xsp+C0h] [xbp-2A0h]
  int v28; // [xsp+D0h] [xbp-290h]
  __int64 v29; // [xsp+D8h] [xbp-288h]
  _QWORD v30[2]; // [xsp+E0h] [xbp-280h]
  int v31; // [xsp+F0h] [xbp-270h]
  __int64 v32; // [xsp+F8h] [xbp-268h]
  _QWORD v33[2]; // [xsp+100h] [xbp-260h]
  int v34; // [xsp+110h] [xbp-250h]
  __int64 v35; // [xsp+118h] [xbp-248h]
  _QWORD v36[2]; // [xsp+120h] [xbp-240h]
  int v37; // [xsp+130h] [xbp-230h]
  __int64 v38; // [xsp+138h] [xbp-228h]
  _QWORD v39[2]; // [xsp+140h] [xbp-220h]
  int v40; // [xsp+150h] [xbp-210h]
  __int64 v41; // [xsp+158h] [xbp-208h]
  _QWORD v42[2]; // [xsp+160h] [xbp-200h]
  int v43; // [xsp+170h] [xbp-1F0h]
  __int64 v44; // [xsp+178h] [xbp-1E8h]
  _QWORD v45[2]; // [xsp+180h] [xbp-1E0h]
  int v46; // [xsp+190h] [xbp-1D0h]
  __int64 v47; // [xsp+198h] [xbp-1C8h]
  _QWORD v48[2]; // [xsp+1A0h] [xbp-1C0h]
  int v49; // [xsp+1B0h] [xbp-1B0h]
  __int64 v50; // [xsp+1B8h] [xbp-1A8h]
  _QWORD v51[3]; // [xsp+1C0h] [xbp-1A0h]
  int v52; // [xsp+1D8h] [xbp-188h]
  __int64 v53; // [xsp+1E0h] [xbp-180h]
  _QWORD v54[2]; // [xsp+1E8h] [xbp-178h]
  int v55; // [xsp+1F8h] [xbp-168h]
  __int64 v56; // [xsp+200h] [xbp-160h]
  _QWORD v57[2]; // [xsp+208h] [xbp-158h]
  int v58; // [xsp+218h] [xbp-148h]
  __int64 v59; // [xsp+220h] [xbp-140h]
  _QWORD v60[2]; // [xsp+228h] [xbp-138h]
  int v61; // [xsp+238h] [xbp-128h]
  __int64 v62; // [xsp+240h] [xbp-120h]
  _QWORD v63[2]; // [xsp+248h] [xbp-118h]
  int v64; // [xsp+258h] [xbp-108h]
  __int64 v65; // [xsp+260h] [xbp-100h]
  _QWORD v66[2]; // [xsp+268h] [xbp-F8h]
  int v67; // [xsp+278h] [xbp-E8h]
  __int16 v68; // [xsp+27Ch] [xbp-E4h]
  _QWORD v69[8]; // [xsp+280h] [xbp-E0h] BYREF
  __int64 v70; // [xsp+2C0h] [xbp-A0h] BYREF
  __int64 *v71; // [xsp+2C8h] [xbp-98h]
  __int64 v72; // [xsp+2D0h] [xbp-90h]
  __int64 v73; // [xsp+2D8h] [xbp-88h]
  __int64 v74; // [xsp+2E0h] [xbp-80h] BYREF
  __int64 *v75; // [xsp+2E8h] [xbp-78h]
  __int64 v76; // [xsp+2F0h] [xbp-70h]
  __int64 v77; // [xsp+2F8h] [xbp-68h]

  v11 = a2;
  Slide = dyld3::MachOLoaded::getSlide(a1);
  v74 = 0;
  v75 = &v74;
  v76 = 0x2000000000LL;
  v77 = 0;
  v70 = 0;
  v71 = &v70;
  v72 = 0x2000000000LL;
  v73 = 0;
  v6 = (unsigned int)dyld3::MachOFile::segmentCount(a1);
  v7 = __chkstk_darwin();
  v9 = &v10 - 2 * v8;
  if ( v7 )
    __bzero(v9, 48 * ((48 * v6 - 48) / 0x30uLL) + 48);
  v69[0] = _NSConcreteStackBlock;
  v69[1] = 0x40000000;
  v69[2] = ___ZNK5dyld313MachOAnalyzer12withVMLayoutER11DiagnosticsU13block_pointerFvRKN6mach_o6LayoutEE_block_invoke;
  v69[3] = &unk_98380;
  v69[4] = &v74;
  v69[5] = &v70;
  v69[6] = Slide;
  v69[7] = v9;
  dyld3::MachOFile::forEachSegment(a1, (__int64)v69);
  v13 = 0;
  v14 = 0;
  v15[0] = 0;
  *(_QWORD *)((char *)v15 + 5) = 0;
  v16 = 0;
  v17 = 0;
  v18[0] = 0;
  *(_QWORD *)((char *)v18 + 5) = 0;
  v19 = 0;
  v20 = 0;
  v21[0] = 0;
  *(_QWORD *)((char *)v21 + 5) = 0;
  v22 = 0;
  v23 = 0;
  v24[0] = 0;
  *(_QWORD *)((char *)v24 + 5) = 0;
  v25 = 0;
  v26 = 0;
  v27[0] = 0;
  *(_QWORD *)((char *)v27 + 5) = 0;
  v28 = 0;
  v29 = 0;
  v30[0] = 0;
  *(_QWORD *)((char *)v30 + 5) = 0;
  v31 = 0;
  v32 = 0;
  v33[0] = 0;
  *(_QWORD *)((char *)v33 + 5) = 0;
  v34 = 0;
  v35 = 0;
  v36[0] = 0;
  *(_QWORD *)((char *)v36 + 5) = 0;
  v37 = 0;
  *(_QWORD *)((char *)v39 + 5) = 0;
  v38 = 0;
  v39[0] = 0;
  v40 = 0;
  *(_QWORD *)((char *)v42 + 5) = 0;
  v41 = 0;
  v42[0] = 0;
  v43 = 0;
  *(_QWORD *)((char *)v45 + 5) = 0;
  v44 = 0;
  v45[0] = 0;
  v46 = 0;
  *(_QWORD *)((char *)v48 + 5) = 0;
  v47 = 0;
  v48[0] = 0;
  v49 = 0;
  *(_QWORD *)((char *)v51 + 5) = 0;
  v50 = 0;
  v51[0] = 0;
  v51[2] = 0;
  v52 = 0;
  *(_QWORD *)((char *)v54 + 5) = 0;
  v53 = 0;
  v54[0] = 0;
  v55 = 0;
  *(_QWORD *)((char *)v57 + 5) = 0;
  v57[0] = 0;
  v56 = 0;
  v58 = 0;
  *(_QWORD *)((char *)v60 + 5) = 0;
  v60[0] = 0;
  v59 = 0;
  v61 = 0;
  *(_QWORD *)((char *)v63 + 5) = 0;
  v63[0] = 0;
  v62 = 0;
  v64 = 0;
  *(_QWORD *)((char *)v66 + 5) = 0;
  v66[0] = 0;
  v65 = 0;
  v67 = 0;
  v68 = 0;
  dyld3::MachOAnalyzer::getLinkeditLayout(a1, v11, v75[3], v71[3], &v13);
  mach_o::Layout::Layout(v12, (__int64)a1, (__int64)v9, v6, (__int64)&v13);
  (*(void (__fastcall **)(__int64, _QWORD *))(a3 + 16))(a3, v12);
  _Block_object_dispose(&v70, 8);
  _Block_object_dispose(&v74, 8);
}
