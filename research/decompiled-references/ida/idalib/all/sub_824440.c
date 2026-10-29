__int64 __fastcall sub_824440(
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
  unsigned int v33; // eax
  double v34; // xmm4_8
  double v35; // xmm5_8
  __int64 v36; // rdi
  bool v37; // zf
  _DWORD *v38; // rbp
  __m128 v39; // xmm0
  int v40; // eax
  unsigned __int64 v41; // rdx
  unsigned __int64 i; // rax
  __int64 *v43; // rax
  __int64 *v44; // r13
  __int64 v45; // rax
  double v46; // xmm4_8
  double v47; // xmm5_8
  _QWORD *v48; // rax
  unsigned __int64 v49; // r13
  _QWORD *v50; // rdx
  __m128i v51; // xmm0
  unsigned int v52; // eax
  __int64 *v53; // rdi
  int v54; // eax
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rbp
  _QWORD *v57; // rax
  unsigned __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rsi
  _QWORD *v62; // rsi
  __int64 *v63; // rsi
  __m128i *v64; // rdi
  int v65; // r8d
  int v66; // r9d
  int v67; // r8d
  int v68; // r9d
  __m128 v69; // xmm4
  __m128 v70; // xmm5
  __int64 v71; // rax
  __m128 v72; // xmm4
  __m128 v73; // xmm5
  __int64 (__fastcall *v74)(__m128i *); // rbx
  unsigned __int64 v75; // rax
  __int64 v76; // rsi
  unsigned __int64 v77; // r12
  __int64 v78; // rax
  __int64 v79; // rdx
  __m128i *v80; // rdi
  int v81; // eax
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  int v85; // r13d
  const char *v86; // rax
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __m128 v90; // xmm4
  __m128 v91; // xmm5
  const char *v92; // rsi
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __m128 v98; // xmm4
  __m128 v99; // xmm5
  unsigned int v100; // ebx
  __int64 v102; // rcx
  __int64 v103; // rsi
  int v104; // eax
  unsigned int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __m128 v110; // xmm4
  __m128 v111; // xmm5
  __int64 v112; // rax
  __int64 v113; // rcx
  int v114; // r8d
  int v115; // r9d
  __int64 v116; // r12
  __int64 v117; // rbp
  double v118; // xmm0_8
  double v119; // xmm0_8
  __m128 v120; // xmm1
  __int64 v121; // rax
  __int64 v122; // r8
  __int64 v123; // r9
  __m128 v124; // xmm4
  __m128 v125; // xmm5
  const char *v126; // rax
  const char *v127; // rsi
  int v128; // edx
  __int64 v129; // rax
  int v130; // r8d
  int v131; // r9d
  __int64 v132; // rcx
  __int64 v133; // rdx
  __int64 v134; // rax
  unsigned __int64 v135; // r13
  __int64 v136; // r12
  __int64 v137; // rdx
  int v138; // ecx
  int v139; // r8d
  int v140; // r9d
  double v141; // xmm1_8
  double v142; // xmm0_8
  double v143; // xmm0_8
  unsigned __int64 v144; // rdx
  int v145; // r8d
  int v146; // r9d
  double v147; // xmm0_8
  unsigned __int64 v148; // rdx
  int v149; // r8d
  int v150; // r9d
  __m128 v151; // xmm4
  __m128 v152; // xmm5
  __int64 v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  __m128 v158; // xmm4
  __m128 v159; // xmm5
  __int64 v160; // rcx
  const char *v161; // rax
  __int64 v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // r9
  __m128 v167; // xmm4
  __m128 v168; // xmm5
  __int64 v169; // rax
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  __m128 v174; // xmm4
  __m128 v175; // xmm5
  const char *v176; // rax
  __int64 v177; // rcx
  __int64 v178; // r8
  __int64 v179; // r9
  __m128 v180; // xmm4
  __m128 v181; // xmm5
  __m128 v182; // xmm4
  __m128 v183; // xmm5
  _QWORD *v184; // rax
  int v185; // r11d
  int v186; // r9d
  const char *v187; // rax
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // r9
  __m128 v192; // xmm4
  __m128 v193; // xmm5
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // r9
  __m128 v198; // xmm4
  __m128 v199; // xmm5
  __int64 v200; // rcx
  __int64 v201; // r8
  __int64 v202; // r9
  __m128 v203; // xmm4
  __m128 v204; // xmm5
  __int64 v205; // rcx
  __int64 v206; // r8
  __int64 v207; // r9
  __m128 v208; // xmm4
  __m128 v209; // xmm5
  __int64 v210; // rcx
  __int64 v211; // r8
  __int64 v212; // r9
  __m128 v213; // xmm4
  __m128 v214; // xmm5
  __int64 v215; // rcx
  __int64 v216; // r8
  __int64 v217; // r9
  __m128 v218; // xmm4
  __m128 v219; // xmm5
  __int64 v220; // [rsp+8h] [rbp-9C0h]
  __int64 *v221; // [rsp+10h] [rbp-9B8h]
  __int64 (__fastcall *v222)(__m128i *); // [rsp+18h] [rbp-9B0h]
  __int64 v223; // [rsp+18h] [rbp-9B0h]
  unsigned __int64 v224; // [rsp+20h] [rbp-9A8h]
  __int64 v225; // [rsp+28h] [rbp-9A0h]
  __int64 v226; // [rsp+30h] [rbp-998h]
  __int64 v227; // [rsp+30h] [rbp-998h]
  __int64 v228; // [rsp+38h] [rbp-990h]
  unsigned __int64 v229; // [rsp+70h] [rbp-958h] BYREF
  unsigned __int64 v230; // [rsp+78h] [rbp-950h] BYREF
  __int64 v231[18]; // [rsp+80h] [rbp-948h] BYREF
  _OWORD v232[15]; // [rsp+110h] [rbp-8B8h] BYREF
  _BYTE v233[48]; // [rsp+200h] [rbp-7C8h] BYREF
  _BYTE v234[48]; // [rsp+230h] [rbp-798h] BYREF
  _BYTE v235[48]; // [rsp+260h] [rbp-768h] BYREF
  _BYTE v236[48]; // [rsp+290h] [rbp-738h] BYREF
  _BYTE v237[48]; // [rsp+2C0h] [rbp-708h] BYREF
  _BYTE v238[48]; // [rsp+2F0h] [rbp-6D8h] BYREF
  _BYTE v239[48]; // [rsp+320h] [rbp-6A8h] BYREF
  _BYTE v240[48]; // [rsp+350h] [rbp-678h] BYREF
  __m128i v241[96]; // [rsp+380h] [rbp-648h] BYREF
  unsigned __int64 v242; // [rsp+988h] [rbp-40h]

  v242 = __readfsqword(0x28u);
  v229 = 0;
  dword_2CD49FC = 0;
  memset(v241, 0, sizeof(v241));
  memset(v231, 0, 0x88u);
  memset(v232, 0, sizeof(v232));
  v11 = (const __m128i *)*a1;
  v232[2] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B3C9C0), (__m128i)(unsigned __int64)sub_817E10);
  v12 = (__m128)_mm_loadu_si128(v11 + 1);
  v13 = (__m128)_mm_shuffle_pd((__m128d)_mm_loadu_si128(v11 + 2), (__m128d)v12, 1);
  *(__m128 *)((char *)v232 + 8) = v13;
  v14 = qtime64(v233, a2);
  v19 = *a1;
  v220 = v14;
  v20 = *((_DWORD *)a1 + 82);
  v21 = *(unsigned int *)*a1;
  v22 = *(_DWORD *)*a1 & 2;
  if ( v20 == 1 )
  {
    dword_2CD49FC = 1;
    v102 = v21 & 4;
    v23 = (_DWORD)v22 << 9;
    v103 = *(unsigned int *)(v19 + 12);
    if ( (_DWORD)v102 )
    {
      v23 |= 0x2000u;
    }
    else if ( !(_DWORD)v103 )
    {
      v23 |= 0x2000u;
      v104 = 4;
      if ( *(int *)(v19 + 4) <= 2 )
      {
LABEL_54:
        LODWORD(v232[10]) = v104;
        v222 = (__int64 (__fastcall *)(__m128i *))sub_820440;
        goto LABEL_4;
      }
      goto LABEL_89;
    }
    if ( *(int *)(v19 + 4) <= 2 )
    {
LABEL_48:
      v104 = 4;
      if ( (unsigned int)v103 > 1 )
      {
        v104 = 3;
        if ( (_DWORD)v103 != 2 )
        {
          v104 = 2;
          if ( (int)v103 > 5 )
            v104 = v103 != 6;
        }
      }
      goto LABEL_54;
    }
LABEL_89:
    sub_823790(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_817E10,
      a6,
      v17,
      v18,
      a9,
      a10,
      (__int64)"xdelta3: compression level: %d\n",
      v103,
      v19,
      v102,
      v15,
      v16);
    LODWORD(v103) = *(_DWORD *)(*a1 + 12);
    goto LABEL_48;
  }
  if ( v20 != 2 )
  {
    sub_823790(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_817E10,
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
  v222 = (__int64 (__fastcall *)(__m128i *))sub_81AB20;
  v23 = (_DWORD)v22 == 0 ? 2048 : 1024;
LABEL_4:
  v221 = a1 + 1;
  v224 = sub_8242F0(
           a1,
           a1 + 1,
           v13,
           v12,
           (__m128)(unsigned __int64)sub_817E10,
           a6,
           *(double *)v17.m128_u64,
           *(double *)v18.m128_u64,
           a9,
           a10);
  v24 = qalloc(v224);
  if ( !v24 )
  {
    v153 = qstrerror(12);
    sub_823790(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_817E10,
      a6,
      v158,
      v159,
      a9,
      a10,
      (__int64)"xdelta3: malloc: %s\n",
      v153,
      v154,
      v155,
      v156,
      v157);
    a1[40] = 0;
    return 1;
  }
  a1[40] = v24;
  *((_QWORD *)&v232[1] + 1) = sub_823BA0;
  v31 = *a1;
  DWORD2(v232[3]) = v23;
  v32 = *(_DWORD *)(v31 + 8);
  *(_QWORD *)&v232[0] = v224;
  if ( v32 )
    sub_8243A0(
      (unsigned __int64 *)a1,
      (__int64)v232,
      v13,
      v12,
      (__m128)(unsigned __int64)sub_817E10,
      a6,
      v29,
      v30,
      a9,
      a10,
      v25,
      v26,
      v27,
      v28);
  v33 = sub_81F590(v241, v232);
  v36 = v33;
  if ( v33 )
  {
LABEL_67:
    v126 = sub_823970(v36);
    v127 = (const char *)v241[4].m128i_i64[0];
    v93 = (__int64)v126;
    if ( !v241[4].m128i_i64[0] )
      v127 = &byte_22F0C30;
LABEL_69:
    sub_823790(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_817E10,
      a6,
      v90,
      v91,
      a9,
      a10,
      (__int64)"xdelta3: %s: %s\n",
      (__int64)v127,
      v93,
      v87,
      v88,
      v89);
    return 1;
  }
  v37 = a1[27] == 0;
  v230 = 0;
  v38 = a1 + 27;
  v39 = (__m128)_mm_unpacklo_epi64(
                  (__m128i)(unsigned __int64)&xmmword_2CD4A00,
                  (__m128i)(unsigned __int64)&xmmword_2CD4A00);
  xmmword_2CD4A00 = (__int128)v39;
  if ( v37 )
    sub_817EE0(v33);
  v40 = sub_823A50(a1 + 27, (__int64 *)&v230, v39, v12, (__m128)(unsigned __int64)sub_817E10, a6, v34, v35, a9, a10);
  v41 = qword_2CD4A20;
  *((_DWORD *)a1 + 74) = v40 == 0;
  for ( i = 1; i < v41; i *= 2LL )
    ;
  qword_2CD4A20 = i;
  v43 = (__int64 *)qalloc(1280);
  v44 = v43;
  if ( !v43 )
  {
    v162 = qstrerror(12);
    sub_823790(
      v39,
      v12,
      (__m128)(unsigned __int64)sub_817E10,
      a6,
      v167,
      v168,
      a9,
      a10,
      (__int64)"xdelta3: malloc: %s\n",
      v162,
      v163,
      v164,
      v165,
      v166);
    qword_2CD4A10 = nullptr;
    return 1;
  }
  qword_2CD4A10 = v43;
  *v43 = 0;
  v43[159] = 0;
  memset(
    (void *)((unsigned __int64)(v43 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v43 - (((_DWORD)v43 + 8) & 0xFFFFFFF8) + 1280) >> 3));
  v45 = qalloc(qword_2CD4A20);
  if ( !v45 )
  {
    v169 = qstrerror(12);
    sub_823790(
      v39,
      v12,
      (__m128)(unsigned __int64)sub_817E10,
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
    *v44 = 0;
    return 1;
  }
  *v44 = v45;
  a6 = (__m128)(unsigned __int64)v38;
  v48 = qword_2CD4A10;
  v49 = qword_2CD4A20;
  qword_2CD4A18 = 1;
  *((_QWORD *)qword_2CD4A10 + 1) = -1;
  v50 = *((_QWORD **)&xmmword_2CD4A00 + 1);
  *((_QWORD *)&xmmword_2CD4A00 + 1) = v48 + 3;
  *v50 = v48 + 3;
  v48[3] = &xmmword_2CD4A00;
  v48[4] = v50;
  v51 = _mm_loadl_epi64((const __m128i *)(a1 + 29));
  v231[0] = v49;
  v13 = (__m128)_mm_unpacklo_epi64(v51, (__m128i)(unsigned __int64)v38);
  v231[3] = v49;
  v231[4] = -1;
  v231[6] = 0;
  *(__m128 *)&v231[1] = v13;
  v52 = sub_823BA0(
          (__int64)v241,
          v231,
          0,
          v13,
          v12,
          (__m128)(unsigned __int64)sub_817E10,
          (__m128)(unsigned __int64)v38,
          v46,
          v47,
          a9,
          a10);
  if ( v52 )
  {
    v176 = sub_823970(v52);
    sub_823790(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_817E10,
      (__m128)(unsigned __int64)v38,
      v180,
      v181,
      a9,
      a10,
      (__int64)"xdelta3: error reading source: %s: %s\n",
      a1[29],
      (__int64)v176,
      v177,
      v178,
      v179);
    return 1;
  }
  v53 = (__int64 *)qword_2CD4A10;
  v54 = *((_DWORD *)a1 + 74);
  v55 = qword_2CD4A20;
  v56 = *((_QWORD *)qword_2CD4A10 + 2);
  v231[5] = v56;
  if ( v54 )
  {
    v56 = v230;
LABEL_106:
    if ( v55 >= v56 )
      goto LABEL_102;
    goto LABEL_16;
  }
  if ( v56 < v49 )
  {
    v230 = v56;
    v231[15] = v56;
    *((_DWORD *)a1 + 74) = 1;
    goto LABEL_106;
  }
LABEL_16:
  qword_2CD4A18 = 32;
  v57 = v53 + 8;
  v231[5] = v55 >> 5;
  v49 = v55 >> 5;
  v58 = v55 >> 5;
  v231[15] = v55 >> 5;
  v231[0] = v55 >> 5;
  v231[14] = 31;
  v53[2] = v55 >> 5;
  v59 = 1;
  do
  {
    v60 = *v53;
    *(v57 - 2) = v59++;
    *(v57 - 1) = v49;
    v61 = v58 + v60;
    v58 += v49;
    *(v57 - 3) = v61;
    v62 = *((_QWORD **)&xmmword_2CD4A00 + 1);
    *((_QWORD *)&xmmword_2CD4A00 + 1) = v57;
    *v62 = v57;
    v57 += 5;
    *(v57 - 5) = &xmmword_2CD4A00;
    *(v57 - 4) = v62;
  }
  while ( v59 != 32 );
  if ( !*((_DWORD *)a1 + 74) )
  {
    v63 = v231;
    v64 = v241;
    dword_2CD49FC = 1;
    sub_81FCA0((__int64)v241, (__int64)v231);
    if ( v65 )
      goto LABEL_20;
    goto LABEL_24;
  }
  v56 = v230;
LABEL_102:
  v63 = v231;
  v64 = v241;
  sub_81FCA0((__int64)v241, (__int64)v231);
  v184 = (_QWORD *)v241[4].m128i_i64[1];
  v185 = dword_2CD4A28;
  *(_DWORD *)(v241[4].m128i_i64[1] + 128) = 1;
  v184[14] = v56 >> v184[9];
  v184[15] = v56 & v184[10];
  if ( v185 )
  {
    if ( *((_DWORD *)a1 + 74) )
    {
      pretty_print_size(&unk_2CD4980, 48, v56);
      qsnprintf(
        (unsigned int)&unk_2CD49C0,
        48,
        (unsigned int)"source size %s [%zu]",
        (unsigned int)&unk_2CD4980,
        v56,
        v186);
      goto LABEL_21;
    }
LABEL_20:
    qsnprintf((unsigned int)&unk_2CD49C0, 48, (unsigned int)"%s", (unsigned int)"source size unknown", v65, v66);
LABEL_21:
    byte_2CD48C0 = 0;
    if ( dword_2CD4A28 > 1 )
      qsnprintf((unsigned int)&byte_2CD48C0, 48, (unsigned int)" #bufs %zu", qword_2CD4A18, v67, v68);
    pretty_print_size(&unk_2CD4940, 48, qword_2CD4A20);
    pretty_print_size(&unk_2CD4900, 48, v49);
    v63 = (__int64 *)a1[29];
    v64 = (__m128i *)"xdelta3: source %s %s blksize %s window %s%s%s\n";
    sub_823790(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_817E10,
      a6,
      v69,
      v70,
      a9,
      a10,
      (__int64)"xdelta3: source %s %s blksize %s window %s%s%s\n",
      (__int64)v63,
      (__int64)&unk_2CD49C0,
      (__int64)&unk_2CD4900,
      (__int64)&unk_2CD4940,
      (__int64)&byte_2CD48C0);
  }
LABEL_24:
  v71 = qtime64(v64, v63);
  v225 = 0;
  v74 = v222;
  v226 = 0;
  qword_2CD48B0 = 1000 * HIDWORD(v71) + (unsigned int)v71 / 0x3E8;
  v75 = *(_QWORD *)&v232[0];
  while ( 2 )
  {
    v76 = a1[40];
    if ( ~a1[8] <= v75 )
      v75 = ~a1[8];
    v77 = v75;
    if ( (unsigned int)sub_823AE0(
                         v221,
                         v76,
                         v75,
                         (__int64 *)&v229,
                         (__int64)"input read failed",
                         v13,
                         v12,
                         (__m128)(unsigned __int64)sub_817E10,
                         a6,
                         *(double *)v72.m128_u64,
                         *(double *)v73.m128_u64,
                         a9,
                         a10) )
      return 1;
    v78 = v229;
    if ( v229 < v77 )
      v241[9].m128i_i32[2] |= 0x10u;
    if ( *((_DWORD *)a1 + 82) == 1 && !*((_BYTE *)a1 + 332) && *(_QWORD *)(*a1 + 56) )
    {
      v160 = *(_QWORD *)(*a1 + 48);
      v241[50].m128i_i64[1] = *(_QWORD *)(*a1 + 56);
      *((_BYTE *)a1 + 332) = 1;
      v241[50].m128i_i64[0] = v160;
    }
    v79 = a1[40];
    v241[0].m128i_i64[1] = v78;
    v241[0].m128i_i64[0] = v79;
    if ( !v78 && v241[3].m128i_i64[0] )
      break;
    while ( 1 )
    {
      while ( 1 )
      {
        v80 = v241;
        v81 = v74(v241);
        v85 = v81;
        if ( v81 != -17704 )
          break;
        if ( v241[2].m128i_i64[0] )
        {
          v76 = v241[1].m128i_i64[1];
          if ( (unsigned int)sub_823FC0(
                               (__int64)(a1 + 14),
                               (void *)v241[1].m128i_i64[1],
                               v241[2].m128i_i64[0],
                               (__int64)"write failed",
                               v13,
                               v12,
                               (__m128)(unsigned __int64)sub_817E10,
                               a6,
                               *(double *)v72.m128_u64,
                               *(double *)v73.m128_u64,
                               a9,
                               a10) )
            return 1;
        }
        v241[2].m128i_i64[0] = 0;
      }
      if ( v81 >= -17703 )
        break;
      if ( v81 == -17708 )
      {
        v128 = *(_DWORD *)(*a1 + 4);
        if ( (*(_BYTE *)*a1 & 1) != 0 || *((_DWORD *)a1 + 82) != 1 || !a1[27] )
          goto LABEL_74;
        if ( v128 )
        {
          if ( v241[4].m128i_i64[1] && *(_QWORD *)(v241[4].m128i_i64[1] + 56) )
          {
            if ( v128 <= 1 )
              goto LABEL_75;
          }
          else
          {
            v80 = (__m128i *)"xdelta3: warning: input window %zu..%zu has no source copies\n";
            v76 = v224 * (v241[3].m128i_i64[0] + 1) - v224;
            sub_823790(
              v13,
              v12,
              (__m128)(unsigned __int64)sub_817E10,
              a6,
              v72,
              v73,
              a9,
              a10,
              (__int64)"xdelta3: warning: input window %zu..%zu has no source copies\n",
              v76,
              v224 * (v241[3].m128i_i64[0] + 1),
              v82,
              v83,
              v84);
            v128 = *(_DWORD *)(*a1 + 4);
            if ( v128 <= 1 )
              goto LABEL_74;
          }
          v76 = v241[33].m128i_u32[3];
          if ( v241[33].m128i_i32[3] && v241[6].m128i_i64[1] < (unsigned __int64)v241[95].m128i_i64[1] )
          {
            v80 = (__m128i *)"xdelta3: warning: input position %zu overflowed instruction buffer, needed %zu (vs. %zu), c"
                             "onsider changing -I\n";
            v76 = v241[3].m128i_i64[0] * v224;
            sub_823790(
              v13,
              v12,
              (__m128)(unsigned __int64)sub_817E10,
              a6,
              v72,
              v73,
              a9,
              a10,
              (__int64)"xdelta3: warning: input position %zu overflowed instruction buffer, needed %zu (vs. %zu), consider changing -I\n",
              v241[3].m128i_i64[0] * v224,
              v241[95].m128i_i64[1],
              v241[6].m128i_i64[1],
              v83,
              v84);
            v128 = *(_DWORD *)(*a1 + 4);
LABEL_74:
            if ( v128 )
              goto LABEL_75;
          }
          else
          {
LABEL_75:
            v129 = qtime64(v80, v76);
            v132 = v226;
            v227 = v241[3].m128i_i64[1];
            v133 = (unsigned int)(1000 * HIDWORD(v129));
            v134 = (unsigned int)v133 + (unsigned int)v129 / 0x3E8;
            v135 = v134 - qword_2CD48B0;
            qword_2CD48B0 = v134;
            v228 = v241[1].m128i_i64[0];
            v223 = v241[1].m128i_i64[0] - v132;
            v136 = v241[3].m128i_i64[1] - v225;
            if ( *(int *)(*a1 + 4) <= 1 )
            {
              sub_817E20(v135, (__int64)v235, v133, v132, v130, v131);
              pretty_print_size(v239, 48, v241[3].m128i_i64[1]);
              pretty_print_size(v238, 48, v241[1].m128i_i64[0]);
              pretty_print_size(v237, 48, v136);
              pretty_print_size(v236, 48, v223);
              v76 = v241[3].m128i_i64[0];
              sub_823790(
                v13,
                v12,
                (__m128)(unsigned __int64)sub_817E10,
                a6,
                v182,
                v183,
                a9,
                a10,
                (__int64)"xdelta3: %zu: in %s: out %s: total in %s: out %s: %s\n",
                v241[3].m128i_i64[0],
                (__int64)v236,
                (__int64)v237,
                (__int64)v238,
                (__int64)v239);
            }
            else
            {
              pretty_print_size(v240, 48, v241[34].m128i_i64[0]);
              sub_817E20(v135, (__int64)v235, v137, v138, v139, v140);
              pretty_print_size(v239, 48, v241[3].m128i_i64[1]);
              pretty_print_size(v238, 48, v241[1].m128i_i64[0]);
              if ( (v135 & 0x8000000000000000LL) != 0LL )
                v141 = (double)(int)(v135 & 1 | (v135 >> 1)) + (double)(int)(v135 & 1 | (v135 >> 1));
              else
                v141 = (double)(int)v135;
              *(double *)v12.m128_u64 = v141 / 1000.0;
              if ( v136 < 0 )
                v142 = (double)(int)(v136 & 1 | ((unsigned __int64)v136 >> 1))
                     + (double)(int)(v136 & 1 | ((unsigned __int64)v136 >> 1));
              else
                v142 = (double)(int)v136;
              v143 = v142 / *(double *)v12.m128_u64;
              if ( v143 >= 9.223372036854776e18 )
                v144 = (unsigned int)(int)(v143 - 9.223372036854776e18) ^ 0x8000000000000000LL;
              else
                v144 = (unsigned int)(int)v143;
              pretty_print_size(&unk_2CD4880, 48, v144);
              qsnprintf((unsigned int)v234, 48, (unsigned int)"%s/s", (unsigned int)&unk_2CD4880, v145, v146);
              pretty_print_size(v237, 48, v136);
              v12 = (__m128)v12.m128_u64[0];
              v13 = 0;
              if ( v223 < 0 )
                v147 = (double)(int)(v223 & 1 | ((unsigned __int64)v223 >> 1))
                     + (double)(int)(v223 & 1 | ((unsigned __int64)v223 >> 1));
              else
                v147 = (double)(int)v223;
              *(double *)v13.m128_u64 = v147 / *(double *)v12.m128_u64;
              if ( *(double *)v13.m128_u64 >= 9.223372036854776e18 )
              {
                *(double *)v13.m128_u64 = *(double *)v13.m128_u64 - 9.223372036854776e18;
                v148 = (unsigned int)(int)*(double *)v13.m128_u64 ^ 0x8000000000000000LL;
              }
              else
              {
                v148 = (unsigned int)(int)*(double *)v13.m128_u64;
              }
              pretty_print_size(&unk_2CD4880, 48, v148);
              qsnprintf((unsigned int)v233, 48, (unsigned int)"%s/s", (unsigned int)&unk_2CD4880, v149, v150);
              pretty_print_size(v236, 48, v223);
              v76 = v241[3].m128i_i64[0];
              sub_823790(
                v13,
                (__m128)v12.m128_u64[0],
                (__m128)(unsigned __int64)sub_817E10,
                a6,
                v151,
                v152,
                a9,
                a10,
                (__int64)"xdelta3: %zu: in %s (%s): out %s (%s): total in %s: out %s: %s: srcpos %s\n",
                v241[3].m128i_i64[0],
                (__int64)v236,
                (__int64)v233,
                (__int64)v237,
                (__int64)v234);
            }
            v225 = v227;
            v226 = v228;
          }
        }
      }
      else
      {
        if ( v81 < -17708 )
        {
          v187 = sub_823970((unsigned int)v81);
          v92 = (const char *)v241[4].m128i_i64[0];
          v93 = (__int64)v187;
          if ( !v241[4].m128i_i64[0] )
            goto LABEL_94;
          goto LABEL_39;
        }
        if ( v81 == -17705 )
        {
          v86 = sub_823970(4294949591LL);
          v92 = (const char *)v241[4].m128i_i64[0];
          v93 = (__int64)v86;
          if ( !v241[4].m128i_i64[0] )
          {
            sub_823790(
              v13,
              v12,
              (__m128)(unsigned __int64)sub_817E10,
              a6,
              v90,
              v91,
              a9,
              a10,
              (__int64)"xdelta3: %s: %s\n",
              (__int64)&byte_22F0C30,
              (__int64)v86,
              v87,
              v88,
              v89);
            return 1;
          }
          goto LABEL_39;
        }
      }
    }
    if ( v81 != -17703 )
    {
      v161 = sub_823970((unsigned int)v81);
      v127 = (const char *)v241[4].m128i_i64[0];
      v93 = (__int64)v161;
      if ( v241[4].m128i_i64[0] )
        goto LABEL_69;
LABEL_94:
      v92 = &byte_22F0C30;
LABEL_39:
      sub_823790(
        v13,
        v12,
        (__m128)(unsigned __int64)sub_817E10,
        a6,
        v90,
        v91,
        a9,
        a10,
        (__int64)"xdelta3: %s: %s\n",
        (__int64)v92,
        v93,
        v87,
        v88,
        v89);
      if ( (*(_BYTE *)*a1 & 1) == 0 && v85 == -17712 )
        sub_823790(
          v13,
          v12,
          (__m128)(unsigned __int64)sub_817E10,
          a6,
          v98,
          v99,
          a9,
          a10,
          (__int64)"xdelta3: normally this indicates that the source file is incorrect\n",
          (__int64)v92,
          v94,
          v95,
          v96,
          v97);
      return 1;
    }
    v75 = *(_QWORD *)&v232[0];
    if ( *(_QWORD *)&v232[0] == v229 )
      continue;
    break;
  }
  v105 = sub_81FDC0((__int64)v241);
  v100 = v105;
  if ( v105 )
  {
    v36 = v105;
    goto LABEL_67;
  }
  if ( *(int *)(*a1 + 4) > 1 && *((_DWORD *)a1 + 82) == 1 )
  {
    sub_823790(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_817E10,
      a6,
      v110,
      v111,
      a9,
      a10,
      (__int64)"xdelta3: scanner configuration: %s\n",
      v241[16].m128i_i64[0],
      v106,
      v107,
      v108,
      v109);
    sub_823790(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_817E10,
      a6,
      v192,
      v193,
      a9,
      a10,
      (__int64)"xdelta3: target hash table size: %zu\n",
      v241[25].m128i_i64[1],
      v188,
      v189,
      v190,
      v191);
    v76 = v241[21].m128i_i64[0];
    sub_823790(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_817E10,
      a6,
      v198,
      v199,
      a9,
      a10,
      (__int64)"xdelta3: source hash table size: %zu\n",
      v241[21].m128i_i64[0],
      v194,
      v195,
      v196,
      v197);
    if ( *(int *)(*a1 + 4) > 2 && *((_DWORD *)a1 + 82) == 1 )
    {
      sub_823790(
        v13,
        v12,
        (__m128)(unsigned __int64)sub_817E10,
        a6,
        v203,
        v204,
        a9,
        a10,
        (__int64)"xdelta3: source copies: %zu (%zu bytes)\n",
        v241[91].m128i_i64[1],
        v241[93].m128i_i64[1],
        v200,
        v201,
        v202);
      sub_823790(
        v13,
        v12,
        (__m128)(unsigned __int64)sub_817E10,
        a6,
        v208,
        v209,
        a9,
        a10,
        (__int64)"xdelta3: target copies: %zu (%zu bytes)\n",
        v241[92].m128i_i64[0],
        v241[94].m128i_i64[0],
        v205,
        v206,
        v207);
      sub_823790(
        v13,
        v12,
        (__m128)(unsigned __int64)sub_817E10,
        a6,
        v213,
        v214,
        a9,
        a10,
        (__int64)"xdelta3: adds: %zu (%zu bytes)\n",
        v241[92].m128i_i64[1],
        v241[94].m128i_i64[1],
        v210,
        v211,
        v212);
      v76 = v241[93].m128i_i64[0];
      sub_823790(
        v13,
        v12,
        (__m128)(unsigned __int64)sub_817E10,
        a6,
        v218,
        v219,
        a9,
        a10,
        (__int64)"xdelta3: runs: %zu (%zu bytes)\n",
        v241[93].m128i_i64[0],
        v241[95].m128i_i64[0],
        v215,
        v216,
        v217);
    }
  }
  sub_81F260((__int64)v241);
  if ( *(_DWORD *)(*a1 + 4) )
  {
    v112 = qtime64(v241, v76);
    v116 = a1[22];
    v117 = a1[8];
    if ( v116 < 0 )
    {
      v113 = a1[22] & 1;
      v118 = (double)(int)(v113 | ((unsigned __int64)v116 >> 1)) + (double)(int)(v113 | ((unsigned __int64)v116 >> 1));
    }
    else
    {
      v118 = (double)(int)v116;
    }
    v119 = v118 * 100.0;
    v120 = 0;
    if ( v117 < 0 )
    {
      v113 = a1[8] & 1;
      *(double *)v120.m128_u64 = (double)(int)(v113 | ((unsigned __int64)v117 >> 1))
                               + (double)(int)(v113 | ((unsigned __int64)v117 >> 1));
    }
    else
    {
      *(double *)v120.m128_u64 = (double)(int)v117;
    }
    v121 = sub_817E20(
             1000 * HIDWORD(v112)
           + (unsigned int)v112 / 0x3E8
           - (unsigned __int64)(1000 * HIDWORD(v220) + (unsigned int)v220 / 0x3E8),
             (__int64)v240,
             (unsigned int)(1000 * HIDWORD(v220)),
             v113,
             v114,
             v115);
    sub_823790(
      (__m128)COERCE_UNSIGNED_INT64(v119 / *(double *)v120.m128_u64),
      v120,
      (__m128)(unsigned __int64)sub_817E10,
      a6,
      v124,
      v125,
      a9,
      a10,
      (__int64)"xdelta3: finished in %s; input %zu output %zu bytes (%.2f%%)\n",
      v121,
      v117,
      v116,
      v122,
      v123);
  }
  return v100;
}
