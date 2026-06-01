__int64 __fastcall sub_801100(
        __int64 *a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const __m128i *v11; // rax
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rsi
  int v23; // r13d
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  __int64 v31; // rax
  int v32; // r13d
  __int64 v33; // rsi
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  double v37; // xmm4_8
  double v38; // xmm5_8
  __int64 v39; // rdi
  bool v40; // zf
  _DWORD *v41; // rbp
  __m128 v42; // xmm0
  int v43; // eax
  unsigned __int64 v44; // rdx
  unsigned __int64 i; // rax
  __int64 *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 *v49; // r13
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  double v53; // xmm4_8
  double v54; // xmm5_8
  _QWORD *v55; // rax
  unsigned __int64 v56; // r13
  _QWORD *v57; // rdx
  __m128i v58; // xmm0
  unsigned int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 *v62; // rdi
  int v63; // eax
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rbp
  _QWORD *v66; // rax
  unsigned __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rsi
  __int64 v70; // rsi
  _QWORD *v71; // rsi
  __int64 *v72; // rsi
  __m128i *v73; // rdi
  int v74; // r8d
  int v75; // r9d
  int v76; // r8d
  int v77; // r9d
  __m128 v78; // xmm4
  __m128 v79; // xmm5
  __int64 v80; // rax
  __m128 v81; // xmm4
  __m128 v82; // xmm5
  __int64 (__fastcall *v83)(__m128i *); // rbx
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // r12
  __int64 v86; // rax
  __int64 v87; // rdx
  __m128i *v88; // rdi
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  int v94; // r13d
  const char *v95; // rax
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __m128 v99; // xmm4
  __m128 v100; // xmm5
  const char *v101; // rsi
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __m128 v107; // xmm4
  __m128 v108; // xmm5
  unsigned int v109; // ebx
  __int64 v111; // rcx
  __int64 v112; // rsi
  int v113; // eax
  unsigned int v114; // eax
  __int64 v115; // r8
  __int64 v116; // r9
  __m128 v117; // xmm4
  __m128 v118; // xmm5
  __int64 v119; // rax
  __int64 v120; // rcx
  int v121; // r8d
  int v122; // r9d
  __int64 v123; // r12
  __int64 v124; // rbp
  double v125; // xmm0_8
  double v126; // xmm0_8
  __m128 v127; // xmm1
  __int64 v128; // rax
  __int64 v129; // r8
  __int64 v130; // r9
  __m128 v131; // xmm4
  __m128 v132; // xmm5
  const char *v133; // rax
  const char *v134; // rsi
  int v135; // edx
  __int64 v136; // rax
  int v137; // r8d
  int v138; // r9d
  __int64 v139; // rcx
  __int64 v140; // rdx
  __int64 v141; // rax
  unsigned __int64 v142; // r13
  __int64 v143; // r12
  __int64 v144; // rdx
  int v145; // ecx
  int v146; // r8d
  int v147; // r9d
  double v148; // xmm1_8
  double v149; // xmm0_8
  double v150; // xmm0_8
  unsigned __int64 v151; // rdx
  int v152; // r8d
  int v153; // r9d
  double v154; // xmm0_8
  unsigned __int64 v155; // rdx
  int v156; // r8d
  int v157; // r9d
  __m128 v158; // xmm4
  __m128 v159; // xmm5
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __m128 v165; // xmm4
  __m128 v166; // xmm5
  __int64 v167; // rcx
  const char *v168; // rax
  __int64 v169; // rax
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  __m128 v174; // xmm4
  __m128 v175; // xmm5
  __int64 v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // r9
  __m128 v181; // xmm4
  __m128 v182; // xmm5
  const char *v183; // rax
  __int64 v184; // rcx
  __int64 v185; // r8
  __int64 v186; // r9
  __m128 v187; // xmm4
  __m128 v188; // xmm5
  __m128 v189; // xmm4
  __m128 v190; // xmm5
  _QWORD *v191; // rax
  int v192; // r11d
  int v193; // r9d
  const char *v194; // rax
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // r8
  __int64 v198; // r9
  __m128 v199; // xmm4
  __m128 v200; // xmm5
  __int64 v201; // rdx
  __int64 v202; // rcx
  __int64 v203; // r8
  __int64 v204; // r9
  __m128 v205; // xmm4
  __m128 v206; // xmm5
  __int64 v207; // rcx
  __int64 v208; // r8
  __int64 v209; // r9
  __m128 v210; // xmm4
  __m128 v211; // xmm5
  __int64 v212; // rcx
  __int64 v213; // r8
  __int64 v214; // r9
  __m128 v215; // xmm4
  __m128 v216; // xmm5
  __int64 v217; // rcx
  __int64 v218; // r8
  __int64 v219; // r9
  __m128 v220; // xmm4
  __m128 v221; // xmm5
  __int64 v222; // rcx
  __int64 v223; // r8
  __int64 v224; // r9
  __m128 v225; // xmm4
  __m128 v226; // xmm5
  char v227; // [rsp+0h] [rbp-9C8h]
  char v228; // [rsp+0h] [rbp-9C8h]
  __int64 v229; // [rsp+8h] [rbp-9C0h]
  __int64 *v230; // [rsp+10h] [rbp-9B8h]
  __int64 (__fastcall *v231)(__m128i *); // [rsp+18h] [rbp-9B0h]
  __int64 v232; // [rsp+18h] [rbp-9B0h]
  unsigned __int64 v233; // [rsp+20h] [rbp-9A8h]
  __int64 v234; // [rsp+28h] [rbp-9A0h]
  __int64 v235; // [rsp+30h] [rbp-998h]
  __int64 v236; // [rsp+30h] [rbp-998h]
  __int64 v237; // [rsp+38h] [rbp-990h]
  unsigned __int64 v238; // [rsp+70h] [rbp-958h] BYREF
  unsigned __int64 v239; // [rsp+78h] [rbp-950h] BYREF
  __int64 v240[18]; // [rsp+80h] [rbp-948h] BYREF
  _OWORD v241[15]; // [rsp+110h] [rbp-8B8h] BYREF
  _BYTE v242[48]; // [rsp+200h] [rbp-7C8h] BYREF
  _BYTE v243[48]; // [rsp+230h] [rbp-798h] BYREF
  _BYTE v244[48]; // [rsp+260h] [rbp-768h] BYREF
  _BYTE v245[48]; // [rsp+290h] [rbp-738h] BYREF
  _BYTE v246[48]; // [rsp+2C0h] [rbp-708h] BYREF
  _BYTE v247[48]; // [rsp+2F0h] [rbp-6D8h] BYREF
  _BYTE v248[48]; // [rsp+320h] [rbp-6A8h] BYREF
  _BYTE v249[48]; // [rsp+350h] [rbp-678h] BYREF
  __m128i v250[96]; // [rsp+380h] [rbp-648h] BYREF
  unsigned __int64 v251; // [rsp+988h] [rbp-40h]

  v251 = __readfsqword(0x28u);
  v238 = 0;
  dword_2CAAADC = 0;
  memset(v250, 0, sizeof(v250));
  memset(v240, 0, 0x88u);
  memset(v241, 0, sizeof(v241));
  v11 = (const __m128i *)*a1;
  v241[2] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B12A20), (__m128i)(unsigned __int64)sub_7F4AD0);
  v12 = (__m128)_mm_loadu_si128(v11 + 1);
  v13 = (__m128)_mm_shuffle_pd((__m128d)_mm_loadu_si128(v11 + 2), (__m128d)v12, 1);
  *(__m128 *)((char *)v241 + 8) = v13;
  v14 = qtime64(v242, a2);
  v19 = *a1;
  v229 = v14;
  v20 = *((_DWORD *)a1 + 82);
  v21 = *(unsigned int *)*a1;
  v22 = *(_DWORD *)*a1 & 2;
  if ( v20 == 1 )
  {
    dword_2CAAADC = 1;
    v111 = v21 & 4;
    v23 = (_DWORD)v22 << 9;
    v112 = *(unsigned int *)(v19 + 12);
    if ( (_DWORD)v111 )
    {
      v23 |= 0x2000u;
    }
    else if ( !(_DWORD)v112 )
    {
      v23 |= 0x2000u;
      v113 = 4;
      if ( *(int *)(v19 + 4) <= 2 )
      {
LABEL_54:
        LODWORD(v241[10]) = v113;
        v231 = (__int64 (__fastcall *)(__m128i *))sub_7FD100;
        goto LABEL_4;
      }
      goto LABEL_89;
    }
    if ( *(int *)(v19 + 4) <= 2 )
    {
LABEL_48:
      v113 = 4;
      if ( (unsigned int)v112 > 1 )
      {
        v113 = 3;
        if ( (_DWORD)v112 != 2 )
        {
          v113 = 2;
          if ( (int)v112 > 5 )
            v113 = v112 != 6;
        }
      }
      goto LABEL_54;
    }
LABEL_89:
    sub_800450(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_7F4AD0,
      a6,
      v17,
      v18,
      a9,
      a10,
      (__int64)"xdelta3: compression level: %d\n",
      v112,
      v19,
      v111,
      v15,
      v16);
    LODWORD(v112) = *(_DWORD *)(*a1 + 12);
    goto LABEL_48;
  }
  if ( v20 != 2 )
  {
    sub_800450(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_7F4AD0,
      a6,
      v17,
      v18,
      a9,
      a10,
      (__int64)"xdelta3: internal error\n",
      v22,
      v19,
      v21,
      v15,
      v16);
    return 1;
  }
  v231 = (__int64 (__fastcall *)(__m128i *))sub_7F77E0;
  v23 = (_DWORD)v22 == 0 ? 2048 : 1024;
LABEL_4:
  v230 = a1 + 1;
  v233 = sub_800FB0(
           a1,
           a1 + 1,
           v13,
           v12,
           (__m128)(unsigned __int64)sub_7F4AD0,
           a6,
           *(double *)v17.m128_u64,
           *(double *)v18.m128_u64,
           a9,
           a10);
  v24 = qalloc(v233);
  if ( !v24 )
  {
    v160 = qstrerror(12, a1 + 1, v25, v26);
    sub_800450(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_7F4AD0,
      a6,
      v165,
      v166,
      a9,
      a10,
      (__int64)"xdelta3: malloc: %s\n",
      v160,
      v161,
      v162,
      v163,
      v164);
    a1[40] = 0;
    return 1;
  }
  a1[40] = v24;
  *((_QWORD *)&v241[1] + 1) = sub_800860;
  v31 = *a1;
  DWORD2(v241[3]) = v23;
  v32 = *(_DWORD *)(v31 + 8);
  *(_QWORD *)&v241[0] = v233;
  if ( v32 )
    sub_801060(
      (unsigned __int64 *)a1,
      (__int64)v241,
      v13,
      v12,
      (__m128)(unsigned __int64)sub_7F4AD0,
      a6,
      v29,
      v30,
      a9,
      a10,
      v25,
      v26,
      v27,
      v28);
  v33 = (__int64)v241;
  v34 = sub_7FC250(v250, v241);
  v39 = v34;
  if ( v34 )
  {
LABEL_67:
    v133 = sub_800630(v39, v33, v35, v36);
    v134 = (const char *)v250[4].m128i_i64[0];
    v102 = (__int64)v133;
    if ( !v250[4].m128i_i64[0] )
      v134 = &byte_22CD811;
LABEL_69:
    sub_800450(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_7F4AD0,
      a6,
      v99,
      v100,
      a9,
      a10,
      (__int64)"xdelta3: %s: %s\n",
      (__int64)v134,
      v102,
      v96,
      v97,
      v98);
    return 1;
  }
  v40 = a1[27] == 0;
  v239 = 0;
  v41 = a1 + 27;
  v42 = (__m128)_mm_unpacklo_epi64(
                  (__m128i)(unsigned __int64)&xmmword_2CAAAE0,
                  (__m128i)(unsigned __int64)&xmmword_2CAAAE0);
  xmmword_2CAAAE0 = (__int128)v42;
  if ( v40 )
    sub_7F4BA0(v34);
  v43 = sub_800710(a1 + 27, (__int64 *)&v239, v42, v12, (__m128)(unsigned __int64)sub_7F4AD0, a6, v37, v38, a9, a10);
  v44 = qword_2CAAB00;
  *((_DWORD *)a1 + 74) = v43 == 0;
  for ( i = 1; i < v44; i *= 2LL )
    ;
  qword_2CAAB00 = i;
  v46 = (__int64 *)qalloc(1280);
  v49 = v46;
  if ( !v46 )
  {
    v169 = qstrerror(12, &v239, v47, v48);
    sub_800450(
      v42,
      v12,
      (__m128)(unsigned __int64)sub_7F4AD0,
      a6,
      v174,
      v175,
      a9,
      a10,
      (__int64)"xdelta3: malloc: %s\n",
      v169,
      v170,
      v171,
      v172,
      v173);
    qword_2CAAAF0 = nullptr;
    return 1;
  }
  qword_2CAAAF0 = v46;
  *v46 = 0;
  v46[159] = 0;
  memset(
    (void *)((unsigned __int64)(v46 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v46 - (((_DWORD)v46 + 8) & 0xFFFFFFF8) + 1280) >> 3));
  v50 = qalloc(qword_2CAAB00);
  if ( !v50 )
  {
    v176 = qstrerror(12, &v239, v51, v52);
    sub_800450(
      v42,
      v12,
      (__m128)(unsigned __int64)sub_7F4AD0,
      a6,
      v181,
      v182,
      a9,
      a10,
      (__int64)"xdelta3: malloc: %s\n",
      v176,
      v177,
      v178,
      v179,
      v180);
    *v49 = 0;
    return 1;
  }
  *v49 = v50;
  a6 = (__m128)(unsigned __int64)v41;
  v55 = qword_2CAAAF0;
  v56 = qword_2CAAB00;
  qword_2CAAAF8 = 1;
  *((_QWORD *)qword_2CAAAF0 + 1) = -1;
  v57 = *((_QWORD **)&xmmword_2CAAAE0 + 1);
  *((_QWORD *)&xmmword_2CAAAE0 + 1) = v55 + 3;
  *v57 = v55 + 3;
  v55[3] = &xmmword_2CAAAE0;
  v55[4] = v57;
  v58 = _mm_loadl_epi64((const __m128i *)(a1 + 29));
  v240[0] = v56;
  v13 = (__m128)_mm_unpacklo_epi64(v58, (__m128i)(unsigned __int64)v41);
  v240[3] = v56;
  v240[4] = -1;
  v240[6] = 0;
  *(__m128 *)&v240[1] = v13;
  v59 = sub_800860(
          (__int64)v250,
          v240,
          0,
          v13,
          v12,
          (__m128)(unsigned __int64)sub_7F4AD0,
          (__m128)(unsigned __int64)v41,
          v53,
          v54,
          a9,
          a10);
  if ( v59 )
  {
    v183 = sub_800630(v59, (__int64)v240, v60, v61);
    sub_800450(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_7F4AD0,
      (__m128)(unsigned __int64)v41,
      v187,
      v188,
      a9,
      a10,
      (__int64)"xdelta3: error reading source: %s: %s\n",
      a1[29],
      (__int64)v183,
      v184,
      v185,
      v186);
    return 1;
  }
  v62 = (__int64 *)qword_2CAAAF0;
  v63 = *((_DWORD *)a1 + 74);
  v64 = qword_2CAAB00;
  v65 = *((_QWORD *)qword_2CAAAF0 + 2);
  v240[5] = v65;
  if ( v63 )
  {
    v65 = v239;
LABEL_106:
    if ( v64 >= v65 )
      goto LABEL_102;
    goto LABEL_16;
  }
  if ( v65 < v56 )
  {
    v239 = v65;
    v240[15] = v65;
    *((_DWORD *)a1 + 74) = 1;
    goto LABEL_106;
  }
LABEL_16:
  qword_2CAAAF8 = 32;
  v66 = v62 + 8;
  v240[5] = v64 >> 5;
  v56 = v64 >> 5;
  v67 = v64 >> 5;
  v240[15] = v64 >> 5;
  v240[0] = v64 >> 5;
  v240[14] = 31;
  v62[2] = v64 >> 5;
  v68 = 1;
  do
  {
    v69 = *v62;
    *(v66 - 2) = v68++;
    *(v66 - 1) = v56;
    v70 = v67 + v69;
    v67 += v56;
    *(v66 - 3) = v70;
    v71 = *((_QWORD **)&xmmword_2CAAAE0 + 1);
    *((_QWORD *)&xmmword_2CAAAE0 + 1) = v66;
    *v71 = v66;
    v66 += 5;
    *(v66 - 5) = &xmmword_2CAAAE0;
    *(v66 - 4) = v71;
  }
  while ( v68 != 32 );
  if ( !*((_DWORD *)a1 + 74) )
  {
    v72 = v240;
    v73 = v250;
    dword_2CAAADC = 1;
    sub_7FC960((__int64)v250, (__int64)v240);
    if ( v74 )
      goto LABEL_20;
    goto LABEL_24;
  }
  v65 = v239;
LABEL_102:
  v72 = v240;
  v73 = v250;
  sub_7FC960((__int64)v250, (__int64)v240);
  v191 = (_QWORD *)v250[4].m128i_i64[1];
  v192 = dword_2CAAB08;
  *(_DWORD *)(v250[4].m128i_i64[1] + 128) = 1;
  v191[14] = v65 >> v191[9];
  v191[15] = v65 & v191[10];
  if ( v192 )
  {
    if ( *((_DWORD *)a1 + 74) )
    {
      pretty_print_size(&unk_2CAAA60, 48, v65);
      qsnprintf((int)&unk_2CAAAA0, 48, (int)"source size %s [%zu]", (int)&unk_2CAAA60, v65, v193, v227);
      goto LABEL_21;
    }
LABEL_20:
    qsnprintf((int)&unk_2CAAAA0, 48, (int)"%s", (int)"source size unknown", v74, v75, v227);
LABEL_21:
    byte_2CAA9A0 = 0;
    if ( dword_2CAAB08 > 1 )
      qsnprintf((int)&byte_2CAA9A0, 48, (int)" #bufs %zu", qword_2CAAAF8, v76, v77, v227);
    pretty_print_size(&unk_2CAAA20, 48, qword_2CAAB00);
    pretty_print_size(&unk_2CAA9E0, 48, v56);
    v72 = (__int64 *)a1[29];
    v73 = (__m128i *)"xdelta3: source %s %s blksize %s window %s%s%s\n";
    sub_800450(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_7F4AD0,
      a6,
      v78,
      v79,
      a9,
      a10,
      (__int64)"xdelta3: source %s %s blksize %s window %s%s%s\n",
      (__int64)v72,
      (__int64)&unk_2CAAAA0,
      (__int64)&unk_2CAA9E0,
      (__int64)&unk_2CAAA20,
      (__int64)&byte_2CAA9A0);
  }
LABEL_24:
  v80 = qtime64(v73, v72);
  v234 = 0;
  v83 = v231;
  v235 = 0;
  qword_2CAA990 = 1000 * HIDWORD(v80) + (unsigned int)v80 / 0x3E8;
  v84 = *(_QWORD *)&v241[0];
  while ( 2 )
  {
    v33 = a1[40];
    if ( ~a1[8] <= v84 )
      v84 = ~a1[8];
    v85 = v84;
    if ( (unsigned int)sub_8007A0(
                         v230,
                         v33,
                         v84,
                         (__int64 *)&v238,
                         (__int64)"input read failed",
                         v13,
                         v12,
                         (__m128)(unsigned __int64)sub_7F4AD0,
                         a6,
                         *(double *)v81.m128_u64,
                         *(double *)v82.m128_u64,
                         a9,
                         a10) )
      return 1;
    v86 = v238;
    if ( v238 < v85 )
      v250[9].m128i_i32[2] |= 0x10u;
    if ( *((_DWORD *)a1 + 82) == 1 && !*((_BYTE *)a1 + 332) && *(_QWORD *)(*a1 + 56) )
    {
      v167 = *(_QWORD *)(*a1 + 48);
      v250[50].m128i_i64[1] = *(_QWORD *)(*a1 + 56);
      *((_BYTE *)a1 + 332) = 1;
      v250[50].m128i_i64[0] = v167;
    }
    v87 = a1[40];
    v250[0].m128i_i64[1] = v86;
    v250[0].m128i_i64[0] = v87;
    if ( !v86 && v250[3].m128i_i64[0] )
      break;
    while ( 1 )
    {
      while ( 1 )
      {
        v88 = v250;
        v89 = v83(v250);
        v94 = v89;
        if ( v89 != -17704 )
          break;
        if ( v250[2].m128i_i64[0] )
        {
          v33 = v250[1].m128i_i64[1];
          if ( (unsigned int)sub_800C80(
                               (__int64)(a1 + 14),
                               (void *)v250[1].m128i_i64[1],
                               v250[2].m128i_i64[0],
                               (__int64)"write failed",
                               v13,
                               v12,
                               (__m128)(unsigned __int64)sub_7F4AD0,
                               a6,
                               *(double *)v81.m128_u64,
                               *(double *)v82.m128_u64,
                               a9,
                               a10) )
            return 1;
        }
        v250[2].m128i_i64[0] = 0;
      }
      if ( v89 >= -17703 )
        break;
      if ( v89 == -17708 )
      {
        v135 = *(_DWORD *)(*a1 + 4);
        if ( (*(_BYTE *)*a1 & 1) != 0 || *((_DWORD *)a1 + 82) != 1 || !a1[27] )
          goto LABEL_74;
        if ( v135 )
        {
          if ( v250[4].m128i_i64[1] && *(_QWORD *)(v250[4].m128i_i64[1] + 56) )
          {
            if ( v135 <= 1 )
              goto LABEL_75;
          }
          else
          {
            v88 = (__m128i *)"xdelta3: warning: input window %zu..%zu has no source copies\n";
            v33 = v233 * (v250[3].m128i_i64[0] + 1) - v233;
            sub_800450(
              v13,
              v12,
              (__m128)(unsigned __int64)sub_7F4AD0,
              a6,
              v81,
              v82,
              a9,
              a10,
              (__int64)"xdelta3: warning: input window %zu..%zu has no source copies\n",
              v33,
              v233 * (v250[3].m128i_i64[0] + 1),
              v91,
              v92,
              v93);
            v135 = *(_DWORD *)(*a1 + 4);
            if ( v135 <= 1 )
              goto LABEL_74;
          }
          v33 = v250[33].m128i_u32[3];
          if ( v250[33].m128i_i32[3] && v250[6].m128i_i64[1] < (unsigned __int64)v250[95].m128i_i64[1] )
          {
            v88 = (__m128i *)"xdelta3: warning: input position %zu overflowed instruction buffer, needed %zu (vs. %zu), c"
                             "onsider changing -I\n";
            v33 = v250[3].m128i_i64[0] * v233;
            sub_800450(
              v13,
              v12,
              (__m128)(unsigned __int64)sub_7F4AD0,
              a6,
              v81,
              v82,
              a9,
              a10,
              (__int64)"xdelta3: warning: input position %zu overflowed instruction buffer, needed %zu (vs. %zu), consider changing -I\n",
              v250[3].m128i_i64[0] * v233,
              v250[95].m128i_i64[1],
              v250[6].m128i_i64[1],
              v92,
              v93);
            v135 = *(_DWORD *)(*a1 + 4);
LABEL_74:
            if ( v135 )
              goto LABEL_75;
          }
          else
          {
LABEL_75:
            v136 = qtime64(v88, v33);
            v139 = v235;
            v236 = v250[3].m128i_i64[1];
            v140 = (unsigned int)(1000 * HIDWORD(v136));
            v141 = (unsigned int)v140 + (unsigned int)v136 / 0x3E8;
            v142 = v141 - qword_2CAA990;
            qword_2CAA990 = v141;
            v237 = v250[1].m128i_i64[0];
            v232 = v250[1].m128i_i64[0] - v139;
            v143 = v250[3].m128i_i64[1] - v234;
            if ( *(int *)(*a1 + 4) <= 1 )
            {
              sub_7F4AE0(v142, (__int64)v244, v140, v139, v137, v138);
              pretty_print_size(v248, 48, v250[3].m128i_i64[1]);
              pretty_print_size(v247, 48, v250[1].m128i_i64[0]);
              pretty_print_size(v246, 48, v143);
              pretty_print_size(v245, 48, v232);
              v33 = v250[3].m128i_i64[0];
              sub_800450(
                v13,
                v12,
                (__m128)(unsigned __int64)sub_7F4AD0,
                a6,
                v189,
                v190,
                a9,
                a10,
                (__int64)"xdelta3: %zu: in %s: out %s: total in %s: out %s: %s\n",
                v250[3].m128i_i64[0],
                (__int64)v245,
                (__int64)v246,
                (__int64)v247,
                (__int64)v248);
            }
            else
            {
              pretty_print_size(v249, 48, v250[34].m128i_i64[0]);
              sub_7F4AE0(v142, (__int64)v244, v144, v145, v146, v147);
              pretty_print_size(v248, 48, v250[3].m128i_i64[1]);
              pretty_print_size(v247, 48, v250[1].m128i_i64[0]);
              if ( (v142 & 0x8000000000000000LL) != 0LL )
                v148 = (double)(int)(v142 & 1 | (v142 >> 1)) + (double)(int)(v142 & 1 | (v142 >> 1));
              else
                v148 = (double)(int)v142;
              *(double *)v12.m128_u64 = v148 / 1000.0;
              if ( v143 < 0 )
                v149 = (double)(int)(v143 & 1 | ((unsigned __int64)v143 >> 1))
                     + (double)(int)(v143 & 1 | ((unsigned __int64)v143 >> 1));
              else
                v149 = (double)(int)v143;
              v150 = v149 / *(double *)v12.m128_u64;
              if ( v150 >= 9.223372036854776e18 )
                v151 = (unsigned int)(int)(v150 - 9.223372036854776e18) ^ 0x8000000000000000LL;
              else
                v151 = (unsigned int)(int)v150;
              pretty_print_size(&unk_2CAA960, 48, v151);
              qsnprintf((int)v243, 48, (int)"%s/s", (int)&unk_2CAA960, v152, v153, v227);
              pretty_print_size(v246, 48, v143);
              v12 = (__m128)v12.m128_u64[0];
              v13 = 0;
              if ( v232 < 0 )
                v154 = (double)(int)(v232 & 1 | ((unsigned __int64)v232 >> 1))
                     + (double)(int)(v232 & 1 | ((unsigned __int64)v232 >> 1));
              else
                v154 = (double)(int)v232;
              *(double *)v13.m128_u64 = v154 / *(double *)v12.m128_u64;
              if ( *(double *)v13.m128_u64 >= 9.223372036854776e18 )
              {
                *(double *)v13.m128_u64 = *(double *)v13.m128_u64 - 9.223372036854776e18;
                v155 = (unsigned int)(int)*(double *)v13.m128_u64 ^ 0x8000000000000000LL;
              }
              else
              {
                v155 = (unsigned int)(int)*(double *)v13.m128_u64;
              }
              pretty_print_size(&unk_2CAA960, 48, v155);
              qsnprintf((int)v242, 48, (int)"%s/s", (int)&unk_2CAA960, v156, v157, v228);
              pretty_print_size(v245, 48, v232);
              v33 = v250[3].m128i_i64[0];
              sub_800450(
                v13,
                (__m128)v12.m128_u64[0],
                (__m128)(unsigned __int64)sub_7F4AD0,
                a6,
                v158,
                v159,
                a9,
                a10,
                (__int64)"xdelta3: %zu: in %s (%s): out %s (%s): total in %s: out %s: %s: srcpos %s\n",
                v250[3].m128i_i64[0],
                (__int64)v245,
                (__int64)v242,
                (__int64)v246,
                (__int64)v243);
            }
            v234 = v236;
            v235 = v237;
          }
        }
      }
      else
      {
        if ( v89 < -17708 )
        {
          v194 = sub_800630((unsigned int)v89, v33, v90, v91);
          v101 = (const char *)v250[4].m128i_i64[0];
          v102 = (__int64)v194;
          if ( !v250[4].m128i_i64[0] )
            goto LABEL_94;
          goto LABEL_39;
        }
        if ( v89 == -17705 )
        {
          v95 = sub_800630(4294949591LL, v33, v90, v91);
          v101 = (const char *)v250[4].m128i_i64[0];
          v102 = (__int64)v95;
          if ( !v250[4].m128i_i64[0] )
          {
            sub_800450(
              v13,
              v12,
              (__m128)(unsigned __int64)sub_7F4AD0,
              a6,
              v99,
              v100,
              a9,
              a10,
              (__int64)"xdelta3: %s: %s\n",
              (__int64)&byte_22CD811,
              (__int64)v95,
              v96,
              v97,
              v98);
            return 1;
          }
          goto LABEL_39;
        }
      }
    }
    if ( v89 != -17703 )
    {
      v168 = sub_800630((unsigned int)v89, v33, v90, v91);
      v134 = (const char *)v250[4].m128i_i64[0];
      v102 = (__int64)v168;
      if ( v250[4].m128i_i64[0] )
        goto LABEL_69;
LABEL_94:
      v101 = &byte_22CD811;
LABEL_39:
      sub_800450(
        v13,
        v12,
        (__m128)(unsigned __int64)sub_7F4AD0,
        a6,
        v99,
        v100,
        a9,
        a10,
        (__int64)"xdelta3: %s: %s\n",
        (__int64)v101,
        v102,
        v96,
        v97,
        v98);
      if ( (*(_BYTE *)*a1 & 1) == 0 && v94 == -17712 )
        sub_800450(
          v13,
          v12,
          (__m128)(unsigned __int64)sub_7F4AD0,
          a6,
          v107,
          v108,
          a9,
          a10,
          (__int64)"xdelta3: normally this indicates that the source file is incorrect\n",
          (__int64)v101,
          v103,
          v104,
          v105,
          v106);
      return 1;
    }
    v84 = *(_QWORD *)&v241[0];
    if ( *(_QWORD *)&v241[0] == v238 )
      continue;
    break;
  }
  v114 = sub_7FCA80((__int64)v250);
  v109 = v114;
  if ( v114 )
  {
    v39 = v114;
    goto LABEL_67;
  }
  if ( *(int *)(*a1 + 4) > 1 && *((_DWORD *)a1 + 82) == 1 )
  {
    sub_800450(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_7F4AD0,
      a6,
      v117,
      v118,
      a9,
      a10,
      (__int64)"xdelta3: scanner configuration: %s\n",
      v250[16].m128i_i64[0],
      v35,
      v36,
      v115,
      v116);
    sub_800450(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_7F4AD0,
      a6,
      v199,
      v200,
      a9,
      a10,
      (__int64)"xdelta3: target hash table size: %zu\n",
      v250[25].m128i_i64[1],
      v195,
      v196,
      v197,
      v198);
    v33 = v250[21].m128i_i64[0];
    sub_800450(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_7F4AD0,
      a6,
      v205,
      v206,
      a9,
      a10,
      (__int64)"xdelta3: source hash table size: %zu\n",
      v250[21].m128i_i64[0],
      v201,
      v202,
      v203,
      v204);
    if ( *(int *)(*a1 + 4) > 2 && *((_DWORD *)a1 + 82) == 1 )
    {
      sub_800450(
        v13,
        v12,
        (__m128)(unsigned __int64)sub_7F4AD0,
        a6,
        v210,
        v211,
        a9,
        a10,
        (__int64)"xdelta3: source copies: %zu (%zu bytes)\n",
        v250[91].m128i_i64[1],
        v250[93].m128i_i64[1],
        v207,
        v208,
        v209);
      sub_800450(
        v13,
        v12,
        (__m128)(unsigned __int64)sub_7F4AD0,
        a6,
        v215,
        v216,
        a9,
        a10,
        (__int64)"xdelta3: target copies: %zu (%zu bytes)\n",
        v250[92].m128i_i64[0],
        v250[94].m128i_i64[0],
        v212,
        v213,
        v214);
      sub_800450(
        v13,
        v12,
        (__m128)(unsigned __int64)sub_7F4AD0,
        a6,
        v220,
        v221,
        a9,
        a10,
        (__int64)"xdelta3: adds: %zu (%zu bytes)\n",
        v250[92].m128i_i64[1],
        v250[94].m128i_i64[1],
        v217,
        v218,
        v219);
      v33 = v250[93].m128i_i64[0];
      sub_800450(
        v13,
        v12,
        (__m128)(unsigned __int64)sub_7F4AD0,
        a6,
        v225,
        v226,
        a9,
        a10,
        (__int64)"xdelta3: runs: %zu (%zu bytes)\n",
        v250[93].m128i_i64[0],
        v250[95].m128i_i64[0],
        v222,
        v223,
        v224);
    }
  }
  sub_7FBF20((__int64)v250);
  if ( *(_DWORD *)(*a1 + 4) )
  {
    v119 = qtime64(v250, v33);
    v123 = a1[22];
    v124 = a1[8];
    if ( v123 < 0 )
    {
      v120 = a1[22] & 1;
      v125 = (double)(int)(v120 | ((unsigned __int64)v123 >> 1)) + (double)(int)(v120 | ((unsigned __int64)v123 >> 1));
    }
    else
    {
      v125 = (double)(int)v123;
    }
    v126 = v125 * 100.0;
    v127 = 0;
    if ( v124 < 0 )
    {
      v120 = a1[8] & 1;
      *(double *)v127.m128_u64 = (double)(int)(v120 | ((unsigned __int64)v124 >> 1))
                               + (double)(int)(v120 | ((unsigned __int64)v124 >> 1));
    }
    else
    {
      *(double *)v127.m128_u64 = (double)(int)v124;
    }
    v128 = sub_7F4AE0(
             1000 * HIDWORD(v119)
           + (unsigned int)v119 / 0x3E8
           - (unsigned __int64)(1000 * HIDWORD(v229) + (unsigned int)v229 / 0x3E8),
             (__int64)v249,
             (unsigned int)(1000 * HIDWORD(v229)),
             v120,
             v121,
             v122);
    sub_800450(
      (__m128)COERCE_UNSIGNED_INT64(v126 / *(double *)v127.m128_u64),
      v127,
      (__m128)(unsigned __int64)sub_7F4AD0,
      a6,
      v131,
      v132,
      a9,
      a10,
      (__int64)"xdelta3: finished in %s; input %zu output %zu bytes (%.2f%%)\n",
      v128,
      v124,
      v123,
      v129,
      v130);
  }
  return v109;
}

