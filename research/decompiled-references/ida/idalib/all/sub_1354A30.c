__int64 __fastcall sub_1354A30(unsigned __int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbp
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r12
  __m128i v6; // xmm12
  __m128i v7; // xmm11
  __m128i v8; // xmm10
  __m128i v9; // xmm9
  __m128i v10; // xmm8
  __m128i v11; // xmm7
  __m128i v12; // xmm6
  __m128i v13; // xmm5
  __m128i v14; // xmm4
  __m128i v15; // xmm3
  __m128i v16; // xmm2
  __m128i v17; // xmm1
  __m128i v18; // xmm0
  int v19; // edx
  int v20; // eax
  __m128i v21; // xmm1
  int *v22; // rsi
  __int64 v23; // rax
  __int64 i; // rdx
  __int64 j; // rdx
  __int64 v26; // rdx
  signed __int64 v27; // r14
  __int64 v28; // r15
  unsigned __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // r14
  __int64 v32; // r8
  _QWORD *v33; // r14
  unsigned __int64 v34; // rbp
  _QWORD *v35; // rbx
  _QWORD *v36; // rdi
  _BYTE *v37; // rsi
  __int64 v38; // rdx
  volatile signed __int32 *v39; // rdi
  __m128i v40; // xmm0
  char v41; // al
  __int64 v42; // r14
  _QWORD *v43; // r13
  volatile signed __int32 *v44; // rdi
  __int64 v45; // r13
  __int64 v46; // r12
  char v47; // al
  char v48; // al
  char v49; // al
  char v50; // al
  char v51; // al
  char v52; // al
  char v53; // al
  char v54; // al
  char v55; // al
  char v56; // al
  char v57; // al
  char v58; // al
  char v59; // al
  char v60; // al
  char v61; // al
  char v62; // al
  char v63; // al
  char v64; // al
  char v65; // al
  char v66; // dl
  char v67; // dl
  char v68; // al
  char v69; // al
  char v70; // al
  _BYTE *v71; // rsi
  __int64 v72; // rdx
  volatile signed __int32 *v73; // rdi
  __int64 v74; // r14
  _QWORD *v75; // r13
  volatile signed __int32 *v76; // rdi
  __int64 v77; // r13
  __int64 v78; // r15
  unsigned __int64 v79; // r12
  signed __int64 v80; // r14
  unsigned __int64 v81; // rax
  __m128i v82; // xmm0
  __int64 v83; // r14
  __int64 v84; // r9
  _QWORD *v85; // rax
  __int64 v86; // rbp
  _QWORD *v87; // r14
  _QWORD *v88; // rbx
  _QWORD *v89; // rax
  _QWORD *v90; // rdi
  _QWORD *v91; // rax
  __int64 v92; // r14
  char v93; // al
  int *v94; // rsi
  __int64 v95; // rax
  __int64 k; // rdx
  __int64 m; // rdx
  __int64 v98; // rdx
  signed __int64 v99; // r14
  char v100; // al
  __int64 v101; // r15
  __m128i v102; // xmm0
  __int64 v103; // rax
  _QWORD *v104; // r14
  __int64 v105; // r9
  unsigned __int64 v106; // rbx
  _QWORD *v107; // rdx
  _QWORD *v108; // rdi
  signed __int64 v109; // r14
  unsigned __int64 v110; // rax
  __m128i v111; // xmm0
  __int64 v112; // r14
  __int64 v113; // r15
  __int64 v114; // r12
  _QWORD *v115; // r14
  __int64 v116; // rbp
  _QWORD *v117; // rbx
  _QWORD *v118; // rdx
  _QWORD *v119; // rdi
  __int64 v120; // r14
  volatile signed __int32 *v121; // rdi
  __m128i v122; // xmm4
  char v123; // al
  __int64 v124; // rax
  __int64 v125; // r15
  unsigned __int64 v126; // r13
  signed __int64 v127; // r12
  unsigned __int64 v128; // rcx
  unsigned __int64 v129; // rax
  __m128i v130; // xmm0
  __int64 v131; // r12
  unsigned __int64 v132; // rax
  _QWORD *v133; // r14
  __int64 v134; // rcx
  _QWORD *v135; // r12
  unsigned __int64 v136; // rbp
  unsigned __int64 v137; // rbx
  _QWORD *v138; // rdi
  __m128i si128; // xmm0
  char v140; // dl
  char v141; // al
  char v142; // al
  char v143; // al
  char v144; // al
  char v145; // al
  char v146; // al
  char v147; // al
  char v148; // al
  char v149; // al
  char v150; // al
  char v151; // al
  char v152; // al
  char v153; // al
  char v154; // al
  char v155; // al
  char v156; // al
  __m128i v157; // xmm5
  int v158; // eax
  __m128i v159; // xmm6
  __m128i v160; // xmm7
  __m128i v161; // xmm4
  __m128i v162; // xmm5
  __m128i v163; // xmm6
  int v164; // eax
  __int64 v165; // rax
  __m128i v166; // xmm1
  volatile signed __int32 *v167; // rdi
  __m128i v168; // xmm2
  __m128i v169; // xmm3
  __m128i v170; // xmm4
  int *v171; // r12
  __int64 v172; // rax
  volatile signed __int32 *v173; // rdi
  int v174; // edx
  const __m128i *v175; // r13
  __m128i *v176; // r12
  volatile signed __int32 *v177; // rdi
  __int64 v178; // r14
  _QWORD *v179; // r13
  volatile signed __int32 *v180; // rdi
  __int64 v181; // r14
  _QWORD *v182; // r12
  volatile signed __int32 *v183; // rdi
  __int64 v184; // r14
  _QWORD *v185; // r13
  volatile signed __int32 *v186; // rdi
  char *v187; // r13
  __int64 v188; // r12
  char v189; // dl
  char v190; // al
  char v191; // al
  char v192; // al
  char v193; // al
  char v194; // al
  signed __int64 v195; // r14
  unsigned __int64 v196; // rax
  __m128i v197; // xmm0
  __int64 v198; // r14
  unsigned __int64 v199; // r8
  unsigned __int64 v200; // r15
  __int64 v201; // r8
  _QWORD *v202; // r14
  unsigned __int64 v203; // rbp
  _QWORD *v204; // rbx
  _QWORD *v205; // rdi
  _BYTE *v206; // rsi
  __int64 v207; // rdx
  volatile signed __int32 *v208; // rdi
  int *v209; // rbp
  __int64 result; // rax
  volatile signed __int32 *v211; // rdi
  int v212; // edx
  __int64 v213; // r8
  __int64 v214; // r9
  __int64 v215; // rsi
  unsigned __int64 v216; // rcx
  __int64 v217; // rax
  __int64 v218; // r14
  int v219; // edx
  unsigned __int64 v220; // rdx
  __int64 v221; // r12
  __int64 v222; // rax
  size_t v223; // r15
  size_t *v224; // rbp
  __int64 v225; // rax
  unsigned __int64 v226; // rcx
  __int64 v227; // r13
  size_t **v228; // rbx
  __m128i v229; // [rsp+0h] [rbp-178h] BYREF
  __int64 v230; // [rsp+18h] [rbp-160h]
  unsigned __int64 v231; // [rsp+20h] [rbp-158h]
  unsigned __int64 v232; // [rsp+28h] [rbp-150h]
  __int64 v233; // [rsp+30h] [rbp-148h]
  __int64 v234; // [rsp+38h] [rbp-140h]
  unsigned __int64 v235; // [rsp+40h] [rbp-138h]
  _QWORD *v236; // [rsp+48h] [rbp-130h]
  __m128i v237; // [rsp+50h] [rbp-128h]
  __m128i v238; // [rsp+60h] [rbp-118h]
  __m128i v239; // [rsp+70h] [rbp-108h]
  __m128i v240; // [rsp+80h] [rbp-F8h]
  __m128i v241; // [rsp+90h] [rbp-E8h]
  __m128i v242; // [rsp+A0h] [rbp-D8h]
  __m128i v243; // [rsp+B0h] [rbp-C8h]
  __m128i v244; // [rsp+C0h] [rbp-B8h]
  __m128i v245; // [rsp+D0h] [rbp-A8h]
  __m128i v246; // [rsp+E0h] [rbp-98h]
  __m128i v247; // [rsp+F0h] [rbp-88h]
  __m128i v248; // [rsp+100h] [rbp-78h]
  __m128i v249; // [rsp+110h] [rbp-68h]
  int v250; // [rsp+120h] [rbp-58h]
  __int16 v251; // [rsp+124h] [rbp-54h]
  _QWORD v252[8]; // [rsp+138h] [rbp-40h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  v5 = operator new(0x370u);
  *(_QWORD *)(v5 + 8) = 0x100000001LL;
  *(_QWORD *)v5 = off_2C43060;
  v6 = _mm_loadu_si128((const __m128i *)v4);
  v230 = v5 + 16;
  v237 = v6;
  v7 = _mm_loadu_si128((const __m128i *)(v4 + 16));
  v238 = v7;
  v8 = _mm_loadu_si128((const __m128i *)(v4 + 32));
  v239 = v8;
  v9 = _mm_loadu_si128((const __m128i *)(v4 + 48));
  v240 = v9;
  v10 = _mm_loadu_si128((const __m128i *)(v4 + 64));
  v241 = v10;
  v11 = _mm_loadu_si128((const __m128i *)(v4 + 80));
  v242 = v11;
  v12 = _mm_loadu_si128((const __m128i *)(v4 + 96));
  v243 = v12;
  v13 = _mm_loadu_si128((const __m128i *)(v4 + 112));
  v244 = v13;
  v14 = _mm_loadu_si128((const __m128i *)(v4 + 128));
  v245 = v14;
  v15 = _mm_loadu_si128((const __m128i *)(v4 + 144));
  v246 = v15;
  v16 = _mm_loadu_si128((const __m128i *)(v4 + 160));
  v247 = v16;
  v17 = _mm_loadu_si128((const __m128i *)(v4 + 176));
  v248 = v17;
  v18 = _mm_loadu_si128((const __m128i *)(v4 + 192));
  v249 = v18;
  v250 = *(_DWORD *)(v4 + 208);
  v19 = v250;
  v251 = *(_WORD *)(v4 + 212);
  *(_WORD *)(v5 + 228) = v251;
  v20 = *(_DWORD *)(v4 + 216);
  *(_DWORD *)(v5 + 224) = v19;
  *(_DWORD *)(v5 + 232) = v20;
  LOBYTE(v20) = *(_BYTE *)(v4 + 240);
  *(__m128i *)(v5 + 192) = v17;
  v21 = _mm_loadu_si128((const __m128i *)(v4 + 224));
  *(_BYTE *)(v5 + 256) = v20;
  *(__m128i *)(v5 + 16) = v6;
  *(__m128i *)(v5 + 32) = v7;
  *(__m128i *)(v5 + 48) = v8;
  *(__m128i *)(v5 + 64) = v9;
  *(__m128i *)(v5 + 80) = v10;
  *(__m128i *)(v5 + 96) = v11;
  *(__m128i *)(v5 + 112) = v12;
  *(__m128i *)(v5 + 128) = v13;
  *(__m128i *)(v5 + 144) = v14;
  *(__m128i *)(v5 + 160) = v15;
  *(__m128i *)(v5 + 208) = v18;
  *(__m128i *)(v5 + 240) = v21;
  *(__m128i *)(v5 + 176) = v16;
  sub_C23620(v5 + 264, (__int64 *)(v4 + 248));
  sub_C23620(v5 + 288, (__int64 *)(v4 + 272));
  sub_C23620(v5 + 312, (__int64 *)(v4 + 296));
  sub_C23620(v5 + 336, (__int64 *)(v4 + 320));
  sub_C23620(v5 + 360, (__int64 *)(v4 + 344));
  *(__m128i *)(v5 + 384) = _mm_loadu_si128((const __m128i *)(v4 + 368));
  *(_DWORD *)(v5 + 400) = *(_DWORD *)(v4 + 384);
  *(_DWORD *)(v5 + 404) = *(_DWORD *)(v4 + 388);
  *(_QWORD *)(v5 + 408) = v5 + 424;
  sub_12FAA20((_QWORD *)(v5 + 408), *(_BYTE **)(v4 + 392), *(_QWORD *)(v4 + 392) + *(_QWORD *)(v4 + 400));
  *(_QWORD *)(v5 + 440) = v5 + 456;
  sub_12FAA20((_QWORD *)(v5 + 440), *(_BYTE **)(v4 + 424), *(_QWORD *)(v4 + 424) + *(_QWORD *)(v4 + 432));
  *(_QWORD *)(v5 + 472) = v5 + 488;
  sub_12FAA20((_QWORD *)(v5 + 472), *(_BYTE **)(v4 + 456), *(_QWORD *)(v4 + 456) + *(_QWORD *)(v4 + 464));
  *(_QWORD *)(v5 + 504) = v5 + 520;
  sub_12FAA20((_QWORD *)(v5 + 504), *(_BYTE **)(v4 + 488), *(_QWORD *)(v4 + 488) + *(_QWORD *)(v4 + 496));
  sub_C23620(v5 + 536, (__int64 *)(v4 + 520));
  sub_C23620(v5 + 560, (__int64 *)(v4 + 544));
  *(_BYTE *)(v5 + 584) = *(_BYTE *)(v4 + 568);
  sub_C23620(v5 + 592, (__int64 *)(v4 + 576));
  *(_QWORD *)(v5 + 632) = 0;
  *(_QWORD *)(v5 + 640) = v5 + 624;
  *(_QWORD *)(v5 + 648) = v5 + 624;
  v22 = *(int **)(v4 + 616);
  *(_DWORD *)(v5 + 624) = 0;
  *(_QWORD *)(v5 + 656) = 0;
  if ( v22 )
  {
    v252[0] = v5 + 616;
    v23 = sub_C2C3E0(v5 + 616, v22, v5 + 624, (__int64)v252);
    for ( i = v23; *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 16) )
      ;
    *(_QWORD *)(v5 + 640) = i;
    for ( j = v23; *(_QWORD *)(j + 24); j = *(_QWORD *)(j + 24) )
      ;
    *(_QWORD *)(v5 + 648) = j;
    v26 = *(_QWORD *)(v4 + 640);
    *(_QWORD *)(v5 + 632) = v23;
    *(_QWORD *)(v5 + 656) = v26;
  }
  v27 = *(_QWORD *)(v4 + 656) - *(_QWORD *)(v4 + 648);
  v28 = 0;
  *(_OWORD *)(v5 + 664) = 0;
  *(_QWORD *)(v5 + 680) = 0;
  v29 = 0x6DB6DB6DB6DB6DB7LL * (v27 >> 3);
  if ( v29 )
  {
    if ( v29 > 0x492492492492492LL )
      goto LABEL_98;
    v28 = operator new(v27);
  }
  v229.m128i_i64[0] = v28;
  v30 = _mm_loadl_epi64(&v229);
  *(_QWORD *)(v5 + 680) = v28 + v27;
  *(__m128i *)(v5 + 664) = _mm_unpacklo_epi64(v30, v30);
  v31 = *(_QWORD *)(v4 + 656);
  if ( v31 != *(_QWORD *)(v4 + 648) )
  {
    v231 = *(_QWORD *)(v4 + 648);
    v32 = v31;
    v33 = v2;
    v232 = a1;
    v34 = v231;
    v35 = (_QWORD *)v28;
    do
    {
      v36 = v35;
      v229.m128i_i64[0] = v32;
      v34 += 56LL;
      *v35 = v35 + 2;
      v35 += 7;
      sub_12FAA20(v36, *(_BYTE **)(v34 - 56), *(_QWORD *)(v34 - 56) + *(_QWORD *)(v34 - 48));
      v32 = v229.m128i_i64[0];
      *(__m128i *)(v35 - 3) = _mm_loadu_si128((const __m128i *)(v34 - 24));
      *((_DWORD *)v35 - 2) = *(_DWORD *)(v34 - 8);
      *((_DWORD *)v35 - 1) = *(_DWORD *)(v34 - 4);
    }
    while ( v32 != v34 );
    v2 = v33;
    v3 = v232;
    v28 += 56 * (((0xDB6DB6DB6DB6DB7LL * ((v32 - 56 - v231) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 1);
  }
  v229.m128i_i64[0] = v5;
  *(_QWORD *)(v5 + 688) = v5 + 704;
  *(_QWORD *)(v5 + 672) = v28;
  v37 = *(_BYTE **)(v4 + 672);
  v38 = *(_QWORD *)(v4 + 680);
  v229 = (__m128i)_mm_loadh_ps((const double *)v229.m128i_i64);
  sub_12FAA20((_QWORD *)(v5 + 688), v37, (__int64)&v37[v38]);
  *(_QWORD *)(v5 + 720) = v5 + 736;
  sub_12FAA20((_QWORD *)(v5 + 720), *(_BYTE **)(v4 + 704), *(_QWORD *)(v4 + 704) + *(_QWORD *)(v4 + 712));
  *(_QWORD *)(v5 + 752) = *(_QWORD *)(v4 + 736);
  *(_BYTE *)(v5 + 760) = *(_BYTE *)(v4 + 744);
  *(_DWORD *)(v5 + 764) = *(_DWORD *)(v4 + 748);
  *(_DWORD *)(v5 + 768) = *(_DWORD *)(v4 + 752);
  sub_C23620(v5 + 776, (__int64 *)(v4 + 760));
  *(_QWORD *)(v5 + 800) = v5 + 816;
  sub_12FAA20((_QWORD *)(v5 + 800), *(_BYTE **)(v4 + 784), *(_QWORD *)(v4 + 784) + *(_QWORD *)(v4 + 792));
  *(_BYTE *)(v5 + 832) = *(_BYTE *)(v4 + 816);
  *(_BYTE *)(v5 + 833) = *(_BYTE *)(v4 + 817);
  *(_QWORD *)(v5 + 840) = v5 + 856;
  sub_12FAA20((_QWORD *)(v5 + 840), *(_BYTE **)(v4 + 824), *(_QWORD *)(v4 + 824) + *(_QWORD *)(v4 + 832));
  v39 = *(volatile signed __int32 **)(v3 + 8);
  v40 = _mm_load_si128(&v229);
  *(_DWORD *)(v5 + 872) = *(_DWORD *)(v4 + 856);
  *(_BYTE *)(v5 + 876) = *(_BYTE *)(v4 + 860);
  *(_BYTE *)(v5 + 877) = *(_BYTE *)(v4 + 861);
  *(_BYTE *)(v5 + 878) = *(_BYTE *)(v4 + 862);
  v41 = *(_BYTE *)(v4 + 863);
  *(__m128i *)v3 = v40;
  *(_BYTE *)(v5 + 879) = v41;
  if ( v39 )
    sub_4343A0(v39);
  v42 = v2[2];
  v43 = (_QWORD *)operator new(0x228u);
  v43[1] = 0x100000001LL;
  *v43 = off_2C42D40;
  sub_1351470((__int64)(v43 + 2), v42);
  v229.m128i_i64[0] = (__int64)v43;
  v44 = *(volatile signed __int32 **)(v3 + 24);
  *(__m128 *)(v3 + 16) = _mm_loadh_ps((const double *)v229.m128i_i64);
  if ( v44 )
    sub_4343A0(v44);
  v45 = v2[4];
  v46 = operator new(0x118u);
  *(_QWORD *)(v46 + 8) = 0x100000001LL;
  *(_QWORD *)v46 = off_2C43098;
  v47 = *(_BYTE *)v45 & 1 | *(_BYTE *)(v46 + 16) & 0xFE;
  *(_BYTE *)(v46 + 16) = v47;
  v48 = *(_BYTE *)v45 & 2 | v47 & 0xFD;
  *(_BYTE *)(v46 + 16) = v48;
  v49 = *(_BYTE *)v45 & 4 | v48 & 0xFB;
  *(_BYTE *)(v46 + 16) = v49;
  v50 = *(_BYTE *)v45 & 8 | v49 & 0xF7;
  *(_BYTE *)(v46 + 16) = v50;
  v51 = *(_BYTE *)v45 & 0x10 | v50 & 0xEF;
  *(_BYTE *)(v46 + 16) = v51;
  v52 = *(_BYTE *)v45 & 0x20 | v51 & 0xDF;
  *(_BYTE *)(v46 + 16) = v52;
  v53 = *(_BYTE *)v45 & 0x40 | v52 & 0xBF;
  *(_BYTE *)(v46 + 16) = v53;
  *(_BYTE *)(v46 + 16) = *(_BYTE *)v45 & 0x80 | v53 & 0x7F;
  v54 = *(_BYTE *)(v45 + 1) & 1 | *(_BYTE *)(v46 + 17) & 0xFE;
  *(_BYTE *)(v46 + 17) = v54;
  v55 = *(_BYTE *)(v45 + 1) & 2 | v54 & 0xFD;
  *(_BYTE *)(v46 + 17) = v55;
  v56 = *(_BYTE *)(v45 + 1) & 4 | v55 & 0xFB;
  *(_BYTE *)(v46 + 17) = v56;
  v57 = *(_BYTE *)(v45 + 1) & 8 | v56 & 0xF7;
  *(_BYTE *)(v46 + 17) = v57;
  v58 = *(_BYTE *)(v45 + 1) & 0x10 | v57 & 0xEF;
  *(_BYTE *)(v46 + 17) = v58;
  v59 = *(_BYTE *)(v45 + 1) & 0x20 | v58 & 0xDF;
  *(_BYTE *)(v46 + 17) = v59;
  v60 = *(_BYTE *)(v45 + 1) & 0x40 | v59 & 0xBF;
  *(_BYTE *)(v46 + 17) = v60;
  *(_BYTE *)(v46 + 17) = *(_BYTE *)(v45 + 1) & 0x80 | v60 & 0x7F;
  v61 = *(_BYTE *)(v45 + 2) & 3 | *(_BYTE *)(v46 + 18) & 0xFC;
  *(_BYTE *)(v46 + 18) = v61;
  v62 = *(_BYTE *)(v45 + 2) & 4 | v61 & 0xFB;
  *(_BYTE *)(v46 + 18) = v62;
  v63 = *(_BYTE *)(v45 + 2) & 8 | v62 & 0xF7;
  *(_BYTE *)(v46 + 18) = v63;
  v64 = *(_BYTE *)(v45 + 2) & 0x10 | v63 & 0xEF;
  *(_BYTE *)(v46 + 18) = v64;
  v65 = *(_BYTE *)(v45 + 2) & 0x20 | v64 & 0xDF;
  *(_BYTE *)(v46 + 18) = v65;
  *(_BYTE *)(v46 + 18) = *(_BYTE *)(v45 + 2) & 0x40 | v65 & 0xBF;
  v66 = *(_BYTE *)(v45 + 28);
  *(_DWORD *)(v46 + 20) = *(_DWORD *)(v45 + 4);
  *(_DWORD *)(v46 + 24) = *(_DWORD *)(v45 + 8);
  *(_DWORD *)(v46 + 28) = *(_DWORD *)(v45 + 12);
  *(_DWORD *)(v46 + 32) = *(_DWORD *)(v45 + 16);
  *(_DWORD *)(v46 + 36) = *(_DWORD *)(v45 + 20);
  *(_DWORD *)(v46 + 40) = *(_DWORD *)(v45 + 24);
  *(_BYTE *)(v46 + 44) = v66 & 1 | *(_BYTE *)(v46 + 44) & 0xFE;
  v67 = *(_BYTE *)(v45 + 40);
  *(_DWORD *)(v46 + 48) = *(_DWORD *)(v45 + 32);
  *(_DWORD *)(v46 + 52) = *(_DWORD *)(v45 + 36);
  v68 = v67 & 1 | *(_BYTE *)(v46 + 56) & 0xFE;
  *(_BYTE *)(v46 + 56) = v68;
  v69 = *(_BYTE *)(v45 + 40) & 6 | v68 & 0xF9;
  *(_BYTE *)(v46 + 56) = v69;
  v70 = *(_BYTE *)(v45 + 40) & 8 | v69 & 0xF7;
  *(_BYTE *)(v46 + 56) = v70;
  *(_BYTE *)(v46 + 56) = *(_BYTE *)(v45 + 40) & 0xF0 | v70 & 0xF;
  *(_QWORD *)(v46 + 64) = v46 + 80;
  v71 = *(_BYTE **)(v45 + 48);
  v72 = *(_QWORD *)(v45 + 56);
  v229.m128i_i64[0] = v46 + 16;
  sub_12FAA20((_QWORD *)(v46 + 64), v71, (__int64)&v71[v72]);
  *(_QWORD *)(v46 + 96) = v46 + 112;
  sub_12FAA20((_QWORD *)(v46 + 96), *(_BYTE **)(v45 + 80), *(_QWORD *)(v45 + 80) + *(_QWORD *)(v45 + 88));
  *(_QWORD *)(v46 + 128) = v46 + 144;
  sub_12FAA20((_QWORD *)(v46 + 128), *(_BYTE **)(v45 + 112), *(_QWORD *)(v45 + 112) + *(_QWORD *)(v45 + 120));
  sub_C23620(v46 + 160, (__int64 *)(v45 + 144));
  sub_C23620(v46 + 184, (__int64 *)(v45 + 168));
  sub_C23620(v46 + 208, (__int64 *)(v45 + 192));
  sub_C23620(v46 + 232, (__int64 *)(v45 + 216));
  sub_C23620(v46 + 256, (__int64 *)(v45 + 240));
  v229.m128i_i64[0] = v46;
  v73 = *(volatile signed __int32 **)(v3 + 40);
  *(__m128 *)(v3 + 32) = _mm_loadh_ps((const double *)v229.m128i_i64);
  if ( v73 )
    sub_4343A0(v73);
  v74 = v2[6];
  v75 = (_QWORD *)operator new(0x288u);
  v75[1] = 0x100000001LL;
  *v75 = off_2C430D0;
  sub_1353470((__int64)(v75 + 2), v74);
  v229.m128i_i64[0] = (__int64)v75;
  v76 = *(volatile signed __int32 **)(v3 + 56);
  *(__m128 *)(v3 + 48) = _mm_loadh_ps((const double *)v229.m128i_i64);
  if ( v76 )
    sub_4343A0(v76);
  v77 = v2[8];
  v78 = 0;
  v79 = operator new(0x168u);
  *(_QWORD *)v79 = off_2C42D78;
  v80 = *(_QWORD *)(v77 + 8) - *(_QWORD *)v77;
  v230 = v79 + 16;
  *(_QWORD *)(v79 + 8) = 0x100000001LL;
  *(_OWORD *)(v79 + 16) = 0;
  *(_QWORD *)(v79 + 32) = 0;
  v81 = 0xCCCCCCCCCCCCCCCDLL * (v80 >> 3);
  if ( v81 )
  {
    if ( v81 > 0x666666666666666LL )
      goto LABEL_98;
    v78 = operator new(v80);
  }
  v229.m128i_i64[0] = v78;
  v82 = _mm_loadl_epi64(&v229);
  *(_QWORD *)(v79 + 32) = v78 + v80;
  *(__m128i *)(v79 + 16) = _mm_unpacklo_epi64(v82, v82);
  v83 = *(_QWORD *)(v77 + 8);
  v84 = *(_QWORD *)v77;
  if ( v83 != *(_QWORD *)v77 )
  {
    v231 = *(_QWORD *)v77;
    v85 = v2;
    v86 = v83;
    v232 = v3;
    v87 = v85;
    v88 = (_QWORD *)v78;
    do
    {
      v89 = v88 + 2;
      v90 = v88;
      v229.m128i_i64[0] = v84;
      v88 += 5;
      *(v88 - 5) = v89;
      sub_12FAA20(v90, *(_BYTE **)v84, *(_QWORD *)v84 + *(_QWORD *)(v84 + 8));
      v84 = v229.m128i_i64[0] + 40;
      *((_BYTE *)v88 - 8) = *(_BYTE *)(v229.m128i_i64[0] + 32);
    }
    while ( v86 != v84 );
    v91 = v87;
    v3 = v232;
    v92 = v86 - 40;
    v2 = v91;
    v78 += 8 * ((v92 - v231) >> 3) + 40;
  }
  *(_QWORD *)(v79 + 24) = v78;
  sub_C23620(v79 + 40, (__int64 *)(v77 + 24));
  sub_C23620(v79 + 64, (__int64 *)(v77 + 48));
  *(_BYTE *)(v79 + 88) = *(_BYTE *)(v77 + 72);
  *(_BYTE *)(v79 + 89) = *(_BYTE *)(v77 + 73);
  *(_BYTE *)(v79 + 90) = *(_BYTE *)(v77 + 74);
  *(_BYTE *)(v79 + 91) = *(_BYTE *)(v77 + 75);
  *(_BYTE *)(v79 + 92) = *(_BYTE *)(v77 + 76);
  *(_BYTE *)(v79 + 93) = *(_BYTE *)(v77 + 77);
  *(_QWORD *)(v79 + 96) = v79 + 112;
  sub_12FAA20((_QWORD *)(v79 + 96), *(_BYTE **)(v77 + 80), *(_QWORD *)(v77 + 80) + *(_QWORD *)(v77 + 88));
  *(_QWORD *)(v79 + 128) = v79 + 144;
  sub_12FAA20((_QWORD *)(v79 + 128), *(_BYTE **)(v77 + 112), *(_QWORD *)(v77 + 112) + *(_QWORD *)(v77 + 120));
  sub_C23620(v79 + 160, (__int64 *)(v77 + 144));
  *(_DWORD *)(v79 + 184) = *(_DWORD *)(v77 + 168);
  *(_BYTE *)(v79 + 188) = *(_BYTE *)(v77 + 172);
  *(_BYTE *)(v79 + 189) = *(_BYTE *)(v77 + 173);
  v93 = *(_BYTE *)(v77 + 174);
  *(_QWORD *)(v79 + 208) = 0;
  *(_QWORD *)(v79 + 216) = v79 + 200;
  *(_QWORD *)(v79 + 224) = v79 + 200;
  v94 = *(int **)(v77 + 192);
  *(_BYTE *)(v79 + 190) = v93;
  *(_DWORD *)(v79 + 200) = 0;
  *(_QWORD *)(v79 + 232) = 0;
  if ( v94 )
  {
    v252[0] = v79 + 192;
    v95 = sub_1353D60(v79 + 192, v94, v79 + 200, (__int64)v252);
    for ( k = v95; *(_QWORD *)(k + 16); k = *(_QWORD *)(k + 16) )
      ;
    *(_QWORD *)(v79 + 216) = k;
    for ( m = v95; *(_QWORD *)(m + 24); m = *(_QWORD *)(m + 24) )
      ;
    *(_QWORD *)(v79 + 224) = m;
    v98 = *(_QWORD *)(v77 + 216);
    *(_QWORD *)(v79 + 208) = v95;
    *(_QWORD *)(v79 + 232) = v98;
  }
  v99 = *(_QWORD *)(v77 + 248) - *(_QWORD *)(v77 + 240);
  *(_QWORD *)(v79 + 240) = *(_QWORD *)(v77 + 224);
  *(_BYTE *)(v79 + 248) = *(_BYTE *)(v77 + 232);
  *(_BYTE *)(v79 + 249) = *(_BYTE *)(v77 + 233);
  *(_BYTE *)(v79 + 250) = *(_BYTE *)(v77 + 234);
  *(_BYTE *)(v79 + 251) = *(_BYTE *)(v77 + 235);
  v100 = *(_BYTE *)(v77 + 236);
  *(_QWORD *)(v79 + 256) = 0;
  *(_BYTE *)(v79 + 252) = v100;
  *(_QWORD *)(v79 + 264) = 0;
  *(_QWORD *)(v79 + 272) = 0;
  if ( v99 >> 6 )
  {
    if ( (unsigned __int64)(v99 >> 6) > 0x3FFFFFFFFFFFFFFLL )
      goto LABEL_98;
    v101 = operator new(v99);
  }
  else
  {
    v101 = 0;
  }
  v229.m128i_i64[0] = v101;
  v102 = _mm_loadl_epi64(&v229);
  *(_QWORD *)(v79 + 272) = v101 + v99;
  *(__m128i *)(v79 + 256) = _mm_unpacklo_epi64(v102, v102);
  v103 = *(_QWORD *)(v77 + 248);
  if ( v103 != *(_QWORD *)(v77 + 240) )
  {
    v231 = *(_QWORD *)(v77 + 240);
    v104 = (_QWORD *)v101;
    v105 = v103;
    v232 = v3;
    v106 = v231;
    do
    {
      v229.m128i_i64[0] = v105;
      v106 += 64LL;
      *v104 = v104 + 2;
      sub_12FAA20(v104, *(_BYTE **)(v106 - 64), *(_QWORD *)(v106 - 64) + *(_QWORD *)(v106 - 56));
      v107 = v104 + 6;
      v108 = v104 + 4;
      v104 += 8;
      *(v104 - 4) = v107;
      sub_12FAA20(v108, *(_BYTE **)(v106 - 32), *(_QWORD *)(v106 - 32) + *(_QWORD *)(v106 - 24));
      v105 = v229.m128i_i64[0];
    }
    while ( v229.m128i_i64[0] != v106 );
    v3 = v232;
    v101 += ((v229.m128i_i64[0] - 64 - v231) & 0xFFFFFFFFFFFFFFC0LL) + 64;
  }
  v109 = *(_QWORD *)(v77 + 272) - *(_QWORD *)(v77 + 264);
  *(_QWORD *)(v79 + 264) = v101;
  *(_OWORD *)(v79 + 280) = 0;
  *(_QWORD *)(v79 + 296) = 0;
  v110 = 0xCCCCCCCCCCCCCCCDLL * (v109 >> 3);
  if ( v110 )
  {
    if ( v110 > 0x666666666666666LL )
      goto LABEL_98;
    v110 = operator new(v109);
  }
  v229.m128i_i64[0] = v110;
  v111 = _mm_loadl_epi64(&v229);
  *(_QWORD *)(v79 + 296) = v110 + v109;
  *(__m128i *)(v79 + 280) = _mm_unpacklo_epi64(v111, v111);
  v112 = *(_QWORD *)(v77 + 272);
  v113 = *(_QWORD *)(v77 + 264);
  if ( v112 != v113 )
  {
    v231 = v79;
    v114 = v112;
    v115 = v2;
    v116 = v113;
    v232 = v3;
    v117 = (_QWORD *)v110;
    do
    {
      v118 = v117 + 2;
      v119 = v117;
      v116 += 40;
      v117 += 5;
      *(v117 - 5) = v118;
      sub_12FAA20(v119, *(_BYTE **)(v116 - 40), *(_QWORD *)(v116 - 40) + *(_QWORD *)(v116 - 32));
      *(v117 - 1) = *(_QWORD *)(v116 - 8);
    }
    while ( v114 != v116 );
    v2 = v115;
    v3 = v232;
    v120 = v114 - 40;
    v79 = v231;
    v110 = v229.m128i_i64[0] + 8 * ((unsigned __int64)(v120 - v113) >> 3) + 40;
  }
  *(_QWORD *)(v79 + 288) = v110;
  sub_C23620(v79 + 304, (__int64 *)(v77 + 288));
  v121 = *(volatile signed __int32 **)(v3 + 72);
  v122 = _mm_loadu_si128((const __m128i *)(v77 + 328));
  *(_BYTE *)(v79 + 328) = *(_BYTE *)(v77 + 312);
  *(_BYTE *)(v79 + 329) = *(_BYTE *)(v77 + 313);
  *(_DWORD *)(v79 + 332) = *(_DWORD *)(v77 + 316);
  *(_BYTE *)(v79 + 336) = *(_BYTE *)(v77 + 320);
  v123 = *(_BYTE *)(v77 + 321);
  *(__m128i *)(v79 + 344) = v122;
  *(_BYTE *)(v79 + 337) = v123;
  v124 = v230;
  *(_QWORD *)(v3 + 72) = v79;
  *(_QWORD *)(v3 + 64) = v124;
  if ( v121 )
    sub_4343A0(v121);
  v125 = v2[10];
  v126 = operator new(0x208u);
  *(_QWORD *)v126 = off_2C43108;
  v127 = *(_QWORD *)(v125 + 8) - *(_QWORD *)v125;
  v230 = v126 + 16;
  *(_QWORD *)(v126 + 8) = 0x100000001LL;
  v128 = 0;
  *(_OWORD *)(v126 + 16) = 0;
  v129 = 0xCCCCCCCCCCCCCCCDLL * (v127 >> 3);
  *(_QWORD *)(v126 + 32) = 0;
  if ( v129 )
  {
    if ( v129 > 0x666666666666666LL )
      goto LABEL_98;
    v128 = operator new(v127);
  }
  v229.m128i_i64[0] = v128;
  v130 = _mm_loadl_epi64(&v229);
  *(_QWORD *)(v126 + 32) = v128 + v127;
  *(__m128i *)(v126 + 16) = _mm_unpacklo_epi64(v130, v130);
  v131 = *(_QWORD *)(v125 + 8);
  v132 = *(_QWORD *)v125;
  if ( v131 != *(_QWORD *)v125 )
  {
    v231 = *(_QWORD *)v125;
    v133 = (_QWORD *)v128;
    v232 = v128;
    v134 = v131;
    v135 = v2;
    v136 = v3;
    v137 = v132;
    do
    {
      v138 = v133;
      v229.m128i_i64[0] = v134;
      v137 += 40LL;
      *v133 = v133 + 2;
      v133 += 5;
      sub_12FAA20(v138, *(_BYTE **)(v137 - 40), *(_QWORD *)(v137 - 40) + *(_QWORD *)(v137 - 32));
      v134 = v229.m128i_i64[0];
      *((_BYTE *)v133 - 8) = *(_BYTE *)(v137 - 8);
    }
    while ( v134 != v137 );
    v3 = v136;
    v2 = v135;
    v128 = v232 + 8 * ((v134 - 40 - v231) >> 3) + 40;
  }
  *(_QWORD *)(v126 + 24) = v128;
  sub_C23620(v126 + 40, (__int64 *)(v125 + 24));
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9B50);
  *(_QWORD *)(v126 + 64) = 0;
  *(__m128i *)(v126 + 72) = si128;
  if ( *(_DWORD *)(v125 + 60) )
  {
    sub_2244BF0(v126 + 64, *(unsigned int *)(v125 + 56));
    v215 = *(_QWORD *)(v125 + 48);
    v216 = *(_QWORD *)(v126 + 64);
    v217 = *(unsigned int *)(v126 + 72);
    v218 = 8 * v217 + 8;
    v219 = *(_DWORD *)(v125 + 60);
    v233 = v215;
    v232 = v216;
    *(_DWORD *)(v126 + 76) = v219;
    *(_DWORD *)(v126 + 80) = *(_DWORD *)(v125 + 64);
    if ( (_DWORD)v217 )
    {
      v220 = v216;
      v221 = 0;
      v229.m128i_i64[0] = v125;
      v231 = v126;
      v234 = 8LL * (unsigned int)(v217 - 1);
      v222 = v215;
      v235 = v3;
      v236 = v2;
      while ( 1 )
      {
        v227 = *(_QWORD *)(v222 + v221);
        v228 = (size_t **)(v220 + v221);
        if ( !v227 || v227 == -8 )
        {
          *v228 = (size_t *)v227;
          v218 += 4;
          if ( v221 == v234 )
            goto LABEL_96;
        }
        else
        {
          v223 = *(_QWORD *)v227;
          v224 = (size_t *)sub_22300B0(*(_QWORD *)v227 + 41LL, 8, v220, v216, v213, v214);
          if ( v223 )
            memcpy(v224 + 5, (const void *)(v227 + 40), v223);
          *((_BYTE *)v224 + v223 + 40) = 0;
          v224[1] = (size_t)(v224 + 3);
          *v224 = v223;
          sub_12FAA20(v224 + 1, *(_BYTE **)(v227 + 8), *(_QWORD *)(v227 + 8) + *(_QWORD *)(v227 + 16));
          v225 = v233;
          v226 = v232;
          *v228 = v224;
          *(_DWORD *)(v226 + v218) = *(_DWORD *)(v225 + v218);
          v218 += 4;
          if ( v221 == v234 )
          {
LABEL_96:
            v125 = v229.m128i_i64[0];
            v126 = v231;
            v3 = v235;
            v2 = v236;
            break;
          }
        }
        v216 = v231;
        v221 += 8;
        v222 = *(_QWORD *)(v229.m128i_i64[0] + 48);
        v220 = *(_QWORD *)(v231 + 64);
      }
    }
  }
  *(_DWORD *)(v126 + 88) = *(_DWORD *)(v125 + 72);
  *(_DWORD *)(v126 + 92) = *(_DWORD *)(v125 + 76);
  *(_DWORD *)(v126 + 96) = *(_DWORD *)(v125 + 80);
  *(_QWORD *)(v126 + 104) = v126 + 120;
  sub_12FAA20((_QWORD *)(v126 + 104), *(_BYTE **)(v125 + 88), *(_QWORD *)(v125 + 88) + *(_QWORD *)(v125 + 96));
  *(_QWORD *)(v126 + 136) = v126 + 152;
  sub_12FAA20((_QWORD *)(v126 + 136), *(_BYTE **)(v125 + 120), *(_QWORD *)(v125 + 120) + *(_QWORD *)(v125 + 128));
  *(_QWORD *)(v126 + 168) = v126 + 184;
  sub_12FAA20((_QWORD *)(v126 + 168), *(_BYTE **)(v125 + 152), *(_QWORD *)(v125 + 152) + *(_QWORD *)(v125 + 160));
  v140 = *(_BYTE *)(v125 + 188);
  *(_DWORD *)(v126 + 200) = *(_DWORD *)(v125 + 184);
  v141 = v140 & 1 | *(_BYTE *)(v126 + 204) & 0xFE;
  *(_BYTE *)(v126 + 204) = v141;
  v142 = *(_BYTE *)(v125 + 188) & 2 | v141 & 0xFD;
  *(_BYTE *)(v126 + 204) = v142;
  v143 = *(_BYTE *)(v125 + 188) & 4 | v142 & 0xFB;
  *(_BYTE *)(v126 + 204) = v143;
  v144 = *(_BYTE *)(v125 + 188) & 8 | v143 & 0xF7;
  *(_BYTE *)(v126 + 204) = v144;
  v145 = *(_BYTE *)(v125 + 188) & 0x10 | v144 & 0xEF;
  *(_BYTE *)(v126 + 204) = v145;
  v146 = *(_BYTE *)(v125 + 188) & 0x20 | v145 & 0xDF;
  *(_BYTE *)(v126 + 204) = v146;
  v147 = *(_BYTE *)(v125 + 188) & 0x40 | v146 & 0xBF;
  *(_BYTE *)(v126 + 204) = v147;
  *(_BYTE *)(v126 + 204) = *(_BYTE *)(v125 + 188) & 0x80 | v147 & 0x7F;
  v148 = *(_BYTE *)(v125 + 189) & 1 | *(_BYTE *)(v126 + 205) & 0xFE;
  *(_BYTE *)(v126 + 205) = v148;
  v149 = *(_BYTE *)(v125 + 189) & 2 | v148 & 0xFD;
  *(_BYTE *)(v126 + 205) = v149;
  v150 = *(_BYTE *)(v125 + 189) & 4 | v149 & 0xFB;
  *(_BYTE *)(v126 + 205) = v150;
  v151 = *(_BYTE *)(v125 + 189) & 8 | v150 & 0xF7;
  *(_BYTE *)(v126 + 205) = v151;
  v152 = *(_BYTE *)(v125 + 189) & 0x10 | v151 & 0xEF;
  *(_BYTE *)(v126 + 205) = v152;
  v153 = *(_BYTE *)(v125 + 189) & 0x20 | v152 & 0xDF;
  *(_BYTE *)(v126 + 205) = v153;
  v154 = *(_BYTE *)(v125 + 189) & 0x40 | v153 & 0xBF;
  *(_BYTE *)(v126 + 205) = v154;
  *(_BYTE *)(v126 + 205) = *(_BYTE *)(v125 + 189) & 0x80 | v154 & 0x7F;
  v155 = *(_BYTE *)(v125 + 190) & 1 | *(_BYTE *)(v126 + 206) & 0xFE;
  *(_BYTE *)(v126 + 206) = v155;
  v156 = *(_BYTE *)(v125 + 190) & 2 | v155 & 0xFD;
  *(_BYTE *)(v126 + 206) = v156;
  *(_BYTE *)(v126 + 206) = *(_BYTE *)(v125 + 190) & 4 | v156 & 0xFB;
  v157 = _mm_loadu_si128((const __m128i *)(v125 + 200));
  *(_DWORD *)(v126 + 208) = *(_DWORD *)(v125 + 192);
  v158 = *(_DWORD *)(v125 + 196);
  *(__m128i *)(v126 + 216) = v157;
  *(_DWORD *)(v126 + 212) = v158;
  *(_BYTE *)(v126 + 232) = *(_BYTE *)(v125 + 216);
  *(_BYTE *)(v126 + 233) = *(_BYTE *)(v125 + 217);
  *(_BYTE *)(v126 + 234) = *(_BYTE *)(v125 + 218);
  *(_BYTE *)(v126 + 235) = *(_BYTE *)(v125 + 219);
  *(_BYTE *)(v126 + 236) = *(_BYTE *)(v125 + 220);
  *(_BYTE *)(v126 + 237) = *(_BYTE *)(v125 + 221);
  *(_BYTE *)(v126 + 238) = *(_BYTE *)(v125 + 222);
  *(_BYTE *)(v126 + 239) = *(_BYTE *)(v125 + 223);
  *(_BYTE *)(v126 + 240) = *(_BYTE *)(v125 + 224);
  *(_BYTE *)(v126 + 241) = *(_BYTE *)(v125 + 225);
  *(_BYTE *)(v126 + 242) = *(_BYTE *)(v125 + 226);
  *(_BYTE *)(v126 + 243) = *(_BYTE *)(v125 + 227);
  *(_BYTE *)(v126 + 244) = *(_BYTE *)(v125 + 228);
  *(_BYTE *)(v126 + 245) = *(_BYTE *)(v125 + 229);
  *(_BYTE *)(v126 + 246) = *(_BYTE *)(v125 + 230);
  *(_BYTE *)(v126 + 247) = *(_BYTE *)(v125 + 231);
  *(_BYTE *)(v126 + 248) = *(_BYTE *)(v125 + 232);
  *(_BYTE *)(v126 + 249) = *(_BYTE *)(v125 + 233);
  *(_DWORD *)(v126 + 252) = *(_DWORD *)(v125 + 236);
  *(_DWORD *)(v126 + 256) = *(_DWORD *)(v125 + 240);
  *(_DWORD *)(v126 + 260) = *(_DWORD *)(v125 + 244);
  *(_DWORD *)(v126 + 264) = *(_DWORD *)(v125 + 248);
  *(_BYTE *)(v126 + 268) = *(_BYTE *)(v125 + 252);
  *(_BYTE *)(v126 + 269) = *(_BYTE *)(v125 + 253);
  *(_BYTE *)(v126 + 270) = *(_BYTE *)(v125 + 254);
  *(_BYTE *)(v126 + 271) = *(_BYTE *)(v125 + 255);
  *(_BYTE *)(v126 + 272) = *(_BYTE *)(v125 + 256);
  *(_BYTE *)(v126 + 273) = *(_BYTE *)(v125 + 257);
  *(_BYTE *)(v126 + 274) = *(_BYTE *)(v125 + 258);
  *(_BYTE *)(v126 + 275) = *(_BYTE *)(v125 + 259);
  *(_BYTE *)(v126 + 276) = *(_BYTE *)(v125 + 260);
  *(_BYTE *)(v126 + 277) = *(_BYTE *)(v125 + 261);
  *(_BYTE *)(v126 + 278) = *(_BYTE *)(v125 + 262);
  *(_BYTE *)(v126 + 279) = *(_BYTE *)(v125 + 263);
  *(_BYTE *)(v126 + 280) = *(_BYTE *)(v125 + 264);
  *(_BYTE *)(v126 + 281) = *(_BYTE *)(v125 + 265);
  *(_BYTE *)(v126 + 282) = *(_BYTE *)(v125 + 266);
  *(_BYTE *)(v126 + 283) = *(_BYTE *)(v125 + 267);
  *(_BYTE *)(v126 + 284) = *(_BYTE *)(v125 + 268);
  *(_BYTE *)(v126 + 285) = *(_BYTE *)(v125 + 269);
  v159 = _mm_loadu_si128((const __m128i *)(v125 + 272));
  *(_BYTE *)(v126 + 286) = *(_BYTE *)(v125 + 270);
  LOBYTE(v158) = *(_BYTE *)(v125 + 271);
  *(__m128i *)(v126 + 288) = v159;
  *(_BYTE *)(v126 + 287) = v158;
  *(_BYTE *)(v126 + 304) = *(_BYTE *)(v125 + 288);
  *(_BYTE *)(v126 + 305) = *(_BYTE *)(v125 + 289);
  *(_BYTE *)(v126 + 306) = *(_BYTE *)(v125 + 290);
  *(_BYTE *)(v126 + 307) = *(_BYTE *)(v125 + 291);
  *(_BYTE *)(v126 + 308) = *(_BYTE *)(v125 + 292);
  *(_BYTE *)(v126 + 309) = *(_BYTE *)(v125 + 293);
  *(_BYTE *)(v126 + 310) = *(_BYTE *)(v125 + 294);
  *(_BYTE *)(v126 + 311) = *(_BYTE *)(v125 + 295);
  *(_BYTE *)(v126 + 312) = *(_BYTE *)(v125 + 296);
  *(_BYTE *)(v126 + 313) = *(_BYTE *)(v125 + 297);
  *(_DWORD *)(v126 + 316) = *(_DWORD *)(v125 + 300);
  *(_DWORD *)(v126 + 320) = *(_DWORD *)(v125 + 304);
  *(_DWORD *)(v126 + 324) = *(_DWORD *)(v125 + 308);
  v160 = _mm_loadu_si128((const __m128i *)(v125 + 360));
  v161 = _mm_loadu_si128((const __m128i *)(v125 + 376));
  v162 = _mm_loadu_si128((const __m128i *)(v125 + 392));
  *(_DWORD *)(v126 + 328) = *(_DWORD *)(v125 + 312);
  v163 = _mm_loadu_si128((const __m128i *)(v125 + 408));
  *(_DWORD *)(v126 + 332) = *(_DWORD *)(v125 + 316);
  *(_DWORD *)(v126 + 336) = *(_DWORD *)(v125 + 320);
  *(_DWORD *)(v126 + 340) = *(_DWORD *)(v125 + 324);
  *(_DWORD *)(v126 + 344) = *(_DWORD *)(v125 + 328);
  *(_DWORD *)(v126 + 348) = *(_DWORD *)(v125 + 332);
  *(_DWORD *)(v126 + 352) = *(_DWORD *)(v125 + 336);
  *(_DWORD *)(v126 + 356) = *(_DWORD *)(v125 + 340);
  *(_DWORD *)(v126 + 360) = *(_DWORD *)(v125 + 344);
  *(_DWORD *)(v126 + 364) = *(_DWORD *)(v125 + 348);
  *(_DWORD *)(v126 + 368) = *(_DWORD *)(v125 + 352);
  v164 = *(_DWORD *)(v125 + 356);
  *(__m128i *)(v126 + 392) = v161;
  *(_DWORD *)(v126 + 372) = v164;
  *(__m128i *)(v126 + 376) = v160;
  *(__m128i *)(v126 + 408) = v162;
  *(__m128i *)(v126 + 424) = v163;
  v165 = v230;
  v166 = _mm_loadu_si128((const __m128i *)(v125 + 440));
  v167 = *(volatile signed __int32 **)(v3 + 88);
  v168 = _mm_loadu_si128((const __m128i *)(v125 + 456));
  *(__m128i *)(v126 + 440) = _mm_loadu_si128((const __m128i *)(v125 + 424));
  v169 = _mm_loadu_si128((const __m128i *)(v125 + 472));
  v170 = _mm_loadu_si128((const __m128i *)(v125 + 488));
  *(__m128i *)(v126 + 456) = v166;
  *(__m128i *)(v126 + 472) = v168;
  *(__m128i *)(v126 + 488) = v169;
  *(__m128i *)(v126 + 504) = v170;
  *(_QWORD *)(v3 + 80) = v165;
  *(_QWORD *)(v3 + 88) = v126;
  if ( v167 )
    sub_4343A0(v167);
  v171 = (int *)v2[12];
  v172 = operator new(0x18u);
  v173 = *(volatile signed __int32 **)(v3 + 104);
  *(_QWORD *)(v172 + 8) = 0x100000001LL;
  *(_QWORD *)v172 = off_2C43140;
  v174 = *v171;
  *(_QWORD *)(v3 + 104) = v172;
  *(_DWORD *)(v172 + 16) = v174;
  *(_QWORD *)(v3 + 96) = v172 + 16;
  if ( v173 )
    sub_4343A0(v173);
  v175 = (const __m128i *)v2[14];
  v176 = (__m128i *)operator new(0x38u);
  v176->m128i_i64[1] = 0x100000001LL;
  v176->m128i_i64[0] = (__int64)off_2C43178;
  v176[1] = _mm_loadu_si128(v175);
  sub_C23620((__int64)v176[2].m128i_i64, v175[1].m128i_i64);
  v177 = *(volatile signed __int32 **)(v3 + 120);
  *(_QWORD *)(v3 + 112) = v176 + 1;
  *(_QWORD *)(v3 + 120) = v176;
  if ( v177 )
    sub_4343A0(v177);
  v178 = v2[16];
  v179 = (_QWORD *)operator new(0x970u);
  v179[1] = 0x100000001LL;
  *v179 = off_2C431B0;
  sub_1352200((__int64)(v179 + 2), v178);
  v229.m128i_i64[0] = (__int64)v179;
  v180 = *(volatile signed __int32 **)(v3 + 136);
  *(__m128 *)(v3 + 128) = _mm_loadh_ps((const double *)v229.m128i_i64);
  if ( v180 )
    sub_4343A0(v180);
  v181 = v2[18];
  v182 = (_QWORD *)operator new(0x30u);
  v182[1] = 0x100000001LL;
  *v182 = off_2C431E8;
  v182[2] = v182 + 4;
  sub_12FAA20(v182 + 2, *(_BYTE **)v181, *(_QWORD *)v181 + *(_QWORD *)(v181 + 8));
  v229.m128i_i64[0] = (__int64)v182;
  v183 = *(volatile signed __int32 **)(v3 + 152);
  *(__m128 *)(v3 + 144) = _mm_loadh_ps((const double *)v229.m128i_i64);
  if ( v183 )
    sub_4343A0(v183);
  v184 = v2[20];
  v185 = (_QWORD *)operator new(0x378u);
  v185[1] = 0x100000001LL;
  *v185 = off_2C43220;
  sub_1354280((__int64)(v185 + 2), v184);
  v229.m128i_i64[0] = (__int64)v185;
  v186 = *(volatile signed __int32 **)(v3 + 168);
  *(__m128 *)(v3 + 160) = _mm_loadh_ps((const double *)v229.m128i_i64);
  if ( v186 )
    sub_4343A0(v186);
  v187 = (char *)v2[22];
  v188 = operator new(0xD8u);
  *(_QWORD *)(v188 + 8) = 0x100000001LL;
  *(_QWORD *)v188 = off_2C43258;
  v189 = *v187;
  v230 = v188 + 16;
  v190 = v189 & 1 | *(_BYTE *)(v188 + 16) & 0xFE;
  *(_BYTE *)(v188 + 16) = v190;
  v191 = *v187 & 2 | v190 & 0xFD;
  *(_BYTE *)(v188 + 16) = v191;
  v192 = *v187 & 4 | v191 & 0xFB;
  *(_BYTE *)(v188 + 16) = v192;
  v193 = *v187 & 8 | v192 & 0xF7;
  *(_BYTE *)(v188 + 16) = v193;
  v194 = *v187 & 0x10 | v193 & 0xEF;
  *(_BYTE *)(v188 + 16) = v194;
  *(_BYTE *)(v188 + 16) = *v187 & 0x20 | v194 & 0xDF;
  *(_DWORD *)(v188 + 20) = *((_DWORD *)v187 + 1);
  *(_DWORD *)(v188 + 24) = *((_DWORD *)v187 + 2);
  *(_DWORD *)(v188 + 28) = *((_DWORD *)v187 + 3);
  *(_DWORD *)(v188 + 32) = *((_DWORD *)v187 + 4);
  *(_QWORD *)(v188 + 40) = v188 + 56;
  sub_12FAA20((_QWORD *)(v188 + 40), *((_BYTE **)v187 + 3), *((_QWORD *)v187 + 3) + *((_QWORD *)v187 + 4));
  *(_QWORD *)(v188 + 72) = v188 + 88;
  sub_12FAA20((_QWORD *)(v188 + 72), *((_BYTE **)v187 + 7), *((_QWORD *)v187 + 7) + *((_QWORD *)v187 + 8));
  sub_C23620(v188 + 104, (__int64 *)v187 + 11);
  v195 = *((_QWORD *)v187 + 15) - *((_QWORD *)v187 + 14);
  *(_QWORD *)(v188 + 144) = 0;
  *(_OWORD *)(v188 + 128) = 0;
  v196 = 0xCCCCCCCCCCCCCCCDLL * (v195 >> 3);
  if ( v196 )
  {
    if ( v196 <= 0x666666666666666LL )
    {
      v196 = operator new(v195);
      goto LABEL_78;
    }
LABEL_98:
    std::__throw_bad_alloc();
  }
LABEL_78:
  v229.m128i_i64[0] = v196;
  v197 = _mm_loadl_epi64(&v229);
  *(_QWORD *)(v188 + 144) = v196 + v195;
  *(__m128i *)(v188 + 128) = _mm_unpacklo_epi64(v197, v197);
  v198 = *((_QWORD *)v187 + 15);
  v199 = *((_QWORD *)v187 + 14);
  if ( v198 != v199 )
  {
    v231 = v196;
    v232 = v199;
    v200 = v199;
    v201 = v198;
    v202 = v2;
    v203 = v3;
    v204 = (_QWORD *)v196;
    do
    {
      v205 = v204;
      v229.m128i_i64[0] = v201;
      v200 += 40LL;
      *v204 = v204 + 2;
      v204 += 5;
      sub_12FAA20(v205, *(_BYTE **)(v200 - 40), *(_QWORD *)(v200 - 40) + *(_QWORD *)(v200 - 32));
      v201 = v229.m128i_i64[0];
      *((_DWORD *)v204 - 2) = *(_DWORD *)(v200 - 8);
    }
    while ( v201 != v200 );
    v3 = v203;
    v2 = v202;
    v196 = v231 + 8 * ((v201 - 40 - v232) >> 3) + 40;
  }
  *(_QWORD *)(v188 + 136) = v196;
  v229.m128i_i64[0] = v188;
  *(_QWORD *)(v188 + 152) = v188 + 168;
  v206 = *((_BYTE **)v187 + 17);
  v207 = (__int64)&v206[*((_QWORD *)v187 + 18)];
  v229 = (__m128i)_mm_loadh_ps((const double *)v229.m128i_i64);
  sub_12FAA20((_QWORD *)(v188 + 152), v206, v207);
  *(_QWORD *)(v188 + 184) = v188 + 200;
  sub_12FAA20((_QWORD *)(v188 + 184), *((_BYTE **)v187 + 21), *((_QWORD *)v187 + 21) + *((_QWORD *)v187 + 22));
  v208 = *(volatile signed __int32 **)(v3 + 184);
  *(__m128i *)(v3 + 176) = _mm_load_si128(&v229);
  if ( v208 )
    sub_4343A0(v208);
  v209 = (int *)v2[24];
  result = operator new(0x18u);
  v211 = *(volatile signed __int32 **)(v3 + 200);
  *(_QWORD *)(result + 8) = 0x100000001LL;
  *(_QWORD *)result = off_2C43290;
  v212 = *v209;
  *(_QWORD *)(v3 + 200) = result;
  *(_DWORD *)(result + 16) = v212;
  *(_QWORD *)(v3 + 192) = result + 16;
  if ( v211 )
    return sub_4343A0(v211);
  return result;
}
