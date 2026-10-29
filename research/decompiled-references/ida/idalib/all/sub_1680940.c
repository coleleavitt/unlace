_QWORD *__fastcall sub_1680940(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  bool v31; // zf
  void *v32; // rdx
  __int64 v33; // rdx
  void *v35[2]; // [rsp+8h] [rbp-4C8h] BYREF
  _QWORD *v36; // [rsp+18h] [rbp-4B8h]
  void *v37[2]; // [rsp+28h] [rbp-4A8h] BYREF
  _QWORD *v38; // [rsp+38h] [rbp-498h]
  void *v39[2]; // [rsp+48h] [rbp-488h] BYREF
  _QWORD *v40; // [rsp+58h] [rbp-478h]
  void *v41[2]; // [rsp+68h] [rbp-468h] BYREF
  _QWORD *v42; // [rsp+78h] [rbp-458h]
  void *v43[2]; // [rsp+88h] [rbp-448h] BYREF
  _QWORD *v44; // [rsp+98h] [rbp-438h]
  void *v45[2]; // [rsp+A8h] [rbp-428h] BYREF
  _QWORD *v46; // [rsp+B8h] [rbp-418h]
  void *v47[2]; // [rsp+C8h] [rbp-408h] BYREF
  _QWORD *v48; // [rsp+D8h] [rbp-3F8h]
  void *v49[2]; // [rsp+E8h] [rbp-3E8h] BYREF
  _QWORD *v50; // [rsp+F8h] [rbp-3D8h]
  void *v51[2]; // [rsp+108h] [rbp-3C8h] BYREF
  _QWORD *v52; // [rsp+118h] [rbp-3B8h]
  void *v53[2]; // [rsp+128h] [rbp-3A8h] BYREF
  _QWORD *v54; // [rsp+138h] [rbp-398h]
  void *v55[2]; // [rsp+148h] [rbp-388h] BYREF
  _QWORD *v56; // [rsp+158h] [rbp-378h]
  void *v57[2]; // [rsp+168h] [rbp-368h] BYREF
  _QWORD *v58; // [rsp+178h] [rbp-358h]
  void *v59[2]; // [rsp+188h] [rbp-348h] BYREF
  _QWORD *v60; // [rsp+198h] [rbp-338h]
  void *v61[2]; // [rsp+1A8h] [rbp-328h] BYREF
  _QWORD *v62; // [rsp+1B8h] [rbp-318h]
  void *v63[2]; // [rsp+1C8h] [rbp-308h] BYREF
  _QWORD *v64; // [rsp+1D8h] [rbp-2F8h]
  void *v65[2]; // [rsp+1E8h] [rbp-2E8h] BYREF
  _QWORD *v66; // [rsp+1F8h] [rbp-2D8h]
  void *v67[2]; // [rsp+208h] [rbp-2C8h] BYREF
  _QWORD *v68; // [rsp+218h] [rbp-2B8h]
  void *v69[2]; // [rsp+228h] [rbp-2A8h] BYREF
  _QWORD *v70; // [rsp+238h] [rbp-298h]
  void *v71[2]; // [rsp+248h] [rbp-288h] BYREF
  _QWORD *v72; // [rsp+258h] [rbp-278h]
  void *v73[2]; // [rsp+268h] [rbp-268h] BYREF
  _QWORD *v74; // [rsp+278h] [rbp-258h]
  void *v75[2]; // [rsp+288h] [rbp-248h] BYREF
  _QWORD *v76; // [rsp+298h] [rbp-238h]
  void *v77[2]; // [rsp+2A8h] [rbp-228h] BYREF
  _QWORD *v78; // [rsp+2B8h] [rbp-218h]
  void *v79[2]; // [rsp+2C8h] [rbp-208h] BYREF
  _QWORD *v80; // [rsp+2D8h] [rbp-1F8h]
  void *v81[2]; // [rsp+2E8h] [rbp-1E8h] BYREF
  _QWORD *v82; // [rsp+2F8h] [rbp-1D8h]
  void *v83[2]; // [rsp+308h] [rbp-1C8h] BYREF
  _QWORD *v84; // [rsp+318h] [rbp-1B8h]
  void *v85[2]; // [rsp+328h] [rbp-1A8h] BYREF
  _QWORD *v86; // [rsp+338h] [rbp-198h]
  _QWORD v87[2]; // [rsp+348h] [rbp-188h] BYREF
  void *v88[2]; // [rsp+358h] [rbp-178h]
  __int64 v89; // [rsp+368h] [rbp-168h]
  __int64 v90; // [rsp+370h] [rbp-160h]
  const char *v91; // [rsp+378h] [rbp-158h]
  __int64 v92; // [rsp+380h] [rbp-150h]
  const char *v93; // [rsp+388h] [rbp-148h]
  __int64 v94; // [rsp+390h] [rbp-140h]
  const char *v95; // [rsp+398h] [rbp-138h]
  __int64 v96; // [rsp+3A0h] [rbp-130h]
  const char *v97; // [rsp+3A8h] [rbp-128h]
  __int64 v98; // [rsp+3B0h] [rbp-120h]
  const char *v99; // [rsp+3B8h] [rbp-118h]
  __int64 v100; // [rsp+3C0h] [rbp-110h]
  const char *v101; // [rsp+3C8h] [rbp-108h]
  __int64 v102; // [rsp+3D0h] [rbp-100h]
  const char *v103; // [rsp+3D8h] [rbp-F8h]
  __int64 v104; // [rsp+3E0h] [rbp-F0h]
  const char *v105; // [rsp+3E8h] [rbp-E8h]
  __int64 v106; // [rsp+3F0h] [rbp-E0h]
  const char *v107; // [rsp+3F8h] [rbp-D8h]
  __int64 v108; // [rsp+400h] [rbp-D0h]
  const char *v109; // [rsp+408h] [rbp-C8h]
  __int64 v110; // [rsp+410h] [rbp-C0h]
  const char *v111; // [rsp+418h] [rbp-B8h]
  __int64 v112; // [rsp+420h] [rbp-B0h]
  const char *v113; // [rsp+428h] [rbp-A8h]
  __int64 v114; // [rsp+430h] [rbp-A0h]
  const char *v115; // [rsp+438h] [rbp-98h]
  __int64 v116; // [rsp+440h] [rbp-90h]
  const char *v117; // [rsp+448h] [rbp-88h]
  __int64 v118; // [rsp+450h] [rbp-80h]
  const char *v119; // [rsp+458h] [rbp-78h]
  __int64 v120; // [rsp+460h] [rbp-70h]
  const char *v121; // [rsp+468h] [rbp-68h]
  __int64 v122; // [rsp+470h] [rbp-60h]
  const char *v123; // [rsp+478h] [rbp-58h]
  __int64 v124; // [rsp+480h] [rbp-50h]
  const char *v125; // [rsp+488h] [rbp-48h]
  __int64 v126; // [rsp+490h] [rbp-40h]

  v87[0] = a2;
  v87[1] = a3;
  v90 = 0;
  v4 = (_QWORD *)operator new(0x20u);
  *v4 = "ios";
  v4[2] = "iOS";
  v4[1] = 3;
  v4[3] = 3;
  v36 = v4 + 4;
  v35[1] = v4 + 4;
  v35[0] = v4;
  sub_1680890((__int64)v87, v35, "ios", 3);
  v38 = nullptr;
  *(_OWORD *)v37 = 0;
  v5 = (_QWORD *)operator new(0x20u);
  *v5 = "ios";
  v5[2] = "iOS";
  v5[1] = 3;
  v5[3] = 3;
  v38 = v5 + 4;
  v37[1] = v5 + 4;
  v37[0] = v5;
  sub_1680890((__int64)v87, v37, "iOS", 3);
  v40 = nullptr;
  *(_OWORD *)v39 = 0;
  v6 = (_QWORD *)operator new(0x20u);
  *v6 = "macos";
  v6[2] = "macOS";
  v6[1] = 5;
  v6[3] = 5;
  v40 = v6 + 4;
  v39[1] = v6 + 4;
  v39[0] = v6;
  sub_1680890((__int64)v87, v39, "macos", 5);
  v42 = nullptr;
  *(_OWORD *)v41 = 0;
  v7 = (_QWORD *)operator new(0x20u);
  *v7 = "macos";
  v7[2] = "macOS";
  v7[1] = 5;
  v7[3] = 5;
  v42 = v7 + 4;
  v41[1] = v7 + 4;
  v41[0] = v7;
  sub_1680890((__int64)v87, v41, "macOS", 5);
  v44 = nullptr;
  *(_OWORD *)v43 = 0;
  v8 = (_QWORD *)operator new(0x20u);
  *v8 = "tvos";
  v8[2] = "tvOS";
  v8[1] = 4;
  v8[3] = 4;
  v44 = v8 + 4;
  v43[1] = v8 + 4;
  v43[0] = v8;
  sub_1680890((__int64)v87, v43, "tvos", 4);
  v46 = nullptr;
  *(_OWORD *)v45 = 0;
  v9 = (_QWORD *)operator new(0x20u);
  *v9 = "tvos";
  v9[2] = "tvOS";
  v9[1] = 4;
  v9[3] = 4;
  v46 = v9 + 4;
  v45[1] = v9 + 4;
  v45[0] = v9;
  sub_1680890((__int64)v87, v45, "tvOS", 4);
  v48 = nullptr;
  *(_OWORD *)v47 = 0;
  v10 = (_QWORD *)operator new(0x20u);
  *v10 = "watchos";
  v10[2] = "watchOS";
  v10[1] = 7;
  v10[3] = 7;
  v48 = v10 + 4;
  v47[1] = v10 + 4;
  v47[0] = v10;
  sub_1680890((__int64)v87, v47, "watchos", 7);
  v50 = nullptr;
  *(_OWORD *)v49 = 0;
  v11 = (_QWORD *)operator new(0x20u);
  *v11 = "watchos";
  v11[2] = "watchOS";
  v11[1] = 7;
  v11[3] = 7;
  v50 = v11 + 4;
  v49[1] = v11 + 4;
  v49[0] = v11;
  sub_1680890((__int64)v87, v49, "watchOS", 7);
  v52 = nullptr;
  *(_OWORD *)v51 = 0;
  v12 = (_QWORD *)operator new(0x20u);
  *v12 = "iOSApplicationExtension";
  v12[2] = "ios_app_extension";
  v12[1] = 23;
  v12[3] = 17;
  v52 = v12 + 4;
  v51[1] = v12 + 4;
  v51[0] = v12;
  sub_1680890((__int64)v87, v51, "ios_app_extension", 17);
  v54 = nullptr;
  *(_OWORD *)v53 = 0;
  v13 = (_QWORD *)operator new(0x20u);
  *v13 = "iOSApplicationExtension";
  v13[2] = "ios_app_extension";
  v13[1] = 23;
  v13[3] = 17;
  v54 = v13 + 4;
  v53[1] = v13 + 4;
  v53[0] = v13;
  sub_1680890((__int64)v87, v53, "iOSApplicationExtension", 23);
  v56 = nullptr;
  *(_OWORD *)v55 = 0;
  v14 = (_QWORD *)operator new(0x20u);
  *v14 = "macOSApplicationExtension";
  v14[2] = "macos_app_extension";
  v14[1] = 25;
  v14[3] = 19;
  v56 = v14 + 4;
  v55[1] = v14 + 4;
  v55[0] = v14;
  sub_1680890((__int64)v87, v55, "macos_app_extension", 19);
  v58 = nullptr;
  *(_OWORD *)v57 = 0;
  v15 = (_QWORD *)operator new(0x20u);
  *v15 = "macOSApplicationExtension";
  v15[2] = "macos_app_extension";
  v15[1] = 25;
  v15[3] = 19;
  v58 = v15 + 4;
  v57[1] = v15 + 4;
  v57[0] = v15;
  sub_1680890((__int64)v87, v57, "macOSApplicationExtension", 25);
  v60 = nullptr;
  *(_OWORD *)v59 = 0;
  v16 = (_QWORD *)operator new(0x20u);
  *v16 = "tvOSApplicationExtension";
  v16[2] = "tvos_app_extension";
  v16[1] = 24;
  v16[3] = 18;
  v60 = v16 + 4;
  v59[1] = v16 + 4;
  v59[0] = v16;
  sub_1680890((__int64)v87, v59, "tvos_app_extension", 18);
  v62 = nullptr;
  *(_OWORD *)v61 = 0;
  v17 = (_QWORD *)operator new(0x20u);
  *v17 = "tvOSApplicationExtension";
  v17[2] = "tvos_app_extension";
  v17[1] = 24;
  v17[3] = 18;
  v62 = v17 + 4;
  v61[1] = v17 + 4;
  v61[0] = v17;
  sub_1680890((__int64)v87, v61, "tvOSApplicationExtension", 24);
  v64 = nullptr;
  *(_OWORD *)v63 = 0;
  v18 = (_QWORD *)operator new(0x20u);
  *v18 = "watchOSApplicationExtension";
  v18[2] = "watchos_app_extension";
  v18[1] = 27;
  v18[3] = 21;
  v64 = v18 + 4;
  v63[1] = v18 + 4;
  v63[0] = v18;
  sub_1680890((__int64)v87, v63, "watchos_app_extension", 21);
  v66 = nullptr;
  *(_OWORD *)v65 = 0;
  v19 = (_QWORD *)operator new(0x20u);
  *v19 = "watchOSApplicationExtension";
  v19[2] = "watchos_app_extension";
  v19[1] = 27;
  v19[3] = 21;
  v66 = v19 + 4;
  v65[1] = v19 + 4;
  v65[0] = v19;
  sub_1680890((__int64)v87, v65, "watchOSApplicationExtension", 27);
  v68 = nullptr;
  *(_OWORD *)v67 = 0;
  v20 = (_QWORD *)operator new(0x20u);
  *v20 = "macCatalyst";
  v20[2] = "maccatalyst";
  v20[1] = 11;
  v20[3] = 11;
  v68 = v20 + 4;
  v67[1] = v20 + 4;
  v67[0] = v20;
  sub_1680890((__int64)v87, v67, "maccatalyst", 11);
  v70 = nullptr;
  *(_OWORD *)v69 = 0;
  v21 = (_QWORD *)operator new(0x20u);
  *v21 = "macCatalyst";
  v21[2] = "maccatalyst";
  v21[1] = 11;
  v21[3] = 11;
  v70 = v21 + 4;
  v69[1] = v21 + 4;
  v69[0] = v21;
  sub_1680890((__int64)v87, v69, "macCatalyst", 11);
  v72 = nullptr;
  *(_OWORD *)v71 = 0;
  v22 = (_QWORD *)operator new(0x20u);
  *v22 = "macCatalystApplicationExtension";
  v22[2] = "maccatalyst_app_extension";
  v22[1] = 31;
  v22[3] = 25;
  v72 = v22 + 4;
  v71[1] = v22 + 4;
  v71[0] = v22;
  sub_1680890((__int64)v87, v71, "maccatalyst_app_extension", 25);
  v74 = nullptr;
  *(_OWORD *)v73 = 0;
  v23 = (_QWORD *)operator new(0x20u);
  *v23 = "macCatalystApplicationExtension";
  v23[2] = "maccatalyst_app_extension";
  v23[1] = 31;
  v23[3] = 25;
  v74 = v23 + 4;
  v73[1] = v23 + 4;
  v73[0] = v23;
  sub_1680890((__int64)v87, v73, "macCatalystApplicationExtension", 31);
  v91 = "visionos";
  *(_OWORD *)v75 = 0;
  v93 = "visionOS";
  v95 = "xros";
  v92 = 8;
  v94 = 8;
  v96 = 4;
  v76 = nullptr;
  v24 = (_QWORD *)operator new(0x30u);
  *v24 = "visionos";
  v24[2] = "visionOS";
  v24[4] = "xros";
  v24[1] = 8;
  v24[3] = 8;
  v24[5] = 4;
  v76 = v24 + 6;
  v75[1] = v24 + 6;
  v75[0] = v24;
  sub_1680890((__int64)v87, v75, "xros", 4);
  v97 = "visionos";
  *(_OWORD *)v77 = 0;
  v99 = "visionOS";
  v101 = "xros";
  v98 = 8;
  v100 = 8;
  v102 = 4;
  v78 = nullptr;
  v25 = (_QWORD *)operator new(0x30u);
  *v25 = "visionos";
  v25[2] = "visionOS";
  v25[4] = "xros";
  v25[1] = 8;
  v25[3] = 8;
  v25[5] = 4;
  v78 = v25 + 6;
  v77[1] = v25 + 6;
  v77[0] = v25;
  sub_1680890((__int64)v87, v77, "visionOS", 8);
  v103 = "visionos";
  *(_OWORD *)v79 = 0;
  v105 = "visionOS";
  v107 = "xros";
  v104 = 8;
  v106 = 8;
  v108 = 4;
  v80 = nullptr;
  v26 = (_QWORD *)operator new(0x30u);
  *v26 = "visionos";
  v26[2] = "visionOS";
  v26[4] = "xros";
  v26[1] = 8;
  v26[3] = 8;
  v26[5] = 4;
  v80 = v26 + 6;
  v79[1] = v26 + 6;
  v79[0] = v26;
  sub_1680890((__int64)v87, v79, "visionos", 8);
  v109 = "visionOSApplicationExtension";
  *(_OWORD *)v81 = 0;
  v110 = 28;
  v111 = "visionos_app_extension";
  v112 = 22;
  v113 = "xros_app_extension";
  v114 = 18;
  v82 = nullptr;
  v27 = (_QWORD *)operator new(0x30u);
  *v27 = "visionOSApplicationExtension";
  v27[1] = 28;
  v27[2] = "visionos_app_extension";
  v27[3] = 22;
  v27[4] = "xros_app_extension";
  v27[5] = 18;
  v82 = v27 + 6;
  v81[1] = v27 + 6;
  v81[0] = v27;
  sub_1680890((__int64)v87, v81, "xros_app_extension", 18);
  v115 = "visionOSApplicationExtension";
  *(_OWORD *)v83 = 0;
  v116 = 28;
  v117 = "visionos_app_extension";
  v118 = 22;
  v119 = "xros_app_extension";
  v120 = 18;
  v84 = nullptr;
  v28 = (_QWORD *)operator new(0x30u);
  *v28 = "visionOSApplicationExtension";
  v28[1] = 28;
  v28[2] = "visionos_app_extension";
  v28[3] = 22;
  v28[4] = "xros_app_extension";
  v28[5] = 18;
  v84 = v28 + 6;
  v83[1] = v28 + 6;
  v83[0] = v28;
  sub_1680890((__int64)v87, v83, "visionOSApplicationExtension", 28);
  v121 = "visionOSApplicationExtension";
  *(_OWORD *)v85 = 0;
  v122 = 28;
  v123 = "visionos_app_extension";
  v124 = 22;
  v125 = "xros_app_extension";
  v126 = 18;
  v86 = nullptr;
  v29 = (_QWORD *)operator new(0x30u);
  *v29 = "visionOSApplicationExtension";
  v29[1] = 28;
  v29[2] = "visionos_app_extension";
  v29[3] = 22;
  v29[4] = "xros_app_extension";
  v29[5] = 18;
  v86 = v29 + 6;
  v85[1] = v29 + 6;
  v85[0] = v29;
  sub_1680890((__int64)v87, v85, "visionos_app_extension", 22);
  v30 = (_QWORD *)operator new(0x10u);
  v31 = (_BYTE)v90 == 0;
  v30[1] = a3;
  *v30 = a2;
  if ( v31 )
  {
    *a1 = v30;
    a1[1] = v30 + 2;
    a1[2] = v30 + 2;
  }
  else
  {
    *a1 = v88[0];
    v32 = v88[1];
    *(_OWORD *)v88 = 0;
    a1[1] = v32;
    v33 = v89;
    v89 = 0;
    a1[2] = v33;
    operator delete(v30);
  }
  if ( v85[0] )
    operator delete(v85[0]);
  if ( v83[0] )
    operator delete(v83[0]);
  if ( v81[0] )
    operator delete(v81[0]);
  if ( v79[0] )
    operator delete(v79[0]);
  if ( v77[0] )
    operator delete(v77[0]);
  if ( v75[0] )
    operator delete(v75[0]);
  if ( v73[0] )
    operator delete(v73[0]);
  if ( v71[0] )
    operator delete(v71[0]);
  if ( v69[0] )
    operator delete(v69[0]);
  if ( v67[0] )
    operator delete(v67[0]);
  if ( v65[0] )
    operator delete(v65[0]);
  if ( v63[0] )
    operator delete(v63[0]);
  if ( v61[0] )
    operator delete(v61[0]);
  if ( v59[0] )
    operator delete(v59[0]);
  if ( v57[0] )
    operator delete(v57[0]);
  if ( v55[0] )
    operator delete(v55[0]);
  if ( v53[0] )
    operator delete(v53[0]);
  if ( v51[0] )
    operator delete(v51[0]);
  if ( v49[0] )
    operator delete(v49[0]);
  if ( v47[0] )
    operator delete(v47[0]);
  if ( v45[0] )
    operator delete(v45[0]);
  if ( v43[0] )
    operator delete(v43[0]);
  if ( v41[0] )
    operator delete(v41[0]);
  if ( v39[0] )
    operator delete(v39[0]);
  if ( v37[0] )
    operator delete(v37[0]);
  if ( v35[0] )
    operator delete(v35[0]);
  if ( (_BYTE)v90 && v88[0] )
    operator delete(v88[0]);
  return a1;
}
