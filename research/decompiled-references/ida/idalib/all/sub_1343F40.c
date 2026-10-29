void __fastcall sub_1343F40(__int64 a1, void (__fastcall *a2)(__int64, __m128i *), __int64 a3)
{
  char v4; // al
  _BYTE *v5; // rsi
  __int64 v6; // rdx
  __m128i *v7; // rcx
  bool v8; // al
  __m128i *v9; // rcx
  char v10; // al
  _BYTE *v11; // rsi
  __int64 v12; // rdx
  __m128i *v13; // rcx
  __m128i *v14; // rsi
  bool v15; // al
  void *v16; // rdx
  __m128i *v17; // rcx
  void *v18; // rdi
  int v19; // ecx
  int v20; // ecx
  char v21; // al
  char v22; // al
  const char *v23; // rax
  int v24; // eax
  __int64 v25; // r14
  __int64 i; // r13
  int v27; // edx
  __int64 *v28; // rsi
  char v29; // dl
  __int64 *v30; // r13
  __int64 v31; // r8
  void *v32; // r9
  __int64 *v33; // rbx
  __int64 v34; // rdx
  unsigned int v35; // ecx
  __int64 v36; // rsi
  __m128i *v37; // r14
  __m128i *v38; // rax
  __int64 *v39; // rax
  unsigned __int64 v40; // r13
  __m128i *v41; // r14
  unsigned __int64 v42; // rcx
  __int64 v43; // r13
  __m128i *v44; // r15
  __m128i *v45; // rbx
  __int64 v46; // r9
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r13
  unsigned int v52; // eax
  int v53; // eax
  void *v54; // r13
  char *v55; // rdi
  __int64 v56; // rbp
  __int64 v57; // r13
  _QWORD *v58; // rbx
  _QWORD *v59; // rdi
  __int64 v60; // r12
  void **v61; // rbp
  void **v62; // rbx
  __int64 v63; // rbp
  void **v64; // rbx
  const __m128i *v65; // rcx
  __int64 v66; // rdx
  char *v67; // rax
  const __m128i *v68; // rbx
  __m128i *v69; // r15
  size_t v70; // r14
  size_t v71; // r13
  size_t v72; // rdx
  int v73; // eax
  __m128i v74; // xmm1
  __m128i v75; // xmm2
  size_t v76; // rax
  size_t v77; // rax
  size_t v78; // rax
  size_t v79; // rax
  size_t v80; // rax
  size_t v81; // rax
  size_t v82; // rax
  size_t v83; // rax
  size_t v84; // rax
  size_t v85; // rax
  size_t v86; // rax
  void *s1; // [rsp+0h] [rbp-358h]
  void *s1a; // [rsp+0h] [rbp-358h]
  __m128i *s1b; // [rsp+0h] [rbp-358h]
  void *s1d; // [rsp+0h] [rbp-358h]
  void *s1e; // [rsp+0h] [rbp-358h]
  void *s1c; // [rsp+0h] [rbp-358h]
  __m128i *ptr; // [rsp+18h] [rbp-340h]
  __m128i *ptra; // [rsp+18h] [rbp-340h]
  __m128i *ptrb; // [rsp+18h] [rbp-340h]
  size_t v98; // [rsp+28h] [rbp-330h]
  _QWORD v99[4]; // [rsp+30h] [rbp-328h] BYREF
  __int16 v100; // [rsp+50h] [rbp-308h]
  void *v101[2]; // [rsp+60h] [rbp-2F8h] BYREF
  __m128i v102; // [rsp+70h] [rbp-2E8h] BYREF
  __int16 v103; // [rsp+80h] [rbp-2D8h]
  __m128i *v104; // [rsp+90h] [rbp-2C8h] BYREF
  __int64 v105; // [rsp+98h] [rbp-2C0h]
  _OWORD v106[8]; // [rsp+A0h] [rbp-2B8h] BYREF
  __m128i v107; // [rsp+120h] [rbp-238h] BYREF
  __int64 v108; // [rsp+130h] [rbp-228h] BYREF
  void *v109; // [rsp+138h] [rbp-220h]
  void **v110; // [rsp+140h] [rbp-218h]
  __int64 v111; // [rsp+148h] [rbp-210h]
  void *v112; // [rsp+150h] [rbp-208h] BYREF
  __m128i si128; // [rsp+158h] [rbp-200h]
  __int64 v114; // [rsp+168h] [rbp-1F0h]
  int v115; // [rsp+170h] [rbp-1E8h]
  void *v116; // [rsp+178h] [rbp-1E0h]
  __int64 v117; // [rsp+180h] [rbp-1D8h]
  _BYTE v118[16]; // [rsp+188h] [rbp-1D0h] BYREF
  void *v119; // [rsp+198h] [rbp-1C0h]
  __int64 v120; // [rsp+1A0h] [rbp-1B8h]
  _BYTE v121[16]; // [rsp+1A8h] [rbp-1B0h] BYREF
  void *v122; // [rsp+1B8h] [rbp-1A0h]
  __int64 v123; // [rsp+1C0h] [rbp-198h]
  _BYTE v124[20]; // [rsp+1C8h] [rbp-190h] BYREF
  int v125; // [rsp+1DCh] [rbp-17Ch]
  int v126; // [rsp+1E4h] [rbp-174h]
  __int64 v127; // [rsp+1E8h] [rbp-170h]
  __int64 v128; // [rsp+1F0h] [rbp-168h]
  int v129; // [rsp+218h] [rbp-140h]
  __int64 v130; // [rsp+230h] [rbp-128h]
  __int64 v131; // [rsp+238h] [rbp-120h]
  __int64 v132; // [rsp+288h] [rbp-D0h]
  __int64 v133; // [rsp+290h] [rbp-C8h]
  __int64 v134; // [rsp+298h] [rbp-C0h]
  __int64 v135; // [rsp+2A0h] [rbp-B8h]
  __int64 v136; // [rsp+2A8h] [rbp-B0h]
  __int64 v137; // [rsp+2B0h] [rbp-A8h]
  __int64 v138; // [rsp+2B8h] [rbp-A0h]
  __int64 v139; // [rsp+2C0h] [rbp-98h]
  __int64 v140; // [rsp+2C8h] [rbp-90h]
  __int64 v141; // [rsp+2D0h] [rbp-88h]
  __int64 v142; // [rsp+2D8h] [rbp-80h]
  __int64 v143; // [rsp+2E0h] [rbp-78h]
  __int64 v144; // [rsp+2E8h] [rbp-70h]
  __int64 v145; // [rsp+2F0h] [rbp-68h]
  __int64 v146; // [rsp+2F8h] [rbp-60h]
  __int64 v147; // [rsp+300h] [rbp-58h]
  __int64 v148; // [rsp+308h] [rbp-50h]
  __int64 v149; // [rsp+310h] [rbp-48h]

  v4 = *(_BYTE *)(a1 + 189);
  if ( v4 < 0 )
  {
    v107.m128i_i64[1] = j__strlen("-unoptimized-cfg");
    v107.m128i_i64[0] = (__int64)"-unoptimized-cfg";
    LOWORD(v110) = 261;
    a2(a3, &v107);
    v4 = *(_BYTE *)(a1 + 189);
  }
  if ( (v4 & 4) != 0 )
  {
    v86 = j__strlen("-analyzer-opt-analyze-headers");
    LOWORD(v110) = 261;
    v107.m128i_i64[1] = v86;
    v107.m128i_i64[0] = (__int64)"-analyzer-opt-analyze-headers";
    a2(a3, &v107);
    v4 = *(_BYTE *)(a1 + 189);
  }
  if ( (v4 & 8) != 0 )
  {
    v85 = j__strlen("-analyzer-display-progress");
    LOWORD(v110) = 261;
    v107.m128i_i64[1] = v85;
    v107.m128i_i64[0] = (__int64)"-analyzer-display-progress";
    a2(a3, &v107);
    v4 = *(_BYTE *)(a1 + 189);
  }
  if ( (v4 & 0x10) != 0 )
  {
    v84 = j__strlen("-analyzer-note-analysis-entry-points");
    LOWORD(v110) = 261;
    v107.m128i_i64[1] = v84;
    v107.m128i_i64[0] = (__int64)"-analyzer-note-analysis-entry-points";
    a2(a3, &v107);
  }
  v5 = *(_BYTE **)(a1 + 88);
  v6 = (__int64)&v5[*(_QWORD *)(a1 + 96)];
  v101[0] = &v102;
  sub_12FAA20(v101, v5, v6);
  v7 = (__m128i *)v101[0];
  v104 = (__m128i *)v106;
  if ( v101[0] == &v102 )
  {
    v7 = (__m128i *)v106;
    v106[0] = _mm_load_si128(&v102);
  }
  else
  {
    v104 = (__m128i *)v101[0];
    *(_QWORD *)&v106[0] = v102.m128i_i64[0];
  }
  ptr = v7;
  v105 = (__int64)v101[1];
  s1 = v101[1];
  v101[0] = &v102;
  v101[1] = nullptr;
  v102.m128i_i8[0] = 0;
  v107.m128i_i64[0] = (__int64)&v108;
  v107.m128i_i64[1] = 0;
  LOBYTE(v108) = 0;
  v8 = sub_1302CC0((__int64)&v104, (__int64)&v107);
  v9 = ptr;
  if ( v8 )
  {
    sub_12FAA20(&v107, ptr, (__int64)s1 + (_QWORD)ptr);
    sub_12FD520((void (__fastcall *)(__int64, _QWORD *))a2, a3, 1413, (__int64)&v107);
    if ( (__int64 *)v107.m128i_i64[0] != &v108 )
      operator delete((void *)v107.m128i_i64[0]);
    v9 = v104;
  }
  if ( v9 != (__m128i *)v106 )
    operator delete(v9);
  if ( v101[0] != &v102 )
    operator delete(v101[0]);
  v10 = *(_BYTE *)(a1 + 189);
  if ( (v10 & 0x20) != 0 )
  {
    v107.m128i_i64[1] = j__strlen("-trim-egraph");
    LOWORD(v110) = 261;
    v107.m128i_i64[0] = (__int64)"-trim-egraph";
    a2(a3, &v107);
    v10 = *(_BYTE *)(a1 + 189);
  }
  if ( (v10 & 0x40) != 0 )
  {
    v83 = j__strlen("-analyzer-viz-egraph-graphviz");
    LOWORD(v110) = 261;
    v107.m128i_i64[1] = v83;
    v107.m128i_i64[0] = (__int64)"-analyzer-viz-egraph-graphviz";
    a2(a3, &v107);
  }
  v11 = *(_BYTE **)(a1 + 120);
  v12 = *(_QWORD *)(a1 + 128);
  v101[0] = &v102;
  sub_12FAA20(v101, v11, (__int64)&v11[v12]);
  v13 = (__m128i *)v101[0];
  v104 = (__m128i *)v106;
  if ( v101[0] == &v102 )
  {
    v13 = (__m128i *)v106;
    v106[0] = _mm_load_si128(&v102);
  }
  else
  {
    v104 = (__m128i *)v101[0];
    *(_QWORD *)&v106[0] = v102.m128i_i64[0];
  }
  v14 = &v107;
  ptra = v13;
  v105 = (__int64)v101[1];
  s1a = v101[1];
  v101[0] = &v102;
  v101[1] = nullptr;
  v102.m128i_i8[0] = 0;
  v107.m128i_i64[0] = (__int64)&v108;
  v107.m128i_i64[1] = 0;
  LOBYTE(v108) = 0;
  v15 = sub_1302CC0((__int64)&v104, (__int64)&v107);
  v16 = s1a;
  v17 = ptra;
  if ( v15 )
  {
    sub_12FAA20(&v107, ptra, (__int64)s1a + (_QWORD)ptra);
    v14 = (__m128i *)a3;
    sub_12FD520((void (__fastcall *)(__int64, _QWORD *))a2, a3, 1992, (__int64)&v107);
    if ( (__int64 *)v107.m128i_i64[0] != &v108 )
      operator delete((void *)v107.m128i_i64[0]);
    v17 = v104;
  }
  if ( v17 != (__m128i *)v106 )
    operator delete(v17);
  v18 = v101[0];
  if ( v101[0] != &v102 )
    operator delete(v101[0]);
  v19 = *(_DWORD *)(a1 + 192);
  if ( v19 != 5 )
  {
    v18 = a2;
    v14 = (__m128i *)a3;
    sub_12FD4B0((__int64 (__fastcall *)(__int64, _DWORD *))a2, a3, 2048, v19);
  }
  if ( (*(_BYTE *)(a1 + 190) & 2) != 0 )
  {
    v82 = j__strlen("-analyzer-disable-retry-exhausted");
    v14 = &v107;
    LOWORD(v110) = 261;
    v107.m128i_i64[1] = v82;
    v18 = (void *)a3;
    v107.m128i_i64[0] = (__int64)"-analyzer-disable-retry-exhausted";
    a2(a3, &v107);
  }
  v20 = *(_DWORD *)(a1 + 184);
  if ( v20 != 4 )
  {
    v18 = a2;
    v14 = (__m128i *)a3;
    sub_12FD4B0((__int64 (__fastcall *)(__int64, _DWORD *))a2, a3, 2162, v20);
  }
  if ( (*(_BYTE *)(a1 + 190) & 1) != 0 )
  {
    v81 = j__strlen("-analyzer-stats");
    v14 = &v107;
    LOWORD(v110) = 261;
    v107.m128i_i64[1] = v81;
    v18 = (void *)a3;
    v107.m128i_i64[0] = (__int64)"-analyzer-stats";
    a2(a3, &v107);
  }
  v21 = *(_BYTE *)(a1 + 188);
  if ( (v21 & 1) != 0 )
  {
    v14 = &v107;
    v107.m128i_i64[1] = j__strlen("-analyzer-disable-all-checks");
    v18 = (void *)a3;
    v107.m128i_i64[0] = (__int64)"-analyzer-disable-all-checks";
    LOWORD(v110) = 261;
    a2(a3, &v107);
    v21 = *(_BYTE *)(a1 + 188);
  }
  if ( (v21 & 2) != 0 )
  {
    v14 = &v107;
    v107.m128i_i64[1] = j__strlen("-analyzer-checker-help");
    v18 = (void *)a3;
    v107.m128i_i64[0] = (__int64)"-analyzer-checker-help";
    LOWORD(v110) = 261;
    a2(a3, &v107);
    v21 = *(_BYTE *)(a1 + 188);
  }
  if ( (v21 & 4) != 0 )
  {
    v14 = &v107;
    v107.m128i_i64[1] = j__strlen("-analyzer-checker-help-alpha");
    v18 = (void *)a3;
    v107.m128i_i64[0] = (__int64)"-analyzer-checker-help-alpha";
    LOWORD(v110) = 261;
    a2(a3, &v107);
    v21 = *(_BYTE *)(a1 + 188);
  }
  if ( (v21 & 8) != 0 )
  {
    v14 = &v107;
    v107.m128i_i64[1] = j__strlen("-analyzer-checker-help-developer");
    v18 = (void *)a3;
    LOWORD(v110) = 261;
    v107.m128i_i64[0] = (__int64)"-analyzer-checker-help-developer";
    a2(a3, &v107);
  }
  if ( (*(_BYTE *)(a1 + 189) & 1) != 0 )
  {
    v80 = j__strlen("-analyzer-config-help");
    v14 = &v107;
    LOWORD(v110) = 261;
    v18 = (void *)a3;
    v107.m128i_i64[1] = v80;
    v107.m128i_i64[0] = (__int64)"-analyzer-config-help";
    a2(a3, &v107);
  }
  v22 = *(_BYTE *)(a1 + 188);
  if ( v22 < 0 )
  {
    v79 = j__strlen("-analyzer-list-enabled-checkers");
    v18 = (void *)a3;
    LOWORD(v110) = 261;
    v14 = &v107;
    v107.m128i_i64[1] = v79;
    v107.m128i_i64[0] = (__int64)"-analyzer-list-enabled-checkers";
    a2(a3, &v107);
    v22 = *(_BYTE *)(a1 + 188);
  }
  if ( (v22 & 0x10) != 0 )
  {
    v78 = j__strlen("-analyzer-checker-option-help");
    v14 = &v107;
    v18 = (void *)a3;
    LOWORD(v110) = 261;
    v107.m128i_i64[1] = v78;
    v107.m128i_i64[0] = (__int64)"-analyzer-checker-option-help";
    a2(a3, &v107);
    v22 = *(_BYTE *)(a1 + 188);
  }
  if ( (v22 & 0x20) != 0 )
  {
    v14 = &v107;
    v107.m128i_i64[1] = j__strlen("-analyzer-checker-option-help-alpha");
    v18 = (void *)a3;
    LOWORD(v110) = 261;
    v107.m128i_i64[0] = (__int64)"-analyzer-checker-option-help-alpha";
    a2(a3, &v107);
    v22 = *(_BYTE *)(a1 + 188);
  }
  if ( (v22 & 0x40) != 0 )
  {
    v76 = j__strlen("-analyzer-checker-option-help-developer");
    v14 = &v107;
    LOWORD(v110) = 261;
    v107.m128i_i64[1] = v76;
    v18 = (void *)a3;
    v107.m128i_i64[0] = (__int64)"-analyzer-checker-option-help-developer";
    a2(a3, &v107);
  }
  if ( (*(_BYTE *)(a1 + 189) & 2) == 0 )
  {
    v18 = a2;
    v14 = (__m128i *)a3;
    sub_12FD670((__int64 (__fastcall *)(__int64, _BYTE **))a2, a3, 1706, 0x28u, 0);
  }
  if ( (*(_BYTE *)(a1 + 190) & 4) != 0 )
  {
    v77 = j__strlen("-analyzer-werror");
    v14 = &v107;
    LOWORD(v110) = 261;
    v107.m128i_i64[1] = v77;
    v18 = (void *)a3;
    v107.m128i_i64[0] = (__int64)"-analyzer-werror";
    a2(a3, &v107);
  }
  if ( *(_DWORD *)(a1 + 72) )
  {
    v18 = a2;
    v14 = (__m128i *)a3;
    v107.m128i_i64[0] = (__int64)"z3";
    LOWORD(v110) = 259;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x62u, &v107);
  }
  if ( *(_DWORD *)(a1 + 76) )
  {
    switch ( *(_DWORD *)(a1 + 76) )
    {
      case 1:
        v23 = "html-single-file";
        break;
      case 2:
        v23 = "plist";
        break;
      case 3:
        v23 = "plist-multi-file";
        break;
      case 4:
        v23 = "plist-html";
        break;
      case 5:
        v23 = "sarif";
        break;
      case 6:
        v23 = "sarif-html";
        break;
      case 7:
        v23 = "text";
        break;
      case 8:
        v23 = "text-minimal";
        break;
      default:
        goto LABEL_168;
    }
    v18 = a2;
    v14 = (__m128i *)a3;
    v107.m128i_i64[0] = (__int64)v23;
    LOWORD(v110) = 259;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x75u, &v107);
  }
  v24 = *(_DWORD *)(a1 + 80);
  if ( v24 )
  {
    if ( v24 == 1 )
    {
      v67 = "block";
    }
    else
    {
      if ( v24 != 2 )
      {
LABEL_168:
        sub_1345270(v18, v14, v16);
        return;
      }
      v67 = "none";
    }
    v107.m128i_i64[0] = (__int64)v67;
    LOWORD(v110) = 259;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x77u, &v107);
  }
  if ( *(_DWORD *)(a1 + 196) != 1 )
  {
    v107.m128i_i64[0] = (__int64)"all";
    LOWORD(v110) = 259;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x6Du, &v107);
  }
  v25 = *(_QWORD *)(a1 + 8);
  for ( i = *(_QWORD *)a1; v25 != i; i += 40 )
  {
    v27 = -(*(_BYTE *)(i + 32) == 0);
    LOWORD(v110) = 260;
    v107.m128i_i64[0] = i;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, (v27 & 9) + 92, &v107);
  }
  v116 = v118;
  v119 = v121;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9B50);
  v122 = v124;
  v125 &= 0xFFF80000;
  v107 = 0u;
  v108 = 0;
  v109 = nullptr;
  v110 = nullptr;
  v111 = 0;
  v112 = nullptr;
  v114 = 0;
  v115 = 0;
  v117 = 0;
  v118[0] = 0;
  v120 = 0;
  v121[0] = 0;
  v123 = 0;
  v124[0] = 0;
  v126 = 1;
  v127 = 0;
  v128 = 0;
  v129 = 1;
  v130 = 0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v135 = 0;
  v136 = 0;
  v137 = 0;
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v141 = 0;
  v142 = 0;
  v143 = 0;
  v144 = 0;
  v145 = 0;
  v146 = 0;
  v147 = 0;
  v148 = 0;
  v149 = 0;
  sub_1321CF0((__int64)&v107, 0);
  v28 = *(__int64 **)(a1 + 48);
  v29 = *(_DWORD *)(a1 + 56) == 0;
  v104 = (__m128i *)v106;
  v105 = 0x400000000LL;
  sub_116E610((__int64 **)v101, v28, v29);
  v30 = (__int64 *)v101[0];
  sub_116E610((__int64 **)v101, (__int64 *)(*(_QWORD *)(a1 + 48) + 8LL * *(unsigned int *)(a1 + 56)), 1);
  v33 = (__int64 *)v101[0];
  if ( v101[0] == v30 )
  {
    v35 = v105;
  }
  else
  {
    v34 = *v30;
    v35 = v105;
    while ( 1 )
    {
      v36 = v35;
      v32 = *(void **)v34;
      v37 = v104;
      v38 = &v104[2 * v35];
      if ( v35 >= (unsigned __int64)HIDWORD(v105) )
      {
        v101[0] = (void *)(v34 + 40);
        v101[1] = v32;
        v102 = *(__m128i *)(v34 + 8);
        v65 = (const __m128i *)v101;
        v66 = v36 + 1;
        if ( HIDWORD(v105) < (unsigned __int64)(v36 + 1) )
        {
          if ( v104 > (__m128i *)v101 || v38 <= (__m128i *)v101 )
          {
            sub_2237220(&v104, v106, v66, 32);
            v65 = (const __m128i *)v101;
            v38 = &v104[2 * (unsigned int)v105];
          }
          else
          {
            sub_2237220(&v104, v106, v66, 32);
            v65 = (__m128i *)((char *)v104 + (char *)v101 - (char *)v37);
            v38 = &v104[2 * (unsigned int)v105];
          }
        }
        *v38 = _mm_loadu_si128(v65);
        v38[1] = _mm_loadu_si128(v65 + 1);
        v35 = v105 + 1;
        LODWORD(v105) = v105 + 1;
      }
      else
      {
        v38->m128i_i64[0] = v34 + 40;
        ++v35;
        v38->m128i_i64[1] = (__int64)v32;
        v38[1].m128i_i64[0] = *(_QWORD *)(v34 + 8);
        v38[1].m128i_i64[1] = *(_QWORD *)(v34 + 16);
        LODWORD(v105) = v35;
      }
      v34 = v30[1];
      v39 = v30 + 1;
      if ( !v34 || v34 == -8 )
      {
        do
        {
          do
            v34 = *++v39;
          while ( *v39 == -8 );
        }
        while ( !v34 );
      }
      if ( v33 == v39 )
        break;
      v30 = v39;
    }
  }
  v40 = 2LL * v35;
  ptrb = &v104[v40];
  v41 = &v104[v40];
  if ( v104 != &v104[v40] )
  {
    s1b = v104;
    _BitScanReverse64(&v42, (__int64)(v40 * 16) >> 5);
    sub_1343AE0(v104, &v104[v40], 2LL * (int)(63 - (v42 ^ 0x3F)), v42 ^ 0x3F, v31, (__int64)v32);
    if ( v40 <= 32 )
    {
      sub_12FA880((__int64)s1b, (__int64)ptrb);
LABEL_82:
      v43 = 2LL * (unsigned int)v105;
      ptrb = v104;
      v44 = &v104[v43];
      if ( v104 == &v104[v43] )
        goto LABEL_94;
      v45 = v104;
      while ( 1 )
      {
        v51 = v45->m128i_i64[1];
        s1e = (void *)v45->m128i_i64[0];
        v52 = sub_2244B30(v45->m128i_i64[0], v51);
        v53 = sub_2244E60(&v112, s1e, v51, v52);
        if ( v53 == -1 )
          sub_11727E0((__int64 **)v101, (__int64 *)v112 + si128.m128i_u32[0], 1);
        else
          sub_11727E0((__int64 **)v101, (__int64 *)v112 + v53, 1);
        v54 = v101[0];
        sub_11727E0((__int64 **)v101, (__int64 *)v112 + si128.m128i_u32[0], 1);
        if ( v101[0] == v54 )
        {
          v46 = v45[1].m128i_i64[0];
          v47 = v45[1].m128i_i64[1];
        }
        else
        {
          v46 = v45[1].m128i_i64[0];
          v47 = v45[1].m128i_i64[1];
          if ( v47 == *(_QWORD *)(*(_QWORD *)v54 + 16LL) )
          {
            if ( !v47 )
              goto LABEL_90;
            v98 = v45[1].m128i_u64[1];
            s1d = (void *)v45[1].m128i_i64[0];
            v48 = memcmp(*(const void **)(*(_QWORD *)v54 + 8LL), s1d, v98);
            v46 = (__int64)s1d;
            v47 = v98;
            if ( !v48 )
              goto LABEL_90;
          }
        }
        v49 = v45->m128i_i64[0];
        v100 = 773;
        v99[0] = v49;
        v50 = v45->m128i_i64[1];
        v102.m128i_i64[1] = v47;
        v99[1] = v50;
        v99[2] = "=";
        v103 = 1282;
        v101[0] = v99;
        v102.m128i_i64[0] = v46;
        sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x60u, (const __m128i *)v101);
LABEL_90:
        v45 += 2;
        if ( v44 == v45 )
        {
          ptrb = v104;
          goto LABEL_94;
        }
      }
    }
    v68 = s1b + 32;
    sub_12FA880((__int64)s1b, (__int64)s1b[32].m128i_i64);
    if ( v41 == &s1b[32] )
      goto LABEL_82;
LABEL_136:
    v69 = (__m128i *)v68;
    *(__m128i *)v101 = _mm_loadu_si128(v68);
    v102 = _mm_loadu_si128(v68 + 1);
    v70 = v68->m128i_u64[1];
    s1c = (void *)v68->m128i_i64[0];
    while ( 1 )
    {
      v71 = v69[-2].m128i_u64[1];
      v72 = v71;
      if ( v70 <= v71 )
        v72 = v70;
      if ( v72 && (v73 = memcmp(s1c, (const void *)v69[-2].m128i_i64[0], v72)) != 0 )
      {
        if ( v73 >= 0 )
          goto LABEL_135;
      }
      else if ( v70 == v71 || v70 >= v71 )
      {
LABEL_135:
        v69->m128i_i64[1] = v70;
        v68 += 2;
        v69->m128i_i64[0] = (__int64)s1c;
        v69[1] = _mm_load_si128(&v102);
        if ( ptrb == v68 )
          goto LABEL_82;
        goto LABEL_136;
      }
      v74 = _mm_loadu_si128(v69 - 2);
      v75 = _mm_loadu_si128(v69 - 1);
      v69 -= 2;
      v69[2] = v74;
      v69[3] = v75;
    }
  }
LABEL_94:
  if ( ptrb != (__m128i *)v106 )
    free(ptrb);
  if ( v122 != v124 )
    operator delete(v122);
  if ( v119 != v121 )
    operator delete(v119);
  if ( v116 != v118 )
    operator delete(v116);
  v55 = (char *)v112;
  if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
  {
    v56 = 0;
    v57 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
    do
    {
      v58 = *(_QWORD **)&v55[v56];
      if ( v58 != (_QWORD *)-8LL && v58 )
      {
        v59 = (_QWORD *)v58[1];
        v60 = *v58 + 41LL;
        if ( v59 != v58 + 3 )
          operator delete(v59);
        operator delete(v58, v60, 8);
        v55 = (char *)v112;
      }
      v56 += 8;
    }
    while ( v57 != v56 );
  }
  free(v55);
  v61 = v110;
  v62 = (void **)v109;
  if ( v110 != v109 )
  {
    do
    {
      while ( *v62 != v62 + 2 )
      {
        operator delete(*v62);
        v62 += 4;
        if ( v62 == v61 )
          goto LABEL_114;
      }
      v62 += 4;
    }
    while ( v61 != v62 );
LABEL_114:
    v62 = (void **)v109;
  }
  if ( v62 )
    operator delete(v62);
  v63 = v107.m128i_i64[1];
  v64 = (void **)v107.m128i_i64[0];
  if ( v107.m128i_i64[1] != v107.m128i_i64[0] )
  {
    do
    {
      while ( *v64 != v64 + 2 )
      {
        operator delete(*v64);
        v64 += 5;
        if ( v64 == (void **)v63 )
          goto LABEL_120;
      }
      v64 += 5;
    }
    while ( (void **)v63 != v64 );
LABEL_120:
    v64 = (void **)v107.m128i_i64[0];
  }
  if ( v64 )
    operator delete(v64);
}
