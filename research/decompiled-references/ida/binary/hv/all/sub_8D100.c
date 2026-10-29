__int64 __fastcall sub_8D100(
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
  unsigned __int64 v58; // r13
  unsigned __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // rsi
  _QWORD *v63; // rsi
  __int64 *v64; // rsi
  __m128i *v65; // rdi
  int v66; // r8d
  int v67; // r9d
  int v68; // r8d
  int v69; // r9d
  __m128 v70; // xmm4
  __m128 v71; // xmm5
  __int64 v72; // rax
  __m128 v73; // xmm4
  __m128 v74; // xmm5
  __int64 (__fastcall *v75)(__m128i *); // rbx
  unsigned __int64 v76; // rax
  __int64 v77; // rsi
  unsigned __int64 v78; // r12
  __int64 v79; // rax
  __int64 v80; // rdx
  __m128i *v81; // rdi
  int v82; // eax
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  int v86; // r13d
  const char *v87; // rax
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __m128 v91; // xmm4
  __m128 v92; // xmm5
  char *v93; // rsi
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __m128 v99; // xmm4
  __m128 v100; // xmm5
  unsigned int v101; // ebx
  __int64 v103; // rcx
  __int64 v104; // rsi
  int v105; // eax
  unsigned int v106; // eax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __m128 v111; // xmm4
  __m128 v112; // xmm5
  __int64 v113; // rax
  __int64 v114; // rcx
  int v115; // r8d
  int v116; // r9d
  __int64 v117; // r12
  __int64 v118; // rbp
  double v119; // xmm0_8
  double v120; // xmm0_8
  __m128 v121; // xmm1
  __int64 v122; // rax
  __int64 v123; // r8
  __int64 v124; // r9
  __m128 v125; // xmm4
  __m128 v126; // xmm5
  const char *v127; // rax
  char *v128; // rsi
  int v129; // edx
  __int64 v130; // rax
  int v131; // r8d
  int v132; // r9d
  __int64 v133; // rdx
  __int64 v134; // rax
  unsigned __int64 v135; // r13
  __int64 v136; // rdx
  int v137; // ecx
  int v138; // r8d
  int v139; // r9d
  double v140; // xmm1_8
  int v141; // r8d
  int v142; // r9d
  double v143; // xmm0_8
  int v144; // r8d
  int v145; // r9d
  __m128 v146; // xmm4
  __m128 v147; // xmm5
  __int64 v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  __m128 v153; // xmm4
  __m128 v154; // xmm5
  __int64 v155; // rcx
  const char *v156; // rax
  __int64 v157; // rax
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  __m128 v162; // xmm4
  __m128 v163; // xmm5
  __int64 v164; // rax
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  __m128 v169; // xmm4
  __m128 v170; // xmm5
  const char *v171; // rax
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  __m128 v175; // xmm4
  __m128 v176; // xmm5
  __m128 v177; // xmm4
  __m128 v178; // xmm5
  _QWORD *v179; // rax
  int v180; // r11d
  int v181; // r9d
  const char *v182; // rax
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // r8
  __int64 v186; // r9
  __m128 v187; // xmm4
  __m128 v188; // xmm5
  __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 v191; // r8
  __int64 v192; // r9
  __m128 v193; // xmm4
  __m128 v194; // xmm5
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
  __int64 v215; // [rsp+8h] [rbp-9C0h]
  __int64 *v216; // [rsp+10h] [rbp-9B8h]
  __int64 (__fastcall *v217)(__m128i *); // [rsp+18h] [rbp-9B0h]
  __int64 v218; // [rsp+18h] [rbp-9B0h]
  unsigned __int64 v219; // [rsp+20h] [rbp-9A8h]
  __int64 v220; // [rsp+30h] [rbp-998h]
  __int64 v221; // [rsp+38h] [rbp-990h]
  unsigned __int64 v222; // [rsp+70h] [rbp-958h] BYREF
  unsigned __int64 v223; // [rsp+78h] [rbp-950h] BYREF
  __int64 v224[18]; // [rsp+80h] [rbp-948h] BYREF
  _OWORD v225[15]; // [rsp+110h] [rbp-8B8h] BYREF
  _BYTE v226[48]; // [rsp+200h] [rbp-7C8h] BYREF
  _BYTE v227[48]; // [rsp+230h] [rbp-798h] BYREF
  _BYTE v228[48]; // [rsp+260h] [rbp-768h] BYREF
  _BYTE v229[48]; // [rsp+290h] [rbp-738h] BYREF
  _BYTE v230[48]; // [rsp+2C0h] [rbp-708h] BYREF
  _BYTE v231[48]; // [rsp+2F0h] [rbp-6D8h] BYREF
  _BYTE v232[48]; // [rsp+320h] [rbp-6A8h] BYREF
  _BYTE v233[48]; // [rsp+350h] [rbp-678h] BYREF
  __m128i v234[96]; // [rsp+380h] [rbp-648h] BYREF
  unsigned __int64 v235; // [rsp+988h] [rbp-40h]

  v235 = __readfsqword(0x28u);
  v222 = 0;
  dword_165CBC = 0;
  memset(v234, 0, sizeof(v234));
  memset(v224, 0, 0x88u);
  memset(v225, 0, sizeof(v225));
  v11 = (const __m128i *)*a1;
  v225[2] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_163DA0), (__m128i)(unsigned __int64)sub_80AD0);
  v12 = (__m128)_mm_loadu_si128(v11 + 1);
  v13 = (__m128)_mm_shuffle_pd((__m128d)_mm_loadu_si128(v11 + 2), (__m128d)v12, 1);
  *(__m128 *)((char *)v225 + 8) = v13;
  v14 = sub_972B0(v226, a2);
  v19 = *a1;
  v215 = v14;
  v20 = *((_DWORD *)a1 + 82);
  v21 = *(unsigned int *)*a1;
  v22 = *(_DWORD *)*a1 & 2;
  if ( v20 == 1 )
  {
    dword_165CBC = 1;
    v103 = v21 & 4;
    v23 = (_DWORD)v22 << 9;
    v104 = *(unsigned int *)(v19 + 12);
    if ( (_DWORD)v103 )
    {
      v23 |= 0x2000u;
    }
    else if ( !(_DWORD)v104 )
    {
      v23 |= 0x2000u;
      v105 = 4;
      if ( *(int *)(v19 + 4) <= 2 )
      {
LABEL_54:
        LODWORD(v225[10]) = v105;
        v217 = (__int64 (__fastcall *)(__m128i *))sub_89100;
        goto LABEL_4;
      }
      goto LABEL_85;
    }
    if ( *(int *)(v19 + 4) <= 2 )
    {
LABEL_48:
      v105 = 4;
      if ( (unsigned int)v104 > 1 )
      {
        v105 = 3;
        if ( (_DWORD)v104 != 2 )
        {
          v105 = 2;
          if ( (int)v104 > 5 )
            v105 = v104 != 6;
        }
      }
      goto LABEL_54;
    }
LABEL_85:
    sub_8C450(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_80AD0,
      a6,
      v17,
      v18,
      a9,
      a10,
      (__int64)"xdelta3: compression level: %d\n",
      v104,
      v19,
      v103,
      v15,
      v16);
    LODWORD(v104) = *(_DWORD *)(*a1 + 12);
    goto LABEL_48;
  }
  if ( v20 != 2 )
  {
    sub_8C450(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_80AD0,
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
  v217 = (__int64 (__fastcall *)(__m128i *))sub_837E0;
  v23 = (_DWORD)v22 == 0 ? 2048 : 1024;
LABEL_4:
  v216 = a1 + 1;
  v219 = sub_8CFB0(
           a1,
           a1 + 1,
           v13,
           v12,
           (__m128)(unsigned __int64)sub_80AD0,
           a6,
           *(double *)v17.m128_u64,
           *(double *)v18.m128_u64,
           a9,
           a10);
  v24 = sub_95F50(v219);
  if ( !v24 )
  {
    v148 = sub_978C0(12);
    sub_8C450(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_80AD0,
      a6,
      v153,
      v154,
      a9,
      a10,
      (__int64)"xdelta3: malloc: %s\n",
      v148,
      v149,
      v150,
      v151,
      v152);
    a1[40] = 0;
    return 1;
  }
  a1[40] = v24;
  *((_QWORD *)&v225[1] + 1) = sub_8C860;
  v31 = *a1;
  DWORD2(v225[3]) = v23;
  v32 = *(_DWORD *)(v31 + 8);
  *(_QWORD *)&v225[0] = v219;
  if ( v32 )
    sub_8D060(
      (unsigned __int64 *)a1,
      (__int64)v225,
      v13,
      v12,
      (__m128)(unsigned __int64)sub_80AD0,
      a6,
      v29,
      v30,
      a9,
      a10,
      v25,
      v26,
      v27,
      v28);
  v33 = sub_88250(v234, v225);
  v36 = v33;
  if ( v33 )
  {
LABEL_67:
    v127 = sub_8C630(v36);
    v128 = (char *)v234[4].m128i_i64[0];
    v94 = (__int64)v127;
    if ( !v234[4].m128i_i64[0] )
      v128 = "";
LABEL_69:
    sub_8C450(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_80AD0,
      a6,
      v91,
      v92,
      a9,
      a10,
      (__int64)"xdelta3: %s: %s\n",
      (__int64)v128,
      v94,
      v88,
      v89,
      v90);
    return 1;
  }
  v37 = a1[27] == 0;
  v223 = 0;
  v38 = a1 + 27;
  v39 = (__m128)_mm_unpacklo_epi64(
                  (__m128i)(unsigned __int64)&xmmword_165CC0,
                  (__m128i)(unsigned __int64)&xmmword_165CC0);
  xmmword_165CC0 = (__int128)v39;
  if ( v37 )
    sub_80BA0(v33);
  v40 = sub_8C710(a1 + 27, (__int64 *)&v223, v39, v12, (__m128)(unsigned __int64)sub_80AD0, a6, v34, v35, a9, a10);
  v41 = qword_165CE0;
  *((_DWORD *)a1 + 74) = v40 == 0;
  for ( i = 1; i < v41; i *= 2LL )
    ;
  qword_165CE0 = i;
  v43 = (__int64 *)sub_95F50(1280);
  v44 = v43;
  if ( !v43 )
  {
    v157 = sub_978C0(12);
    sub_8C450(
      v39,
      v12,
      (__m128)(unsigned __int64)sub_80AD0,
      a6,
      v162,
      v163,
      a9,
      a10,
      (__int64)"xdelta3: malloc: %s\n",
      v157,
      v158,
      v159,
      v160,
      v161);
    qword_165CD0 = nullptr;
    return 1;
  }
  qword_165CD0 = v43;
  *v43 = 0;
  v43[159] = 0;
  memset(
    (void *)((unsigned __int64)(v43 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v43 - (((_DWORD)v43 + 8) & 0xFFFFFFF8) + 1280) >> 3));
  v45 = sub_95F50(qword_165CE0);
  if ( !v45 )
  {
    v164 = sub_978C0(12);
    sub_8C450(
      v39,
      v12,
      (__m128)(unsigned __int64)sub_80AD0,
      a6,
      v169,
      v170,
      a9,
      a10,
      (__int64)"xdelta3: malloc: %s\n",
      v164,
      v165,
      v166,
      v167,
      v168);
    *v44 = 0;
    return 1;
  }
  *v44 = v45;
  a6 = (__m128)(unsigned __int64)v38;
  v48 = qword_165CD0;
  v49 = qword_165CE0;
  qword_165CD8 = 1;
  *((_QWORD *)qword_165CD0 + 1) = -1;
  v50 = *((_QWORD **)&xmmword_165CC0 + 1);
  *((_QWORD *)&xmmword_165CC0 + 1) = v48 + 3;
  *v50 = v48 + 3;
  v48[3] = &xmmword_165CC0;
  v48[4] = v50;
  v51 = _mm_loadl_epi64((const __m128i *)(a1 + 29));
  v224[0] = v49;
  v13 = (__m128)_mm_unpacklo_epi64(v51, (__m128i)(unsigned __int64)v38);
  v224[3] = v49;
  v224[4] = -1;
  v224[6] = 0;
  *(__m128 *)&v224[1] = v13;
  v52 = sub_8C860(
          (__int64)v234,
          v224,
          0,
          v13,
          v12,
          (__m128)(unsigned __int64)sub_80AD0,
          (__m128)(unsigned __int64)v38,
          v46,
          v47,
          a9,
          a10);
  if ( v52 )
  {
    v171 = sub_8C630(v52);
    sub_8C450(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_80AD0,
      (__m128)(unsigned __int64)v38,
      v175,
      v176,
      a9,
      a10,
      (__int64)"xdelta3: error reading source: %s: %s\n",
      a1[29],
      (__int64)v171,
      v172,
      v173,
      v174);
    return 1;
  }
  v53 = (__int64 *)qword_165CD0;
  v54 = *((_DWORD *)a1 + 74);
  v55 = qword_165CE0;
  v56 = *((_QWORD *)qword_165CD0 + 2);
  v224[5] = v56;
  if ( v54 )
  {
    v56 = v223;
LABEL_102:
    if ( v55 >= v56 )
      goto LABEL_98;
    goto LABEL_16;
  }
  if ( v56 < v49 )
  {
    v223 = v56;
    v224[15] = v56;
    *((_DWORD *)a1 + 74) = 1;
    goto LABEL_102;
  }
LABEL_16:
  qword_165CD8 = 32;
  v57 = v53 + 8;
  v224[5] = v55 >> 5;
  v58 = v55 >> 5;
  v59 = v55 >> 5;
  v224[15] = v55 >> 5;
  v224[0] = v55 >> 5;
  v224[14] = 31;
  v53[2] = v55 >> 5;
  v60 = 1;
  do
  {
    v61 = *v53;
    *(v57 - 2) = v60++;
    *(v57 - 1) = v58;
    v62 = v59 + v61;
    v59 += v58;
    *(v57 - 3) = v62;
    v63 = *((_QWORD **)&xmmword_165CC0 + 1);
    *((_QWORD *)&xmmword_165CC0 + 1) = v57;
    *v63 = v57;
    v57 += 5;
    *(v57 - 5) = &xmmword_165CC0;
    *(v57 - 4) = v63;
  }
  while ( v60 != 32 );
  if ( !*((_DWORD *)a1 + 74) )
  {
    v64 = v224;
    v65 = v234;
    dword_165CBC = 1;
    sub_88960((__int64)v234, (__int64)v224);
    if ( v66 )
      goto LABEL_20;
    goto LABEL_24;
  }
  v56 = v223;
LABEL_98:
  v64 = v224;
  v65 = v234;
  sub_88960((__int64)v234, (__int64)v224);
  v179 = (_QWORD *)v234[4].m128i_i64[1];
  v180 = dword_165CE8;
  *(_DWORD *)(v234[4].m128i_i64[1] + 128) = 1;
  v179[14] = v56 >> v179[9];
  v179[15] = v56 & v179[10];
  if ( v180 )
  {
    if ( *((_DWORD *)a1 + 74) )
    {
      sub_93D20(qword_165C40, 48);
      sub_9A810(
        (unsigned int)qword_165C80,
        48,
        (unsigned int)"source size %s [%zu]",
        (unsigned int)qword_165C40,
        v56,
        v181);
      goto LABEL_21;
    }
LABEL_20:
    sub_9A810((unsigned int)qword_165C80, 48, (unsigned int)"%s", (unsigned int)"source size unknown", v66, v67);
LABEL_21:
    byte_165B80 = 0;
    if ( dword_165CE8 > 1 )
      sub_9A810((unsigned int)&byte_165B80, 48, (unsigned int)" #bufs %zu", qword_165CD8, v68, v69);
    sub_93D20(qword_165C00, 48);
    sub_93D20(qword_165BC0, 48);
    v64 = (__int64 *)a1[29];
    v65 = (__m128i *)"xdelta3: source %s %s blksize %s window %s%s%s\n";
    sub_8C450(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_80AD0,
      a6,
      v70,
      v71,
      a9,
      a10,
      (__int64)"xdelta3: source %s %s blksize %s window %s%s%s\n",
      (__int64)v64,
      (__int64)qword_165C80,
      (__int64)qword_165BC0,
      (__int64)qword_165C00,
      (__int64)&byte_165B80);
  }
LABEL_24:
  v72 = sub_972B0(v65, v64);
  v75 = v217;
  v220 = 0;
  qword_165B70 = 1000 * HIDWORD(v72) + (unsigned int)v72 / 0x3E8;
  v76 = *(_QWORD *)&v225[0];
  while ( 2 )
  {
    v77 = a1[40];
    if ( ~a1[8] <= v76 )
      v76 = ~a1[8];
    v78 = v76;
    if ( (unsigned int)sub_8C7A0(
                         v216,
                         v77,
                         v76,
                         (__int64 *)&v222,
                         (__int64)"input read failed",
                         v13,
                         v12,
                         (__m128)(unsigned __int64)sub_80AD0,
                         a6,
                         *(double *)v73.m128_u64,
                         *(double *)v74.m128_u64,
                         a9,
                         a10) )
      return 1;
    v79 = v222;
    if ( v222 < v78 )
      v234[9].m128i_i32[2] |= 0x10u;
    if ( *((_DWORD *)a1 + 82) == 1 && !*((_BYTE *)a1 + 332) && *(_QWORD *)(*a1 + 56) )
    {
      v155 = *(_QWORD *)(*a1 + 48);
      v234[50].m128i_i64[1] = *(_QWORD *)(*a1 + 56);
      *((_BYTE *)a1 + 332) = 1;
      v234[50].m128i_i64[0] = v155;
    }
    v80 = a1[40];
    v234[0].m128i_i64[1] = v79;
    v234[0].m128i_i64[0] = v80;
    if ( !v79 && v234[3].m128i_i64[0] )
      break;
    while ( 1 )
    {
      while ( 1 )
      {
        v81 = v234;
        v82 = v75(v234);
        v86 = v82;
        if ( v82 != -17704 )
          break;
        if ( v234[2].m128i_i64[0] )
        {
          v77 = v234[1].m128i_i64[1];
          if ( (unsigned int)sub_8CC80(
                               (__int64)(a1 + 14),
                               (void *)v234[1].m128i_i64[1],
                               v234[2].m128i_i64[0],
                               (__int64)"write failed",
                               v13,
                               v12,
                               (__m128)(unsigned __int64)sub_80AD0,
                               a6,
                               *(double *)v73.m128_u64,
                               *(double *)v74.m128_u64,
                               a9,
                               a10) )
            return 1;
        }
        v234[2].m128i_i64[0] = 0;
      }
      if ( v82 >= -17703 )
        break;
      if ( v82 == -17708 )
      {
        v129 = *(_DWORD *)(*a1 + 4);
        if ( (*(_BYTE *)*a1 & 1) != 0 || *((_DWORD *)a1 + 82) != 1 || !a1[27] )
          goto LABEL_74;
        if ( v129 )
        {
          if ( v234[4].m128i_i64[1] && *(_QWORD *)(v234[4].m128i_i64[1] + 56) )
          {
            if ( v129 <= 1 )
              goto LABEL_75;
          }
          else
          {
            v81 = (__m128i *)"xdelta3: warning: input window %zu..%zu has no source copies\n";
            v77 = v219 * (v234[3].m128i_i64[0] + 1) - v219;
            sub_8C450(
              v13,
              v12,
              (__m128)(unsigned __int64)sub_80AD0,
              a6,
              v73,
              v74,
              a9,
              a10,
              (__int64)"xdelta3: warning: input window %zu..%zu has no source copies\n",
              v77,
              v219 * (v234[3].m128i_i64[0] + 1),
              v83,
              v84,
              v85);
            v129 = *(_DWORD *)(*a1 + 4);
            if ( v129 <= 1 )
              goto LABEL_74;
          }
          v77 = v234[33].m128i_u32[3];
          if ( v234[33].m128i_i32[3] && v234[6].m128i_i64[1] < (unsigned __int64)v234[95].m128i_i64[1] )
          {
            v81 = (__m128i *)"xdelta3: warning: input position %zu overflowed instruction buffer, needed %zu (vs. %zu), c"
                             "onsider changing -I\n";
            v77 = v234[3].m128i_i64[0] * v219;
            sub_8C450(
              v13,
              v12,
              (__m128)(unsigned __int64)sub_80AD0,
              a6,
              v73,
              v74,
              a9,
              a10,
              (__int64)"xdelta3: warning: input position %zu overflowed instruction buffer, needed %zu (vs. %zu), consider changing -I\n",
              v234[3].m128i_i64[0] * v219,
              v234[95].m128i_i64[1],
              v234[6].m128i_i64[1],
              v84,
              v85);
            v129 = *(_DWORD *)(*a1 + 4);
LABEL_74:
            if ( v129 )
              goto LABEL_75;
          }
          else
          {
LABEL_75:
            v130 = sub_972B0(v81, v77);
            v133 = (unsigned int)(1000 * HIDWORD(v130));
            v134 = (unsigned int)v133 + (unsigned int)v130 / 0x3E8;
            v135 = v134 - qword_165B70;
            qword_165B70 = v134;
            v221 = v234[1].m128i_i64[0];
            v218 = v234[1].m128i_i64[0] - v220;
            if ( *(int *)(*a1 + 4) <= 1 )
            {
              sub_80AE0(v135, (__int64)v228, v133, v220, v131, v132);
              sub_93D20(v232, 48);
              sub_93D20(v231, 48);
              sub_93D20(v230, 48);
              sub_93D20(v229, 48);
              v77 = v234[3].m128i_i64[0];
              sub_8C450(
                v13,
                v12,
                (__m128)(unsigned __int64)sub_80AD0,
                a6,
                v177,
                v178,
                a9,
                a10,
                (__int64)"xdelta3: %zu: in %s: out %s: total in %s: out %s: %s\n",
                v234[3].m128i_i64[0],
                (__int64)v229,
                (__int64)v230,
                (__int64)v231,
                (__int64)v232);
            }
            else
            {
              sub_93D20(v233, 48);
              sub_80AE0(v135, (__int64)v228, v136, v137, v138, v139);
              sub_93D20(v232, 48);
              sub_93D20(v231, 48);
              if ( (v135 & 0x8000000000000000LL) != 0LL )
                v140 = (double)(int)(v135 & 1 | (v135 >> 1)) + (double)(int)(v135 & 1 | (v135 >> 1));
              else
                v140 = (double)(int)v135;
              sub_93D20(qword_165B40, 48);
              sub_9A810((unsigned int)v227, 48, (unsigned int)"%s/s", (unsigned int)qword_165B40, v141, v142);
              sub_93D20(v230, 48);
              v12 = (__m128)COERCE_UNSIGNED_INT64(v140 / 1000.0);
              v13 = 0;
              if ( v218 < 0 )
                v143 = (double)(int)(v218 & 1 | ((unsigned __int64)v218 >> 1))
                     + (double)(int)(v218 & 1 | ((unsigned __int64)v218 >> 1));
              else
                v143 = (double)(int)v218;
              *(double *)v13.m128_u64 = v143 / *(double *)v12.m128_u64;
              if ( *(double *)v13.m128_u64 >= 9.223372036854776e18 )
                *(double *)v13.m128_u64 = *(double *)v13.m128_u64 - 9.223372036854776e18;
              sub_93D20(qword_165B40, 48);
              sub_9A810((unsigned int)v226, 48, (unsigned int)"%s/s", (unsigned int)qword_165B40, v144, v145);
              sub_93D20(v229, 48);
              v77 = v234[3].m128i_i64[0];
              sub_8C450(
                v13,
                (__m128)v12.m128_u64[0],
                (__m128)(unsigned __int64)sub_80AD0,
                a6,
                v146,
                v147,
                a9,
                a10,
                (__int64)"xdelta3: %zu: in %s (%s): out %s (%s): total in %s: out %s: %s: srcpos %s\n",
                v234[3].m128i_i64[0],
                (__int64)v229,
                (__int64)v226,
                (__int64)v230,
                (__int64)v227);
            }
            v220 = v221;
          }
        }
      }
      else
      {
        if ( v82 < -17708 )
        {
          v182 = sub_8C630((unsigned int)v82);
          v93 = (char *)v234[4].m128i_i64[0];
          v94 = (__int64)v182;
          if ( !v234[4].m128i_i64[0] )
            goto LABEL_90;
          goto LABEL_39;
        }
        if ( v82 == -17705 )
        {
          v87 = sub_8C630(4294949591LL);
          v93 = (char *)v234[4].m128i_i64[0];
          v94 = (__int64)v87;
          if ( !v234[4].m128i_i64[0] )
          {
            sub_8C450(
              v13,
              v12,
              (__m128)(unsigned __int64)sub_80AD0,
              a6,
              v91,
              v92,
              a9,
              a10,
              (__int64)"xdelta3: %s: %s\n",
              (__int64)"",
              (__int64)v87,
              v88,
              v89,
              v90);
            return 1;
          }
          goto LABEL_39;
        }
      }
    }
    if ( v82 != -17703 )
    {
      v156 = sub_8C630((unsigned int)v82);
      v128 = (char *)v234[4].m128i_i64[0];
      v94 = (__int64)v156;
      if ( v234[4].m128i_i64[0] )
        goto LABEL_69;
LABEL_90:
      v93 = "";
LABEL_39:
      sub_8C450(
        v13,
        v12,
        (__m128)(unsigned __int64)sub_80AD0,
        a6,
        v91,
        v92,
        a9,
        a10,
        (__int64)"xdelta3: %s: %s\n",
        (__int64)v93,
        v94,
        v88,
        v89,
        v90);
      if ( (*(_BYTE *)*a1 & 1) == 0 && v86 == -17712 )
        sub_8C450(
          v13,
          v12,
          (__m128)(unsigned __int64)sub_80AD0,
          a6,
          v99,
          v100,
          a9,
          a10,
          (__int64)"xdelta3: normally this indicates that the source file is incorrect\n",
          (__int64)v93,
          v95,
          v96,
          v97,
          v98);
      return 1;
    }
    v76 = *(_QWORD *)&v225[0];
    if ( *(_QWORD *)&v225[0] == v222 )
      continue;
    break;
  }
  v106 = sub_88A80((__int64)v234);
  v101 = v106;
  if ( v106 )
  {
    v36 = v106;
    goto LABEL_67;
  }
  if ( *(int *)(*a1 + 4) > 1 && *((_DWORD *)a1 + 82) == 1 )
  {
    sub_8C450(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_80AD0,
      a6,
      v111,
      v112,
      a9,
      a10,
      (__int64)"xdelta3: scanner configuration: %s\n",
      v234[16].m128i_i64[0],
      v107,
      v108,
      v109,
      v110);
    sub_8C450(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_80AD0,
      a6,
      v187,
      v188,
      a9,
      a10,
      (__int64)"xdelta3: target hash table size: %zu\n",
      v234[25].m128i_i64[1],
      v183,
      v184,
      v185,
      v186);
    v77 = v234[21].m128i_i64[0];
    sub_8C450(
      v13,
      v12,
      (__m128)(unsigned __int64)sub_80AD0,
      a6,
      v193,
      v194,
      a9,
      a10,
      (__int64)"xdelta3: source hash table size: %zu\n",
      v234[21].m128i_i64[0],
      v189,
      v190,
      v191,
      v192);
    if ( *(int *)(*a1 + 4) > 2 && *((_DWORD *)a1 + 82) == 1 )
    {
      sub_8C450(
        v13,
        v12,
        (__m128)(unsigned __int64)sub_80AD0,
        a6,
        v198,
        v199,
        a9,
        a10,
        (__int64)"xdelta3: source copies: %zu (%zu bytes)\n",
        v234[91].m128i_i64[1],
        v234[93].m128i_i64[1],
        v195,
        v196,
        v197);
      sub_8C450(
        v13,
        v12,
        (__m128)(unsigned __int64)sub_80AD0,
        a6,
        v203,
        v204,
        a9,
        a10,
        (__int64)"xdelta3: target copies: %zu (%zu bytes)\n",
        v234[92].m128i_i64[0],
        v234[94].m128i_i64[0],
        v200,
        v201,
        v202);
      sub_8C450(
        v13,
        v12,
        (__m128)(unsigned __int64)sub_80AD0,
        a6,
        v208,
        v209,
        a9,
        a10,
        (__int64)"xdelta3: adds: %zu (%zu bytes)\n",
        v234[92].m128i_i64[1],
        v234[94].m128i_i64[1],
        v205,
        v206,
        v207);
      v77 = v234[93].m128i_i64[0];
      sub_8C450(
        v13,
        v12,
        (__m128)(unsigned __int64)sub_80AD0,
        a6,
        v213,
        v214,
        a9,
        a10,
        (__int64)"xdelta3: runs: %zu (%zu bytes)\n",
        v234[93].m128i_i64[0],
        v234[95].m128i_i64[0],
        v210,
        v211,
        v212);
    }
  }
  sub_87F20((__int64)v234);
  if ( *(_DWORD *)(*a1 + 4) )
  {
    v113 = sub_972B0(v234, v77);
    v117 = a1[22];
    v118 = a1[8];
    if ( v117 < 0 )
    {
      v114 = a1[22] & 1;
      v119 = (double)(int)(v114 | ((unsigned __int64)v117 >> 1)) + (double)(int)(v114 | ((unsigned __int64)v117 >> 1));
    }
    else
    {
      v119 = (double)(int)v117;
    }
    v120 = v119 * 100.0;
    v121 = 0;
    if ( v118 < 0 )
    {
      v114 = a1[8] & 1;
      *(double *)v121.m128_u64 = (double)(int)(v114 | ((unsigned __int64)v118 >> 1))
                               + (double)(int)(v114 | ((unsigned __int64)v118 >> 1));
    }
    else
    {
      *(double *)v121.m128_u64 = (double)(int)v118;
    }
    v122 = sub_80AE0(
             1000 * HIDWORD(v113)
           + (unsigned int)v113 / 0x3E8
           - (unsigned __int64)(1000 * HIDWORD(v215) + (unsigned int)v215 / 0x3E8),
             (__int64)v233,
             (unsigned int)(1000 * HIDWORD(v215)),
             v114,
             v115,
             v116);
    sub_8C450(
      (__m128)COERCE_UNSIGNED_INT64(v120 / *(double *)v121.m128_u64),
      v121,
      (__m128)(unsigned __int64)sub_80AD0,
      a6,
      v125,
      v126,
      a9,
      a10,
      (__int64)"xdelta3: finished in %s; input %zu output %zu bytes (%.2f%%)\n",
      v122,
      v118,
      v117,
      v123,
      v124);
  }
  return v101;
}

