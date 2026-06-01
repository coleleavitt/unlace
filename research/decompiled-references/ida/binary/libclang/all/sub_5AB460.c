void __fastcall sub_5AB460(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm1
  __int64 v3; // rbp
  __int64 v4; // rax
  __m128i v5; // xmm3
  char v6; // al
  __int64 v7; // r13
  __int64 v8; // rax
  __m128i v9; // xmm4
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // r15
  void *v13; // r13
  __int64 v14; // r14
  __m128i *v15; // rax
  void *v16; // rdx
  __m128i *v17; // rax
  void *v18; // rdx
  __int64 v19; // rbp
  void *v20; // rbx
  size_t v21; // r13
  __int64 v22; // r12
  size_t v23; // rbp
  size_t v24; // rdx
  int v25; // eax
  __int64 v26; // rbp
  size_t v27; // r12
  size_t v28; // rbp
  size_t v29; // rdx
  int v30; // eax
  int v31; // ebx
  char *v32; // r10
  __int64 v33; // r13
  unsigned __int64 v34; // rax
  int v35; // r9d
  char *v36; // rdi
  unsigned int i; // esi
  unsigned __int64 v38; // rdx
  int v39; // ecx
  unsigned __int64 v40; // r13
  _BYTE *v41; // rdi
  _BYTE *v42; // rcx
  size_t v43; // rdx
  _BYTE *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rbp
  char *v47; // r12
  int v48; // r13d
  unsigned __int64 v49; // rax
  int v50; // r9d
  unsigned __int64 v51; // rsi
  unsigned int jj; // ecx
  unsigned __int64 v53; // rdx
  int v54; // edi
  __int64 v55; // rax
  size_t v56; // rbx
  _BYTE *v57; // rcx
  void *v58; // rbp
  __int64 v59; // r12
  __int64 v60; // rdx
  _BYTE *v61; // rax
  unsigned __int64 v62; // rbx
  void *v63; // rax
  void *v64; // r10
  void *v65; // r11
  size_t v66; // rdx
  const void *v67; // rsi
  int v68; // eax
  signed __int64 v69; // rax
  signed __int64 v70; // rax
  void *v71; // rdi
  __int64 *v72; // rbx
  size_t v73; // rbp
  void *v74; // rdi
  void *v75; // r12
  _BYTE *v76; // rax
  __int64 v77; // rdx
  void *v78; // rdi
  __int64 v79; // rax
  _QWORD *v80; // r10
  size_t v81; // r14
  size_t v82; // rdx
  const void *v83; // rdi
  int v84; // eax
  _QWORD *v85; // rdx
  __int64 v86; // rax
  _QWORD *v87; // rax
  size_t v88; // r10
  _QWORD *v89; // r11
  size_t v90; // rdx
  const void *v91; // rdi
  int v92; // eax
  __int64 v93; // r10
  __int64 v94; // rax
  _QWORD *v95; // rax
  size_t v96; // r11
  size_t v97; // rdx
  const void *v98; // rsi
  signed __int64 v99; // rax
  int v100; // ecx
  _DWORD *v101; // rdi
  __int64 v102; // rcx
  int v103; // ecx
  _DWORD *v104; // rdi
  __int64 v105; // rcx
  size_t v106; // rdx
  unsigned __int64 v107; // rax
  __int64 v108; // rax
  _DWORD *v109; // rax
  __int64 v110; // rdx
  char *v111; // r10
  _DWORD *v112; // rdx
  void **v113; // rsi
  _QWORD *v114; // rbp
  char *v115; // r13
  unsigned int v116; // ecx
  int v117; // esi
  int v118; // esi
  int v119; // eax
  unsigned __int64 v120; // r11
  unsigned int j; // edi
  unsigned __int64 v122; // rdx
  int v123; // r8d
  char v124; // cl
  _QWORD *v125; // rcx
  __int64 v126; // rcx
  bool v127; // zf
  _QWORD *v128; // rdi
  _QWORD *v129; // rdi
  unsigned __int64 v130; // rax
  __int64 v131; // rax
  _DWORD *v132; // rax
  __int64 v133; // rdx
  _DWORD *v134; // rdx
  char *v135; // r13
  _QWORD *kk; // rbp
  unsigned int v137; // edx
  int v138; // eax
  int v139; // esi
  int v140; // r10d
  unsigned __int64 v141; // r9
  unsigned int mm; // ecx
  unsigned __int64 v143; // rax
  int v144; // r8d
  char v145; // dl
  _QWORD *v146; // rdx
  __int64 v147; // rdx
  _QWORD *v148; // rdi
  _QWORD *v149; // rdi
  unsigned __int64 v150; // rax
  unsigned __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rcx
  _DWORD *v155; // rdx
  _DWORD *v156; // rcx
  char *v157; // rax
  _QWORD *v158; // r12
  char *v159; // rbp
  unsigned int v160; // ecx
  int v161; // esi
  int v162; // esi
  char *v163; // r11
  int v164; // eax
  char *v165; // r10
  unsigned int i1; // edi
  char *v167; // rdx
  int v168; // r8d
  char v169; // cl
  _QWORD *v170; // rcx
  __int64 v171; // rcx
  _QWORD *v172; // rdi
  _QWORD *v173; // rdi
  unsigned __int64 v174; // rax
  unsigned __int64 v175; // rax
  __int64 v176; // rax
  _DWORD *v177; // rax
  __int64 v178; // rdx
  char *v179; // r10
  int v180; // r8d
  _DWORD *v181; // rdx
  __int64 v182; // rsi
  _QWORD *v183; // rbp
  char *v184; // r13
  unsigned int v185; // ecx
  int v186; // esi
  int v187; // esi
  char *v188; // r11
  int v189; // eax
  char *v190; // r10
  unsigned int m; // edi
  char *v192; // rdx
  int v193; // r8d
  char v194; // cl
  _QWORD *v195; // rcx
  __int64 v196; // rcx
  _QWORD *v197; // rdi
  _QWORD *v198; // rdi
  int v199; // eax
  int v200; // ecx
  int v201; // r10d
  unsigned __int64 v202; // rsi
  unsigned int nn; // eax
  int v204; // r8d
  int v205; // eax
  int v206; // ecx
  int v207; // r9d
  unsigned __int64 v208; // rsi
  unsigned int k; // eax
  int v210; // r8d
  int v211; // eax
  int v212; // eax
  int v213; // edi
  unsigned __int64 v214; // rcx
  unsigned int ii; // r8d
  int v216; // r9d
  int v217; // eax
  int v218; // eax
  int v219; // r9d
  unsigned __int64 v220; // rcx
  unsigned int i2; // r13d
  int v222; // edi
  unsigned int v223; // esi
  unsigned int v224; // ecx
  unsigned int v225; // ecx
  unsigned int v226; // edi
  unsigned int v227; // edi
  unsigned int v228; // edi
  unsigned int v229; // eax
  unsigned int v230; // r8d
  unsigned int v231; // r13d
  unsigned int v232; // eax
  __m128i v233; // [rsp+0h] [rbp-158h] BYREF
  void **v234; // [rsp+18h] [rbp-140h]
  _QWORD *v235; // [rsp+20h] [rbp-138h]
  void *s1; // [rsp+28h] [rbp-130h]
  void **v237; // [rsp+30h] [rbp-128h]
  void **p_s2; // [rsp+38h] [rbp-120h]
  __int64 v239; // [rsp+40h] [rbp-118h]
  void *v240; // [rsp+48h] [rbp-110h]
  size_t v241; // [rsp+50h] [rbp-108h]
  void *v242; // [rsp+58h] [rbp-100h]
  void *s2; // [rsp+60h] [rbp-F8h] BYREF
  size_t n; // [rsp+68h] [rbp-F0h]
  _QWORD v245[2]; // [rsp+70h] [rbp-E8h] BYREF
  void *v246[2]; // [rsp+80h] [rbp-D8h] BYREF
  _QWORD v247[2]; // [rsp+90h] [rbp-C8h] BYREF
  void *v248; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v249; // [rsp+A8h] [rbp-B0h]
  char v250; // [rsp+B0h] [rbp-A8h]
  void *v251; // [rsp+B8h] [rbp-A0h] BYREF
  size_t v252; // [rsp+C0h] [rbp-98h]
  _QWORD src[2]; // [rsp+C8h] [rbp-90h] BYREF
  void *ptr[2]; // [rsp+D8h] [rbp-80h] BYREF
  _BYTE v255[112]; // [rsp+E8h] [rbp-70h] BYREF

  v2 = _mm_loadl_epi64((const __m128i *)&off_49EBAB8);
  qword_4B056E0[2] = 0;
  qword_4B056E0[0] = (__int64)&off_4A6E058;
  qword_4B056E0[1] &= 0x80000000uLL;
  qword_4B056E0[11] = (__int64)&qword_4B056E0[14];
  v233 = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)nullsub_266);
  qword_4B056E0[3] = 0;
  qword_4B056E0[4] = 0;
  qword_4B056E0[5] = 0;
  qword_4B056E0[6] = 0;
  qword_4B056E0[7] = 0;
  qword_4B056E0[8] = (__int64)&qword_4B056E0[10];
  qword_4B056E0[9] = 0x100000000LL;
  qword_4B056E0[12] = 1;
  LODWORD(qword_4B056E0[13]) = 0;
  BYTE4(qword_4B056E0[13]) = 1;
  v3 = sub_259AC30(a1, a2);
  v4 = LODWORD(qword_4B056E0[9]);
  if ( HIDWORD(qword_4B056E0[9]) < (unsigned __int64)(v4 + 1) )
  {
    sub_25D6060(&qword_4B056E0[8], &qword_4B056E0[10], v4 + 1, 8);
    v4 = LODWORD(qword_4B056E0[9]);
  }
  v5 = _mm_load_si128(&v233);
  *(_QWORD *)(qword_4B056E0[8] + 8 * v4) = v3;
  LOWORD(qword_4B056E0[17]) = 0;
  *(_OWORD *)&qword_4B056E0[19] = 0;
  *(__m128i *)&qword_4B056E0[21] = v5;
  qword_4B056E0[16] = (__int64)&off_4A64730;
  ++LODWORD(qword_4B056E0[9]);
  LOBYTE(qword_4B056E0[15]) = 0;
  qword_4B056E0[0] = (__int64)off_4A6DFF0;
  qword_4B056E0[18] = (__int64)off_49D9168;
  sub_259F400(qword_4B056E0, "assume-preserve-all", 19);
  v6 = BYTE2(qword_4B056E0[1]);
  LOBYTE(qword_4B056E0[15]) = 0;
  qword_4B056E0[5] = 80;
  LOWORD(qword_4B056E0[17]) = 256;
  BYTE2(qword_4B056E0[1]) = v6 & 0x9F | 0x20;
  qword_4B056E0[4] = (__int64)"enable preservation of all attributes. even those that are unlikely to be useful";
  sub_259EC40(qword_4B056E0);
  __cxa_atexit(sub_1F6C9D0, qword_4B056E0, &off_47CFE00);
  qword_4B05620[0] = (__int64)&off_4A6E058;
  qword_4B05620[1] &= 0x80000000uLL;
  qword_4B05620[12] = 1;
  qword_4B05620[2] = 0;
  qword_4B05620[3] = 0;
  qword_4B05620[4] = 0;
  qword_4B05620[5] = 0;
  qword_4B05620[6] = 0;
  qword_4B05620[7] = 0;
  qword_4B05620[8] = (__int64)&qword_4B05620[10];
  qword_4B05620[9] = 0x100000000LL;
  qword_4B05620[11] = (__int64)&qword_4B05620[14];
  LODWORD(qword_4B05620[13]) = 0;
  BYTE4(qword_4B05620[13]) = 1;
  v7 = sub_259AC30(sub_1F6C9D0, qword_4B056E0);
  v8 = LODWORD(qword_4B05620[9]);
  if ( HIDWORD(qword_4B05620[9]) < (unsigned __int64)(v8 + 1) )
  {
    sub_25D6060(&qword_4B05620[8], &qword_4B05620[10], v8 + 1, 8);
    v8 = LODWORD(qword_4B05620[9]);
  }
  v9 = _mm_load_si128(&v233);
  *(_QWORD *)(qword_4B05620[8] + 8 * v8) = v7;
  LOWORD(qword_4B05620[17]) = 0;
  *(_OWORD *)&qword_4B05620[19] = 0;
  *(__m128i *)&qword_4B05620[21] = v9;
  qword_4B05620[16] = (__int64)&off_4A64730;
  ++LODWORD(qword_4B05620[9]);
  LOBYTE(qword_4B05620[15]) = 0;
  qword_4B05620[0] = (__int64)off_4A6DFF0;
  qword_4B05620[18] = (__int64)off_49D9168;
  sub_259F400(qword_4B05620, "enable-knowledge-retention", 26);
  v10 = BYTE2(qword_4B05620[1]);
  LOBYTE(qword_4B05620[15]) = 0;
  LOWORD(qword_4B05620[17]) = 256;
  qword_4B05620[5] = 64;
  BYTE2(qword_4B05620[1]) = v10 & 0x9F | 0x20;
  qword_4B05620[4] = (__int64)"enable preservation of attributes throughout code transformation";
  sub_259EC40(qword_4B05620);
  __cxa_atexit(sub_1F6C9D0, qword_4B05620, &off_47CFE00);
  v11 = sub_25A3D10(sub_1F6C9D0, qword_4B05620);
  v237 = &v248;
  v12 = v11;
  v248 = &qword_20 + 3;
  v234 = v246;
  v13 = (void *)(v11 + 32);
  v235 = v247;
  v14 = v11 + 32;
  v246[0] = v247;
  v15 = (__m128i *)std::string::_M_create();
  v246[0] = v15;
  v247[0] = v248;
  *v15 = _mm_load_si128((const __m128i *)&xmmword_3C85470);
  v16 = v246[0];
  p_s2 = &s2;
  v15[1] = _mm_load_si128((const __m128i *)&xmmword_3C85480);
  *(__int32 *)((char *)&v15[1].m128i_i32[3] + 3) = 1684370529;
  v246[1] = v248;
  *((_BYTE *)v248 + (_QWORD)v16) = 0;
  v233.m128i_i64[0] = (__int64)v245;
  s2 = v245;
  v248 = &dword_14 + 2;
  v17 = (__m128i *)std::string::_M_create();
  s2 = v17;
  v245[0] = v248;
  *v17 = _mm_load_si128((const __m128i *)&xmmword_3C85490);
  v18 = s2;
  *(__int64 *)((char *)&v17->m128i_i64[1] + 6) = 0x7265746E756F632DLL;
  n = (size_t)v248;
  *((_BYTE *)v248 + (_QWORD)v18) = 0;
  v19 = *(_QWORD *)(v12 + 40);
  v20 = s2;
  if ( !v19 )
    goto LABEL_46;
  s1 = (void *)(v12 + 32);
  v21 = n;
  v22 = v19;
  do
  {
    while ( 1 )
    {
      v23 = *(_QWORD *)(v22 + 40);
      v24 = v23;
      if ( v21 <= v23 )
        v24 = v21;
      if ( v24 )
      {
        v25 = memcmp(*(const void **)(v22 + 32), v20, v24);
        if ( v25 )
          goto LABEL_15;
      }
      v26 = v23 - v21;
      if ( v26 < 0x80000000LL )
        break;
LABEL_7:
      v14 = v22;
      v22 = *(_QWORD *)(v22 + 16);
      if ( !v22 )
        goto LABEL_17;
    }
    if ( v26 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
      goto LABEL_16;
    v25 = v26;
LABEL_15:
    if ( v25 >= 0 )
      goto LABEL_7;
LABEL_16:
    v22 = *(_QWORD *)(v22 + 24);
  }
  while ( v22 );
LABEL_17:
  v27 = v21;
  v13 = s1;
  if ( s1 == (void *)v14 )
    goto LABEL_46;
  v28 = *(_QWORD *)(v14 + 40);
  v29 = v28;
  if ( v27 <= v28 )
    v29 = v27;
  if ( v29 )
  {
    v30 = memcmp(v20, *(const void **)(v14 + 32), v29);
    if ( v30 )
    {
LABEL_25:
      if ( v30 < 0 )
        goto LABEL_46;
      goto LABEL_26;
    }
  }
  if ( (__int64)(v27 - v28) > 0x7FFFFFFF )
    goto LABEL_26;
  if ( (__int64)(v27 - v28) >= (__int64)0xFFFFFFFF80000000LL )
  {
    v30 = v27 - v28;
    goto LABEL_25;
  }
LABEL_46:
  v55 = operator new(0x48u);
  v56 = n;
  v57 = s2;
  v58 = (void *)(v55 + 48);
  v59 = v55;
  *(_QWORD *)(v55 + 32) = v55 + 48;
  v248 = (void *)v56;
  if ( v56 > 0xF )
  {
    s1 = v57;
    v79 = std::string::_M_create();
    v57 = s1;
    *(_QWORD *)(v59 + 32) = v79;
    v78 = (void *)v79;
    *(_QWORD *)(v59 + 48) = v248;
LABEL_78:
    memcpy(v78, v57, v56);
  }
  else
  {
    if ( v56 == 1 )
    {
      *(_BYTE *)(v55 + 48) = *v57;
      goto LABEL_49;
    }
    if ( v56 )
    {
      v78 = (void *)(v55 + 48);
      goto LABEL_78;
    }
  }
LABEL_49:
  v60 = *(_QWORD *)(v59 + 32);
  v239 = v12 + 24;
  v61 = v248;
  *(_QWORD *)(v59 + 40) = v248;
  v61[v60] = 0;
  v62 = *(_QWORD *)(v59 + 40);
  *(_DWORD *)(v59 + 64) = 0;
  v63 = *(void **)(v59 + 32);
  s1 = v63;
  if ( v13 == (void *)v14 )
  {
    if ( *(_QWORD *)(v12 + 64) )
    {
      v80 = *(_QWORD **)(v12 + 56);
      v81 = v80[5];
      v82 = v81;
      if ( v62 <= v81 )
        v82 = v62;
      if ( !v82
        || (v83 = (const void *)v80[4], v240 = *(void **)(v12 + 56), v84 = memcmp(v83, v63, v82), v80 = v240, !v84) )
      {
        if ( (__int64)(v81 - v62) > 0x7FFFFFFF )
          goto LABEL_96;
        if ( (__int64)(v81 - v62) < (__int64)0xFFFFFFFF80000000LL )
        {
          v14 = 0;
          goto LABEL_97;
        }
        v84 = v81 - v62;
      }
      v14 = 0;
      if ( v84 < 0 )
      {
LABEL_97:
        if ( !v80 )
          goto LABEL_62;
        v86 = v14;
        v14 = (__int64)v80;
LABEL_99:
        if ( v86 != 0 || v14 == (_QWORD)v13 )
        {
LABEL_100:
          std::_Rb_tree_insert_and_rebalance();
          ++*(_QWORD *)(v12 + 64);
          goto LABEL_65;
        }
LABEL_151:
        v106 = *(_QWORD *)(v14 + 40);
        if ( v62 <= v106 )
          v106 = v62;
        if ( v106 )
          memcmp(s1, *(const void **)(v14 + 32), v106);
        goto LABEL_100;
      }
    }
LABEL_96:
    v14 = sub_35E37B0(v239, s1, v62);
    v80 = v85;
    goto LABEL_97;
  }
  v64 = *(void **)(v14 + 40);
  v65 = *(void **)(v14 + 32);
  v66 = (size_t)v64;
  if ( v62 <= (unsigned __int64)v64 )
    v66 = v62;
  if ( !v66 )
  {
    v69 = v62 - (_QWORD)v64;
    if ( (__int64)(v62 - (_QWORD)v64) <= 0x7FFFFFFF )
      goto LABEL_55;
    goto LABEL_59;
  }
  v67 = *(const void **)(v14 + 32);
  v242 = *(void **)(v14 + 40);
  v241 = v66;
  v240 = v65;
  v68 = memcmp(s1, v67, v66);
  v65 = v240;
  v66 = v241;
  v64 = v242;
  if ( v68 )
  {
    if ( v68 >= 0 )
    {
LABEL_58:
      v240 = v64;
      LODWORD(v70) = memcmp(v65, s1, v66);
      v64 = v240;
      if ( !(_DWORD)v70 )
        goto LABEL_59;
LABEL_61:
      if ( (int)v70 >= 0 )
        goto LABEL_62;
LABEL_118:
      if ( *(_QWORD *)(v12 + 56) == v14 )
        goto LABEL_151;
      v95 = (_QWORD *)std::_Rb_tree_increment();
      v96 = v95[5];
      v80 = v95;
      v97 = v96;
      if ( v62 <= v96 )
        v97 = v62;
      if ( v97 )
      {
        v98 = (const void *)v95[4];
        v241 = v95[5];
        v240 = v95;
        LODWORD(v99) = memcmp(s1, v98, v97);
        v80 = v240;
        v96 = v241;
        if ( (_DWORD)v99 )
          goto LABEL_125;
      }
      v99 = v62 - v96;
      if ( (__int64)(v62 - v96) > 0x7FFFFFFF )
        goto LABEL_96;
      if ( v99 >= (__int64)0xFFFFFFFF80000000LL )
      {
LABEL_125:
        if ( (int)v99 >= 0 )
          goto LABEL_96;
      }
      if ( !*(_QWORD *)(v14 + 24) )
        goto LABEL_151;
      v14 = (__int64)v80;
      goto LABEL_97;
    }
    goto LABEL_102;
  }
  v69 = v62 - (_QWORD)v242;
  if ( (__int64)(v62 - (_QWORD)v242) > 0x7FFFFFFF )
    goto LABEL_58;
LABEL_55:
  if ( v69 < (__int64)0xFFFFFFFF80000000LL || (int)v69 < 0 )
  {
LABEL_102:
    if ( *(_QWORD *)(v12 + 48) == v14 )
    {
LABEL_128:
      v86 = v14;
      goto LABEL_99;
    }
    v87 = (_QWORD *)std::_Rb_tree_decrement();
    v88 = v87[5];
    v89 = v87;
    v90 = v88;
    if ( v62 <= v88 )
      v90 = v62;
    if ( v90 )
    {
      v91 = (const void *)v87[4];
      v241 = v87[5];
      v240 = v87;
      v92 = memcmp(v91, s1, v90);
      v89 = v240;
      v88 = v241;
      if ( v92 )
        goto LABEL_110;
    }
    v93 = v88 - v62;
    if ( v93 <= 0x7FFFFFFF )
    {
      if ( v93 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_111;
      v92 = v93;
LABEL_110:
      if ( v92 < 0 )
      {
LABEL_111:
        v86 = v89[3];
        if ( !v86 )
        {
          v14 = (__int64)v89;
          goto LABEL_99;
        }
        goto LABEL_128;
      }
      goto LABEL_96;
    }
    goto LABEL_96;
  }
  if ( v66 )
    goto LABEL_58;
LABEL_59:
  v70 = (signed __int64)v64 - v62;
  if ( (__int64)((__int64)v64 - v62) <= 0x7FFFFFFF )
  {
    if ( v70 >= (__int64)0xFFFFFFFF80000000LL )
      goto LABEL_61;
    goto LABEL_118;
  }
LABEL_62:
  if ( s1 != v58 )
    operator delete(s1, *(_QWORD *)(v59 + 48) + 1LL);
  v71 = (void *)v59;
  v59 = v14;
  operator delete(v71, 0x48u);
LABEL_65:
  v14 = v59;
LABEL_26:
  v31 = *(_DWORD *)(v14 + 64);
  if ( !v31 )
  {
    v72 = *(__int64 **)(v12 + 80);
    *(_DWORD *)(v14 + 64) = (((__int64)v72 - *(_QWORD *)(v12 + 72)) >> 5) + 1;
    if ( v72 == *(__int64 **)(v12 + 88) )
    {
      sub_D5D200(v12 + 72, p_s2);
      goto LABEL_71;
    }
    v73 = n;
    v74 = v72 + 2;
    *v72 = (__int64)(v72 + 2);
    v75 = s2;
    v248 = (void *)v73;
    if ( v73 > 0xF )
    {
      v94 = std::string::_M_create();
      *v72 = v94;
      v74 = (void *)v94;
      v72[2] = (__int64)v248;
    }
    else
    {
      if ( v73 == 1 )
      {
        *((_BYTE *)v72 + 16) = *(_BYTE *)s2;
LABEL_70:
        v76 = v248;
        v77 = *v72;
        v72[1] = (__int64)v248;
        v76[v77] = 0;
        *(_QWORD *)(v12 + 80) += 32LL;
LABEL_71:
        v31 = *(_DWORD *)(v14 + 64);
        goto LABEL_27;
      }
      if ( !v73 )
        goto LABEL_70;
    }
    memcpy(v74, v75, v73);
    goto LABEL_70;
  }
LABEL_27:
  LOBYTE(src[0]) = 0;
  v248 = nullptr;
  v32 = *(char **)v12;
  ptr[1] = (void *)0x300000000LL;
  v33 = *(unsigned int *)(v12 + 16);
  v249 = 0;
  v250 = 0;
  v251 = src;
  v252 = 0;
  ptr[0] = v255;
  if ( !(_DWORD)v33 )
    goto LABEL_156;
  v34 = (unsigned int)(v33 - 1);
  v35 = 1;
  v36 = nullptr;
  for ( i = v34 & (37 * v31); ; i = v34 & v223 )
  {
    v38 = (unsigned __int64)&v32[128 * (unsigned __int64)i];
    v39 = *(_DWORD *)v38;
    if ( v31 == *(_DWORD *)v38 )
      goto LABEL_30;
    if ( v39 == -1 )
      break;
    if ( v39 == -2 && !v36 )
      v36 = &v32[128 * (unsigned __int64)i];
    v223 = v35 + i;
    ++v35;
  }
  if ( v36 )
    v38 = (unsigned __int64)v36;
  v103 = *(_DWORD *)(v12 + 8) + 1;
  if ( 4 * v103 >= (unsigned int)(3 * v33) )
  {
LABEL_156:
    s1 = v32;
    v107 = (((((((unsigned int)(2 * v33 - 1) | ((unsigned __int64)(unsigned int)(2 * v33 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v33 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v33 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v33 - 1) | ((unsigned __int64)(unsigned int)(2 * v33 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v33 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v33 - 1) >> 1)) >> 8)
         | (((((unsigned int)(2 * v33 - 1) | ((unsigned __int64)(unsigned int)(2 * v33 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v33 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v33 - 1) >> 1)) >> 4)
         | (((unsigned int)(2 * v33 - 1) | ((unsigned __int64)(unsigned int)(2 * v33 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v33 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v33 - 1) >> 1);
    v108 = ((v107 >> 16) | v107) + 1;
    if ( (unsigned int)v108 < 0x40 )
      LODWORD(v108) = 64;
    *(_DWORD *)(v12 + 16) = v108;
    v109 = (_DWORD *)sub_25CC9C0((unsigned __int64)(unsigned int)v108 << 7, 8);
    v110 = *(unsigned int *)(v12 + 16);
    v111 = (char *)s1;
    *(_QWORD *)v12 = v109;
    v112 = &v109[32 * v110];
    if ( v111 )
    {
      v113 = (void **)(v33 << 7);
      *(_QWORD *)(v12 + 8) = 0;
      while ( v112 != v109 )
      {
        *v109 = -1;
        v109 += 32;
      }
      LODWORD(s1) = v31;
      v237 = (void **)v111;
      v114 = v111 + 48;
      v115 = &v111[128 * v33];
      p_s2 = v113;
      while ( v115 != (char *)(v114 - 6) )
      {
        v116 = *((_DWORD *)v114 - 12);
        if ( v116 <= 0xFFFFFFFD )
        {
          v117 = *(_DWORD *)(v12 + 16);
          if ( !v117 )
          {
LABEL_177:
            dword_0 = 0;
            BUG();
          }
          v118 = v117 - 1;
          v119 = 1;
          v120 = 0;
          for ( j = v118 & (37 * v116); ; j = v118 & v226 )
          {
            v122 = *(_QWORD *)v12 + ((unsigned __int64)j << 7);
            v123 = *(_DWORD *)v122;
            if ( v116 == *(_DWORD *)v122 )
              break;
            if ( v123 == -1 )
            {
              if ( v120 )
                v122 = v120;
              break;
            }
            if ( !v120 && v123 == -2 )
              v120 = *(_QWORD *)v12 + ((unsigned __int64)j << 7);
            v226 = v119 + j;
            ++v119;
          }
          *(_DWORD *)v122 = v116;
          *(_QWORD *)(v122 + 8) = *(v114 - 5);
          *(_QWORD *)(v122 + 16) = *(v114 - 4);
          v124 = *((_BYTE *)v114 - 24);
          *(_QWORD *)(v122 + 32) = v122 + 48;
          *(_BYTE *)(v122 + 24) = v124;
          v125 = (_QWORD *)*(v114 - 2);
          if ( v125 == v114 )
          {
            qmemcpy((void *)(v122 + 48), v114, (unsigned int)*(v114 - 1) + 1);
          }
          else
          {
            *(_QWORD *)(v122 + 32) = v125;
            *(_QWORD *)(v122 + 48) = *v114;
          }
          v126 = *(v114 - 1);
          *(v114 - 2) = v114;
          *(v114 - 1) = 0;
          *(_QWORD *)(v122 + 40) = v126;
          *(_BYTE *)v114 = 0;
          *(_QWORD *)(v122 + 72) = 0x300000000LL;
          v127 = *((_DWORD *)v114 + 6) == 0;
          *(_QWORD *)(v122 + 64) = v122 + 80;
          if ( !v127 )
            sub_35E3580(v122 + 64, v114 + 2);
          v128 = (_QWORD *)v114[2];
          ++*(_DWORD *)(v12 + 8);
          if ( v128 != v114 + 4 )
            free(v128);
          v129 = (_QWORD *)*(v114 - 2);
          if ( v129 != v114 )
            operator delete(v129, *v114 + 1LL);
        }
        v114 += 16;
      }
      v31 = (int)s1;
      operator delete();
    }
    else
    {
      *(_QWORD *)(v12 + 8) = 0;
      while ( v112 != v109 )
      {
        *v109 = -1;
        v109 += 32;
      }
    }
    v205 = *(_DWORD *)(v12 + 16);
    if ( v205 )
    {
      v206 = v205 - 1;
      v207 = 1;
      v208 = 0;
      for ( k = (v205 - 1) & (37 * v31); ; k = v206 & v229 )
      {
        v38 = *(_QWORD *)v12 + ((unsigned __int64)k << 7);
        v210 = *(_DWORD *)v38;
        if ( v31 == *(_DWORD *)v38 )
          break;
        if ( v210 == -1 )
        {
          if ( v208 )
            v38 = v208;
          goto LABEL_145;
        }
        if ( v210 == -2 && !v208 )
          v208 = *(_QWORD *)v12 + ((unsigned __int64)k << 7);
        v229 = v207 + k;
        ++v207;
      }
      goto LABEL_145;
    }
    goto LABEL_351;
  }
  if ( (unsigned int)v33 >> 3 >= (int)v33 - *(_DWORD *)(v12 + 12) - v103 )
  {
    LODWORD(v237) = 37 * v31;
    s1 = v32;
    v174 = (((v34 >> 1) | v34) >> 2) | (v34 >> 1) | v34;
    v175 = (((v174 >> 4) | v174) >> 8) | (v174 >> 4) | v174;
    v176 = ((v175 >> 16) | v175) + 1;
    if ( (unsigned int)v176 < 0x40 )
      LODWORD(v176) = 64;
    *(_DWORD *)(v12 + 16) = v176;
    v177 = (_DWORD *)sub_25CC9C0((unsigned __int64)(unsigned int)v176 << 7, 8);
    v178 = *(unsigned int *)(v12 + 16);
    v179 = (char *)s1;
    *(_QWORD *)v12 = v177;
    v180 = (int)v237;
    v181 = &v177[32 * v178];
    if ( v179 )
    {
      v182 = v33 << 7;
      *(_QWORD *)(v12 + 8) = 0;
      while ( v181 != v177 )
      {
        *v177 = -1;
        v177 += 32;
      }
      LODWORD(s1) = v31;
      v237 = (void **)v179;
      v183 = v179 + 48;
      v184 = &v179[128 * v33];
      LODWORD(p_s2) = v180;
      v239 = v182;
      while ( v184 != (char *)(v183 - 6) )
      {
        v185 = *((_DWORD *)v183 - 12);
        if ( v185 <= 0xFFFFFFFD )
        {
          v186 = *(_DWORD *)(v12 + 16);
          if ( !v186 )
            goto LABEL_177;
          v187 = v186 - 1;
          v188 = *(char **)v12;
          v189 = 1;
          v190 = nullptr;
          for ( m = v187 & (37 * v185); ; m = v187 & v228 )
          {
            v192 = &v188[128 * (unsigned __int64)m];
            v193 = *(_DWORD *)v192;
            if ( v185 == *(_DWORD *)v192 )
              break;
            if ( v193 == -1 )
            {
              if ( v190 )
                v192 = v190;
              break;
            }
            if ( v193 == -2 && !v190 )
              v190 = &v188[128 * (unsigned __int64)m];
            v228 = v189 + m;
            ++v189;
          }
          *(_DWORD *)v192 = v185;
          *((_QWORD *)v192 + 1) = *(v183 - 5);
          *((_QWORD *)v192 + 2) = *(v183 - 4);
          v194 = *((_BYTE *)v183 - 24);
          *((_QWORD *)v192 + 4) = v192 + 48;
          v192[24] = v194;
          v195 = (_QWORD *)*(v183 - 2);
          if ( v195 == v183 )
          {
            qmemcpy(v192 + 48, v183, (unsigned int)*(v183 - 1) + 1);
          }
          else
          {
            *((_QWORD *)v192 + 4) = v195;
            *((_QWORD *)v192 + 6) = *v183;
          }
          v196 = *(v183 - 1);
          *(v183 - 2) = v183;
          *(v183 - 1) = 0;
          *((_QWORD *)v192 + 5) = v196;
          *(_BYTE *)v183 = 0;
          *((_QWORD *)v192 + 9) = 0x300000000LL;
          v127 = *((_DWORD *)v183 + 6) == 0;
          *((_QWORD *)v192 + 8) = v192 + 80;
          if ( !v127 )
            sub_35E3580(v192 + 64, v183 + 2);
          v197 = (_QWORD *)v183[2];
          ++*(_DWORD *)(v12 + 8);
          if ( v197 != v183 + 4 )
            free(v197);
          v198 = (_QWORD *)*(v183 - 2);
          if ( v198 != v183 )
            operator delete(v198, *v183 + 1LL);
        }
        v183 += 16;
      }
      v31 = (int)s1;
      LODWORD(v237) = (_DWORD)p_s2;
      operator delete();
      v180 = (int)v237;
    }
    else
    {
      *(_QWORD *)(v12 + 8) = 0;
      while ( v181 != v177 )
      {
        *v177 = -1;
        v177 += 32;
      }
    }
    v211 = *(_DWORD *)(v12 + 16);
    if ( v211 )
    {
      v212 = v211 - 1;
      v213 = 1;
      v214 = 0;
      for ( ii = v212 & v180; ; ii = v212 & v230 )
      {
        v38 = *(_QWORD *)v12 + ((unsigned __int64)ii << 7);
        v216 = *(_DWORD *)v38;
        if ( v31 == *(_DWORD *)v38 )
          break;
        if ( v216 == -1 )
        {
          if ( v214 )
            v38 = v214;
          goto LABEL_145;
        }
        if ( v216 == -2 && !v214 )
          v214 = *(_QWORD *)v12 + ((unsigned __int64)ii << 7);
        v230 = v213 + ii;
        ++v213;
      }
      goto LABEL_145;
    }
    goto LABEL_351;
  }
LABEL_145:
  ++*(_DWORD *)(v12 + 8);
  if ( *(_DWORD *)v38 != -1 )
    --*(_DWORD *)(v12 + 12);
  v104 = (_DWORD *)(v38 + 8);
  v105 = 30;
  *(_DWORD *)v38 = v31;
  while ( v105 )
  {
    *v104++ = 0;
    --v105;
  }
  *(_DWORD *)(v38 + 76) = 3;
  *(_QWORD *)(v38 + 32) = v38 + 48;
  *(_QWORD *)(v38 + 64) = v38 + 80;
LABEL_30:
  v40 = v38 + 8;
  v41 = *(_BYTE **)(v38 + 32);
  v42 = (_BYTE *)(v38 + 48);
  *(_QWORD *)(v38 + 8) = v248;
  *(_QWORD *)(v38 + 16) = v249;
  v43 = v252;
  *(_BYTE *)(v40 + 16) = v250;
  v44 = v251;
  if ( v41 == v42 )
  {
    if ( v251 != src )
    {
      *(_QWORD *)(v40 + 24) = v251;
      *(_QWORD *)(v40 + 32) = v43;
      *(_QWORD *)(v40 + 40) = src[0];
      goto LABEL_74;
    }
LABEL_81:
    if ( &v251 != (void **)(v40 + 24) )
    {
      if ( v43 )
      {
        if ( v43 == 1 )
          *v41 = src[0];
        else
          memcpy(v41, src, v43);
        v41 = *(_BYTE **)(v40 + 24);
        v43 = v252;
      }
      *(_QWORD *)(v40 + 32) = v43;
      v41[v43] = 0;
      v44 = v251;
    }
    goto LABEL_34;
  }
  if ( v251 == src )
    goto LABEL_81;
  *(_QWORD *)(v40 + 24) = v251;
  v45 = *(_QWORD *)(v40 + 40);
  *(_QWORD *)(v40 + 32) = v43;
  *(_QWORD *)(v40 + 40) = src[0];
  if ( !v41 )
  {
LABEL_74:
    v251 = src;
    v44 = src;
    goto LABEL_34;
  }
  v251 = v41;
  v44 = v41;
  src[0] = v45;
LABEL_34:
  v252 = 0;
  *v44 = 0;
  sub_35E3580(v40 + 56, ptr);
  if ( ptr[0] != v255 )
    free(ptr[0]);
  if ( v251 != src )
    operator delete(v251, src[0] + 1LL);
  v46 = *(unsigned int *)(v12 + 16);
  v47 = *(char **)v12;
  if ( !(_DWORD)v46 )
    goto LABEL_178;
  v48 = 37 * v31;
  v49 = (unsigned int)(v46 - 1);
  v50 = 1;
  v51 = 0;
  for ( jj = v49 & (37 * v31); ; jj = v49 & v224 )
  {
    v53 = (unsigned __int64)&v47[128 * (unsigned __int64)jj];
    v54 = *(_DWORD *)v53;
    if ( v31 == *(_DWORD *)v53 )
      goto LABEL_41;
    if ( v54 == -1 )
      break;
    if ( v54 == -2 && !v51 )
      v51 = (unsigned __int64)&v47[128 * (unsigned __int64)jj];
    v224 = v50 + jj;
    ++v50;
  }
  v100 = *(_DWORD *)(v12 + 8);
  if ( v51 )
    v53 = v51;
  if ( 4 * (v100 + 1) >= (unsigned int)(3 * v46) )
  {
LABEL_178:
    v130 = (((((((unsigned int)(2 * v46 - 1) | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v46 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v46 - 1) | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v46 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 8)
         | (((((unsigned int)(2 * v46 - 1) | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v46 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 4)
         | (((unsigned int)(2 * v46 - 1) | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v46 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1);
    v131 = ((v130 >> 16) | v130) + 1;
    if ( (unsigned int)v131 < 0x40 )
      LODWORD(v131) = 64;
    *(_DWORD *)(v12 + 16) = v131;
    v132 = (_DWORD *)sub_25CC9C0((unsigned __int64)(unsigned int)v131 << 7, 8);
    v133 = *(unsigned int *)(v12 + 16);
    *(_QWORD *)v12 = v132;
    v134 = &v132[32 * v133];
    if ( v47 )
    {
      *(_QWORD *)(v12 + 8) = 0;
      v135 = &v47[128 * v46];
      while ( v134 != v132 )
      {
        *v132 = -1;
        v132 += 32;
      }
      LODWORD(s1) = v31;
      for ( kk = v47 + 48; v135 != (char *)(kk - 6); kk += 16 )
      {
        v137 = *((_DWORD *)kk - 12);
        if ( v137 <= 0xFFFFFFFD )
        {
          v138 = *(_DWORD *)(v12 + 16);
          if ( !v138 )
            goto LABEL_177;
          v139 = v138 - 1;
          v140 = 1;
          v141 = 0;
          for ( mm = (v138 - 1) & (37 * v137); ; mm = v139 & v225 )
          {
            v143 = *(_QWORD *)v12 + ((unsigned __int64)mm << 7);
            v144 = *(_DWORD *)v143;
            if ( v137 == *(_DWORD *)v143 )
              break;
            if ( v144 == -1 )
            {
              if ( v141 )
                v143 = v141;
              break;
            }
            if ( v144 == -2 && !v141 )
              v141 = *(_QWORD *)v12 + ((unsigned __int64)mm << 7);
            v225 = v140 + mm;
            ++v140;
          }
          *(_DWORD *)v143 = v137;
          *(_QWORD *)(v143 + 8) = *(kk - 5);
          *(_QWORD *)(v143 + 16) = *(kk - 4);
          v145 = *((_BYTE *)kk - 24);
          *(_QWORD *)(v143 + 32) = v143 + 48;
          *(_BYTE *)(v143 + 24) = v145;
          v146 = (_QWORD *)*(kk - 2);
          if ( kk == v146 )
          {
            qmemcpy((void *)(v143 + 48), kk, (unsigned int)*(kk - 1) + 1);
          }
          else
          {
            *(_QWORD *)(v143 + 32) = v146;
            *(_QWORD *)(v143 + 48) = *kk;
          }
          v147 = *(kk - 1);
          *(kk - 2) = kk;
          *(kk - 1) = 0;
          *(_QWORD *)(v143 + 40) = v147;
          *(_BYTE *)kk = 0;
          *(_QWORD *)(v143 + 72) = 0x300000000LL;
          v127 = *((_DWORD *)kk + 6) == 0;
          *(_QWORD *)(v143 + 64) = v143 + 80;
          if ( !v127 )
            sub_35E3580(v143 + 64, kk + 2);
          v148 = (_QWORD *)kk[2];
          ++*(_DWORD *)(v12 + 8);
          if ( v148 != kk + 4 )
            free(v148);
          v149 = (_QWORD *)*(kk - 2);
          if ( kk != v149 )
            operator delete(v149, *kk + 1LL);
        }
      }
      v31 = (int)s1;
      operator delete();
    }
    else
    {
      *(_QWORD *)(v12 + 8) = 0;
      while ( v134 != v132 )
      {
        *v132 = -1;
        v132 += 32;
      }
    }
    v199 = *(_DWORD *)(v12 + 16);
    if ( v199 )
    {
      v200 = v199 - 1;
      v201 = 1;
      v202 = 0;
      for ( nn = (v199 - 1) & (37 * v31); ; nn = v200 & v232 )
      {
        v53 = *(_QWORD *)v12 + ((unsigned __int64)nn << 7);
        v204 = *(_DWORD *)v53;
        if ( v31 == *(_DWORD *)v53 )
          break;
        if ( v204 == -1 )
        {
          if ( v202 )
            v53 = v202;
          goto LABEL_134;
        }
        if ( v204 == -2 && !v202 )
          v202 = *(_QWORD *)v12 + ((unsigned __int64)nn << 7);
        v232 = v201 + nn;
        ++v201;
      }
      goto LABEL_134;
    }
    goto LABEL_351;
  }
  if ( (unsigned int)v46 >> 3 >= (int)v46 - *(_DWORD *)(v12 + 12) - (v100 + 1) )
  {
    v150 = (((v49 >> 1) | v49) >> 2) | (v49 >> 1) | v49;
    v151 = (((v150 >> 4) | v150) >> 8) | (v150 >> 4) | v150;
    v152 = ((v151 >> 16) | v151) + 1;
    if ( (unsigned int)v152 < 0x40 )
      LODWORD(v152) = 64;
    *(_DWORD *)(v12 + 16) = v152;
    v153 = sub_25CC9C0((unsigned __int64)(unsigned int)v152 << 7, 8);
    v154 = *(unsigned int *)(v12 + 16);
    *(_QWORD *)v12 = v153;
    v155 = (_DWORD *)v153;
    v156 = (_DWORD *)(v153 + (v154 << 7));
    if ( v47 )
    {
      *(_QWORD *)(v12 + 8) = 0;
      v157 = &v47[128 * (unsigned __int64)(unsigned int)v46];
      while ( v156 != v155 )
      {
        *v155 = -1;
        v155 += 32;
      }
      LODWORD(s1) = v31;
      v237 = (void **)v47;
      v158 = v47 + 48;
      v159 = v157;
      while ( v159 != (char *)(v158 - 6) )
      {
        v160 = *((_DWORD *)v158 - 12);
        if ( v160 <= 0xFFFFFFFD )
        {
          v161 = *(_DWORD *)(v12 + 16);
          if ( !v161 )
            goto LABEL_177;
          v162 = v161 - 1;
          v163 = *(char **)v12;
          v164 = 1;
          v165 = nullptr;
          for ( i1 = v162 & (37 * v160); ; i1 = v162 & v227 )
          {
            v167 = &v163[128 * (unsigned __int64)i1];
            v168 = *(_DWORD *)v167;
            if ( v160 == *(_DWORD *)v167 )
              break;
            if ( v168 == -1 )
            {
              if ( v165 )
                v167 = v165;
              break;
            }
            if ( v168 == -2 && !v165 )
              v165 = &v163[128 * (unsigned __int64)i1];
            v227 = v164 + i1;
            ++v164;
          }
          *(_DWORD *)v167 = v160;
          *((_QWORD *)v167 + 1) = *(v158 - 5);
          *((_QWORD *)v167 + 2) = *(v158 - 4);
          v169 = *((_BYTE *)v158 - 24);
          *((_QWORD *)v167 + 4) = v167 + 48;
          v167[24] = v169;
          v170 = (_QWORD *)*(v158 - 2);
          if ( v158 == v170 )
          {
            qmemcpy(v167 + 48, v158, (unsigned int)*(v158 - 1) + 1);
          }
          else
          {
            *((_QWORD *)v167 + 4) = v170;
            *((_QWORD *)v167 + 6) = *v158;
          }
          v171 = *(v158 - 1);
          *(v158 - 2) = v158;
          *((_QWORD *)v167 + 5) = v171;
          *(v158 - 1) = 0;
          *(_BYTE *)v158 = 0;
          *((_QWORD *)v167 + 9) = 0x300000000LL;
          v127 = *((_DWORD *)v158 + 6) == 0;
          *((_QWORD *)v167 + 8) = v167 + 80;
          if ( !v127 )
            sub_35E3580(v167 + 64, v158 + 2);
          v172 = (_QWORD *)v158[2];
          ++*(_DWORD *)(v12 + 8);
          if ( v172 != v158 + 4 )
            free(v172);
          v173 = (_QWORD *)*(v158 - 2);
          if ( v158 != v173 )
            operator delete(v173, *v158 + 1LL);
        }
        v158 += 16;
      }
      v31 = (int)s1;
      operator delete();
    }
    else
    {
      *(_QWORD *)(v12 + 8) = 0;
      while ( v156 != v155 )
      {
        *v155 = -1;
        v155 += 32;
      }
    }
    v217 = *(_DWORD *)(v12 + 16);
    if ( v217 )
    {
      v218 = v217 - 1;
      v219 = 1;
      v220 = 0;
      for ( i2 = v218 & v48; ; i2 = v218 & v231 )
      {
        v53 = *(_QWORD *)v12 + ((unsigned __int64)i2 << 7);
        v222 = *(_DWORD *)v53;
        if ( v31 == *(_DWORD *)v53 )
          break;
        if ( v222 == -1 )
        {
          if ( v220 )
            v53 = v220;
          goto LABEL_134;
        }
        if ( v222 == -2 && !v220 )
          v220 = *(_QWORD *)v12 + ((unsigned __int64)i2 << 7);
        v231 = v219 + i2;
        ++v219;
      }
      goto LABEL_134;
    }
LABEL_351:
    ++*(_DWORD *)(v12 + 8);
    BUG();
  }
LABEL_134:
  ++*(_DWORD *)(v12 + 8);
  if ( *(_DWORD *)v53 != -1 )
    --*(_DWORD *)(v12 + 12);
  v101 = (_DWORD *)(v53 + 8);
  v102 = 30;
  *(_DWORD *)v53 = v31;
  while ( v102 )
  {
    *v101++ = 0;
    --v102;
  }
  *(_DWORD *)(v53 + 76) = 3;
  *(_QWORD *)(v53 + 32) = v53 + 48;
  *(_QWORD *)(v53 + 64) = v53 + 80;
LABEL_41:
  std::string::_M_assign();
  if ( s2 != (void *)v233.m128i_i64[0] )
    operator delete(s2, v245[0] + 1LL);
  if ( v246[0] != v235 )
    operator delete(v246[0], v247[0] + 1LL);
}

