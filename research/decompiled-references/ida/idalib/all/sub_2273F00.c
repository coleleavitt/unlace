__int64 __fastcall sub_2273F00(__int64 **a1, _QWORD *a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __m128i v8; // xmm1
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 *v17; // rax
  _QWORD *v18; // rcx
  __int64 **v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __m128i v25; // xmm0
  __int64 v27; // rdi
  __m128i v28; // xmm4
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __m128i v34; // xmm2
  __int64 v35; // rdx
  _QWORD *v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r15
  __int64 v45; // rax
  __m128i v46; // kr00_16
  __int64 *v47; // rax
  _QWORD *v48; // rsi
  __int64 **v49; // rax
  __int64 *v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rdx
  __m128i v53; // xmm0
  __int64 v54; // r15
  __int64 v55; // rax
  __m128i v56; // kr10_16
  __int64 *v57; // rax
  _QWORD *v58; // rsi
  __int64 **v59; // rax
  __int64 *v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rdx
  __m128i v63; // xmm0
  __int64 v64; // r15
  __int64 v65; // rax
  __m128i v66; // kr20_16
  __int64 *v67; // rax
  _QWORD *v68; // rsi
  __int64 **v69; // rax
  __int64 *v70; // rax
  __int64 v71; // rdi
  __int64 v72; // rdx
  __m128i v73; // xmm0
  __int64 *v74; // rax
  __int64 v75; // r15
  __int64 v76; // rax
  __m128i v77; // kr30_16
  __int64 *v78; // rax
  _QWORD *v79; // rsi
  __int64 **v80; // rax
  __int64 *v81; // rax
  __int64 v82; // rdi
  __int64 v83; // rdx
  __m128i v84; // xmm0
  __int64 v85; // r15
  __int64 v86; // rax
  __m128i v87; // kr40_16
  __int64 *v88; // rax
  _QWORD *v89; // rsi
  __int64 **v90; // rax
  __int64 *v91; // rax
  __int64 v92; // rdi
  __int64 v93; // rdx
  __m128i v94; // xmm0
  __int64 v95; // r15
  __int64 v96; // rax
  __m128i v97; // kr50_16
  __int64 *v98; // rax
  _QWORD *v99; // rsi
  __int64 **v100; // rax
  __int64 *v101; // rax
  __int64 v102; // rdi
  __int64 v103; // rdx
  __m128i v104; // xmm0
  __int64 v105; // rcx
  __int64 v106; // r15
  __int64 v107; // r15
  __m128i v108; // kr60_16
  __int64 *v109; // rax
  _QWORD *v110; // rsi
  __int64 **v111; // rax
  __int64 *v112; // rax
  __int64 v113; // rdi
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // r9
  size_t v117; // r14
  __int64 *v118; // r10
  size_t v119; // r15
  void *v120; // rax
  size_t v121; // rdx
  __int64 v122; // r8
  __int64 v123; // rcx
  __m128i v124; // kr70_16
  __int64 *v125; // rax
  _QWORD *v126; // rsi
  __int64 **v127; // rax
  __int64 *v128; // rax
  __int64 v129; // rdi
  __int64 v130; // rdx
  const char *v131; // rax
  __int64 v132; // [rsp+8h] [rbp-170h]
  void *v133; // [rsp+8h] [rbp-170h]
  void *src; // [rsp+18h] [rbp-160h]
  void *srca; // [rsp+18h] [rbp-160h]
  void *srcb; // [rsp+18h] [rbp-160h]
  void *srcc; // [rsp+18h] [rbp-160h]
  void *srcd; // [rsp+18h] [rbp-160h]
  void *srce; // [rsp+18h] [rbp-160h]
  const void *srcf; // [rsp+18h] [rbp-160h]
  _QWORD *v141; // [rsp+28h] [rbp-150h]
  __int64 v142; // [rsp+30h] [rbp-148h]
  __int64 v143; // [rsp+38h] [rbp-140h]
  unsigned int v144; // [rsp+40h] [rbp-138h]
  unsigned int v145; // [rsp+40h] [rbp-138h]
  __m128i v146; // [rsp+48h] [rbp-130h]
  void *v147; // [rsp+58h] [rbp-120h] BYREF
  size_t v148; // [rsp+60h] [rbp-118h]
  _BYTE v149[24]; // [rsp+68h] [rbp-110h] BYREF
  int v150; // [rsp+80h] [rbp-F8h]
  __m128i v151; // [rsp+88h] [rbp-F0h]
  void *v152[2]; // [rsp+98h] [rbp-E0h] BYREF
  _BYTE v153[24]; // [rsp+A8h] [rbp-D0h] BYREF
  int v154; // [rsp+C0h] [rbp-B8h]
  __m128i v155; // [rsp+C8h] [rbp-B0h]
  void *v156[2]; // [rsp+D8h] [rbp-A0h] BYREF
  _BYTE v157[24]; // [rsp+E8h] [rbp-90h] BYREF
  const char *v158; // [rsp+100h] [rbp-78h] BYREF
  __m128i v159; // [rsp+108h] [rbp-70h] BYREF
  void *v160; // [rsp+118h] [rbp-60h] BYREF
  __int16 v161; // [rsp+120h] [rbp-58h]
  _BYTE v162[80]; // [rsp+128h] [rbp-50h] BYREF

  v7 = sub_2273810(**a1, a2, a3, a4, a5, a6);
  v8 = _mm_loadu_si128((const __m128i *)(v7 + 8));
  v144 = *(_DWORD *)v7;
  v147 = v149;
  v146 = v8;
  sub_226E090(&v147, *(_BYTE **)(v7 + 24), *(_QWORD *)(v7 + 24) + *(_QWORD *)(v7 + 32));
  v150 = 0;
  v152[0] = v153;
  v151 = 0u;
  v152[1] = nullptr;
  v153[0] = 0;
  v154 = 0;
  v155 = 0u;
  v156[0] = v157;
  v156[1] = nullptr;
  v157[0] = 0;
  while ( 1 )
  {
    v13 = v144;
    if ( v144 != 21 )
      break;
LABEL_22:
    v27 = **a1;
    if ( v150 == 21 )
    {
      v131 = "Already encountered an anchor for this node!";
LABEL_70:
      v16 = 0;
      v158 = v131;
      v161 = 259;
      sub_226E270(v27, (__int64)&v158, (char *)v146.m128i_i64[0]);
      goto LABEL_11;
    }
    sub_2273D80((__int64)&v158, (__m128 *)**a1, v9, v10, v11, v12);
    v34 = _mm_loadu_si128(&v159);
    v150 = (int)v158;
    v151 = v34;
    sub_A0AAD0((__int64)v152, &v160);
    if ( v160 != v162 )
      operator delete(v160);
    v39 = sub_2273810(**a1, &v160, v35, v36, v37, v38);
    v144 = *(_DWORD *)v39;
    v146 = _mm_loadu_si128((const __m128i *)(v39 + 8));
    sub_9EE8A0((__int64)&v147, v39 + 24);
  }
  while ( (_DWORD)v13 == 22 )
  {
    v27 = **a1;
    if ( v154 == 22 )
    {
      v131 = "Already encountered a tag for this node!";
      goto LABEL_70;
    }
    sub_2273D80((__int64)&v158, (__m128 *)**a1, v9, v10, v11, v12);
    v28 = _mm_loadu_si128(&v159);
    v154 = (int)v158;
    v155 = v28;
    sub_A0AAD0((__int64)v156, &v160);
    if ( v160 != v162 )
      operator delete(v160);
    v33 = sub_2273810(**a1, &v160, v29, v30, v31, v32);
    v145 = *(_DWORD *)v33;
    v146 = _mm_loadu_si128((const __m128i *)(v33 + 8));
    sub_9EE8A0((__int64)&v147, v33 + 24);
    v13 = v145;
    if ( v145 == 21 )
      goto LABEL_22;
  }
  if ( (_DWORD)v13 == 20 )
  {
    sub_2273D80((__int64)&v158, (__m128 *)**a1, v9, v10, v11, v12);
    if ( v160 != v162 )
      operator delete(v160);
    v14 = v146.m128i_i64[1];
    v15 = 0;
    if ( v146.m128i_i64[1] )
    {
      v14 = v146.m128i_i64[1] - 1;
      v15 = 1;
    }
    v132 = v146.m128i_i64[0] + v15;
    v16 = sub_9C3B30((__int64 *)a1 + 1, 88, 4u);
    v17 = *a1;
    *(_QWORD *)(v16 + 16) = 0;
    *(_QWORD *)v16 = off_2BEBBC8;
    v18 = v17 + 1;
    v19 = (__int64 **)v17[1];
    *(_QWORD *)(v16 + 8) = v18;
    v20 = *v19;
    *(_QWORD *)(v16 + 24) = 0;
    *(_DWORD *)(v16 + 32) = 6;
    *(_QWORD *)(v16 + 40) = 0;
    v21 = *v20;
    *(_QWORD *)(v16 + 48) = 0;
    *(_QWORD *)(v16 + 56) = 0;
    *(_QWORD *)(v16 + 64) = 0;
    v25 = _mm_loadl_epi64((const __m128i *)(sub_2273810(v21, &qword_58, v22, v18, v23, v24) + 8));
    *(_QWORD *)(v16 + 80) = v14;
    *(_QWORD *)(v16 + 72) = v132;
    *(_QWORD *)v16 = off_2BEBCA8;
    *(__m128i *)(v16 + 16) = _mm_unpacklo_epi64(v25, v25);
  }
  else
  {
    switch ( v13 )
    {
      case 0LL:
        v16 = 0;
        break;
      case 7LL:
        v44 = v151.m128i_i64[1];
        v45 = 0;
        if ( v151.m128i_i64[1] )
        {
          v44 = v151.m128i_i64[1] - 1;
          v45 = 1;
        }
        v46 = v155;
        src = (void *)(v151.m128i_i64[0] + v45);
        v16 = sub_9C3B30((__int64 *)a1 + 1, 88, 4u);
        v47 = *a1;
        *(_QWORD *)(v16 + 40) = src;
        *(_QWORD *)(v16 + 16) = 0;
        *(_QWORD *)v16 = off_2BEBBC8;
        v48 = v47 + 1;
        v49 = (__int64 **)v47[1];
        *(_QWORD *)(v16 + 8) = v48;
        v50 = *v49;
        *(_QWORD *)(v16 + 24) = 0;
        *(_DWORD *)(v16 + 32) = 5;
        *(_QWORD *)(v16 + 48) = v44;
        v51 = *v50;
        *(__m128i *)(v16 + 56) = v46;
        v53 = _mm_loadl_epi64((const __m128i *)(sub_2273810(
                                                  v51,
                                                  v48,
                                                  v52,
                                                  (_QWORD *)v46.m128i_i64[1],
                                                  v46.m128i_i64[0],
                                                  (__int64)src)
                                              + 8));
        *(_WORD *)(v16 + 76) = 1;
        *(_DWORD *)(v16 + 72) = 2;
        *(_BYTE *)(v16 + 78) = 1;
        *(__m128i *)(v16 + 16) = _mm_unpacklo_epi64(v53, v53);
        *(_QWORD *)v16 = off_2BEBC88;
        *(_QWORD *)(v16 + 80) = 0;
        break;
      case 9LL:
        sub_2273D80((__int64)&v158, (__m128 *)**a1, v9, v10, v11, v12);
        if ( v160 != v162 )
          operator delete(v160);
        v54 = v151.m128i_i64[1];
        v55 = 0;
        if ( v151.m128i_i64[1] )
        {
          v54 = v151.m128i_i64[1] - 1;
          v55 = 1;
        }
        v56 = v155;
        srca = (void *)(v151.m128i_i64[0] + v55);
        v16 = sub_9C3B30((__int64 *)a1 + 1, 88, 4u);
        v57 = *a1;
        *(_QWORD *)(v16 + 56) = v56.m128i_i64[0];
        *(_QWORD *)(v16 + 16) = 0;
        *(_QWORD *)v16 = off_2BEBBC8;
        v58 = v57 + 1;
        v59 = (__int64 **)v57[1];
        *(_QWORD *)(v16 + 8) = v58;
        v60 = *v59;
        *(_QWORD *)(v16 + 24) = 0;
        *(_DWORD *)(v16 + 32) = 5;
        *(_QWORD *)(v16 + 40) = srca;
        v61 = *v60;
        *(_QWORD *)(v16 + 48) = v54;
        *(_QWORD *)(v16 + 64) = v56.m128i_i64[1];
        v63 = _mm_loadl_epi64((const __m128i *)(sub_2273810(
                                                  v61,
                                                  v58,
                                                  v62,
                                                  (_QWORD *)v56.m128i_i64[1],
                                                  v56.m128i_i64[0],
                                                  (__int64)srca)
                                              + 8));
        *(_WORD *)(v16 + 76) = 1;
        *(_DWORD *)(v16 + 72) = 0;
        *(_BYTE *)(v16 + 78) = 1;
        *(__m128i *)(v16 + 16) = _mm_unpacklo_epi64(v63, v63);
        *(_QWORD *)v16 = off_2BEBC88;
        *(_QWORD *)(v16 + 80) = 0;
        break;
      case 10LL:
        sub_2273D80((__int64)&v158, (__m128 *)**a1, v9, v10, v11, v12);
        if ( v160 != v162 )
          operator delete(v160);
        v64 = v151.m128i_i64[1];
        v65 = 0;
        if ( v151.m128i_i64[1] )
        {
          v64 = v151.m128i_i64[1] - 1;
          v65 = 1;
        }
        v66 = v155;
        srcb = (void *)(v151.m128i_i64[0] + v65);
        v16 = sub_9C3B30((__int64 *)a1 + 1, 88, 4u);
        v67 = *a1;
        *(_QWORD *)(v16 + 16) = 0;
        *(_QWORD *)(v16 + 24) = 0;
        *(_QWORD *)v16 = off_2BEBBC8;
        v68 = v67 + 1;
        v69 = (__int64 **)v67[1];
        *(_QWORD *)(v16 + 8) = v68;
        v70 = *v69;
        *(_DWORD *)(v16 + 32) = 4;
        *(_QWORD *)(v16 + 40) = srcb;
        *(_QWORD *)(v16 + 48) = v64;
        v71 = *v70;
        *(__m128i *)(v16 + 56) = v66;
        v73 = _mm_loadl_epi64((const __m128i *)(sub_2273810(
                                                  v71,
                                                  v68,
                                                  v72,
                                                  (_QWORD *)v66.m128i_i64[1],
                                                  v66.m128i_i64[0],
                                                  (__int64)srcb)
                                              + 8));
        *(_DWORD *)(v16 + 72) = 0;
        *(_WORD *)(v16 + 76) = 1;
        *(_QWORD *)(v16 + 80) = 0;
        *(__m128i *)(v16 + 16) = _mm_unpacklo_epi64(v73, v73);
        *(_QWORD *)v16 = off_2BEBC68;
        break;
      case 11LL:
      case 13LL:
      case 15LL:
        v74 = a1[13];
        if ( v74 && (unsigned int)(*((_DWORD *)v74 + 8) - 4) <= 1 )
          goto LABEL_26;
        v16 = 0;
        v158 = "Unexpected token";
        v161 = 259;
        sub_226E270(**a1, (__int64)&v158, (char *)v146.m128i_i64[0]);
        break;
      case 12LL:
        sub_2273D80((__int64)&v158, (__m128 *)**a1, v9, v10, v11, v12);
        if ( v160 != v162 )
          operator delete(v160);
        v75 = v151.m128i_i64[1];
        v76 = 0;
        if ( v151.m128i_i64[1] )
        {
          v75 = v151.m128i_i64[1] - 1;
          v76 = 1;
        }
        v77 = v155;
        srcc = (void *)(v151.m128i_i64[0] + v76);
        v16 = sub_9C3B30((__int64 *)a1 + 1, 88, 4u);
        v78 = *a1;
        *(_QWORD *)(v16 + 16) = 0;
        *(_QWORD *)(v16 + 24) = 0;
        *(_QWORD *)v16 = off_2BEBBC8;
        v79 = v78 + 1;
        v80 = (__int64 **)v78[1];
        *(_QWORD *)(v16 + 8) = v79;
        v81 = *v80;
        *(_DWORD *)(v16 + 32) = 5;
        *(_QWORD *)(v16 + 40) = srcc;
        *(_QWORD *)(v16 + 48) = v75;
        v82 = *v81;
        *(__m128i *)(v16 + 56) = v77;
        v84 = _mm_loadl_epi64((const __m128i *)(sub_2273810(
                                                  v82,
                                                  v79,
                                                  v83,
                                                  (_QWORD *)v77.m128i_i64[1],
                                                  v77.m128i_i64[0],
                                                  (__int64)srcc)
                                              + 8));
        *(_WORD *)(v16 + 76) = 1;
        *(_DWORD *)(v16 + 72) = 1;
        *(_BYTE *)(v16 + 78) = 1;
        *(__m128i *)(v16 + 16) = _mm_unpacklo_epi64(v84, v84);
        *(_QWORD *)v16 = off_2BEBC88;
        *(_QWORD *)(v16 + 80) = 0;
        break;
      case 14LL:
        sub_2273D80((__int64)&v158, (__m128 *)**a1, v9, v10, v11, v12);
        if ( v160 != v162 )
          operator delete(v160);
        v85 = v151.m128i_i64[1];
        v86 = 0;
        if ( v151.m128i_i64[1] )
        {
          v85 = v151.m128i_i64[1] - 1;
          v86 = 1;
        }
        v87 = v155;
        srcd = (void *)(v151.m128i_i64[0] + v86);
        v16 = sub_9C3B30((__int64 *)a1 + 1, 88, 4u);
        v88 = *a1;
        *(_QWORD *)(v16 + 64) = v87.m128i_i64[1];
        *(_QWORD *)(v16 + 16) = 0;
        *(_QWORD *)v16 = off_2BEBBC8;
        v89 = v88 + 1;
        v90 = (__int64 **)v88[1];
        *(_QWORD *)(v16 + 8) = v89;
        v91 = *v90;
        *(_QWORD *)(v16 + 24) = 0;
        *(_DWORD *)(v16 + 32) = 4;
        *(_QWORD *)(v16 + 40) = srcd;
        v92 = *v91;
        *(_QWORD *)(v16 + 48) = v85;
        *(_QWORD *)(v16 + 56) = v87.m128i_i64[0];
        v94 = _mm_loadl_epi64((const __m128i *)(sub_2273810(
                                                  v92,
                                                  v89,
                                                  v93,
                                                  (_QWORD *)v87.m128i_i64[1],
                                                  v87.m128i_i64[0],
                                                  (__int64)srcd)
                                              + 8));
        *(_DWORD *)(v16 + 72) = 1;
        *(_WORD *)(v16 + 76) = 1;
        *(_QWORD *)(v16 + 80) = 0;
        *(__m128i *)(v16 + 16) = _mm_unpacklo_epi64(v94, v94);
        *(_QWORD *)v16 = off_2BEBC68;
        break;
      case 16LL:
        v95 = v151.m128i_i64[1];
        v96 = 0;
        if ( v151.m128i_i64[1] )
        {
          v95 = v151.m128i_i64[1] - 1;
          v96 = 1;
        }
        v97 = v155;
        srce = (void *)(v151.m128i_i64[0] + v96);
        v16 = sub_9C3B30((__int64 *)a1 + 1, 88, 4u);
        v98 = *a1;
        *(_QWORD *)(v16 + 16) = 0;
        *(_QWORD *)(v16 + 24) = 0;
        *(_QWORD *)v16 = off_2BEBBC8;
        v99 = v98 + 1;
        v100 = (__int64 **)v98[1];
        *(_QWORD *)(v16 + 8) = v99;
        v101 = *v100;
        *(_DWORD *)(v16 + 32) = 4;
        *(_QWORD *)(v16 + 40) = srce;
        *(_QWORD *)(v16 + 48) = v95;
        v102 = *v101;
        *(__m128i *)(v16 + 56) = v97;
        v104 = _mm_loadl_epi64((const __m128i *)(sub_2273810(
                                                   v102,
                                                   v99,
                                                   v103,
                                                   (_QWORD *)v97.m128i_i64[1],
                                                   v97.m128i_i64[0],
                                                   (__int64)srce)
                                               + 8));
        *(_DWORD *)(v16 + 72) = 2;
        *(_WORD *)(v16 + 76) = 1;
        *(_QWORD *)(v16 + 80) = 0;
        *(__m128i *)(v16 + 16) = _mm_unpacklo_epi64(v104, v104);
        *(_QWORD *)v16 = off_2BEBC68;
        break;
      case 18LL:
        sub_2273D80((__int64)&v158, (__m128 *)**a1, v9, v10, v11, v12);
        if ( v160 != v162 )
          operator delete(v160);
        v105 = v151.m128i_i64[1];
        v106 = 0;
        if ( v151.m128i_i64[1] )
        {
          v105 = v151.m128i_i64[1] - 1;
          v106 = 1;
        }
        v141 = (_QWORD *)v105;
        v107 = v151.m128i_i64[0] + v106;
        v108 = v155;
        v16 = sub_9C3B30((__int64 *)a1 + 1, 88, 4u);
        v109 = *a1;
        *(_QWORD *)(v16 + 16) = 0;
        *(_QWORD *)(v16 + 24) = 0;
        *(_QWORD *)v16 = off_2BEBBC8;
        v110 = v109 + 1;
        v111 = (__int64 **)v109[1];
        *(_QWORD *)(v16 + 8) = v110;
        v112 = *v111;
        *(_DWORD *)(v16 + 32) = 1;
        *(_QWORD *)(v16 + 40) = v107;
        *(_QWORD *)(v16 + 48) = v141;
        v113 = *v112;
        *(__m128i *)(v16 + 56) = v108;
        sub_2273810(v113, v110, v114, v141, v115, v116);
        *(__m128i *)(v16 + 72) = v146;
        *(_QWORD *)v16 = off_2BEBC08;
        *(_QWORD *)(v16 + 16) = v146.m128i_i64[0];
        *(_QWORD *)(v16 + 24) = v146.m128i_i64[0] + v146.m128i_i64[1];
        break;
      case 19LL:
        sub_2273D80((__int64)&v158, (__m128 *)**a1, v9, v10, v11, v12);
        if ( v160 != v162 )
          operator delete(v160);
        v117 = v148;
        v118 = (__int64 *)(a1 + 1);
        v133 = nullptr;
        v119 = v148 + 1;
        if ( v148 != -1 )
        {
          srcf = v147;
          v120 = (void *)sub_9C3B30((__int64 *)a1 + 1, v148 + 1, 0);
          v121 = v119;
          v119 = v117;
          v133 = v120;
          memmove(v120, srcf, v121);
          v118 = (__int64 *)(a1 + 1);
        }
        v122 = v151.m128i_i64[1];
        v123 = 0;
        if ( v151.m128i_i64[1] )
        {
          v122 = v151.m128i_i64[1] - 1;
          v123 = 1;
        }
        v143 = v122;
        v142 = v151.m128i_i64[0] + v123;
        v124 = v155;
        v16 = sub_9C3B30(v118, 88, 4u);
        v125 = *a1;
        *(_QWORD *)(v16 + 40) = v142;
        *(_QWORD *)(v16 + 16) = 0;
        *(_QWORD *)v16 = off_2BEBBC8;
        v126 = v125 + 1;
        v127 = (__int64 **)v125[1];
        *(_QWORD *)(v16 + 8) = v126;
        v128 = *v127;
        *(_QWORD *)(v16 + 24) = 0;
        *(_DWORD *)(v16 + 32) = 2;
        *(_QWORD *)(v16 + 48) = v143;
        v129 = *v128;
        *(__m128i *)(v16 + 56) = v124;
        sub_2273810(v129, v126, v130, (_QWORD *)v124.m128i_i64[1], v143, v124.m128i_i64[0]);
        *(_QWORD *)(v16 + 80) = v119;
        *(_QWORD *)(v16 + 16) = v146.m128i_i64[0];
        *(_QWORD *)v16 = off_2BEBC28;
        *(_QWORD *)(v16 + 72) = v133;
        *(_QWORD *)(v16 + 24) = v146.m128i_i64[0] + v146.m128i_i64[1];
        break;
      default:
LABEL_26:
        v16 = sub_9C3B30((__int64 *)a1 + 1, 72, 4u);
        sub_2273D00(v16, (__int64 ***)*a1 + 1, v40, v41, v42, v43);
        break;
    }
  }
LABEL_11:
  if ( v156[0] != v157 )
    operator delete(v156[0]);
  if ( v152[0] != v153 )
    operator delete(v152[0]);
  if ( v147 != v149 )
    operator delete(v147);
  return v16;
}
