void __fastcall sub_1275B70(__int64 a1, __int64 a2)
{
  size_t v3; // rbx
  const void *v4; // rbp
  __int64 v5; // rdx
  size_t v6; // rbp
  const void *v7; // r12
  char *v8; // rbx
  void *v9; // rdi
  unsigned __int64 v10; // rdx
  _BYTE *v11; // r13
  size_t v12; // r12
  unsigned __int64 v13; // rcx
  char *v14; // rbx
  void *v15; // rdi
  int v16; // eax
  char *v17; // rbx
  __int64 v18; // rdx
  char *v19; // rbx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  _BYTE *v22; // r13
  size_t v23; // r12
  unsigned __int64 v24; // rcx
  char *v25; // rbx
  void *v26; // rdi
  int v27; // eax
  char *v28; // rbx
  __int64 v29; // rdx
  char *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned int v33; // eax
  char *v34; // rax
  __int64 v35; // rbx
  void **v36; // r12
  size_t *v37; // r14
  const char *v38; // rax
  size_t v39; // rbx
  const void *v40; // rbp
  size_t v41; // rcx
  char *v42; // rax
  size_t v43; // rbx
  char *v44; // rbp
  _BYTE *v45; // rdi
  size_t v46; // rcx
  _BYTE *v47; // rdi
  __int64 v48; // rcx
  _BYTE *v49; // rdi
  char *v50; // rcx
  _BYTE *v51; // rdi
  char *v52; // rcx
  __int64 v53; // rax
  __m128i v54; // xmm2
  __int64 v55; // rbx
  bool v56; // zf
  void *v57; // rsi
  size_t v58; // rdx
  int v59; // ebp
  size_t *v60; // rbp
  __int64 v61; // r14
  unsigned __int64 v62; // rdx
  __int64 v63; // rdi
  char *v64; // rdi
  __m128 v65; // xmm0
  __int64 v66; // rax
  __int64 v67; // rsi
  void **v68; // rbp
  size_t v69; // rax
  size_t v70; // rdx
  char *v71; // rdi
  size_t v72; // rdx
  size_t v73; // rdx
  __int64 v74; // rdx
  size_t v75; // rdx
  int v76; // eax
  signed __int32 v77; // eax
  size_t *v78; // rdi
  size_t v79; // rax
  void **v80; // rbp
  void **v81; // rbx
  _BYTE *v82; // rax
  size_t v83; // rdx
  __int64 v84; // rbx
  __int64 v85; // rax
  unsigned __int64 v86; // rbp
  unsigned __int64 v87; // rdx
  __int64 v88; // rax
  _BYTE *v89; // rdi
  void **v90; // r14
  void *v91; // rbp
  __int64 v92; // rax
  _BYTE *v93; // rsi
  void *v94; // rbx
  __int64 v95; // rdi
  _BYTE *v96; // rdx
  int v97; // r12d
  size_t v98; // rdx
  void *v99; // r14
  char *v100; // rdi
  int v101; // r12d
  void **v102; // r14
  void *v103; // r12
  char *v104; // rbx
  size_t v105; // rax
  char *v106; // rdi
  int v107; // r13d
  void *v108; // r14
  char *v109; // rdi
  int v110; // r12d
  void *v111; // [rsp+0h] [rbp-788h] BYREF
  void *v112; // [rsp+8h] [rbp-780h]
  void *src; // [rsp+10h] [rbp-778h]
  void **v114; // [rsp+18h] [rbp-770h]
  void **v115; // [rsp+20h] [rbp-768h]
  char *v116; // [rsp+28h] [rbp-760h] BYREF
  __int64 v117; // [rsp+30h] [rbp-758h]
  char *v118; // [rsp+38h] [rbp-750h]
  __int64 v119; // [rsp+40h] [rbp-748h]
  size_t v120; // [rsp+48h] [rbp-740h]
  char *v121; // [rsp+50h] [rbp-738h]
  size_t v122; // [rsp+58h] [rbp-730h]
  __int64 v123; // [rsp+60h] [rbp-728h]
  __int64 v124; // [rsp+68h] [rbp-720h]
  __int64 v125; // [rsp+70h] [rbp-718h]
  __int64 v126; // [rsp+78h] [rbp-710h]
  const char *v127; // [rsp+80h] [rbp-708h]
  _QWORD *v128; // [rsp+88h] [rbp-700h]
  const char **v129; // [rsp+90h] [rbp-6F8h]
  void **v130; // [rsp+98h] [rbp-6F0h]
  _BYTE *v131; // [rsp+A0h] [rbp-6E8h]
  _BYTE *v132; // [rsp+A8h] [rbp-6E0h]
  _BYTE *v133; // [rsp+B0h] [rbp-6D8h]
  _BYTE *v134; // [rsp+B8h] [rbp-6D0h]
  char **v135; // [rsp+C0h] [rbp-6C8h]
  void **v136; // [rsp+C8h] [rbp-6C0h]
  _QWORD v137[4]; // [rsp+D0h] [rbp-6B8h] BYREF
  __int16 v138; // [rsp+F0h] [rbp-698h]
  const char *v139; // [rsp+100h] [rbp-688h] BYREF
  __int16 v140; // [rsp+120h] [rbp-668h]
  char *s; // [rsp+130h] [rbp-658h] BYREF
  size_t n; // [rsp+138h] [rbp-650h]
  _QWORD v143[2]; // [rsp+140h] [rbp-648h] BYREF
  __int16 v144; // [rsp+150h] [rbp-638h]
  void *ptr; // [rsp+160h] [rbp-628h] BYREF
  size_t v146[2]; // [rsp+168h] [rbp-620h] BYREF
  __int64 v147; // [rsp+178h] [rbp-610h] BYREF
  _BYTE v148[56]; // [rsp+180h] [rbp-608h] BYREF
  size_t v149; // [rsp+1B8h] [rbp-5D0h]
  char *v150; // [rsp+1C0h] [rbp-5C8h] BYREF
  void *v151; // [rsp+1D0h] [rbp-5B8h] BYREF
  size_t v152; // [rsp+1D8h] [rbp-5B0h]
  char *v153; // [rsp+1E0h] [rbp-5A8h] BYREF
  void *v154; // [rsp+200h] [rbp-588h] BYREF
  __int64 v155; // [rsp+208h] [rbp-580h]
  _BYTE *v156; // [rsp+210h] [rbp-578h] BYREF
  __m128i si128; // [rsp+218h] [rbp-570h]
  _BYTE v158[264]; // [rsp+228h] [rbp-560h] BYREF
  void *v159; // [rsp+330h] [rbp-458h] BYREF
  __m128i v160; // [rsp+338h] [rbp-450h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(const void **)a2;
  v155 = 0x500000000LL;
  v136 = &v154;
  v154 = &v156;
  v156 = v158;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  if ( v3 > 0x20 )
  {
    sub_2236E10(&v156, v158, v3, 1);
    v89 = &v156[si128.m128i_i64[0]];
  }
  else
  {
    if ( !v3 )
    {
      LODWORD(v155) = 1;
      v5 = 1;
      si128.m128i_i64[0] = 0;
      goto LABEL_4;
    }
    v89 = v158;
  }
  memcpy(v89, v4, v3);
  si128.m128i_i64[0] += v3;
  v5 = (unsigned int)(v155 + 1);
  LODWORD(v155) = v5;
  if ( (unsigned int)v5 < HIDWORD(v155) )
  {
LABEL_4:
    v6 = *(_QWORD *)(a1 + 24);
    v7 = *(const void **)(a1 + 16);
    v8 = (char *)v154 + 56 * v5;
    v9 = v8 + 24;
    *(__m128i *)(v8 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    *(_QWORD *)v8 = v8 + 24;
    if ( v6 > 0x20 )
    {
      sub_2236E10(v8, v8 + 24, v6, 1);
      v9 = (void *)(*(_QWORD *)v8 + *((_QWORD *)v8 + 1));
    }
    else if ( !v6 )
    {
LABEL_6:
      *((_QWORD *)v8 + 1) = v6;
      LODWORD(v155) = v155 + 1;
      goto LABEL_7;
    }
    memcpy(v9, v7, v6);
    v6 += *((_QWORD *)v8 + 1);
    goto LABEL_6;
  }
  v90 = v136;
  v91 = v136 + 2;
  v92 = sub_2237400(v136, v136 + 2, 0, 56, &v159);
  v93 = *(_BYTE **)(a1 + 16);
  v94 = (void *)v92;
  v95 = v92 + 56LL * (unsigned int)v155;
  v96 = &v93[*(_QWORD *)(a1 + 24)];
  *(__m128i *)(v95 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  *(_QWORD *)v95 = v95 + 24;
  sub_A1FE50((_QWORD *)v95, v93, v96);
  sub_12737E0((__int64)v90, (__int64)v94);
  v97 = (int)v159;
  if ( v154 != v91 )
    free(v154);
  v154 = v94;
  HIDWORD(v155) = v97;
  LODWORD(v155) = v155 + 1;
LABEL_7:
  v11 = (_BYTE *)sub_22B7480(a1 + 16);
  v12 = v10;
  v13 = v10;
  if ( HIDWORD(v155) > (unsigned int)v155 )
  {
    v14 = (char *)v154 + 56 * (unsigned int)v155;
    v15 = v14 + 24;
    *(__m128i *)(v14 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    *(_QWORD *)v14 = v14 + 24;
    if ( v10 > 0x20 )
    {
      sub_2236E10(v14, v14 + 24, v10, 1);
      v15 = (void *)(*(_QWORD *)v14 + *((_QWORD *)v14 + 1));
    }
    else if ( !v10 )
    {
LABEL_10:
      v16 = v155;
      *((_QWORD *)v14 + 1) = v13;
      v17 = (char *)v154;
      v18 = (unsigned int)(v16 + 1);
      LODWORD(v155) = v16 + 1;
      goto LABEL_11;
    }
    memcpy(v15, v11, v12);
    v13 = v12 + *((_QWORD *)v14 + 1);
    goto LABEL_10;
  }
  v99 = v136 + 2;
  v17 = (char *)sub_2237400(v136, v136 + 2, 0, 56, &v159);
  v100 = &v17[56 * (unsigned int)v155];
  *(__m128i *)(v100 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  *(_QWORD *)v100 = v100 + 24;
  sub_A1FE50(v100, v11, &v11[v12]);
  sub_12737E0((__int64)v136, (__int64)v17);
  v101 = (int)v159;
  if ( v154 != v99 )
    free(v154);
  v154 = v17;
  HIDWORD(v155) = v101;
  v18 = (unsigned int)(v155 + 1);
  LODWORD(v155) = v155 + 1;
LABEL_11:
  v19 = &v17[56 * v18 - 56];
  v20 = *((_QWORD *)v19 + 1);
  if ( (unsigned __int64)(v20 + 12) > *((_QWORD *)v19 + 2) )
  {
    sub_2236E10(v19, v19 + 24, v20 + 12, 1);
    v20 = *((_QWORD *)v19 + 1);
  }
  qmemcpy((void *)(*(_QWORD *)v19 + v20), "-w64-mingw32", 12);
  *((_QWORD *)v19 + 1) += 12LL;
  v22 = (_BYTE *)sub_22B7480(a1 + 16);
  v23 = v21;
  v24 = v21;
  if ( HIDWORD(v155) > (unsigned int)v155 )
  {
    v25 = (char *)v154 + 56 * (unsigned int)v155;
    v26 = v25 + 24;
    *(__m128i *)(v25 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    *(_QWORD *)v25 = v25 + 24;
    if ( v21 > 0x20 )
    {
      sub_2236E10(v25, v25 + 24, v21, 1);
      v26 = (void *)(*(_QWORD *)v25 + *((_QWORD *)v25 + 1));
    }
    else if ( !v21 )
    {
LABEL_16:
      v27 = v155;
      *((_QWORD *)v25 + 1) = v24;
      v28 = (char *)v154;
      v29 = (unsigned int)(v27 + 1);
      LODWORD(v155) = v27 + 1;
      goto LABEL_17;
    }
    memcpy(v26, v22, v23);
    v24 = v23 + *((_QWORD *)v25 + 1);
    goto LABEL_16;
  }
  v108 = v136 + 2;
  v28 = (char *)sub_2237400(v136, v136 + 2, 0, 56, &v159);
  v109 = &v28[56 * (unsigned int)v155];
  *(__m128i *)(v109 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  *(_QWORD *)v109 = v109 + 24;
  sub_A1FE50(v109, v22, &v22[v23]);
  sub_12737E0((__int64)v136, (__int64)v28);
  v110 = (int)v159;
  if ( v154 != v108 )
    free(v154);
  v154 = v28;
  HIDWORD(v155) = v110;
  v29 = (unsigned int)(v155 + 1);
  LODWORD(v155) = v155 + 1;
LABEL_17:
  v30 = &v28[56 * v29 - 56];
  v31 = *((_QWORD *)v30 + 1);
  if ( (unsigned __int64)(v31 + 16) > *((_QWORD *)v30 + 2) )
  {
    sub_2236E10(v30, v30 + 24, v31 + 16, 1);
    v31 = *((_QWORD *)v30 + 1);
  }
  *(__m128i *)(*(_QWORD *)v30 + v31) = _mm_load_si128((const __m128i *)&xmmword_23A9E20);
  v32 = (unsigned int)v155;
  v33 = v155;
  *((_QWORD *)v30 + 1) += 16LL;
  if ( HIDWORD(v155) <= v33 )
  {
    v102 = v136;
    v103 = v136 + 2;
    v104 = (char *)sub_2237400(v136, v136 + 2, 0, 56, &v159);
    v105 = j__strlen("mingw32");
    v106 = &v104[56 * (unsigned int)v155];
    *(__m128i *)(v106 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    *(_QWORD *)v106 = v106 + 24;
    sub_A1FE50(v106, "mingw32", &aW64Mingw32[v105 + 5]);
    sub_12737E0((__int64)v102, (__int64)v104);
    v107 = (int)v159;
    if ( v154 != v103 )
      free(v154);
    v154 = v104;
    HIDWORD(v155) = v107;
    v35 = (unsigned int)(v155 + 1);
    LODWORD(v155) = v155 + 1;
  }
  else
  {
    v34 = (char *)v154 + 56 * v32;
    *(__m128i *)(v34 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    *(_QWORD *)v34 = v34 + 24;
    *((_DWORD *)v34 + 6) = 1735289197;
    *((_WORD *)v34 + 14) = 13175;
    v34[30] = 50;
    *((_QWORD *)v34 + 1) = 7;
    v35 = (unsigned int)(v155 + 1);
    LODWORD(v155) = v155 + 1;
  }
  if ( !*(_QWORD *)(a1 + 4048) )
  {
    v82 = (_BYTE *)sub_22B7480(a1 + 16);
    sub_99BDC0((_QWORD *)(a1 + 4040), 0, *(_QWORD *)(a1 + 4048), v82, v83);
    v84 = *(_QWORD *)(a1 + 4048);
    if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v84) <= 0xB )
      std::__throw_length_error("basic_string::append");
    v85 = *(_QWORD *)(a1 + 4040);
    v86 = v84 + 12;
    if ( v85 == a1 + 4056 )
      v87 = 15;
    else
      v87 = *(_QWORD *)(a1 + 4056);
    if ( v86 > v87 )
      sub_998B30(a1 + 4040, *(_QWORD *)(a1 + 4048), 0, "-w64-mingw32", 0xCu);
    else
      qmemcpy((void *)(v84 + v85), "-w64-mingw32", 12);
    v88 = *(_QWORD *)(a1 + 4040);
    *(_QWORD *)(a1 + 4048) = v86;
    *(_BYTE *)(v88 + v84 + 12) = 0;
    v35 = (unsigned int)v155;
  }
  v36 = (void **)v154;
  v135 = (char **)&off_2BAF230;
  v37 = &v146[1];
  while ( 1 )
  {
    v122 = 0;
    v38 = *v135;
    v127 = v38;
    if ( v38 )
      v122 = strlen(v38);
    v130 = &v36[7 * v35];
    if ( v130 != v36 )
      break;
    v68 = v36;
LABEL_88:
    if ( off_2BAF240 == ++v135 )
    {
      if ( v68 != v36 )
      {
        do
        {
          while ( 1 )
          {
            v68 -= 7;
            if ( *v68 == v68 + 3 )
              break;
            free(*v68);
            if ( v68 == v36 )
              goto LABEL_92;
          }
        }
        while ( v68 != v36 );
LABEL_92:
        v36 = (void **)v154;
      }
      if ( v36 != v136 + 2 )
        free(v36);
      return;
    }
  }
  v114 = v36;
  v117 = a1 + 3864;
  v126 = a1 + 3832;
  v123 = a1 + 3912;
  v125 = a1 + 3944;
  v124 = a1 + 3976;
  v134 = (_BYTE *)(a1 + 3992);
  v132 = (_BYTE *)(a1 + 3960);
  v131 = (_BYTE *)(a1 + 3928);
  v133 = (_BYTE *)(a1 + 3880);
  v115 = &v159;
  v129 = &v139;
  v128 = v137;
  v111 = &v148[32];
  v112 = &v150;
  src = &v153;
  while ( 1 )
  {
    v39 = *(_QWORD *)(a1 + 3808);
    v40 = *(const void **)(a1 + 3800);
    v41 = (size_t)v114[1];
    v42 = (char *)*v114;
    v160 = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
    v121 = v42;
    v120 = v41;
    v159 = v115 + 3;
    if ( v39 > 0x400 )
    {
      sub_2236E10(v115, v115 + 3, v39, 1);
      v71 = (char *)v159 + v160.m128i_i64[0];
    }
    else
    {
      if ( !v39 )
        goto LABEL_29;
      v71 = (char *)(v115 + 3);
    }
    memcpy(v71, v40, v39);
    v39 += v160.m128i_i64[0];
LABEL_29:
    *(_WORD *)v148 = 257;
    s = v121;
    v140 = 259;
    n = v120;
    v139 = "gcc";
    v138 = 261;
    v137[0] = v127;
    v144 = 261;
    v137[1] = v122;
    v160.m128i_i64[0] = v39;
    sub_228A3B0(v115, v128, v129, &s, &ptr);
    v43 = v160.m128i_i64[0];
    v44 = (char *)v159;
    sub_1220870((__m128i *)&ptr, "0.0.0", 5u);
    v45 = *(_BYTE **)(a1 + 3864);
    if ( ptr == v37 )
    {
      v75 = v146[0];
      if ( v146[0] )
      {
        if ( v146[0] == 1 )
          *v45 = v146[1];
        else
          memcpy(v45, v37, v146[0]);
        v75 = v146[0];
        v45 = *(_BYTE **)(a1 + 3864);
      }
      *(_QWORD *)(a1 + 3872) = v75;
      v45[v75] = 0;
      v45 = ptr;
    }
    else
    {
      if ( v133 == v45 )
      {
        v116 = (char *)v146[1];
        *(_QWORD *)(a1 + 3864) = ptr;
        *(__m128 *)(a1 + 3872) = _mm_loadh_ps((const double *)&v116);
      }
      else
      {
        v116 = (char *)v146[1];
        v46 = *(_QWORD *)(a1 + 3880);
        *(_QWORD *)(a1 + 3864) = ptr;
        *(__m128 *)(a1 + 3872) = _mm_loadh_ps((const double *)&v116);
        if ( v45 )
        {
          ptr = v45;
          v146[1] = v46;
          goto LABEL_33;
        }
      }
      ptr = v37;
      v45 = v37;
    }
LABEL_33:
    v146[0] = 0;
    *v45 = 0;
    v47 = *(_BYTE **)(a1 + 3912);
    *(_QWORD *)(a1 + 3896) = *(_QWORD *)v148;
    *(_DWORD *)(a1 + 3904) = *(_DWORD *)&v148[8];
    if ( *(void **)&v148[16] == v111 )
    {
      v74 = *(_QWORD *)&v148[24];
      if ( *(_QWORD *)&v148[24] )
      {
        if ( *(_QWORD *)&v148[24] == 1 )
          *v47 = v148[32];
        else
          memcpy(v47, v111, *(size_t *)&v148[24]);
        v74 = *(_QWORD *)&v148[24];
        v47 = *(_BYTE **)(a1 + 3912);
      }
      *(_QWORD *)(a1 + 3920) = v74;
      v47[v74] = 0;
      v47 = *(_BYTE **)&v148[16];
    }
    else
    {
      if ( v131 == v47 )
      {
        v116 = *(char **)&v148[32];
        *(_QWORD *)(a1 + 3912) = *(_QWORD *)&v148[16];
        *(__m128 *)(a1 + 3920) = _mm_loadh_ps((const double *)&v116);
      }
      else
      {
        v116 = *(char **)&v148[32];
        v48 = *(_QWORD *)(a1 + 3928);
        *(_QWORD *)(a1 + 3912) = *(_QWORD *)&v148[16];
        *(__m128 *)(a1 + 3920) = _mm_loadh_ps((const double *)&v116);
        if ( v47 )
        {
          *(_QWORD *)&v148[16] = v47;
          *(_QWORD *)&v148[32] = v48;
          goto LABEL_37;
        }
      }
      *(_QWORD *)&v148[16] = v111;
      v47 = v111;
    }
LABEL_37:
    *(_QWORD *)&v148[24] = 0;
    *v47 = 0;
    v49 = *(_BYTE **)(a1 + 3944);
    if ( *(void **)&v148[48] == v112 )
    {
      v73 = v149;
      if ( v149 )
      {
        if ( v149 == 1 )
          *v49 = (_BYTE)v150;
        else
          memcpy(v49, v112, v149);
        v73 = v149;
        v49 = *(_BYTE **)(a1 + 3944);
      }
      *(_QWORD *)(a1 + 3952) = v73;
      v49[v73] = 0;
      v49 = *(_BYTE **)&v148[48];
    }
    else
    {
      if ( v132 == v49 )
      {
        v116 = v150;
        *(_QWORD *)(a1 + 3944) = *(_QWORD *)&v148[48];
        *(__m128 *)(a1 + 3952) = _mm_loadh_ps((const double *)&v116);
      }
      else
      {
        v116 = v150;
        v50 = *(char **)(a1 + 3960);
        *(_QWORD *)(a1 + 3944) = *(_QWORD *)&v148[48];
        *(__m128 *)(a1 + 3952) = _mm_loadh_ps((const double *)&v116);
        if ( v49 )
        {
          *(_QWORD *)&v148[48] = v49;
          v150 = v50;
          goto LABEL_41;
        }
      }
      *(_QWORD *)&v148[48] = v112;
      v49 = v112;
    }
LABEL_41:
    v149 = 0;
    *v49 = 0;
    v51 = *(_BYTE **)(a1 + 3976);
    if ( v151 == src )
    {
      v72 = v152;
      if ( v152 )
      {
        if ( v152 == 1 )
          *v51 = (_BYTE)v153;
        else
          memcpy(v51, src, v152);
        v72 = v152;
        v51 = *(_BYTE **)(a1 + 3976);
      }
      *(_QWORD *)(a1 + 3984) = v72;
      v51[v72] = 0;
      v51 = v151;
    }
    else
    {
      if ( v51 == v134 )
      {
        v116 = v153;
        *(_QWORD *)(a1 + 3976) = v151;
        *(__m128 *)(a1 + 3984) = _mm_loadh_ps((const double *)&v116);
      }
      else
      {
        v116 = v153;
        v52 = *(char **)(a1 + 3992);
        *(_QWORD *)(a1 + 3976) = v151;
        *(__m128 *)(a1 + 3984) = _mm_loadh_ps((const double *)&v116);
        if ( v51 )
        {
          v151 = v51;
          v153 = v52;
          goto LABEL_45;
        }
      }
      v151 = src;
      v51 = src;
    }
LABEL_45:
    v152 = 0;
    *v51 = 0;
    if ( v151 != src )
      operator delete(v151);
    if ( *(void **)&v148[48] != v112 )
      operator delete(*(void **)&v148[48]);
    if ( *(void **)&v148[16] != v111 )
      operator delete(*(void **)&v148[16]);
    if ( ptr != v37 )
      operator delete(ptr);
    n = v43;
    v144 = 261;
    s = v44;
    v53 = operator new(0x70u);
    v54 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v55 = v53;
    *(_QWORD *)(v53 + 8) = 0x100000001LL;
    *(__m128i *)v146 = v54;
    *(_QWORD *)v53 = off_2C362F8;
    v56 = HIBYTE(v144) == 1;
    memset((void *)(v53 + 16), 0, 0x60u);
    *(_DWORD *)(v53 + 56) = 9;
    *(_QWORD *)(v53 + 24) = v53 + 40;
    *(_QWORD *)(v53 + 104) = 0xFFFF00000000LL;
    v119 = v53 + 16;
    *(_BYTE *)(v53 + 60) = 1;
    ptr = &v147;
    if ( v56 && (unsigned __int8)v144 <= 6u && ((1LL << v144) & 0x7A) != 0 )
    {
      switch ( (char)v144 )
      {
        case 0:
        case 2:
        case 5:
        case 6:
          v58 = n;
          v57 = s;
          break;
        case 1:
          v58 = 0;
          v57 = nullptr;
          break;
        case 3:
          v57 = s;
          v58 = 0;
          if ( s )
          {
            v116 = s;
            v69 = strlen(s);
            v57 = v116;
            v58 = v69;
          }
          break;
        case 4:
          v57 = *(void **)s;
          v58 = *((_QWORD *)s + 1);
          break;
      }
    }
    else
    {
      sub_22538C0(&s, &ptr);
      v58 = v146[0];
      v57 = ptr;
    }
    v59 = sub_228CAB0(v55 + 16, v57, v58, 1);
    if ( ptr != &v147 )
      free(ptr);
    if ( !v59 )
    {
      v60 = v37;
      while ( 1 )
      {
        v67 = *(_QWORD *)(v55 + 32);
        ptr = v60;
        memset(&v148[4], 0, 48);
        v146[0] = 0;
        LOBYTE(v146[1]) = 0;
        *(_DWORD *)v148 = 9;
        v148[4] = 1;
        *(_DWORD *)&v148[52] = 0xFFFF;
        if ( !v67 )
        {
LABEL_81:
          v37 = v60;
          goto LABEL_82;
        }
        v61 = sub_228AA60(*(_QWORD *)(v55 + 24), v67, 0);
        v116 = (char *)v62;
        sub_1220870((__m128i *)&ptr, (_BYTE *)v61, v62);
        if ( *(_DWORD *)v148 != -1 )
        {
          if ( (unsigned __int8)sub_1213FB0(v117, *(int *)v148, *(int *)&v148[4], *(int *)&v148[8], v151, v152) )
            break;
        }
LABEL_71:
        if ( v151 != src )
          operator delete(v151);
        if ( *(void **)&v148[48] != v112 )
          operator delete(*(void **)&v148[48]);
        if ( *(void **)&v148[16] != v111 )
          operator delete(*(void **)&v148[16]);
        if ( ptr != v60 )
          operator delete(ptr);
        if ( (unsigned int)sub_228C920(v119) )
          goto LABEL_81;
      }
      sub_9EE8A0(v117, (__int64)&ptr);
      v63 = v123;
      *(_QWORD *)(a1 + 3896) = *(_QWORD *)v148;
      *(_DWORD *)(a1 + 3904) = *(_DWORD *)&v148[8];
      sub_9EE8A0(v63, (__int64)&v148[16]);
      sub_9EE8A0(v125, (__int64)&v148[48]);
      sub_9EE8A0(v124, (__int64)&v151);
      s = (char *)v143;
      v118 = (char *)v143;
      sub_1270C30(&s, (_BYTE *)v61, (__int64)&v116[v61]);
      v64 = *(char **)(a1 + 4008);
      if ( s == v118 )
      {
        v70 = n;
        if ( n )
        {
          if ( n == 1 )
            *v64 = v143[0];
          else
            memcpy(v64, s, n);
          v70 = n;
          v64 = *(char **)(a1 + 4008);
        }
        *(_QWORD *)(a1 + 4016) = v70;
        v64[v70] = 0;
        v64 = s;
        goto LABEL_68;
      }
      v116 = (char *)v143[0];
      if ( v64 == (char *)(a1 + 4024) )
      {
        *(_QWORD *)(a1 + 4008) = s;
        *(__m128 *)(a1 + 4016) = _mm_loadh_ps((const double *)&v116);
      }
      else
      {
        v65 = _mm_loadh_ps((const double *)&v116);
        v66 = *(_QWORD *)(a1 + 4024);
        *(_QWORD *)(a1 + 4008) = s;
        *(__m128 *)(a1 + 4016) = v65;
        if ( v64 )
        {
          s = v64;
          v143[0] = v66;
LABEL_68:
          n = 0;
          *v64 = 0;
          if ( s != (char *)v143 )
            operator delete(s);
          sub_9EE8A0(v126, v55 + 24);
          goto LABEL_71;
        }
      }
      v64 = (char *)v143;
      s = (char *)v143;
      goto LABEL_68;
    }
LABEL_82:
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v55 + 8), 0xFFFFFFFF) != 1 )
        goto LABEL_84;
    }
    else
    {
      v76 = *(_DWORD *)(v55 + 8);
      *(_DWORD *)(v55 + 8) = v76 - 1;
      if ( v76 != 1 )
        goto LABEL_84;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    if ( &_pthread_key_create )
    {
      v77 = _InterlockedExchangeAdd((volatile signed __int32 *)(v55 + 12), 0xFFFFFFFF);
    }
    else
    {
      v77 = *(_DWORD *)(v55 + 12);
      *(_DWORD *)(v55 + 12) = v77 - 1;
    }
    if ( v77 != 1 )
    {
LABEL_84:
      if ( *(_QWORD *)(a1 + 4016) )
        break;
      goto LABEL_85;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 24LL))(v55);
    if ( *(_QWORD *)(a1 + 4016) )
      break;
LABEL_85:
    if ( v159 == v115 + 3 )
    {
      v114 += 7;
      if ( v130 == v114 )
      {
LABEL_87:
        v35 = (unsigned int)v155;
        v36 = (void **)v154;
        v68 = (void **)((char *)v154 + 56 * (unsigned int)v155);
        goto LABEL_88;
      }
    }
    else
    {
      free(v159);
      v114 += 7;
      if ( v130 == v114 )
        goto LABEL_87;
    }
  }
  ptr = &v146[1];
  sub_1270C30(&ptr, v121, (__int64)&v121[v120]);
  v78 = *(size_t **)(a1 + 4040);
  if ( ptr == &v146[1] )
  {
    v98 = v146[0];
    if ( v146[0] )
    {
      if ( v146[0] == 1 )
        *(_BYTE *)v78 = v146[1];
      else
        memcpy(v78, ptr, v146[0]);
      v98 = v146[0];
      v78 = *(size_t **)(a1 + 4040);
    }
    *(_QWORD *)(a1 + 4048) = v98;
    *((_BYTE *)v78 + v98) = 0;
    v78 = (size_t *)ptr;
  }
  else
  {
    if ( v78 == (size_t *)(a1 + 4056) )
    {
      v111 = (void *)v146[1];
      *(_QWORD *)(a1 + 4040) = ptr;
      *(__m128 *)(a1 + 4048) = _mm_loadh_ps((const double *)&v111);
    }
    else
    {
      v111 = (void *)v146[1];
      v79 = *(_QWORD *)(a1 + 4056);
      *(_QWORD *)(a1 + 4040) = ptr;
      *(__m128 *)(a1 + 4048) = _mm_loadh_ps((const double *)&v111);
      if ( v78 )
      {
        ptr = v78;
        v146[1] = v79;
        goto LABEL_140;
      }
    }
    v78 = &v146[1];
    ptr = &v146[1];
  }
LABEL_140:
  v146[0] = 0;
  *(_BYTE *)v78 = 0;
  if ( ptr != &v146[1] )
    operator delete(ptr);
  if ( v159 != v115 + 3 )
    free(v159);
  v80 = (void **)v154;
  v81 = (void **)((char *)v154 + 56 * (unsigned int)v155);
  if ( v154 != v81 )
  {
    do
    {
      while ( 1 )
      {
        v81 -= 7;
        if ( *v81 == v81 + 3 )
          break;
        free(*v81);
        if ( v80 == v81 )
          goto LABEL_147;
      }
    }
    while ( v80 != v81 );
LABEL_147:
    v81 = (void **)v154;
  }
  if ( v81 != v136 + 2 )
    free(v81);
}
