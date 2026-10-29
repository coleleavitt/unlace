void __fastcall sub_18239C0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __m128i v16; // xmm2
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rdx
  const char *v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  int v23; // r15d
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  int v36; // eax
  size_t v37; // rax
  unsigned int *v38; // r15
  size_t v39; // rcx
  size_t v40; // r8
  int v41; // eax
  size_t v42; // rax
  size_t v43; // r8
  size_t v44; // rcx
  size_t v45; // rax
  size_t v46; // r8
  __m128i *v47; // rax
  __int64 v48; // r12
  size_t v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  char v53; // r15
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // r11
  __int64 v63; // r12
  __int128 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  size_t v70; // rax
  unsigned int *v71; // r12
  _QWORD *v72; // rcx
  size_t v73; // r15
  const void *v74; // r12
  int v75; // eax
  __int64 *v76; // rcx
  int v77; // eax
  __int64 v78; // r12
  size_t v79; // rax
  __int64 v80; // r15
  __int64 v81; // rax
  __int128 v82; // rax
  __int128 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rdx
  size_t v86; // rax
  unsigned int *v87; // r12
  _QWORD *v88; // rcx
  size_t v89; // r15
  const void *v90; // r12
  int v91; // eax
  __int64 *v92; // rcx
  int v93; // eax
  __int64 v94; // r12
  size_t v95; // rax
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int128 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int128 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // r12
  size_t v109; // rax
  __int64 v110; // r12
  size_t v111; // rax
  size_t v112; // rax
  int v113; // eax
  size_t v114; // rax
  size_t v115; // rax
  __int64 v116; // r15
  size_t v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // r12
  __int128 v121; // rax
  __int64 v122; // r10
  __int64 v123; // r9
  __int64 v124; // rcx
  __int64 v125; // r11
  __int64 v126; // r15
  size_t v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rdx
  __int128 v130; // [rsp-60h] [rbp-278h]
  __int128 v131; // [rsp-60h] [rbp-278h]
  int v132; // [rsp+0h] [rbp-218h]
  __int64 v133; // [rsp+8h] [rbp-210h]
  int v134; // [rsp+10h] [rbp-208h]
  int v135; // [rsp+18h] [rbp-200h]
  bool v136; // [rsp+28h] [rbp-1F0h]
  void *s1; // [rsp+30h] [rbp-1E8h]
  void *s1a; // [rsp+30h] [rbp-1E8h]
  _QWORD *s1b; // [rsp+30h] [rbp-1E8h]
  __int64 *s1e; // [rsp+30h] [rbp-1E8h]
  __int128 s1c; // [rsp+30h] [rbp-1E8h]
  _QWORD *s1d; // [rsp+30h] [rbp-1E8h]
  __int64 *s1f; // [rsp+30h] [rbp-1E8h]
  size_t v144; // [rsp+40h] [rbp-1D8h]
  size_t v145; // [rsp+40h] [rbp-1D8h]
  size_t v146; // [rsp+40h] [rbp-1D8h]
  char v147; // [rsp+40h] [rbp-1D8h]
  __int128 v148; // [rsp+40h] [rbp-1D8h]
  size_t v149; // [rsp+40h] [rbp-1D8h]
  _BOOL4 n; // [rsp+50h] [rbp-1C8h]
  char na; // [rsp+50h] [rbp-1C8h]
  size_t v152; // [rsp+58h] [rbp-1C0h]
  size_t v153; // [rsp+58h] [rbp-1C0h]
  size_t v154; // [rsp+58h] [rbp-1C0h]
  size_t v155; // [rsp+58h] [rbp-1C0h]
  int v156; // [rsp+64h] [rbp-1B4h] BYREF
  unsigned __int64 v157; // [rsp+68h] [rbp-1B0h] BYREF
  unsigned __int64 v158; // [rsp+70h] [rbp-1A8h] BYREF
  unsigned __int64 *v159; // [rsp+78h] [rbp-1A0h] BYREF
  _QWORD v160[2]; // [rsp+80h] [rbp-198h] BYREF
  __int128 v161; // [rsp+90h] [rbp-188h] BYREF
  char v162; // [rsp+A0h] [rbp-178h]
  __m128i v163; // [rsp+B0h] [rbp-168h] BYREF
  char v164; // [rsp+C0h] [rbp-158h]
  _BYTE v165[24]; // [rsp+D0h] [rbp-148h] BYREF
  int v166; // [rsp+E8h] [rbp-130h]
  _BYTE v167[24]; // [rsp+F0h] [rbp-128h] BYREF
  int v168; // [rsp+108h] [rbp-110h]
  _BYTE v169[24]; // [rsp+110h] [rbp-108h] BYREF
  int v170; // [rsp+128h] [rbp-F0h]
  unsigned int *v171[4]; // [rsp+130h] [rbp-E8h] BYREF
  __m128i v172; // [rsp+150h] [rbp-C8h] BYREF
  char v173; // [rsp+160h] [rbp-B8h]
  unsigned __int8 *v174[11]; // [rsp+170h] [rbp-A8h] BYREF
  char v175; // [rsp+1C8h] [rbp-50h]
  char v176; // [rsp+1D4h] [rbp-44h]

  v6 = (*(_BYTE *)(a2 + 28) + 100) & 0x7F;
  if ( (unsigned __int8)v6 <= 0x35u )
  {
    v7 = 0x20000800000001LL;
    if ( _bittest64(&v7, v6) )
    {
      sub_168B9F0((__int64)&v172, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x1AB0u, 0);
      sub_15DD120((__int64)&v172, a3);
      sub_15F7200(&v172);
      return;
    }
  }
  if ( !(unsigned __int8)sub_15EB880(a3, a1, 1u) )
    return;
  v8 = *(_QWORD *)((*(_QWORD *)(a3 + 80) & 0xFFFFFFFFFFFFFFFCLL) + 8);
  v157 = *(_QWORD *)(a3 + 80) & 0xFFFFFFFFFFFFFFFCLL;
  v9 = sub_B8FAD0(*(_QWORD *)(v8 + 16) + 16LL, **(unsigned int **)(v8 + 16));
  v160[1] = v10;
  v160[0] = v9;
  if ( !v10 )
  {
    sub_168B9F0((__int64)&v172, (__int64 *)(a1 + 8), *(_DWORD *)v157, 0x19D5u, 0);
    v171[0] = *(unsigned int **)(v157 + 8);
    sub_18175F0((__int64)&v172, (__int64 *)v171);
    sub_15F7200(&v172);
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 18 > 0x3F )
    return;
  v11 = *(unsigned int **)(v8 + 16);
  v12 = a3 + 8LL * *(unsigned __int16 *)(a3 + 56) + 80;
  v13 = *v11;
  v14 = _mm_loadu_si128((const __m128i *)v12);
  v15 = _mm_loadu_si128((const __m128i *)(a3 + 8LL * *(unsigned __int16 *)(a3 + 56) + 108));
  v16 = _mm_loadu_si128((const __m128i *)(a3 + 8LL * *(unsigned __int16 *)(a3 + 56) + 136));
  *(_QWORD *)&v165[16] = *(_QWORD *)(a3 + 8LL * *(unsigned __int16 *)(a3 + 56) + 96);
  v17 = *(_DWORD *)(v12 + 24);
  *(__m128i *)v165 = v14;
  v166 = v17;
  v18 = *(_QWORD *)(v12 + 44);
  *(__m128i *)v167 = v15;
  *(_QWORD *)&v167[16] = v18;
  LODWORD(v18) = *(_DWORD *)(v12 + 52);
  *(__m128i *)v169 = v16;
  v168 = v18;
  v19 = *(_QWORD *)(v12 + 72);
  LODWORD(v12) = *(_DWORD *)(v12 + 80);
  *(_QWORD *)&v169[16] = v19;
  v170 = v12;
  v20 = sub_1479BE0((_BYTE *)v11 + 16, v13);
  v22 = sub_18060F0((__int64)v20, v21);
  v171[1] = (unsigned int *)a1;
  v171[0] = (unsigned int *)&v156;
  v171[2] = (unsigned int *)&v157;
  v156 = v22;
  v171[3] = (unsigned int *)v160;
  if ( v22 )
  {
    sub_180CF90(v171, (__m128i *)&v165[4]);
    sub_180CF90(v171, (__m128i *)&v167[4]);
    sub_180CF90(v171, (__m128i *)&v169[4]);
  }
  v23 = *(_DWORD *)(a3 + 60);
  v132 = 0;
  v133 = 0;
  v24 = a3 + 8LL * *(unsigned __int16 *)(a3 + 56) + 80;
  v25 = *(_QWORD *)(a3 + 64);
  v26 = *(_DWORD *)(a3 + 8LL * *(unsigned __int16 *)(a3 + 56) + 164);
  if ( v25 && (*(_WORD *)v25 & 0x1FF) == 9 )
  {
    v132 = v25 + 4 * *(_DWORD *)(v25 + 4) + 20;
    v133 = *(_DWORD *)(v25 + 16) * ((*(_WORD *)(v25 + 2) >> 6) & 7u);
  }
  v134 = 0;
  v27 = *(_QWORD *)(a3 + 8LL * *(unsigned __int16 *)(a3 + 56) + 168);
  v135 = 0;
  if ( v27 && (*(_WORD *)v27 & 0x1FF) == 9 )
  {
    v134 = v27 + 4 * *(_DWORD *)(v27 + 4) + 20;
    v135 = *(_DWORD *)(v27 + 16) * ((*(_WORD *)(v27 + 2) >> 6) & 7);
  }
  v28 = *(_QWORD *)(v8 + 16);
  if ( (unsigned int)*(_QWORD *)v28 == 5 )
  {
    if ( *(_DWORD *)(v28 + 16) == 1718187891
      && *(_BYTE *)(v28 + 20) == 116
      && (*(_DWORD *)&v169[16] & 0x7FFFFFFF
        | *(_DWORD *)&v169[12] & 0x7FFFFFFF
        | *(_DWORD *)&v169[8] & 0x7FFFFFFF
        | *(_DWORD *)&v165[16] & 0x7FFFFFFF
        | *(_DWORD *)&v165[12] & 0x7FFFFFFF
        | *(_DWORD *)&v165[8] & 0x7FFFFFFF
        | *(_DWORD *)&v169[4]
        | *(_DWORD *)&v165[4]
       || !(v23
          | (*(_DWORD *)&v167[12] | *(_DWORD *)&v167[8]) & 0x7FFFFFFF
          | *(_DWORD *)&v167[4]
          | *(_DWORD *)&v167[16] & 0x7FFFFFFF)) )
    {
      sub_168B9F0((__int64)&v172, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x19D3u, 0);
      sub_15F7200(&v172);
      return;
    }
  }
  else if ( (unsigned int)*(_QWORD *)v28 == 7
         && *(_DWORD *)(v28 + 16) == 1751348582
         && *(_WORD *)(v28 + 20) == 26995
         && *(_BYTE *)(v28 + 22) == 97
         && (v165[11] < 0 || v165[15] < 0) )
  {
    sub_168B9F0((__int64)&v172, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x19D0u, 0);
    sub_15F7200(&v172);
    return;
  }
  v136 = v26 != 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 89LL) & 1) != 0 && v26 )
  {
    sub_168B9F0((__int64)&v172, (__int64 *)(a1 + 8), v26, 0xCCBu, 0);
    if ( v175 )
    {
      sub_AE9DF0(v174, (__int64)"strict", 1u);
    }
    else if ( v176 )
    {
      sub_180D0B0((__int64)&v172, (__int64)"strict");
    }
    v163.m128i_i32[0] = 0;
    sub_1587D10((__int64)&v172, v163.m128i_i32);
    sub_15F7200(&v172);
    v24 = a3 + 8LL * *(unsigned __int16 *)(a3 + 56) + 80;
  }
  v29 = *(_QWORD *)(v24 + 96);
  if ( v29 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 89LL) & 1) != 0 )
    {
      if ( !(unsigned int)sub_1805D60(
                            *(_QWORD *)(*(_QWORD *)(v29 + 8) + 16LL) + 16LL,
                            **(unsigned int **)(*(_QWORD *)(v29 + 8) + 16LL)) )
      {
        sub_168B9F0((__int64)&v172, (__int64 *)(a1 + 8), *(_DWORD *)v29, 0x19D4u, 0);
        v163.m128i_i64[0] = *(_QWORD *)(v29 + 8);
        sub_18175F0((__int64)&v172, v163.m128i_i64);
        sub_15F7200(&v172);
      }
    }
    else
    {
      sub_168B9F0((__int64)&v172, (__int64 *)(a1 + 8), *(_DWORD *)v29, 0xCCBu, 0);
      if ( v175 )
      {
        sub_AE9DF0(v174, (__int64)"environment", 1u);
      }
      else if ( v176 )
      {
        sub_180D0B0((__int64)&v172, (__int64)"environment");
      }
      v163.m128i_i32[0] = 1;
      sub_1587D10((__int64)&v172, v163.m128i_i32);
      sub_15F7200(&v172);
    }
  }
  n = v23 != 0;
  v30 = sub_1822D80(
          a1,
          a2,
          a3,
          v8,
          0,
          v23 != 0,
          *(__int128 *)&v165[4],
          *(__int128 *)&v167[4],
          v14,
          *(__int64 *)&v169[4],
          *(__int64 *)&v169[12],
          v132,
          v133,
          v136,
          v134,
          v135,
          0);
  if ( v30 )
    sub_B8CC60(a2, v30, v31, v32, v33, v34);
  v35 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL);
  v36 = *(_DWORD *)(v35 + 260);
  if ( v36 == 28 )
  {
    s1b = *(_QWORD **)(a1 + 248);
    v70 = j__strlen("ios");
    v71 = *(unsigned int **)(v8 + 16);
    v72 = s1b;
    v73 = *v71;
    v74 = v71 + 4;
    if ( v73 == v70 )
    {
      if ( !v73 || (v75 = memcmp(v74, "ios", v73), v72 = s1b, !v75) )
      {
        v108 = v72[2188];
        v109 = j__strlen("watchos");
        v80 = sub_6F3470(v108, "watchos", v109);
        goto LABEL_69;
      }
      if ( v73 != j__strlen("ios_app_extension") )
        return;
      v76 = s1b;
    }
    else
    {
      if ( v73 != j__strlen("ios_app_extension") )
        return;
      v76 = s1b;
      if ( !v73 )
        goto LABEL_68;
    }
    s1e = v76;
    v77 = memcmp(v74, "ios_app_extension", v73);
    v76 = s1e;
    if ( v77 )
      return;
LABEL_68:
    v78 = v76[2188];
    v79 = j__strlen("watchos_app_extension");
    v80 = sub_6F3470(v78, "watchos_app_extension", v79);
LABEL_69:
    if ( !v80 )
      return;
    v81 = (__int64)sub_15F4080(a1);
    if ( v81 )
      v81 = sub_11EF5B0(v81, 0xCD0000047CLL);
    v172.m128i_i64[0] = v81;
    *(_QWORD *)&v82 = sub_1803EC0(v172.m128i_i64, *(__int64 *)&v165[4], *(__int64 *)&v165[12]);
    s1c = v82;
    *(_QWORD *)&v83 = sub_1803EC0(v172.m128i_i64, *(__int64 *)&v167[4], *(__int64 *)&v167[12]);
    v148 = v83;
    v84 = sub_1803EC0(v172.m128i_i64, *(__int64 *)&v169[4], *(__int64 *)&v169[12]);
LABEL_73:
    v65 = sub_1822D80(a1, a2, a3, v80, 1, n, s1c, v148, v14, v84, v85, v132, v133, v136, v134, v135, 0);
    goto LABEL_51;
  }
  if ( v36 == 27 )
  {
    s1d = *(_QWORD **)(a1 + 248);
    v86 = j__strlen("ios");
    v87 = *(unsigned int **)(v8 + 16);
    v88 = s1d;
    v89 = *v87;
    v90 = v87 + 4;
    if ( v89 == v86 )
    {
      if ( !v89 || (v91 = memcmp(v90, "ios", v89), v88 = s1d, !v91) )
      {
        v110 = v88[2188];
        v111 = j__strlen("tvos");
        v80 = sub_6F3470(v110, "tvos", v111);
        goto LABEL_85;
      }
      if ( v89 != j__strlen("ios_app_extension") )
        return;
      v92 = s1d;
    }
    else
    {
      if ( v89 != j__strlen("ios_app_extension") )
        return;
      v92 = s1d;
      if ( !v89 )
        goto LABEL_84;
    }
    s1f = v92;
    v93 = memcmp(v90, "ios_app_extension", v89);
    v92 = s1f;
    if ( v93 )
      return;
LABEL_84:
    v94 = v92[2188];
    v95 = j__strlen("tvos_app_extension");
    v80 = sub_6F3470(v94, "tvos_app_extension", v95);
LABEL_85:
    if ( !v80 )
      return;
    v96 = (__int64)sub_15F4080(a1);
    if ( v96 )
      v96 = sub_11EF5B0(v96, 0xCD00000453LL);
    v172.m128i_i64[0] = v96;
    *(_QWORD *)&v100 = sub_1803D50(v172.m128i_i64, *(__int64 *)&v165[4], *(__int64 *)&v165[12], v97, v98, v99);
    s1c = v100;
    *(_QWORD *)&v104 = sub_1803D50(v172.m128i_i64, *(__int64 *)&v167[4], *(__int64 *)&v167[12], v101, v102, v103);
    v148 = v104;
    v84 = sub_1803D50(v172.m128i_i64, *(__int64 *)&v169[4], *(__int64 *)&v169[12], v105, v106, v107);
    goto LABEL_73;
  }
  if ( v36 != 5 || *(_DWORD *)(v35 + 264) != 32 )
    return;
  v144 = *(_QWORD *)(a1 + 248);
  v37 = j__strlen("ios");
  v38 = *(unsigned int **)(v8 + 16);
  v39 = v144;
  v40 = *v38;
  s1 = v38 + 4;
  if ( v40 != v37 )
  {
    v154 = *v38;
    v112 = j__strlen("ios_app_extension");
    v43 = v154;
    if ( v154 != v112 )
      goto LABEL_110;
    v44 = v144;
    if ( !v154 )
      goto LABEL_116;
    goto LABEL_106;
  }
  if ( *v38 )
  {
    v152 = v144;
    v145 = *v38;
    v41 = memcmp(v38 + 4, "ios", v40);
    v39 = v152;
    if ( v41 )
    {
      v153 = v145;
      v146 = v39;
      v42 = j__strlen("ios_app_extension");
      v43 = v153;
      v44 = v146;
      if ( v153 != v42 )
      {
        v45 = j__strlen("macos");
        v46 = v153;
        if ( v153 != v45 )
          return;
LABEL_37:
        s1 = v38 + 4;
LABEL_38:
        if ( memcmp(s1, "macos", v46) )
          return;
        goto LABEL_39;
      }
LABEL_106:
      v155 = v44;
      v149 = v43;
      v113 = memcmp(s1, "ios_app_extension", v43);
      v44 = v155;
      if ( v113 )
      {
        v114 = j__strlen("macos");
        v46 = v149;
        if ( v114 != v149 )
          return;
        goto LABEL_38;
      }
LABEL_116:
      v126 = *(_QWORD *)(v44 + 17504);
      v127 = j__strlen("maccatalyst_app_extension");
      v118 = sub_6F3470(v126, "maccatalyst_app_extension", v127);
      goto LABEL_114;
    }
  }
  v116 = *(_QWORD *)(v39 + 17504);
  v117 = j__strlen("maccatalyst");
  v118 = sub_6F3470(v116, "maccatalyst", v117);
LABEL_114:
  if ( v118 )
  {
    sub_1804010((__int64)&v169[4]);
    v120 = v119;
    sub_1804010((__int64)&v167[4]);
    *(_QWORD *)&v121 = sub_1804010((__int64)&v165[4]);
    *((_QWORD *)&v131 + 1) = v122;
    *(_QWORD *)&v131 = v123;
    v65 = sub_1822D80(a1, a2, a3, v124, 1, n, v121, v131, v14, v125, v120, v132, v133, v136, v134, v135, 0);
LABEL_51:
    if ( v65 )
      sub_B8CC60(a2, v65, v66, v67, v68, v69);
    return;
  }
  v38 = *(unsigned int **)(v8 + 16);
LABEL_110:
  v115 = j__strlen("macos");
  v46 = *v38;
  if ( v46 != v115 )
    return;
  if ( *v38 )
    goto LABEL_37;
LABEL_39:
  if ( sub_18056C0(a1, a3) )
  {
    if ( *(_DWORD *)&v169[16] & 0x7FFFFFFF
       | *(_DWORD *)&v169[12] & 0x7FFFFFFF
       | *(_DWORD *)&v169[8] & 0x7FFFFFFF
       | *(_DWORD *)&v167[16] & 0x7FFFFFFF
       | *(_DWORD *)&v167[12] & 0x7FFFFFFF
       | *(_DWORD *)&v167[8] & 0x7FFFFFFF
       | *(_DWORD *)&v165[16] & 0x7FFFFFFF
       | *(_DWORD *)&v165[12] & 0x7FFFFFFF
       | *(_DWORD *)&v165[8] & 0x7FFFFFFF
       | *(_DWORD *)&v169[4]
       | *(_DWORD *)&v167[4]
       | *(_DWORD *)&v165[4] )
    {
      v47 = sub_18056C0(a1, a3);
      v158 = sub_11EF5B0((__int64)v47, 0x171000000EDLL);
      if ( v158 )
      {
        v48 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL);
        v49 = j__strlen("maccatalyst");
        s1a = (void *)sub_6F3470(v48, "maccatalyst", v49);
        v159 = &v158;
        sub_1803E10((__m128i *)&v161, (__int64 **)&v159, (unsigned int *)&v165[4], v50, v51, v52);
        v53 = v162;
        v147 = v162;
        sub_1803E10(&v163, (__int64 **)&v159, (unsigned int *)&v167[4], v54, v55, v56);
        na = v164;
        sub_1803E10(&v172, (__int64 **)&v159, (unsigned int *)&v169[4], v57, v58, v59);
        if ( v53 || na )
        {
          if ( !v173 )
          {
            v61 = ((__int64 (*)(void))sub_1803E00)();
            v60 = v128;
            goto LABEL_46;
          }
        }
        else if ( !v173 )
        {
          return;
        }
        v60 = v172.m128i_i64[1];
        v61 = v172.m128i_i64[0];
LABEL_46:
        if ( na )
        {
          v63 = v163.m128i_i64[1];
          v62 = v163.m128i_i64[0];
        }
        else
        {
          v62 = sub_1803E00(v60, v61);
          v63 = v129;
        }
        if ( v147 )
          v64 = v161;
        else
          *(_QWORD *)&v64 = sub_1803E00(v60, v61);
        *((_QWORD *)&v130 + 1) = v63;
        *(_QWORD *)&v130 = v62;
        v65 = sub_1822D80(a1, a2, a3, (__int64)s1a, 1, 0, v64, v130, v14, v61, v60, v132, v133, v136, v134, v135, 0);
        goto LABEL_51;
      }
    }
  }
}
