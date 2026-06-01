void __fastcall sub_1F7A0A0(__int64 a1, __int64 a2, _BYTE *a3, signed __int64 a4)
{
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  void **v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // r14d
  _BOOL8 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rdi
  __int64 v20; // rax
  unsigned int v21; // r13d
  __int64 v22; // rdx
  __int64 v23; // rdi
  _QWORD *v24; // rax
  _BYTE *v25; // rsi
  _BYTE *v26; // rdx
  char v27; // al
  size_t v28; // rax
  _QWORD *v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 *v33; // r12
  __int64 v34; // r14
  __int64 v35; // r13
  char *v36; // r15
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 ii; // rax
  _BYTE *v41; // rdx
  __int64 v42; // r12
  unsigned __int64 *v43; // r13
  unsigned __int64 *kk; // r14
  unsigned __int64 v45; // rdi
  __int64 v46; // rsi
  unsigned __int64 *v47; // r13
  unsigned __int64 *mm; // r14
  unsigned __int64 v49; // rdi
  __int64 v50; // rsi
  unsigned __int64 *v51; // r13
  unsigned __int64 *nn; // r14
  unsigned __int64 v53; // rdi
  __int64 v54; // rsi
  unsigned __int64 *v55; // r12
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r14
  __int64 v59; // r13
  unsigned __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r14
  __int64 v63; // r13
  __int64 v64; // r15
  unsigned __int64 **v65; // rax
  unsigned __int64 *v66; // r13
  bool v67; // zf
  __int64 *v68; // r12
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r14
  __int64 v72; // r13
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // r14
  __int64 v76; // r13
  __int64 v77; // rax
  unsigned __int64 v78; // r13
  __int64 v79; // rdi
  size_t v80; // rax
  unsigned int v81; // r12d
  int v82; // eax
  __int64 i1; // rax
  unsigned __int64 v84; // rax
  __int64 v85; // r15
  int v86; // eax
  __int64 v87; // rax
  unsigned __int64 v88; // rdx
  __int64 v89; // r14
  __int64 v90; // r13
  __int64 v91; // rsi
  __int64 v92; // rsi
  __int64 v93; // rdx
  __int64 v94; // r12
  _BYTE *v95; // rsi
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rdx
  unsigned int v99; // r10d
  __int64 *v100; // rsi
  __int64 v101; // r8
  __int64 v102; // r14
  _QWORD *v103; // rdx
  __int64 v104; // rax
  __int64 v105; // rdx
  _QWORD *v106; // r13
  _QWORD *v107; // r15
  __m128i v108; // xmm6
  __int64 v109; // r14
  __int64 v110; // r12
  int v111; // r13d
  _QWORD *v112; // rcx
  __int64 v113; // r11
  __m128 v114; // xmm3
  _QWORD *v115; // rsi
  size_t v116; // rax
  size_t *v117; // rcx
  __int64 v118; // rax
  unsigned __int64 v119; // rdx
  void **v120; // rsi
  size_t *v121; // rcx
  __int64 v122; // r13
  size_t **v123; // r12
  unsigned __int64 v124; // rax
  size_t **v125; // r15
  size_t *v126; // r14
  size_t **i; // r13
  size_t *v128; // rsi
  size_t j; // rax
  unsigned __int64 v130; // rax
  size_t *v131; // rdi
  size_t v132; // rbx
  size_t k; // rax
  unsigned __int64 v134; // rax
  size_t v135; // rbp
  size_t v136; // rdx
  int v137; // eax
  unsigned __int64 *v138; // r12
  unsigned __int64 v139; // rsi
  __int64 m; // rax
  unsigned __int64 v141; // rax
  unsigned __int64 v142; // rax
  __int64 v143; // rdx
  unsigned __int64 v144; // rdx
  __int64 v145; // rax
  size_t v146; // rax
  _QWORD *v147; // r12
  __int64 v148; // rdi
  size_t v149; // rax
  unsigned int v150; // r12d
  __int64 v151; // rdi
  size_t *v152; // rax
  _QWORD *v153; // rax
  _BYTE *v154; // rdi
  __int64 v155; // rax
  __int64 *v156; // rax
  int v157; // esi
  int v158; // r8d
  __int64 v159; // r9
  size_t v160; // rax
  _QWORD *v161; // rax
  __int64 jj; // rax
  size_t v163; // rdx
  __int64 v164; // [rsp+10h] [rbp-388h]
  __m128i v165; // [rsp+20h] [rbp-378h] BYREF
  __int64 v166; // [rsp+30h] [rbp-368h]
  __int64 v167; // [rsp+38h] [rbp-360h]
  void **v168; // [rsp+40h] [rbp-358h]
  __int64 v169; // [rsp+48h] [rbp-350h]
  __int64 v170; // [rsp+58h] [rbp-340h] BYREF
  __int128 v171; // [rsp+60h] [rbp-338h] BYREF
  __int128 v172; // [rsp+70h] [rbp-328h] BYREF
  __int128 v173; // [rsp+80h] [rbp-318h] BYREF
  size_t n[2]; // [rsp+90h] [rbp-308h] BYREF
  _QWORD v175[2]; // [rsp+A0h] [rbp-2F8h] BYREF
  _BYTE ptr[40]; // [rsp+B0h] [rbp-2E8h] BYREF
  _BOOL8 v177; // [rsp+D8h] [rbp-2C0h]
  __int128 v178; // [rsp+E0h] [rbp-2B8h]
  __int64 v179; // [rsp+F0h] [rbp-2A8h]
  char v180; // [rsp+148h] [rbp-250h]
  void *v181; // [rsp+150h] [rbp-248h] BYREF
  __int64 v182; // [rsp+158h] [rbp-240h]
  _BYTE v183[568]; // [rsp+160h] [rbp-238h] BYREF

  v6 = a1;
  v7 = *(_QWORD *)(a2 + 88);
  v8 = *(_QWORD *)(a2 + 80);
  v9 = *(_QWORD *)(a1 + 16);
  v166 = a2;
  v10 = &v181;
  v167 = v7;
  v169 = v8;
  sub_A25970(v9, 0xFu, 5u);
  v181 = v183;
  v182 = 0x4000000000LL;
  sub_1F6B880(&v171);
  sub_A1FE00(v171, 1, 1);
  sub_A1FE00(v171, 16, 2);
  sub_A1FE00(v171, 16, 2);
  sub_A1FE00(v171, 16, 2);
  sub_A1FE00(v171, 16, 2);
  sub_A1FE00(v171, 1, 2);
  sub_A1FE00(v171, 1, 2);
  sub_A1FE00(v171, 1, 2);
  sub_A1FE00(v171, 1, 2);
  sub_A1FE00(v171, 0, 10);
  v11 = *(_QWORD *)(v6 + 16);
  v12 = *((_QWORD *)&v171 + 1);
  *(_QWORD *)ptr = v171;
  v171 = 0;
  *(_QWORD *)&ptr[8] = v12;
  v13 = sub_A22F90(v11, (__int64 *)ptr);
  if ( *(_QWORD *)&ptr[8] )
    sub_4343A0(*(volatile signed __int32 **)&ptr[8]);
  v179 = 0;
  *(_OWORD *)&ptr[16] = 0;
  v14 = 0;
  v178 = 0;
  v177 = a4 != 0;
  v15 = *(_QWORD *)(v6 + 56);
  *(__m128i *)ptr = _mm_load_si128((const __m128i *)&xmmword_23AAC10);
  *(__m128i *)&ptr[24] = _mm_load_si128((const __m128i *)&xmmword_23AAC20);
  if ( v15 )
  {
    v16 = *(_DWORD *)(v15 + 36);
    if ( v16 <= 7 )
      v14 = ((1LL << v16) & 0xBC) != 0;
  }
  v17 = *(unsigned __int8 *)(v6 + 152);
  v18 = *(_QWORD *)(v6 + 16);
  *(_QWORD *)&v178 = v14;
  *((_QWORD *)&v178 + 1) = v17;
  v179 = *(unsigned __int8 *)(v6 + 156);
  sub_10CCE60((__int64)n);
  sub_1F76680(v18, v13, ptr, 9, n[0], n[1]);
  if ( (_QWORD *)n[0] != v175 )
    operator delete((void *)n[0]);
  if ( !*(_QWORD *)(v6 + 56) )
    goto LABEL_25;
  sub_1F6B880(&v172);
  sub_A1FE00(v172, 6, 1);
  sub_A1FE00(v172, 0, 10);
  v19 = *(_QWORD *)(v6 + 16);
  v20 = *((_QWORD *)&v172 + 1);
  *(_QWORD *)ptr = v172;
  v172 = 0;
  *(_QWORD *)&ptr[8] = v20;
  v21 = sub_A22F90(v19, (__int64 *)ptr);
  if ( *(_QWORD *)&ptr[8] )
    sub_4343A0(*(volatile signed __int32 **)&ptr[8]);
  v22 = *(_QWORD *)(v6 + 56);
  v23 = *(_QWORD *)(v6 + 16);
  v170 = 6;
  sub_1F76000(v23, v21, (unsigned __int8 *)&v170, 1, *(_QWORD *)v22, *(_QWORD *)(v22 + 8));
  if ( (*(_BYTE *)(**(_QWORD **)(v166 + 104) + 280LL) & 8) != 0 )
  {
    v146 = j__strlen(".");
    sub_FD9440((__int64)ptr, v169, ".", v146, 1);
    if ( (ptr[8] & 1) != 0 )
    {
      v160 = *(_QWORD *)ptr;
      *(_QWORD *)ptr = 0;
      n[0] = v160;
      sub_A0E8E0((_QWORD **)n);
      if ( n[0] )
        (*(void (__fastcall **)(size_t))(*(_QWORD *)n[0] + 8LL))(n[0]);
      sub_A04D70((__int64 *)ptr);
      BUG();
    }
    v147 = *(_QWORD **)ptr;
    sub_A04D70((__int64 *)ptr);
    v25 = v147 + 4;
    v26 = (char *)v147 + *v147 + 32;
    goto LABEL_14;
  }
  v24 = *(_QWORD **)(*(_QWORD *)(v6 + 56) + 48LL);
  if ( !v24 )
  {
    v180 = 0;
    if ( !a4 )
      goto LABEL_94;
    n[0] = (size_t)v175;
    if ( &a3[a4] && !a3 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)a4 > 0xF )
    {
      if ( a4 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v161 = (_QWORD *)operator new(a4 + 1);
      v175[0] = a4;
      n[0] = (size_t)v161;
    }
    else
    {
      if ( a4 == 1 )
      {
        LOBYTE(v175[0]) = *a3;
        v153 = v175;
        goto LABEL_176;
      }
      v161 = v175;
    }
    memcpy(v161, a3, a4);
    v153 = (_QWORD *)n[0];
LABEL_176:
    n[1] = a4;
    *((_BYTE *)v153 + a4) = 0;
    v154 = *(_BYTE **)(v6 + 120);
    if ( (_QWORD *)n[0] == v175 )
    {
      v163 = n[1];
      if ( n[1] )
      {
        if ( n[1] == 1 )
          *v154 = v175[0];
        else
          memcpy(v154, (const void *)n[0], n[1]);
        v163 = n[1];
        v154 = *(_BYTE **)(v6 + 120);
      }
      *(_QWORD *)(v6 + 128) = v163;
      v154[v163] = 0;
      v154 = (_BYTE *)n[0];
      goto LABEL_180;
    }
    if ( v154 == (_BYTE *)(v6 + 136) )
    {
      v165.m128i_i64[0] = v175[0];
      *(_QWORD *)(v6 + 120) = n[0];
      *(__m128 *)(v6 + 128) = _mm_loadh_ps((const double *)v165.m128i_i64);
    }
    else
    {
      v165.m128i_i64[0] = v175[0];
      v155 = *(_QWORD *)(v6 + 136);
      *(_QWORD *)(v6 + 120) = n[0];
      *(__m128 *)(v6 + 128) = _mm_loadh_ps((const double *)v165.m128i_i64);
      if ( v154 )
      {
        n[0] = (size_t)v154;
        v175[0] = v155;
        goto LABEL_180;
      }
    }
    v154 = v175;
    n[0] = (size_t)v175;
LABEL_180:
    n[1] = 0;
    *v154 = 0;
    if ( (_QWORD *)n[0] != v175 )
      operator delete((void *)n[0]);
    goto LABEL_20;
  }
  v25 = v24 + 4;
  v26 = (char *)v24 + *v24 + 32;
LABEL_14:
  *(_QWORD *)ptr = &ptr[24];
  *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  sub_A1FE50(ptr, v25, v26);
  v180 = 1;
  sub_FD77C0(v169, (__int64)ptr);
  sub_228F0B0(ptr, 0, 0);
  v27 = *(_BYTE *)(**(_QWORD **)(v166 + 104) + 280LL);
  if ( (v27 & 8) == 0 )
  {
    if ( (v27 & 4) == 0
      || (v28 = j__strlen("."), v29 = *(_QWORD **)(*(_QWORD *)(v6 + 56) + 48LL), v28 != *v29)
      || v28 && memcmp(v29 + 4, ".", v28) )
    {
      sub_1F6B880(&v173);
      sub_A1FE00(v173, 8, 1);
      sub_A1FE00(v173, 0, 10);
      v148 = *(_QWORD *)(v6 + 16);
      v149 = *((_QWORD *)&v173 + 1);
      n[0] = v173;
      v173 = 0;
      n[1] = v149;
      v150 = sub_A22F90(v148, (__int64 *)n);
      if ( n[1] )
        sub_4343A0((volatile signed __int32 *)n[1]);
      v151 = *(_QWORD *)(v6 + 16);
      n[0] = 8;
      sub_1F76000(v151, v150, (unsigned __int8 *)n, 1, *(unsigned __int64 *)ptr, *(__int64 *)&ptr[8]);
      if ( *((_QWORD *)&v173 + 1) )
        sub_4343A0(*((volatile signed __int32 **)&v173 + 1));
    }
  }
  sub_99BDC0((_QWORD *)(v6 + 120), 0, *(_QWORD *)(v6 + 128), *(_BYTE **)ptr, *(size_t *)&ptr[8]);
LABEL_20:
  if ( v180 && *(_BYTE **)ptr != &ptr[24] )
    free(*(void **)ptr);
LABEL_94:
  if ( *((_QWORD *)&v172 + 1) )
    sub_4343A0(*((volatile signed __int32 **)&v172 + 1));
  v92 = *(_QWORD *)(v6 + 56);
  if ( !v92 || *(_DWORD *)(v92 + 36) )
    goto LABEL_25;
  v93 = *(_QWORD *)(v92 + 64);
  LODWORD(v182) = 0;
  v94 = *(_QWORD *)(v166 + 104);
  if ( v93 )
  {
    v95 = *(_BYTE **)(v92 + 56);
  }
  else
  {
    v156 = (__int64 *)sub_13FC270((_QWORD **)(v94 + 632), v92);
    v95 = v156 + 4;
    v93 = *v156;
  }
  sub_1F74280((_QWORD *)v6, v95, v93, (__int64)&v181);
  v96 = *(unsigned int *)(v94 + 1192);
  v97 = *(_QWORD *)(v6 + 56);
  v98 = *(_QWORD *)(v94 + 1176);
  if ( !(_DWORD)v96 )
    goto LABEL_186;
  v99 = (v96 - 1) & (((unsigned int)v97 >> 9) ^ ((unsigned int)v97 >> 4));
  v100 = (__int64 *)(v98 + 32LL * v99);
  v101 = *v100;
  if ( v97 != *v100 )
  {
    v157 = 1;
    if ( v101 != -4096 )
    {
      do
      {
        v158 = v157 + 1;
        v99 = (v96 - 1) & (v157 + v99);
        v100 = (__int64 *)(v98 + 32LL * v99);
        v159 = *v100;
        if ( v97 == *v100 )
          goto LABEL_102;
        v157 = v158;
      }
      while ( v159 != -4096 );
    }
LABEL_186:
    sub_1EC2700((__m128 *)ptr, (_QWORD *)(v98 + 32 * v96), (_QWORD *)(v98 + 32 * v96), v94 + 1176, 1);
    v102 = *(_QWORD *)ptr;
    goto LABEL_103;
  }
LABEL_102:
  sub_1EC2700((__m128 *)ptr, v100, (_QWORD *)(32 * v96 + v98), v94 + 1176, 1);
  v102 = *(_QWORD *)ptr;
LABEL_103:
  v103 = (_QWORD *)(*(_QWORD *)(v94 + 1176) + 32LL * *(unsigned int *)(v94 + 1192));
  sub_1EC2700((__m128 *)ptr, v103, v103, v94 + 1176, 1);
  if ( *(_QWORD *)ptr == v102 || v102 == -8 )
  {
    sub_1F6B920((__int64)&v181);
    goto LABEL_24;
  }
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v102 + 16));
  v104 = *(_QWORD *)(v102 + 8);
  v105 = *(unsigned int *)(v102 + 24);
  v106 = (_QWORD *)(v104 + 8 * v105);
  if ( *(_DWORD *)(v102 + 16) )
  {
    v165.m128i_i64[0] = v104 + 8 * v105;
    *(__m128 *)ptr = _mm_loadh_ps((const double *)v165.m128i_i64);
    sub_1F6B960((_QWORD **)ptr, v165.m128i_i64[0]);
    v112 = *(_QWORD **)&ptr[8];
    v107 = *(_QWORD **)ptr;
    v165.m128i_i64[0] = *(_QWORD *)&ptr[8];
    *(_QWORD *)ptr = v113 + 16;
    v168 = *(void ***)&ptr[8];
    v114 = _mm_loadh_ps((const double *)v165.m128i_i64);
    *(_QWORD *)&ptr[8] = 0x100000000LL;
    v165 = (__m128i)v114;
    *(__m128 *)n = v114;
    if ( v106 != v107 )
    {
      v115 = v112;
      v116 = (size_t)v107;
      v110 = 0;
      v117 = n;
      while ( 1 )
      {
        ++v110;
        n[0] = v116 + 8;
        sub_1F6B960((_QWORD **)v117, v115);
        v116 = n[0];
        if ( v106 == (_QWORD *)n[0] )
          break;
        v115 = (_QWORD *)n[1];
      }
      v118 = *(unsigned int *)&ptr[8];
      v119 = v110 + *(unsigned int *)&ptr[8];
      if ( v119 > *(unsigned int *)&ptr[12] )
      {
        sub_2237220(ptr, &ptr[16], v119, 8);
        v118 = *(unsigned int *)&ptr[8];
      }
      v120 = v168;
      v121 = n;
      v109 = *(_QWORD *)ptr + 8 * v118;
      *(__m128i *)n = _mm_load_si128(&v165);
      goto LABEL_117;
    }
  }
  else
  {
    v165.m128i_i64[0] = v104 + 8 * v105;
    v107 = (_QWORD *)v165.m128i_i64[0];
    v108 = _mm_loadl_epi64(&v165);
    v168 = (void **)v165.m128i_i64[0];
    *(_QWORD *)ptr = &ptr[16];
    *(_QWORD *)&ptr[8] = 0x100000000LL;
    v165 = _mm_unpacklo_epi64(v108, v108);
  }
  v109 = *(_QWORD *)ptr;
  LODWORD(v110) = 0;
  *(__m128i *)n = _mm_load_si128(&v165);
  if ( v107 == v106 )
  {
    v111 = 0;
    goto LABEL_119;
  }
  v120 = v168;
  v121 = n;
LABEL_117:
  while ( 1 )
  {
    v109 += 8;
    *(_QWORD *)(v109 - 8) = *v107;
    n[0] = (size_t)(v107 + 1);
    sub_1F6B960((_QWORD **)v121, v120);
    v107 = (_QWORD *)n[0];
    if ( v106 == (_QWORD *)n[0] )
      break;
    v120 = (void **)n[1];
  }
  v109 = *(_QWORD *)ptr;
  v111 = *(_DWORD *)&ptr[8];
LABEL_119:
  *(_DWORD *)&ptr[8] = v111 + v110;
  v122 = 8LL * (unsigned int)(v111 + v110);
  v123 = (size_t **)(v109 + v122);
  if ( v109 + v122 == v109 )
    goto LABEL_147;
  _BitScanReverse64(&v124, v122 >> 3);
  sub_1F6CDC0((char *)v109, (size_t **)(v109 + v122), 2LL * (int)(63 - (v124 ^ 0x3F)));
  if ( (unsigned __int64)v122 <= 0x80 )
  {
    sub_1F6DA10((size_t **)v109, (size_t **)(v109 + v122));
    goto LABEL_188;
  }
  v125 = (size_t **)(v109 + 128);
  sub_1F6DA10((size_t **)v109, (size_t **)(v109 + 128));
  if ( v123 == (size_t **)(v109 + 128) )
  {
LABEL_188:
    v138 = *(unsigned __int64 **)ptr;
    v109 = *(_QWORD *)ptr + 8LL * *(unsigned int *)&ptr[8];
    goto LABEL_140;
  }
  v165.m128i_i64[0] = v6;
  v168 = &v181;
  do
  {
    v126 = *v125;
    for ( i = v125; ; i[1] = v152 )
    {
      v128 = *(i - 1);
      for ( j = v128[1]; j; j = *(_QWORD *)(v130 + 8) )
      {
        if ( (j & 4) == 0 )
          break;
        v130 = j & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v130 )
          break;
        v128 = (size_t *)v130;
      }
      v131 = v126;
      v132 = *v128;
      for ( k = v126[1]; k; k = *(_QWORD *)(v134 + 8) )
      {
        if ( (k & 4) == 0 )
          break;
        v134 = k & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v134 )
          break;
        v131 = (size_t *)v134;
      }
      v135 = *v131;
      v136 = *v131;
      if ( v132 <= *v131 )
        v136 = *v128;
      if ( !v136 )
        break;
      v137 = memcmp(v131 + 4, v128 + 4, v136);
      if ( !v137 )
        break;
      if ( v137 >= 0 )
        goto LABEL_138;
LABEL_167:
      v152 = *--i;
    }
    if ( v132 != v135 && v132 > v135 )
      goto LABEL_167;
LABEL_138:
    ++v125;
    *i = v126;
  }
  while ( v123 != v125 );
  v138 = *(unsigned __int64 **)ptr;
  v6 = v165.m128i_i64[0];
  v10 = v168;
  v109 = *(_QWORD *)ptr + 8LL * *(unsigned int *)&ptr[8];
LABEL_140:
  if ( v138 != (unsigned __int64 *)v109 )
  {
    do
    {
      v139 = *v138;
      for ( m = *(_QWORD *)(*v138 + 8); m; m = *(_QWORD *)(v141 + 8) )
      {
        if ( (m & 4) == 0 )
          break;
        v141 = m & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v141 )
          break;
        v139 = v141;
      }
      ++v138;
      sub_1F74280((_QWORD *)v6, (_BYTE *)(v139 + 32), *(_QWORD *)v139, (__int64)v10);
    }
    while ( (unsigned __int64 *)v109 != v138 );
    v109 = *(_QWORD *)ptr;
  }
LABEL_147:
  if ( (_BYTE *)v109 != &ptr[16] )
    free((void *)v109);
LABEL_24:
  sub_1F6EB90(*(_QWORD *)(v6 + 16), 7u, (__int64)v10);
LABEL_25:
  if ( *(_QWORD *)(v6 + 48) )
  {
    sub_1F6B880(&v173);
    sub_A1FE00(v173, 2, 1);
    sub_A1FE00(v173, 3, 2);
    sub_A1FE00(v173, 6, 4);
    sub_A1FE00(v173, 6, 4);
    sub_A1FE00(v173, 1, 2);
    sub_A1FE00(v173, 6, 4);
    sub_A1FE00(v173, 6, 4);
    sub_A1FE00(v173, 6, 4);
    sub_A1FE00(v173, 0, 10);
    v30 = *(_QWORD *)(v6 + 16);
    v31 = *((_QWORD *)&v173 + 1);
    *(_QWORD *)ptr = v173;
    v173 = 0;
    *(_QWORD *)&ptr[8] = v31;
    LODWORD(v168) = sub_A22F90(v30, (__int64 *)ptr);
    if ( *(_QWORD *)&ptr[8] )
      sub_4343A0(*(volatile signed __int32 **)&ptr[8]);
    *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    *(_QWORD *)ptr = &ptr[24];
    v32 = *(_QWORD *)(v6 + 48);
    v33 = *(__int64 **)(v32 + 160);
    v165.m128i_i64[0] = (__int64)&v33[*(unsigned int *)(v32 + 168)];
    if ( v33 != (__int64 *)v165.m128i_i64[0] )
    {
      do
      {
        v34 = *v33;
        if ( *(_BYTE *)(*v33 + 408) )
        {
          LODWORD(v182) = 0;
          *(_QWORD *)&ptr[8] = 0;
          sub_9B9C90((__int64)v10, 2);
          sub_9B9C90((__int64)v10, *(unsigned int *)(v34 + 4));
          sub_1F6F570((_QWORD *)v6, *(_DWORD *)(v34 + 812), (__int64)v10);
          v35 = *(_QWORD *)(v34 + 48);
          v36 = *(char **)(v34 + 40);
          sub_9B9C90((__int64)v10, v35);
          sub_13C13C0((__int64 *)ptr, (char *)(*(_QWORD *)ptr + *(_QWORD *)&ptr[8]), v36, &v36[v35]);
          sub_9B9C90((__int64)v10, *(unsigned __int8 *)(v34 + 209));
          if ( *(_BYTE *)(v34 + 209) )
          {
            sub_1F6B920((__int64)v10);
            sub_1F6B920((__int64)v10);
            sub_1F6B920((__int64)v10);
          }
          else
          {
            *(_OWORD *)n = 0;
            LODWORD(v175[0]) = 0;
            if ( !memcmp((const void *)(v34 + 224), n, 0x14u) )
            {
              v142 = *(_QWORD *)(v34 + 216);
              while ( 1 )
              {
                v143 = *(_QWORD *)(v142 + 8);
                if ( !v143 )
                  break;
                v142 = v143 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v143 & 4) == 0 || !v142 )
                  goto LABEL_153;
              }
              v142 = 0;
LABEL_153:
              sub_9B9C90((__int64)v10, *(_QWORD *)(v142 + 32));
              LODWORD(v175[0]) = 0;
              *(_OWORD *)n = 0;
            }
            else
            {
              sub_9B9C90((__int64)v10, 0);
              LODWORD(v175[0]) = 0;
              *(_OWORD *)n = 0;
            }
            v37 = 0;
            if ( !memcmp((const void *)(v34 + 224), n, 0x14u) )
            {
              v144 = *(_QWORD *)(v34 + 216);
              while ( 1 )
              {
                v145 = *(_QWORD *)(v144 + 8);
                if ( !v145 )
                  break;
                v144 = v145 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v145 & 4) == 0 || !v144 )
                {
                  v37 = 0;
                  if ( !*(_BYTE *)(v6 + 152) )
                    goto LABEL_34;
                  goto LABEL_159;
                }
              }
              v144 = 0;
              v37 = 0;
              if ( *(_BYTE *)(v6 + 152) )
LABEL_159:
                v37 = *(_QWORD *)(v144 + 40);
            }
LABEL_34:
            sub_9B9C90((__int64)v10, v37);
            v38 = *(_QWORD *)&ptr[8];
            if ( (unsigned __int64)(*(_QWORD *)&ptr[8] + 20LL) > *(_QWORD *)&ptr[16] )
            {
              sub_2236E10(ptr, &ptr[24], *(_QWORD *)&ptr[8] + 20LL, 1);
              v38 = *(_QWORD *)&ptr[8];
            }
            v39 = *(_QWORD *)ptr + v38;
            if ( *(_QWORD *)ptr + v38 >= (unsigned __int64)(v34 + 240)
              || *(_QWORD *)ptr + v38 + 16 <= (unsigned __int64)(v34 + 224) )
            {
              for ( ii = 0; ii != 16; ii += 16 )
                *(__m128i *)(v39 + ii) = _mm_loadu_si128((const __m128i *)(v34 + ii + 224));
              v41 = (_BYTE *)(v39 + 16);
              *v41 = *(_BYTE *)(v34 + 240);
              v41[1] = *(_BYTE *)(v34 + 241);
              v41[2] = *(_BYTE *)(v34 + 242);
              v41[3] = *(_BYTE *)(v34 + 243);
            }
            else
            {
              for ( jj = 0; jj != 20; ++jj )
                *(_BYTE *)(v39 + jj) = *(_BYTE *)(v34 + jj + 224);
            }
            *(_QWORD *)&ptr[8] += 20LL;
            sub_1F742F0((_QWORD *)v6, *(_BYTE **)(v34 + 8), *(_QWORD *)(v34 + 16), (__int64)v10, (__int64 *)ptr);
          }
          v164 &= 0xFFFFFF00FFFFFFFFLL;
          sub_1F76680(
            *(_QWORD *)(v6 + 16),
            (unsigned int)v168,
            (unsigned __int8 *)v181,
            (unsigned int)v182,
            *(unsigned __int64 *)ptr,
            *(__int64 *)&ptr[8]);
        }
        ++v33;
      }
      while ( (__int64 *)v165.m128i_i64[0] != v33 );
      if ( *(_BYTE **)ptr != &ptr[24] )
        free(*(void **)ptr);
    }
    if ( *((_QWORD *)&v173 + 1) )
      sub_4343A0(*((volatile signed __int32 **)&v173 + 1));
  }
  sub_A25970(*(_QWORD *)(v6 + 16), 0x11u, 4u);
  LODWORD(v182) = 0;
  v42 = *(_QWORD *)(v166 + 56);
  sub_9B9C90((__int64)v10, *(_BYTE *)v42 & 1);
  sub_9B9C90((__int64)v10, (*(_BYTE *)v42 & 2) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)v42 & 4) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)v42 & 8) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)v42 & 0x10) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)v42 & 0x20) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)v42 & 0x40) != 0);
  sub_9B9C90((__int64)v10, *(_BYTE *)v42 >> 7);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 1) & 1);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 1) & 2) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 1) & 4) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 1) & 8) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 1) & 0x10) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 1) & 0x20) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 1) & 0x40) != 0);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 1) >> 7);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 2) & 1);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 2) & 2) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 2) & 4) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 2) & 8) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 2) & 0x10) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 2) & 0x20) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 2) & 0x40) != 0);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 2) >> 7);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 3) & 1);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 3) & 2) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 3) & 4) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 3) & 8) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 3) & 0x10) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 3) & 0x20) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 3) & 0x40) != 0);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 3) >> 7);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 4) & 1);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 4) & 2) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 4) & 4) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 4) & 8) != 0);
  sub_9B9C90((__int64)v10, *(unsigned int *)(v42 + 8));
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 12) & 1);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 12) & 2) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 12) & 4) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 12) & 8) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 12) & 0x10) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 12) & 0x20) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 12) & 0x40) != 0);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 12) >> 7);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 200) >> 6);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 201) & 3);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 13) & 1);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 13) & 2) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 13) & 4) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 13) & 8) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 13) & 0x10) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 13) & 0x20) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 13) & 0x40) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 201) >> 2) & 7);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 13) >> 7);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 14) & 1);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 14) & 2) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 14) & 4) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 14) & 8) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 14) & 0x10) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 14) & 0x20) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 14) & 0x40) != 0);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 14) >> 7);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 15) & 1);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 15) & 2) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 15) & 4) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 15) & 8) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 15) & 0x10) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 15) & 0x20) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 15) & 0x40) != 0);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 15) >> 7);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 16) & 1);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 16) & 2) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 16) & 4) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 16) & 8) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 16) & 0x10) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 16) & 0x20) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 16) & 0x40) != 0);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 16) >> 7);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 17) & 1);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 17) & 2) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 17) & 4) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 17) & 8) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 17) & 0x10) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 17) & 0x20) != 0);
  sub_9B9C90((__int64)v10, (unsigned __int16)(*(_DWORD *)(v42 + 16) >> 14));
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 19) & 0x40) != 0);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 19) >> 7);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 20) & 1);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 20) & 2) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 20) & 4) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 20) & 8) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 20) & 0x10) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 20) & 0x20) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 20) & 0x40) != 0);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 20) >> 7);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 21) & 1);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 21) & 2) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 21) & 4) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 21) & 8) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 21) & 0x10) != 0);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 201) >> 5);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 21) & 0x20) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 21) & 0x40) != 0);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 21) >> 7);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 22) & 1);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 22) & 2) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 22) & 4) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 22) & 8) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 22) & 0x10) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 22) & 0x20) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 22) & 0x40) != 0);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 22) >> 7);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 23) & 1);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 23) & 2) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 23) & 4) != 0);
  sub_9B9C90((__int64)v10, *(unsigned int *)(v42 + 24));
  sub_9B9C90((__int64)v10, *(unsigned int *)(v42 + 28));
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 32) & 1);
  sub_9B9C90((__int64)v10, *(unsigned int *)(v42 + 36));
  sub_9B9C90((__int64)v10, *(unsigned int *)(v42 + 40));
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 44) & 1);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 44) & 2) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 44) & 4) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 44) >> 3) & 3);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 44) & 0x20) != 0);
  sub_9B9C90((__int64)v10, (*(_BYTE *)(v42 + 44) & 0x40) != 0);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 44) >> 7);
  sub_9B9C90((__int64)v10, *(_BYTE *)(v42 + 45) & 1);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 45) & 2) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 45) & 4) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 45) & 8) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 45) & 0x10) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 45) & 0x20) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 45) & 0x40) != 0);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 45) >> 7);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 46) & 1);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 46) & 2) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 46) & 4) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 46) & 8) != 0);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 202) & 7);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 46) & 0x10) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 46) & 0x20) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 46) & 0x40) != 0);
  sub_9B9C90((__int64)&v181, (*(_WORD *)(v42 + 46) >> 7) & 0xF);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 47) & 8) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 202) >> 3) & 3);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 202) >> 5);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 47) & 0x10) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 47) & 0x20) != 0);
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 48));
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 52) & 1);
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 56));
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 60) & 1);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 60) & 2) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 60) & 4) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 60) & 8) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 60) & 0x10) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 60) & 0x20) != 0);
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 64));
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 68) & 1);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 68) & 2) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 68) & 4) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 68) & 8) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 68) & 0x10) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 68) & 0x20) != 0);
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 72));
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 76));
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 80));
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 84));
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 88) & 1);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 88) & 2) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 88) & 4) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 88) & 8) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 88) & 0x10) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 88) & 0x20) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 88) & 0x40) != 0);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 88) >> 7);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 89) & 1);
  sub_9B9C90((__int64)&v181, *(unsigned __int16 *)(v42 + 204));
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 89) & 2) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 89) & 4) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 89) & 8) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 89) & 0x10) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 89) & 0x20) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 89) & 0x40) != 0);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 89) >> 7);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 90) & 1);
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 92));
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 96) & 1);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 96) & 2) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 96) & 4) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 96) & 8) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 96) & 0x10) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 96) & 0x20) != 0);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 206) & 3);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 96) & 0x40) != 0);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 96) >> 7);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 97) & 1);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 97) & 2) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 97) & 4) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 97) & 8) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 97) & 0x10) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 97) & 0x20) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 97) & 0x40) != 0);
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 100));
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 104) & 1);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 104) & 2) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 104) & 4) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 104) & 8) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 104) & 0x10) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 104) & 0x20) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 104) & 0x40) != 0);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 104) >> 7);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 105) & 1);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 105) & 2) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 206) >> 2) & 3);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 105) & 4) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 105) & 8) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 206) >> 4) & 7);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 105) & 0x10) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 105) & 0x20) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 105) & 0x40) != 0);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 105) >> 7);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 106) & 1);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 106) & 2) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 106) & 4) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 106) & 8) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 106) & 0x10) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 106) & 0x20) != 0);
  sub_9B9C90((__int64)&v181, (*(_WORD *)(v42 + 206) >> 7) & 3);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 106) & 0x40) != 0);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 106) >> 7);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 207) >> 1) & 3);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 207) >> 3) & 3);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 207) >> 5) & 3);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 208) & 3);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 107) & 1);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 107) & 2) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 107) & 4) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 107) & 8) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 107) & 0x10) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 107) & 0x20) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 107) & 0x40) != 0);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 107) >> 7);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 108) & 1);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 208) >> 2) & 3);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 108) & 2) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 108) & 4) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 208) >> 4) & 3);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 108) & 8) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 108) & 0x10) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 108) & 0x20) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 108) & 0x40) != 0);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 108) >> 7);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 208) >> 6);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 209) & 7);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 209) >> 3) & 7);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 109) & 1);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 109) & 2) != 0);
  sub_9B9C90((__int64)&v181, (*(_DWORD *)(v42 + 208) >> 14) & 7);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 210) >> 1) & 7);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 210) >> 4) & 7);
  sub_9B9C90((__int64)&v181, (*(_WORD *)(v42 + 210) >> 7) & 7);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 109) & 4) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 109) & 8) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 211) >> 2) & 3);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 211) >> 4) & 3);
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 112));
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 116));
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 211) >> 6);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 120) & 1);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 212) & 3);
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 124));
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 128));
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 132));
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 136));
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 140) & 1);
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 144));
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 148));
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 152));
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 212) >> 2) & 3);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 156) & 1);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 156) & 2) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 156) & 4) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 156) & 8) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 156) & 0x10) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 156) & 0x20) != 0);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 156) >> 6);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 157) & 1);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 157) & 2) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 157) & 4) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 157) & 8) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 157) & 0x10) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 157) & 0x20) != 0);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 212) >> 4);
  sub_9B9C90((__int64)&v181, (*(_DWORD *)(v42 + 156) >> 14) & 0x1F);
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 160));
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 164) & 1);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 164) & 2) != 0);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 213) & 3);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 164) & 4) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 164) & 8) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 164) & 0x10) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 164) & 0x20) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 213) >> 2) & 3);
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 168));
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 213) >> 4) & 3);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 213) & 0x40) != 0);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 172) & 1);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 172) & 2) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 172) & 4) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 172) & 8) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 172) & 0x10) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 172) & 0x20) != 0);
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 176));
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 180));
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 184));
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 188));
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 213) >> 7);
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 192));
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 196));
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 200) & 1);
  sub_9B9C90((__int64)&v181, *(unsigned __int8 *)(v42 + 817));
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 200) & 4) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 200) & 8) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 200) & 0x10) != 0);
  sub_9B9C90((__int64)&v181, (*(_BYTE *)(v42 + 200) & 0x20) != 0);
  sub_9B9C90((__int64)&v181, *(_QWORD *)(v42 + 224) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 1) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 2) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 3) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 4) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 5) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 6) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 7) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 8) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 10) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 11) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 12) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 13) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 14) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 15) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 16) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 17) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 18) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 19) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 20) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 21) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 22) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 23) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 24) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 25) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 26) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 27) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 28) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 29) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 30) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 31) & 1LL);
  sub_9B9C90((__int64)&v181, *(_DWORD *)(v42 + 228) & 1);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 34) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 35) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 36) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 37) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 38) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 39) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 41) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 42) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 43) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 44) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 45) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 46) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 47) & 1LL);
  sub_9B9C90((__int64)&v181, *(_WORD *)(v42 + 230) & 1);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 49) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 50) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 51) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 52) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 53) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 54) & 1LL);
  sub_9B9C90((__int64)&v181, *(_BYTE *)(v42 + 231) & 1);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 57) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 58) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 61) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 224) >> 62) & 1LL);
  sub_9B9C90((__int64)&v181, *(_QWORD *)(v42 + 232) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 232) >> 3) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 232) >> 6) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 232) >> 7) & 1LL);
  sub_9B9C90((__int64)&v181, (*(_QWORD *)(v42 + 232) >> 9) & 1LL);
  sub_9B9C90((__int64)&v181, (__int64)(*(_QWORD *)(v42 + 528) - *(_QWORD *)(v42 + 520)) >> 5);
  v43 = *(unsigned __int64 **)(v42 + 528);
  for ( kk = *(unsigned __int64 **)(v42 + 520); v43 != kk; kk += 4 )
  {
    v45 = *kk;
    v46 = kk[1];
    sub_1F740F0(v45, v46, (__int64)&v181);
  }
  sub_9B9C90((__int64)&v181, *(unsigned int *)(v42 + 368));
  sub_1F6FD30((char *)(v42 + 372), (__int64)&v181);
  sub_1F740F0(*(_QWORD *)(v42 + 488), *(_QWORD *)(v42 + 496), (__int64)&v181);
  sub_9B9C90((__int64)&v181, (__int64)(*(_QWORD *)(v42 + 552) - *(_QWORD *)(v42 + 544)) >> 5);
  v47 = *(unsigned __int64 **)(v42 + 552);
  for ( mm = *(unsigned __int64 **)(v42 + 544); v47 != mm; mm += 4 )
  {
    v49 = *mm;
    v50 = mm[1];
    sub_1F740F0(v49, v50, (__int64)&v181);
  }
  sub_9B9C90((__int64)&v181, *(unsigned __int8 *)(v42 + 568));
  sub_9B9C90((__int64)&v181, 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(v42 + 656) - *(_QWORD *)(v42 + 648)) >> 3));
  v51 = *(unsigned __int64 **)(v42 + 656);
  for ( nn = *(unsigned __int64 **)(v42 + 648); v51 != nn; nn += 7 )
  {
    v53 = *nn;
    v54 = nn[1];
    sub_1F740F0(v53, v54, (__int64)&v181);
  }
  sub_1F740F0(*(_QWORD *)(v42 + 672), *(_QWORD *)(v42 + 680), (__int64)&v181);
  sub_1F6EB90(*(_QWORD *)(v6 + 16), 1u, (__int64)&v181);
  LODWORD(v182) = 0;
  v55 = *(unsigned __int64 **)(*(_QWORD *)(v166 + 64) + 208LL);
  sub_1F740F0(*v55, v55[1], (__int64)&v181);
  sub_1F740F0(v55[8], v55[9], (__int64)&v181);
  sub_1F740F0(v55[12], v55[13], (__int64)&v181);
  sub_1F740F0(v55[20], v55[21], (__int64)&v181);
  sub_9B9C90((__int64)&v181, (__int64)(v55[30] - v55[29]) >> 5);
  v56 = v55[29];
  v57 = (__int64)(v55[30] - v56) >> 5;
  if ( (_DWORD)v57 )
  {
    v58 = 0;
    v59 = 32LL * (unsigned int)(v57 - 1);
    while ( 1 )
    {
      sub_1F740F0(*(_QWORD *)(v58 + v56), *(_QWORD *)(v58 + v56 + 8), (__int64)&v181);
      if ( v58 == v59 )
        break;
      v56 = v55[29];
      v58 += 32;
    }
  }
  sub_9B9C90((__int64)&v181, (__int64)(v55[33] - v55[32]) >> 5);
  v60 = v55[32];
  v61 = (__int64)(v55[33] - v60) >> 5;
  if ( (_DWORD)v61 )
  {
    v62 = 0;
    v63 = 32LL * (unsigned int)(v61 - 1);
    while ( 1 )
    {
      sub_1F740F0(*(_QWORD *)(v62 + v60), *(_QWORD *)(v62 + v60 + 8), (__int64)&v181);
      if ( v63 == v62 )
        break;
      v60 = v55[32];
      v62 += 32;
    }
  }
  sub_1F6EB90(*(_QWORD *)(v6 + 16), 2u, (__int64)&v181);
  LODWORD(v182) = 0;
  sub_1F740F0(*(_QWORD *)(v169 + 16), *(_QWORD *)(v169 + 24), (__int64)&v181);
  sub_1F6EB90(*(_QWORD *)(v6 + 16), 3u, (__int64)&v181);
  v64 = v166;
  LODWORD(v182) = 0;
  v65 = *(unsigned __int64 ***)(v166 + 104);
  v66 = *v65;
  sub_1F740F0(**v65, (*v65)[1], (__int64)&v181);
  sub_1F740F0(v66[10], v66[11], (__int64)&v181);
  sub_1F740F0(v66[14], v66[15], (__int64)&v181);
  sub_1F740F0(v66[18], v66[19], (__int64)&v181);
  sub_9B9C90((__int64)&v181, v66[35] & 1);
  sub_9B9C90((__int64)&v181, (v66[35] & 2) != 0);
  sub_9B9C90((__int64)&v181, (v66[35] & 4) != 0);
  sub_9B9C90((__int64)&v181, (v66[35] & 0x10) != 0);
  sub_9B9C90((__int64)&v181, v66[78] & 1);
  sub_9B9C90((__int64)&v181, (v66[78] & 2) != 0);
  sub_9B9C90((__int64)&v181, (v66[78] & 4) != 0);
  sub_9B9C90((__int64)&v181, (v66[78] & 8) != 0);
  sub_1F740F0(*(_QWORD *)(*(_QWORD *)(v64 + 104) + 304LL), *(_QWORD *)(*(_QWORD *)(v64 + 104) + 312LL), (__int64)&v181);
  sub_1F6EB90(*(_QWORD *)(v6 + 16), 4u, (__int64)&v181);
  v67 = *(_BYTE *)(v6 + 153) == 0;
  v68 = *(__int64 **)(v64 + 40);
  LODWORD(v182) = 0;
  if ( v67 || (v66[35] & 1) != 0 )
  {
    sub_9B9C90((__int64)&v181, 1);
    sub_9B9C90((__int64)&v181, 0xCCCCCCCCCCCCCCCDLL * ((v68[1] - *v68) >> 3));
    v87 = *v68;
    v88 = 0xCCCCCCCCCCCCCCCDLL * ((v68[1] - *v68) >> 3);
    if ( (_DWORD)v88 )
    {
      v89 = 0;
      v90 = 8 * (5LL * (unsigned int)(v88 - 1) + 5);
      while ( 1 )
      {
        sub_1F740F0(*(_QWORD *)(v89 + v87), *(_QWORD *)(v89 + v87 + 8), (__int64)&v181);
        v91 = *(unsigned __int8 *)(*v68 + v89 + 32);
        v89 += 40;
        sub_9B9C90((__int64)&v181, v91);
        if ( v90 == v89 )
          break;
        v87 = *v68;
      }
    }
  }
  else
  {
    sub_9B9C90((__int64)&v181, 0);
  }
  sub_9B9C90((__int64)&v181, (v68[4] - v68[3]) >> 5);
  v69 = v68[3];
  v70 = (v68[4] - v69) >> 5;
  if ( (_DWORD)v70 )
  {
    v71 = 0;
    v72 = 32LL * (unsigned int)(v70 - 1);
    while ( 1 )
    {
      sub_1F740F0(*(_QWORD *)(v71 + v69), *(_QWORD *)(v71 + v69 + 8), (__int64)&v181);
      if ( v71 == v72 )
        break;
      v69 = v68[3];
      v71 += 32;
    }
  }
  sub_9B9C90((__int64)&v181, (v68[7] - v68[6]) >> 5);
  v73 = v68[6];
  v74 = (v68[7] - v73) >> 5;
  if ( (_DWORD)v74 )
  {
    v75 = 0;
    v76 = 32LL * (unsigned int)(v74 - 1);
    while ( 1 )
    {
      sub_1F740F0(*(_QWORD *)(v75 + v73), *(_QWORD *)(v75 + v73 + 8), (__int64)&v181);
      if ( v76 == v75 )
        break;
      v73 = v68[6];
      v75 += 32;
    }
  }
  sub_9B9C90((__int64)&v181, *((unsigned __int8 *)v68 + 73));
  sub_9B9C90((__int64)&v181, *((unsigned __int8 *)v68 + 75));
  sub_1F740F0(v68[14], v68[15], (__int64)&v181);
  sub_9B9C90((__int64)&v181, *((unsigned int *)v68 + 79));
  sub_1F6EB90(*(_QWORD *)(v6 + 16), 5u, (__int64)&v181);
  sub_A25550(*(_QWORD *)(v6 + 16));
  v77 = sub_101FFD0(v167, *(_DWORD *)(v167 + 520));
  if ( v77 )
  {
    v78 = *(_QWORD *)((*(_QWORD *)(v77 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
    if ( v78 )
    {
      sub_1F6B880(n);
      sub_A1FE00(n[0], 3, 1);
      sub_A1FE00(n[0], 6, 4);
      sub_A1FE00(n[0], 0, 10);
      v79 = *(_QWORD *)(v6 + 16);
      *(_QWORD *)ptr = n[0];
      v80 = n[1];
      *(_OWORD *)n = 0;
      *(_QWORD *)&ptr[8] = v80;
      v81 = sub_A22F90(v79, (__int64 *)ptr);
      if ( *(_QWORD *)&ptr[8] )
        sub_4343A0(*(volatile signed __int32 **)&ptr[8]);
      LODWORD(v182) = 0;
      sub_9B9C90((__int64)&v181, 3);
      v82 = sub_1F6E390((_QWORD *)v6, *(_DWORD *)(v167 + 520));
      sub_9B9C90((__int64)&v181, v82);
      for ( i1 = *(_QWORD *)(v78 + 8); i1; i1 = *(_QWORD *)(v84 + 8) )
      {
        if ( (i1 & 4) == 0 )
          break;
        v84 = i1 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v84 )
          break;
        v78 = v84;
      }
      sub_1F76AA0((_QWORD *)v6, v81, (unsigned __int8 *)v181, (unsigned int)v182, (_BYTE *)(v78 + 32), *(_QWORD *)v78);
      if ( n[1] )
        sub_4343A0((volatile signed __int32 *)n[1]);
    }
  }
  v85 = v167;
  LODWORD(v182) = 0;
  v86 = sub_1F6E390((_QWORD *)v6, *(_DWORD *)(v167 + 520));
  sub_9B9C90((__int64)&v181, v86);
  sub_1F6EB90(*(_QWORD *)(v6 + 16), 4u, (__int64)&v181);
  sub_1F76E60(v6, v85);
  sub_A25550(*(_QWORD *)(v6 + 16));
  if ( *((_QWORD *)&v171 + 1) )
    sub_4343A0(*((volatile signed __int32 **)&v171 + 1));
  if ( v181 != v183 )
    free(v181);
}
