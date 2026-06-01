__int64 __fastcall sub_191C8F0(
        __int64 *a1,
        _QWORD *a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 *v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rbp
  _QWORD *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbp
  _QWORD *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v22; // r12
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // r15
  __int16 v30; // ax
  int v31; // eax
  int *v32; // rsi
  int *v33; // rax
  int *i; // rcx
  int *j; // rcx
  __int64 v36; // rdx
  signed __int64 v37; // rdx
  unsigned __int64 v38; // rax
  char *v39; // rax
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  __int64 v42; // rsi
  __int64 v43; // rcx
  __int64 v44; // rbx
  _QWORD *v45; // r12
  _QWORD *v46; // rdx
  _QWORD *v47; // rdi
  unsigned int v48; // eax
  void **v49; // rbx
  void **v50; // r15
  void **v51; // rbx
  void **v52; // r15
  char *k; // rbp
  char *v54; // rdi
  char *v55; // rbx
  char *v56; // rdi
  __int64 v57; // r13
  __int64 v58; // rax
  __int64 v59; // r9
  void **v60; // rbx
  void **v61; // r15
  void **v62; // rbx
  void **v63; // r15
  void **v64; // rbx
  void **v65; // r15
  void **v66; // r13
  void **v67; // rbx
  void **v68; // r13
  void **v69; // rbx
  void **v70; // r13
  void **v71; // rbx
  void **v72; // r13
  void **v73; // rbx
  void **v74; // r13
  void **v75; // rbx
  __int64 v76; // r15
  unsigned int v78; // [rsp+10h] [rbp-558h]
  __int64 v79; // [rsp+10h] [rbp-558h]
  __int64 v80; // [rsp+10h] [rbp-558h]
  char v81; // [rsp+1Ch] [rbp-54Ch]
  char *v82; // [rsp+20h] [rbp-548h]
  __m128i v83; // [rsp+28h] [rbp-540h] BYREF
  _QWORD *v84; // [rsp+38h] [rbp-530h]
  __int64 v85; // [rsp+40h] [rbp-528h]
  __int64 *v86; // [rsp+48h] [rbp-520h]
  __m128i v87; // [rsp+50h] [rbp-518h]
  __m128i v88; // [rsp+60h] [rbp-508h]
  __m128i v89; // [rsp+70h] [rbp-4F8h]
  __m128i v90; // [rsp+80h] [rbp-4E8h]
  __m128i v91; // [rsp+90h] [rbp-4D8h]
  __m128i v92; // [rsp+A0h] [rbp-4C8h]
  __m128i v93; // [rsp+B0h] [rbp-4B8h]
  __m128i v94; // [rsp+C0h] [rbp-4A8h]
  __m128i v95; // [rsp+D0h] [rbp-498h]
  __m128i v96; // [rsp+E0h] [rbp-488h]
  __m128i v97; // [rsp+F0h] [rbp-478h]
  __m128i v98; // [rsp+100h] [rbp-468h]
  __m128i v99; // [rsp+110h] [rbp-458h]
  int v100; // [rsp+120h] [rbp-448h]
  __int16 v101; // [rsp+124h] [rbp-444h]
  __int64 v102; // [rsp+130h] [rbp-438h] BYREF
  __int64 v103; // [rsp+138h] [rbp-430h] BYREF
  __int64 v104[18]; // [rsp+140h] [rbp-428h] BYREF
  _OWORD v105[13]; // [rsp+1D0h] [rbp-398h] BYREF
  int v106; // [rsp+2A0h] [rbp-2C8h]
  __int16 v107; // [rsp+2A4h] [rbp-2C4h]
  int v108; // [rsp+2A8h] [rbp-2C0h]
  __m128i v109; // [rsp+2B0h] [rbp-2B8h]
  char v110; // [rsp+2C0h] [rbp-2A8h]
  void *v111; // [rsp+2C8h] [rbp-2A0h] BYREF
  void **v112; // [rsp+2D0h] [rbp-298h]
  void *v113; // [rsp+2E0h] [rbp-288h] BYREF
  void **v114; // [rsp+2E8h] [rbp-280h]
  void *v115; // [rsp+2F8h] [rbp-270h] BYREF
  void **v116; // [rsp+300h] [rbp-268h]
  void *v117; // [rsp+310h] [rbp-258h] BYREF
  void **v118; // [rsp+318h] [rbp-250h]
  void *v119; // [rsp+328h] [rbp-240h] BYREF
  void **v120; // [rsp+330h] [rbp-238h]
  __m128i v121; // [rsp+340h] [rbp-228h]
  int v122; // [rsp+350h] [rbp-218h]
  int v123; // [rsp+354h] [rbp-214h]
  void *v124; // [rsp+358h] [rbp-210h] BYREF
  _BYTE v125[16]; // [rsp+368h] [rbp-200h] BYREF
  void *v126; // [rsp+378h] [rbp-1F0h] BYREF
  _BYTE v127[16]; // [rsp+388h] [rbp-1E0h] BYREF
  void *v128; // [rsp+398h] [rbp-1D0h] BYREF
  _BYTE v129[16]; // [rsp+3A8h] [rbp-1C0h] BYREF
  void *v130; // [rsp+3B8h] [rbp-1B0h] BYREF
  _BYTE v131[16]; // [rsp+3C8h] [rbp-1A0h] BYREF
  void *v132; // [rsp+3D8h] [rbp-190h] BYREF
  void **v133; // [rsp+3E0h] [rbp-188h]
  void *v134; // [rsp+3F0h] [rbp-178h] BYREF
  void **v135; // [rsp+3F8h] [rbp-170h]
  char v136; // [rsp+408h] [rbp-160h]
  void *v137; // [rsp+410h] [rbp-158h] BYREF
  void **v138; // [rsp+418h] [rbp-150h]
  __int64 v139; // [rsp+428h] [rbp-140h] BYREF
  int v140; // [rsp+430h] [rbp-138h] BYREF
  void *v141; // [rsp+438h] [rbp-130h]
  int *v142; // [rsp+440h] [rbp-128h]
  int *v143; // [rsp+448h] [rbp-120h]
  __int64 v144; // [rsp+450h] [rbp-118h]
  void *v145[2]; // [rsp+458h] [rbp-110h]
  char *v146; // [rsp+468h] [rbp-100h]
  void *v147; // [rsp+470h] [rbp-F8h] BYREF
  _BYTE v148[16]; // [rsp+480h] [rbp-E8h] BYREF
  void *v149; // [rsp+490h] [rbp-D8h] BYREF
  _QWORD v150[3]; // [rsp+4A0h] [rbp-C8h] BYREF
  char v151; // [rsp+4B8h] [rbp-B0h]
  int v152; // [rsp+4BCh] [rbp-ACh]
  int v153; // [rsp+4C0h] [rbp-A8h]
  void *v154; // [rsp+4C8h] [rbp-A0h] BYREF
  void **v155; // [rsp+4D0h] [rbp-98h]
  void *v156; // [rsp+4E0h] [rbp-88h] BYREF
  _BYTE v157[24]; // [rsp+4F0h] [rbp-78h] BYREF
  void *v158; // [rsp+508h] [rbp-60h] BYREF
  _DWORD v159[5]; // [rsp+518h] [rbp-50h] BYREF
  char v160; // [rsp+52Ch] [rbp-3Ch]
  char v161; // [rsp+52Dh] [rbp-3Bh]
  char v162; // [rsp+52Eh] [rbp-3Ah]
  char v163; // [rsp+52Fh] [rbp-39h]

  v8 = a1;
  v78 = a4;
  v81 = a5;
  v9 = sub_191BD20((__int64)a1, a2, a7, a8, (__int64)a3, a4, a5, a6);
  if ( v9 == 1 )
    return 0;
  v12 = v9 & 0xFFFFFFFFFFFFFFFELL;
  v13 = *(_QWORD *)(v12 + 8);
  v14 = (_QWORD *)v12;
  v102 = v13;
  if ( (*(_WORD *)v12 & 0x1FF) == 0x52 )
  {
    v57 = *(_QWORD *)(sub_BFD550(v12) + 8);
    v58 = sub_EEC8C0((unsigned __int64)v14, (__int64)a2, *(double *)a7.m128_u64);
    a2 = (_QWORD *)v57;
    sub_16AAAC0(a1, v57, v13, 1, v58, v59);
  }
  v15 = *(_QWORD *)(v102 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v15 + 16) != 42 )
  {
    v15 = sub_18BBDD0(*(_QWORD *)(v102 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v10, v11);
    if ( !v15 )
    {
      v15 = *(_QWORD *)(v102 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v15 + 16) != 34 )
      {
        v26 = *(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v26 + 16) != 34
          || (v15 = sub_F63050(*(_QWORD *)(v102 & 0xFFFFFFFFFFFFFFF0LL), a2, v26, v23)) == 0 )
        {
          v27 = sub_1907C70((__int64)a1, v14, (__m128i)a7, a8, v26, v23, v24, v25);
          if ( v27 == 1 )
            return 0;
          v28 = v27 & 0xFFFFFFFFFFFFFFFELL;
          if ( v14 != (_QWORD *)v28 )
            return sub_191C8F0(a1, v28, a3, v78, 0);
LABEL_14:
          sub_168B9F0((__int64)v105, a1 + 1, v78, 0x14A0u, 0);
          v22 = sub_1605D30((__int64)v105, &v102);
          v104[0] = sub_EEC8C0((unsigned __int64)v14, (__int64)&v102, *(double *)a7.m128_u64);
          sub_1587DB0(v22, v104);
          sub_15F7200(v105);
          return 0;
        }
      }
    }
  }
  v16 = *(_QWORD *)(v15 + 32);
  v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_14;
  v18 = *(_QWORD *)(*(_QWORD *)(*v17 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v18 + 16) == 13 && ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    v29 = a1[29];
    v87 = _mm_loadu_si128((const __m128i *)v29);
    v88 = _mm_loadu_si128((const __m128i *)(v29 + 16));
    v89 = _mm_loadu_si128((const __m128i *)(v29 + 32));
    v90 = _mm_loadu_si128((const __m128i *)(v29 + 48));
    v91 = _mm_loadu_si128((const __m128i *)(v29 + 64));
    v92 = _mm_loadu_si128((const __m128i *)(v29 + 80));
    v93 = _mm_loadu_si128((const __m128i *)(v29 + 96));
    v94 = _mm_loadu_si128((const __m128i *)(v29 + 112));
    v95 = _mm_loadu_si128((const __m128i *)(v29 + 128));
    v96 = _mm_loadu_si128((const __m128i *)(v29 + 144));
    v97 = _mm_loadu_si128((const __m128i *)(v29 + 160));
    v98 = _mm_loadu_si128((const __m128i *)(v29 + 176));
    v99 = _mm_loadu_si128((const __m128i *)(v29 + 192));
    v100 = *(_DWORD *)(v29 + 208);
    v30 = *(_WORD *)(v29 + 212);
    v105[0] = v87;
    v101 = v30;
    v105[1] = v88;
    v107 = v30;
    v31 = *(_DWORD *)(v29 + 216);
    v105[10] = v97;
    v108 = v31;
    LOBYTE(v31) = *(_BYTE *)(v29 + 240);
    v105[2] = v89;
    v105[3] = v90;
    v105[4] = v91;
    v105[5] = v92;
    v105[6] = v93;
    v105[7] = v94;
    v105[8] = v95;
    v105[11] = v98;
    v105[12] = v99;
    v109 = _mm_loadu_si128((const __m128i *)(v29 + 224));
    v105[9] = v96;
    v106 = v100;
    v110 = v31;
    sub_C23620((__int64)&v111, (__int64 *)(v29 + 248));
    sub_C23620((__int64)&v113, (__int64 *)(v29 + 272));
    sub_C23620((__int64)&v115, (__int64 *)(v29 + 296));
    sub_C23620((__int64)&v117, (__int64 *)(v29 + 320));
    sub_C23620((__int64)&v119, (__int64 *)(v29 + 344));
    v121 = _mm_loadu_si128((const __m128i *)(v29 + 368));
    v122 = *(_DWORD *)(v29 + 384);
    v123 = *(_DWORD *)(v29 + 388);
    v124 = v125;
    sub_18BD160(&v124, *(_BYTE **)(v29 + 392), *(_QWORD *)(v29 + 392) + *(_QWORD *)(v29 + 400));
    v126 = v127;
    sub_18BD160(&v126, *(_BYTE **)(v29 + 424), *(_QWORD *)(v29 + 424) + *(_QWORD *)(v29 + 432));
    v128 = v129;
    sub_18BD160(&v128, *(_BYTE **)(v29 + 456), *(_QWORD *)(v29 + 456) + *(_QWORD *)(v29 + 464));
    v130 = v131;
    sub_18BD160(&v130, *(_BYTE **)(v29 + 488), *(_QWORD *)(v29 + 488) + *(_QWORD *)(v29 + 496));
    sub_C23620((__int64)&v132, (__int64 *)(v29 + 520));
    sub_C23620((__int64)&v134, (__int64 *)(v29 + 544));
    v136 = *(_BYTE *)(v29 + 568);
    sub_C23620((__int64)&v137, (__int64 *)(v29 + 576));
    v141 = nullptr;
    v142 = &v140;
    v143 = &v140;
    v32 = *(int **)(v29 + 616);
    v140 = 0;
    v144 = 0;
    if ( v32 )
    {
      v104[0] = (__int64)&v139;
      v33 = (int *)sub_C2C3E0((__int64)&v139, v32, (__int64)&v140, (__int64)v104);
      for ( i = v33; *((_QWORD *)i + 2); i = *((int **)i + 2) )
        ;
      v142 = i;
      for ( j = v33; *((_QWORD *)j + 3); j = *((int **)j + 3) )
        ;
      v36 = *(_QWORD *)(v29 + 640);
      v143 = j;
      v141 = v33;
      v144 = v36;
    }
    v37 = *(_QWORD *)(v29 + 656) - *(_QWORD *)(v29 + 648);
    *(_OWORD *)v145 = 0;
    v146 = nullptr;
    v38 = 0x6DB6DB6DB6DB6DB7LL * (v37 >> 3);
    if ( v38 )
    {
      if ( v38 > 0x492492492492492LL )
        std::__throw_bad_alloc();
      v83.m128i_i64[0] = v37;
      v39 = (char *)operator new(v37);
      v37 = v83.m128i_i64[0];
      v82 = v39;
    }
    else
    {
      v82 = nullptr;
    }
    v83.m128i_i64[0] = (__int64)v82;
    v40 = _mm_loadl_epi64(&v83);
    v146 = &v82[v37];
    v41 = _mm_unpacklo_epi64(v40, v40);
    *(__m128i *)v145 = v41;
    v42 = *(_QWORD *)(v29 + 656);
    v43 = *(_QWORD *)(v29 + 648);
    v83.m128i_i64[0] = v42;
    v83.m128i_i64[1] = v43;
    if ( v42 != v43 )
    {
      v84 = v14;
      v44 = v43;
      v85 = v16;
      v86 = a1;
      v45 = v82;
      do
      {
        v46 = v45 + 2;
        v47 = v45;
        v44 += 56;
        v45 += 7;
        *(v45 - 7) = v46;
        sub_18BD160(v47, *(_BYTE **)(v44 - 56), *(_QWORD *)(v44 - 56) + *(_QWORD *)(v44 - 48));
        *(__m128i *)(v45 - 3) = _mm_loadu_si128((const __m128i *)(v44 - 24));
        *((_DWORD *)v45 - 2) = *(_DWORD *)(v44 - 8);
        *((_DWORD *)v45 - 1) = *(_DWORD *)(v44 - 4);
      }
      while ( v42 != v44 );
      v14 = v84;
      v16 = v85;
      v8 = v86;
      v82 += 56
           * ((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)(v83.m128i_i64[0] - 56 - v83.m128i_i64[1]) >> 3))
            & 0x1FFFFFFFFFFFFFFFLL)
           + 56;
    }
    v145[1] = v82;
    v147 = v148;
    sub_18BD160(&v147, *(_BYTE **)(v29 + 672), *(_QWORD *)(v29 + 672) + *(_QWORD *)(v29 + 680));
    v149 = v150;
    sub_18BD160(&v149, *(_BYTE **)(v29 + 704), *(_QWORD *)(v29 + 704) + *(_QWORD *)(v29 + 712));
    v150[2] = *(_QWORD *)(v29 + 736);
    v151 = *(_BYTE *)(v29 + 744);
    v152 = *(_DWORD *)(v29 + 748);
    v153 = *(_DWORD *)(v29 + 752);
    sub_C23620((__int64)&v154, (__int64 *)(v29 + 760));
    v156 = v157;
    sub_18BD160(&v156, *(_BYTE **)(v29 + 784), *(_QWORD *)(v29 + 784) + *(_QWORD *)(v29 + 792));
    v157[16] = *(_BYTE *)(v29 + 816);
    v157[17] = *(_BYTE *)(v29 + 817);
    v158 = v159;
    sub_18BD160(&v158, *(_BYTE **)(v29 + 824), *(_QWORD *)(v29 + 824) + *(_QWORD *)(v29 + 832));
    v159[4] = *(_DWORD *)(v29 + 856);
    v160 = *(_BYTE *)(v29 + 860);
    v161 = *(_BYTE *)(v29 + 861);
    v162 = *(_BYTE *)(v29 + 862);
    v163 = *(_BYTE *)(v29 + 863);
    if ( (BYTE1(v105[0]) & 8) != 0 )
    {
      sub_168B9F0((__int64)v104, v8 + 1, v78, 0x14A1u, 0);
      v76 = sub_1605D30((__int64)v104, &v102);
      v103 = sub_EEC8C0((unsigned __int64)v14, (__int64)&v102, *(double *)v41.m128i_i64);
      sub_1587DB0(v76, &v103);
      sub_15F7200(v104);
    }
    else if ( (v105[0] & 1) == 0 || !v81 )
    {
      v48 = *(_DWORD *)(v8[577] + 640LL * *((unsigned int *)v8 + 1156) - 640);
      if ( v48 != 3 && v48 > 1 )
      {
        sub_168B9F0((__int64)v104, v8 + 1, v78, 0x164Cu, 0);
        v79 = sub_1605D30((__int64)v104, &v102);
        v103 = sub_EEC8C0((unsigned __int64)v14, (__int64)&v102, *(double *)v41.m128i_i64);
        sub_1587DB0(v79, &v103);
        sub_15F7200(v104);
      }
    }
    if ( v158 != v159 )
      operator delete(v158);
    if ( v156 != v157 )
      operator delete(v156);
    v49 = v155;
    v50 = (void **)v154;
    if ( v155 != v154 )
    {
      do
      {
        while ( *v50 != v50 + 2 )
        {
          operator delete(*v50);
          v50 += 4;
          if ( v49 == v50 )
            goto LABEL_53;
        }
        v50 += 4;
      }
      while ( v49 != v50 );
LABEL_53:
      v50 = (void **)v154;
    }
    if ( v50 )
      operator delete(v50);
    if ( v149 != v150 )
      operator delete(v149);
    if ( v147 != v148 )
      operator delete(v147);
    v51 = (void **)v145[1];
    v52 = (void **)v145[0];
    if ( v145[1] != v145[0] )
    {
      do
      {
        while ( *v52 != v52 + 2 )
        {
          operator delete(*v52);
          v52 += 7;
          if ( v52 == v51 )
            goto LABEL_63;
        }
        v52 += 7;
      }
      while ( v51 != v52 );
LABEL_63:
      v52 = (void **)v145[0];
    }
    if ( v52 )
      operator delete(v52);
    if ( v141 )
    {
      v80 = v16;
      for ( k = (char *)v141; ; k = v55 )
      {
        sub_998560((__int64)&v139, *((_QWORD **)k + 3));
        v54 = *((char **)k + 8);
        v55 = *((char **)k + 2);
        if ( v54 != k + 80 )
          operator delete(v54);
        v56 = *((char **)k + 4);
        if ( v56 == k + 48 )
        {
          operator delete(k);
          if ( !v55 )
          {
LABEL_78:
            v16 = v80;
            break;
          }
        }
        else
        {
          operator delete(v56);
          operator delete(k);
          if ( !v55 )
            goto LABEL_78;
        }
      }
    }
    v60 = v138;
    v61 = (void **)v137;
    if ( v138 != v137 )
    {
      do
      {
        while ( *v61 != v61 + 2 )
        {
          operator delete(*v61);
          v61 += 4;
          if ( v61 == v60 )
            goto LABEL_82;
        }
        v61 += 4;
      }
      while ( v60 != v61 );
LABEL_82:
      v61 = (void **)v137;
    }
    if ( v61 )
      operator delete(v61);
    v62 = v135;
    v63 = (void **)v134;
    if ( v135 != v134 )
    {
      do
      {
        while ( *v63 != v63 + 2 )
        {
          operator delete(*v63);
          v63 += 4;
          if ( v63 == v62 )
            goto LABEL_88;
        }
        v63 += 4;
      }
      while ( v62 != v63 );
LABEL_88:
      v63 = (void **)v134;
    }
    if ( v63 )
      operator delete(v63);
    v64 = v133;
    v65 = (void **)v132;
    if ( v133 != v132 )
    {
      do
      {
        while ( *v65 != v65 + 2 )
        {
          operator delete(*v65);
          v65 += 4;
          if ( v64 == v65 )
            goto LABEL_94;
        }
        v65 += 4;
      }
      while ( v64 != v65 );
LABEL_94:
      v65 = (void **)v132;
    }
    if ( v65 )
      operator delete(v65);
    if ( v130 != v131 )
      operator delete(v130);
    if ( v128 != v129 )
      operator delete(v128);
    if ( v126 != v127 )
      operator delete(v126);
    if ( v124 != v125 )
      operator delete(v124);
    v66 = v120;
    v67 = (void **)v119;
    if ( v120 != v119 )
    {
      do
      {
        while ( *v67 != v67 + 2 )
        {
          operator delete(*v67);
          v67 += 4;
          if ( v67 == v66 )
            goto LABEL_108;
        }
        v67 += 4;
      }
      while ( v66 != v67 );
LABEL_108:
      v67 = (void **)v119;
    }
    if ( v67 )
      operator delete(v67);
    v68 = v118;
    v69 = (void **)v117;
    if ( v118 != v117 )
    {
      do
      {
        while ( *v69 != v69 + 2 )
        {
          operator delete(*v69);
          v69 += 4;
          if ( v69 == v68 )
            goto LABEL_114;
        }
        v69 += 4;
      }
      while ( v68 != v69 );
LABEL_114:
      v69 = (void **)v117;
    }
    if ( v69 )
      operator delete(v69);
    v70 = v116;
    v71 = (void **)v115;
    if ( v116 != v115 )
    {
      do
      {
        while ( *v71 != v71 + 2 )
        {
          operator delete(*v71);
          v71 += 4;
          if ( v71 == v70 )
            goto LABEL_120;
        }
        v71 += 4;
      }
      while ( v70 != v71 );
LABEL_120:
      v71 = (void **)v115;
    }
    if ( v71 )
      operator delete(v71);
    v72 = v114;
    v73 = (void **)v113;
    if ( v114 != v113 )
    {
      do
      {
        while ( *v73 != v73 + 2 )
        {
          operator delete(*v73);
          v73 += 4;
          if ( v72 == v73 )
            goto LABEL_126;
        }
        v73 += 4;
      }
      while ( v72 != v73 );
LABEL_126:
      v73 = (void **)v113;
    }
    if ( v73 )
      operator delete(v73);
    v74 = v112;
    v75 = (void **)v111;
    if ( v112 != v111 )
    {
      do
      {
        while ( *v75 != v75 + 2 )
        {
          operator delete(*v75);
          v75 += 4;
          if ( v75 == v74 )
            goto LABEL_132;
        }
        v75 += 4;
      }
      while ( v74 != v75 );
LABEL_132:
      v75 = (void **)v111;
    }
    if ( v75 )
      operator delete(v75);
  }
  *a3 = 1;
  if ( (*(_BYTE *)(v8[29] + 1) & 8) != 0 )
    return v16;
  v19 = *(_QWORD *)(*(_QWORD *)(*v17 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v20 = *(unsigned __int8 *)(v19 + 16);
  if ( (_BYTE)v20 != 13 )
  {
    if ( (unsigned int)(v20 - 25) <= 1 )
      goto LABEL_24;
    return v16;
  }
  if ( ((*(_WORD *)(v19 + 18) >> 3) & 0x1FF) != 0x1B3
    || v16 & 7 | (v16 >> 3) & 1
    || v17[1] & 7LL | ((__int64)v17[1] >> 3) & 1 )
  {
    return v16;
  }
LABEL_24:
  *a3 = 0;
  return v16;
}
