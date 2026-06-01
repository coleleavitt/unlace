__int64 *__fastcall sub_1FF6310(__int64 a1, __int64 *a2, size_t a3, __int64 a4)
{
  __int64 *v5; // rbp
  size_t v6; // rbx
  __m128i *v7; // rdx
  __int64 **v9; // r15
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r13
  unsigned int v14; // eax
  int v15; // eax
  __int64 *v16; // r14
  __int64 v17; // r15
  __int64 v18; // rax
  size_t v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // r13
  unsigned int v23; // eax
  int v24; // eax
  __int64 *v25; // rsi
  __int64 v26; // rax
  size_t v27; // rsi
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // r13
  unsigned int v31; // eax
  int v32; // eax
  __int64 *v33; // rsi
  size_t v34; // rax
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // r13
  unsigned int v38; // eax
  int v39; // eax
  __int64 *v40; // rsi
  size_t v41; // rax
  __int64 v42; // r14
  __int64 v43; // rdx
  __int64 v44; // r13
  unsigned int v45; // eax
  int v46; // eax
  __int64 *v47; // rsi
  size_t v48; // rax
  __int64 v49; // r14
  __int64 v50; // rdx
  __int64 v51; // r13
  unsigned int v52; // eax
  int v53; // eax
  __int64 *v54; // rsi
  unsigned int v55; // r13d
  size_t v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r14
  unsigned int v60; // eax
  int v61; // eax
  __int64 *v62; // rsi
  __int64 v63; // r10
  __int64 v64; // rax
  __int64 *v65; // rdx
  __int64 *v66; // r14
  __int64 *v67; // r13
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // r13
  const void *v71; // r14
  const void *v72; // rax
  size_t v73; // rdx
  __int64 *v74; // r14
  __int64 (__fastcall *v75)(__int64, const void *, __int64, const void *, size_t); // rax
  char v76; // al
  __m128i si128; // xmm0
  __m128i *v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r13
  const void *v82; // r14
  const void *v83; // rax
  size_t v84; // rdx
  __int64 *v85; // r14
  __int64 (__fastcall *v86)(__int64, const void *, __int64, const void *, size_t); // rax
  __int64 *v87; // r13
  __int64 *v88; // r14
  __int64 *v89; // rbp
  __int64 v90; // r13
  __int64 v91; // rax
  __int64 *v92; // rax
  __int64 v93; // rdx
  __int64 **v94; // r10
  __int64 **v95; // r13
  __int64 v96; // r12
  __int64 *v97; // rcx
  __int64 *v98; // r8
  int v99; // eax
  __int64 (__fastcall *v100)(__int64, const void *, __int64, const void *, size_t); // rax
  const void *v101; // r14
  __int64 v102; // rdx
  __int64 v103; // r13
  const void *v104; // rax
  size_t v105; // rdx
  __int64 *v106; // r14
  __int64 (__fastcall *v107)(__int64, const void *, __int64, const void *, size_t); // rax
  __m128i v108; // xmm0
  __int64 *v109; // r14
  __int64 v110; // rbx
  __int64 *v111; // r12
  __int64 *v112; // rbp
  __int64 v113; // r13
  __int64 v114; // rax
  __int64 *v115; // rax
  __int64 v116; // rdx
  __int64 **v117; // r10
  size_t v118; // r13
  __int64 **v119; // rbx
  __int64 *v120; // rcx
  __int64 *v121; // r8
  int v122; // eax
  __int64 (__fastcall *v123)(__int64, const void *, __int64, const void *, size_t); // rax
  const void *v124; // r14
  __int64 v125; // rdx
  __int64 v126; // r13
  const void *v127; // rax
  size_t v128; // rdx
  __int64 *v129; // r14
  __int64 (__fastcall *v130)(__int64, const void *, __int64, const void *, size_t); // rax
  __int64 *v131; // rdx
  __int64 *v132; // r14
  __int64 *v133; // rbp
  __int64 v134; // r13
  __int64 v135; // rax
  __int64 *v136; // rax
  __int64 v137; // rdx
  __int64 **v138; // r10
  size_t v139; // r15
  __int64 **v140; // rbx
  __int64 *v141; // rcx
  __int64 *v142; // r8
  int v143; // eax
  __int64 (__fastcall *v144)(__int64, const void *, __int64, const void *, size_t); // rax
  const void *v145; // r14
  __int64 v146; // rdx
  __int64 v147; // r13
  const void *v148; // rax
  size_t v149; // rdx
  __int64 *v150; // r14
  __int64 *v151; // rax
  __int64 *v152; // r14
  __int64 *v153; // r13
  __int64 v154; // rax
  __int64 *v155; // r12
  size_t v156; // rbp
  __int64 v157; // rbx
  __int64 v158; // rax
  __int64 *v159; // rax
  __int64 v160; // rdx
  __int64 v161; // rax
  void *v162; // rdi
  __int64 **v163; // r15
  size_t v164; // r13
  __int64 **v165; // rbx
  __int64 *v166; // rcx
  __int64 *v167; // r8
  int v168; // eax
  __int64 (__fastcall *v169)(__int64, const void *, __int64, const void *, size_t); // rax
  const void *v170; // r13
  __int64 v171; // rdx
  __int64 v172; // r14
  const void *v173; // rax
  size_t v174; // rdx
  __int64 *v175; // r14
  __int64 *v176; // rax
  __int64 *v177; // r13
  __int64 *v178; // r14
  __int64 v179; // rax
  __int64 *v180; // r12
  size_t v181; // rbp
  __int64 v182; // rbx
  __int64 v183; // rax
  __int64 *v184; // rcx
  __int64 *v185; // rax
  __int64 v186; // rdx
  __int64 v187; // rax
  __int64 **v188; // r12
  __int64 *v189; // rcx
  __int64 *v190; // r8
  int v191; // eax
  __int64 (__fastcall *v192)(__int64, const void *, __int64, const void *, size_t); // rax
  __int64 v193; // rax
  __int64 v194; // rdx
  __int64 v195; // r14
  const void *v196; // r13
  const void *v197; // rax
  size_t v198; // rdx
  __int64 v199; // r10
  int v200; // eax
  __int64 *v201; // rdx
  __int64 *v202; // rdx
  __int64 *v203; // r13
  __int64 v204; // r9
  __int64 *v205; // r14
  __int64 *v206; // r12
  __int64 v207; // rbp
  __int64 v208; // rax
  __int64 *v209; // rcx
  __int64 *v210; // rax
  __int64 v211; // rdx
  void *v212; // rdi
  size_t v213; // r12
  __int64 **v214; // rbx
  __int64 *v215; // rcx
  __int64 *v216; // r8
  int v217; // eax
  __int64 (__fastcall *v218)(__int64, const void *, __int64, const void *, size_t); // rax
  void *v219; // rdi
  __int64 *v220; // rdx
  __int64 v221; // [rsp+10h] [rbp-178h]
  __int64 *v222; // [rsp+10h] [rbp-178h]
  __int64 *v223; // [rsp+18h] [rbp-170h]
  __int64 **v224; // [rsp+18h] [rbp-170h]
  __int64 v225; // [rsp+20h] [rbp-168h]
  __int64 v226; // [rsp+20h] [rbp-168h]
  __int64 **v227; // [rsp+20h] [rbp-168h]
  int v228; // [rsp+28h] [rbp-160h]
  __int64 *v229; // [rsp+28h] [rbp-160h]
  __int64 *v230; // [rsp+30h] [rbp-158h]
  __int64 *v231; // [rsp+30h] [rbp-158h]
  __int64 *v232; // [rsp+30h] [rbp-158h]
  __int64 v233; // [rsp+38h] [rbp-150h]
  __int64 *v234; // [rsp+38h] [rbp-150h]
  __int64 **v235; // [rsp+38h] [rbp-150h]
  int v236; // [rsp+40h] [rbp-148h]
  __int64 v237; // [rsp+40h] [rbp-148h]
  __int64 *v238; // [rsp+40h] [rbp-148h]
  __int64 *v239; // [rsp+48h] [rbp-140h]
  size_t v240; // [rsp+48h] [rbp-140h]
  __int64 *v241; // [rsp+48h] [rbp-140h]
  __int64 *v242; // [rsp+48h] [rbp-140h]
  unsigned int v243; // [rsp+50h] [rbp-138h]
  __int64 *v244; // [rsp+50h] [rbp-138h]
  __int64 *v245; // [rsp+50h] [rbp-138h]
  __int64 v246; // [rsp+58h] [rbp-130h]
  __int64 *v247; // [rsp+58h] [rbp-130h]
  __int64 v248; // [rsp+60h] [rbp-128h]
  __int64 *v249; // [rsp+60h] [rbp-128h]
  __int64 *v250; // [rsp+60h] [rbp-128h]
  __int64 *v251; // [rsp+60h] [rbp-128h]
  __int64 v252; // [rsp+60h] [rbp-128h]
  __int64 v253; // [rsp+60h] [rbp-128h]
  __int64 v254; // [rsp+60h] [rbp-128h]
  __int64 v255; // [rsp+68h] [rbp-120h]
  __int64 *v256; // [rsp+68h] [rbp-120h]
  __int64 *v257; // [rsp+68h] [rbp-120h]
  __int64 **v258; // [rsp+68h] [rbp-120h]
  unsigned int v259; // [rsp+70h] [rbp-118h]
  __int64 v260; // [rsp+70h] [rbp-118h]
  __int64 *v261; // [rsp+78h] [rbp-110h]
  __int64 *v262; // [rsp+80h] [rbp-108h]
  __int64 *v263; // [rsp+80h] [rbp-108h]
  unsigned int v264; // [rsp+88h] [rbp-100h]
  __int64 v265; // [rsp+88h] [rbp-100h]
  __int64 v266; // [rsp+90h] [rbp-F8h]
  __int64 v267; // [rsp+90h] [rbp-F8h]
  __int64 v268; // [rsp+90h] [rbp-F8h]
  __int64 v269; // [rsp+90h] [rbp-F8h]
  __int64 v270; // [rsp+90h] [rbp-F8h]
  __int64 v271; // [rsp+98h] [rbp-F0h]
  __int64 **v272; // [rsp+98h] [rbp-F0h]
  __int64 *v273; // [rsp+A0h] [rbp-E8h]
  __int64 v274; // [rsp+A0h] [rbp-E8h]
  __int64 *v275; // [rsp+A8h] [rbp-E0h]
  __int64 *v276; // [rsp+B0h] [rbp-D8h]
  __int64 *v277; // [rsp+B8h] [rbp-D0h]
  char v278; // [rsp+CEh] [rbp-BAh] BYREF
  char v279; // [rsp+CFh] [rbp-B9h] BYREF
  void *v280[2]; // [rsp+D0h] [rbp-B8h] BYREF
  __int64 v281; // [rsp+E0h] [rbp-A8h]
  __int64 *v282; // [rsp+F0h] [rbp-98h] BYREF
  size_t v283; // [rsp+F8h] [rbp-90h]
  __int16 v284; // [rsp+110h] [rbp-78h]
  __int64 *v285; // [rsp+120h] [rbp-68h] BYREF
  size_t v286; // [rsp+128h] [rbp-60h]
  __int16 v287; // [rsp+140h] [rbp-48h]

  v5 = a2;
  v6 = a3;
  v285 = a2;
  v286 = a3;
  v287 = 261;
  if ( (unsigned __int8)sub_228B190(&v285, 0) )
  {
    v7 = *(__m128i **)(a4 + 32);
    if ( *(_QWORD *)(a4 + 24) - (_QWORD)v7 > 0x1Cu )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AAEA0);
      qmemcpy(&v7[1], "elative paths", 13);
      *v7 = si128;
      *(_QWORD *)(a4 + 32) += 29LL;
    }
    else
    {
      sub_227BF10(a4, "Cannot resolve relative paths", 29);
    }
    return nullptr;
  }
  v9 = *(__int64 ***)a1;
  v10 = *(_QWORD *)(a1 + 8);
  v278 = 0;
  v221 = v10;
  if ( !*((_DWORD *)v9 + 11) )
  {
    v68 = sub_228AA60(a2, v6, 0);
    v70 = v69;
    v71 = (const void *)v68;
    v72 = (const void *)sub_228AA60(*v9, v9[1], 0);
    if ( v73 != v70 || v73 && memcmp(v72, v71, v73) )
      goto LABEL_63;
    v67 = *v9;
    v74 = v9[1];
    v75 = *(__int64 (__fastcall **)(__int64, const void *, __int64, const void *, size_t))(*(_QWORD *)v221 + 16LL);
    if ( v75 == sub_1FF58F0 )
    {
      if ( v74 == (__int64 *)v6 && (!v6 || !memcmp(*v9, a2, v6)) )
        goto LABEL_90;
      v282 = a2;
      v284 = 261;
      v283 = v6;
      v287 = 261;
      v285 = v67;
      v286 = (size_t)v74;
      if ( (unsigned int)sub_228C2E0(&v285, &v282, v280) || !LOBYTE(v280[0]) )
      {
LABEL_63:
        v76 = v278;
        v67 = nullptr;
        goto LABEL_64;
      }
    }
    else if ( !(unsigned __int8)v75(v221, *v9, (__int64)v9[1], a2, v6) )
    {
      goto LABEL_63;
    }
    v67 = *v9;
    goto LABEL_90;
  }
  v11 = sub_228AA60(a2, v6, 0);
  v13 = v12;
  v14 = sub_2244B30(v11, v12);
  v15 = sub_2244E60(v9 + 4, v11, v13, v14);
  if ( v15 == -1 )
    sub_1FF5C50(&v285, &v9[4][*((unsigned int *)v9 + 10)], 1);
  else
    sub_1FF5C50(&v285, &v9[4][v15], 1);
  v16 = v285;
  sub_1FF5C50(&v285, &v9[4][*((unsigned int *)v9 + 10)], 1);
  if ( v285 == v16 )
    goto LABEL_63;
  v17 = *v16;
  if ( !*(_DWORD *)(*v16 + 52) )
  {
    v79 = sub_228AA60(a2, v6, 0);
    v81 = v80;
    v82 = (const void *)v79;
    v83 = (const void *)sub_228AA60(*(_QWORD *)(v17 + 8), *(_QWORD *)(v17 + 16), 0);
    if ( v84 != v81 || v84 && memcmp(v83, v82, v84) )
      goto LABEL_55;
    v67 = *(__int64 **)(v17 + 8);
    v85 = *(__int64 **)(v17 + 16);
    v86 = *(__int64 (__fastcall **)(__int64, const void *, __int64, const void *, size_t))(*(_QWORD *)v221 + 16LL);
    if ( v86 == sub_1FF58F0 )
    {
      if ( v85 == (__int64 *)v6 && (!v6 || !memcmp(*(const void **)(v17 + 8), a2, v6)) )
        goto LABEL_82;
      v282 = a2;
      v287 = 261;
      v284 = 261;
      v283 = v6;
      v285 = v67;
      v286 = (size_t)v85;
      if ( (unsigned int)sub_228C2E0(&v285, &v282, v280) || !LOBYTE(v280[0]) )
        goto LABEL_55;
    }
    else if ( !(unsigned __int8)v86(v221, *(const void **)(v17 + 8), *(_QWORD *)(v17 + 16), a2, v6) )
    {
      goto LABEL_55;
    }
    v67 = *(__int64 **)(v17 + 8);
    v85 = *(__int64 **)(v17 + 16);
    goto LABEL_82;
  }
  v18 = (unsigned int)(v13 + 1);
  v19 = v6 - v18;
  v228 = v13 + 1;
  if ( v6 - v18 > v6 )
    v19 = v6;
  v20 = sub_228AA60(v5, v19, 0);
  v22 = v21;
  v23 = sub_2244B30(v20, v21);
  v24 = sub_2244E60(v17 + 40, v20, v22, v23);
  if ( v24 == -1 )
    v25 = (__int64 *)(*(_QWORD *)(v17 + 40) + 8LL * *(unsigned int *)(v17 + 48));
  else
    v25 = (__int64 *)(*(_QWORD *)(v17 + 40) + 8LL * v24);
  sub_1FF5C50(&v285, v25, 1);
  v223 = v285;
  sub_1FF5C50(&v285, (__int64 *)(*(_QWORD *)(v17 + 40) + 8LL * *(unsigned int *)(v17 + 48)), 1);
  if ( v285 == v223 )
    goto LABEL_54;
  v225 = *v223;
  if ( !*(_DWORD *)(*v223 + 52) )
  {
    v101 = (const void *)sub_228AA60(v5, v6, 0);
    v103 = v102;
    v104 = (const void *)sub_228AA60(*(_QWORD *)(v225 + 8), *(_QWORD *)(v225 + 16), 0);
    if ( v105 != v103 || v105 && memcmp(v104, v101, v105) )
      goto LABEL_68;
    v67 = *(__int64 **)(v225 + 8);
    v106 = *(__int64 **)(v225 + 16);
    v107 = *(__int64 (__fastcall **)(__int64, const void *, __int64, const void *, size_t))(*(_QWORD *)v221 + 16LL);
    if ( v107 == sub_1FF58F0 )
    {
      if ( v106 == (__int64 *)v6 && (!v6 || !memcmp(*(const void **)(v225 + 8), v5, v6)) )
        goto LABEL_128;
      v287 = 261;
      v284 = 261;
      v282 = v5;
      v283 = v6;
      v285 = v67;
      v286 = (size_t)v106;
      if ( (unsigned int)sub_228C2E0(&v285, &v282, v280) || !LOBYTE(v280[0]) )
        goto LABEL_68;
    }
    else if ( !(unsigned __int8)v107(v221, *(const void **)(v225 + 8), *(_QWORD *)(v225 + 16), v5, v6) )
    {
      goto LABEL_68;
    }
    v67 = *(__int64 **)(v225 + 8);
    v106 = *(__int64 **)(v225 + 16);
    goto LABEL_128;
  }
  v26 = (unsigned int)(v228 + v22 + 1);
  v27 = v6 - v26;
  v236 = v228 + v22 + 1;
  if ( v6 - v26 > v6 )
    v27 = v6;
  v28 = sub_228AA60(v5, v27, 0);
  v30 = v29;
  v31 = sub_2244B30(v28, v29);
  v32 = sub_2244E60(v225 + 40, v28, v30, v31);
  if ( v32 == -1 )
    v33 = (__int64 *)(*(_QWORD *)(v225 + 40) + 8LL * *(unsigned int *)(v225 + 48));
  else
    v33 = (__int64 *)(*(_QWORD *)(v225 + 40) + 8LL * v32);
  sub_1FF5C50(&v285, v33, 1);
  v230 = v285;
  sub_1FF5C50(&v285, (__int64 *)(*(_QWORD *)(v225 + 40) + 8LL * *(unsigned int *)(v225 + 48)), 1);
  if ( v285 == v230 )
    goto LABEL_140;
  v233 = *v230;
  if ( !*(_DWORD *)(*v230 + 52) )
  {
    v124 = (const void *)sub_228AA60(v5, v6, 0);
    v126 = v125;
    v127 = (const void *)sub_228AA60(*(_QWORD *)(v233 + 8), *(_QWORD *)(v233 + 16), 0);
    if ( v128 != v126 || v128 && memcmp(v127, v124, v128) )
      goto LABEL_139;
    v67 = *(__int64 **)(v233 + 8);
    v129 = *(__int64 **)(v233 + 16);
    v130 = *(__int64 (__fastcall **)(__int64, const void *, __int64, const void *, size_t))(*(_QWORD *)v221 + 16LL);
    if ( v130 == sub_1FF58F0 )
    {
      if ( (__int64 *)v6 == v129 && (!v6 || !memcmp(*(const void **)(v233 + 8), v5, v6)) )
        goto LABEL_182;
      v284 = 261;
      v282 = v5;
      v283 = v6;
      v287 = 261;
      v285 = v67;
      v286 = (size_t)v129;
      if ( (unsigned int)sub_228C2E0(&v285, &v282, v280) || !LOBYTE(v280[0]) )
        goto LABEL_139;
    }
    else if ( !(unsigned __int8)v130(v221, *(const void **)(v233 + 8), *(_QWORD *)(v233 + 16), v5, v6) )
    {
      goto LABEL_139;
    }
    v67 = *(__int64 **)(v233 + 8);
    v129 = *(__int64 **)(v233 + 16);
LABEL_182:
    v76 = v278;
    if ( v129 )
      goto LABEL_64;
LABEL_52:
    if ( !v278 )
      goto LABEL_140;
    goto LABEL_53;
  }
  v243 = v236 + v30 + 1;
  v34 = v6 - v243;
  if ( v34 > v6 )
    v34 = v6;
  v35 = sub_228AA60(v5, v34, 0);
  v37 = v36;
  v38 = sub_2244B30(v35, v36);
  v39 = sub_2244E60(v233 + 40, v35, v37, v38);
  if ( v39 == -1 )
    v40 = (__int64 *)(*(_QWORD *)(v233 + 40) + 8LL * *(unsigned int *)(v233 + 48));
  else
    v40 = (__int64 *)(*(_QWORD *)(v233 + 40) + 8LL * v39);
  sub_1FF5C50(&v285, v40, 1);
  v239 = v285;
  sub_1FF5C50(&v285, (__int64 *)(*(_QWORD *)(v233 + 40) + 8LL * *(unsigned int *)(v233 + 48)), 1);
  if ( v285 == v239 )
    goto LABEL_138;
  v246 = *v239;
  if ( !*(_DWORD *)(*v239 + 52) )
  {
    v145 = (const void *)sub_228AA60(v5, v6, 0);
    v147 = v146;
    v148 = (const void *)sub_228AA60(*(_QWORD *)(v246 + 8), *(_QWORD *)(v246 + 16), 0);
    if ( v149 == v147
      && (!v149 || !memcmp(v148, v145, v149))
      && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *, size_t))(*(_QWORD *)v221 + 16LL))(
           v221,
           *(_QWORD *)(v246 + 8),
           *(_QWORD *)(v246 + 16),
           v5,
           v6) )
    {
      v67 = *(__int64 **)(v246 + 8);
      v150 = *(__int64 **)(v246 + 16);
      goto LABEL_226;
    }
    goto LABEL_137;
  }
  v259 = v243 + v37 + 1;
  v41 = v6 - v259;
  if ( v41 > v6 )
    v41 = v6;
  v42 = sub_228AA60(v5, v41, 0);
  v44 = v43;
  v45 = sub_2244B30(v42, v43);
  v46 = sub_2244E60(v246 + 40, v42, v44, v45);
  if ( v46 == -1 )
    v47 = (__int64 *)(*(_QWORD *)(v246 + 40) + 8LL * *(unsigned int *)(v246 + 48));
  else
    v47 = (__int64 *)(*(_QWORD *)(v246 + 40) + 8LL * v46);
  sub_1FF5C50(&v285, v47, 1);
  v261 = v285;
  sub_1FF5C50(&v285, (__int64 *)(*(_QWORD *)(v246 + 40) + 8LL * *(unsigned int *)(v246 + 48)), 1);
  if ( v285 != v261 )
  {
    v255 = *v261;
    if ( !*(_DWORD *)(*v261 + 52) )
    {
      v170 = (const void *)sub_228AA60(v5, v6, 0);
      v172 = v171;
      v173 = (const void *)sub_228AA60(*(_QWORD *)(v255 + 8), *(_QWORD *)(v255 + 16), 0);
      if ( v174 == v172
        && (!v174 || !memcmp(v173, v170, v174))
        && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *, size_t))(*(_QWORD *)v221 + 16LL))(
             v221,
             *(_QWORD *)(v255 + 8),
             *(_QWORD *)(v255 + 16),
             v5,
             v6) )
      {
        v67 = *(__int64 **)(v255 + 8);
        v175 = *(__int64 **)(v255 + 16);
        goto LABEL_268;
      }
      goto LABEL_135;
    }
    v264 = v259 + v44 + 1;
    v48 = v6 - v264;
    if ( v48 > v6 )
      v48 = v6;
    v49 = sub_228AA60(v5, v48, 0);
    v51 = v50;
    v52 = sub_2244B30(v49, v50);
    v53 = sub_2244E60(v255 + 40, v49, v51, v52);
    if ( v53 == -1 )
      v54 = (__int64 *)(*(_QWORD *)(v255 + 40) + 8LL * *(unsigned int *)(v255 + 48));
    else
      v54 = (__int64 *)(*(_QWORD *)(v255 + 40) + 8LL * v53);
    sub_1FF5C50(&v285, v54, 1);
    v262 = v285;
    sub_1FF5C50(&v285, (__int64 *)(*(_QWORD *)(v255 + 40) + 8LL * *(unsigned int *)(v255 + 48)), 1);
    if ( v285 == v262 )
      goto LABEL_134;
    v248 = *v262;
    if ( !*(_DWORD *)(*v262 + 52) )
    {
      v193 = sub_228AA60(v5, v6, 0);
      v195 = v194;
      v196 = (const void *)v193;
      v197 = (const void *)sub_228AA60(*(_QWORD *)(v248 + 8), *(_QWORD *)(v248 + 16), 0);
      if ( v198 == v195 )
      {
        v199 = v248;
        if ( !v198 || (v200 = memcmp(v197, v196, v198), v199 = v248, !v200) )
        {
          v254 = v199;
          if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *, size_t))(*(_QWORD *)v221 + 16LL))(
                 v221,
                 *(_QWORD *)(v199 + 8),
                 *(_QWORD *)(v199 + 16),
                 v5,
                 v6) )
          {
            v67 = *(__int64 **)(v254 + 8);
            v66 = *(__int64 **)(v254 + 16);
            goto LABEL_48;
          }
        }
      }
LABEL_133:
      v67 = nullptr;
      if ( v278 )
        goto LABEL_51;
      goto LABEL_134;
    }
    v55 = v264 + v51 + 1;
    v56 = v6 - v55;
    if ( v56 > v6 )
      v56 = v6;
    v57 = sub_228AA60(v5, v56, 0);
    v59 = v58;
    v266 = v57;
    v60 = sub_2244B30(v57, v58);
    v61 = sub_2244E60(v248 + 40, v266, v59, v60);
    v267 = v248;
    if ( v61 == -1 )
      v62 = (__int64 *)(*(_QWORD *)(v248 + 40) + 8LL * *(unsigned int *)(v248 + 48));
    else
      v62 = (__int64 *)(*(_QWORD *)(v248 + 40) + 8LL * v61);
    sub_1FF5C50(&v285, v62, 1);
    v249 = v285;
    sub_1FF5C50(&v285, (__int64 *)(*(_QWORD *)(v267 + 40) + 8LL * *(unsigned int *)(v267 + 48)), 1);
    v63 = v267;
    if ( v285 != v249 )
    {
      v64 = sub_1FF5DD0((__int64 **)(*v249 + 8), v221, v5, v6, &v278, v55 + (unsigned int)v59 + 1);
      v66 = v65;
      if ( v65 || (v63 = v267, v278) )
      {
        v67 = (__int64 *)v64;
        goto LABEL_48;
      }
    }
    if ( !v55 )
      goto LABEL_133;
    v281 = 0;
    *(_OWORD *)v280 = 0;
    if ( *(_QWORD *)(v63 + 16) )
    {
      if ( *(_DWORD *)(v63 + 52) )
      {
        v268 = v63;
        sub_1FF5C50(&v285, *(__int64 **)(v63 + 40), *(_DWORD *)(v63 + 48) == 0);
        v203 = v285;
        sub_1FF5C50(&v285, (__int64 *)(*(_QWORD *)(v268 + 40) + 8LL * *(unsigned int *)(v268 + 48)), 1);
        v204 = a4;
        v205 = v285;
        v206 = v5;
        v207 = v268;
        while ( v205 != v203 )
        {
          if ( v203 != v249 )
          {
            v274 = v204;
            v269 = *v203 + 8;
            sub_1FF5C50(&v285, (__int64 *)(*(_QWORD *)(v207 + 40) + 8LL * *(unsigned int *)(v207 + 48)), 1);
            sub_1FF5C90(v269, (__int64)v280, v285);
            v204 = v274;
          }
          v208 = v203[1];
          v209 = v203 + 1;
          if ( !v208 || v208 == -8 )
          {
            v210 = v203 + 2;
            do
            {
              do
              {
                v211 = *v210;
                v209 = v210++;
              }
              while ( !v211 );
            }
            while ( v211 == -8 );
          }
          v203 = v209;
        }
        v5 = v206;
        a4 = v204;
      }
      else
      {
        v220 = *(__int64 **)(v63 + 8);
        v286 = *(_QWORD *)(v63 + 16);
        v285 = v220;
        sub_1075D80((__int64)v280, nullptr, &v285);
      }
    }
    v212 = v280[0];
    v272 = (__int64 **)v280[1];
    if ( v280[0] == v280[1] )
    {
      v66 = nullptr;
      v67 = nullptr;
      if ( v280[0] )
      {
LABEL_349:
        operator delete(v212);
        goto LABEL_48;
      }
      goto LABEL_49;
    }
    v270 = a4;
    v67 = nullptr;
    v213 = v6;
    v66 = nullptr;
    v214 = (__int64 **)v280[0];
    while ( 1 )
    {
      v218 = *(__int64 (__fastcall **)(__int64, const void *, __int64, const void *, size_t))(*(_QWORD *)v221 + 16LL);
      if ( v218 == sub_1FF58F0 )
      {
        v215 = v214[1];
        v216 = *v214;
        if ( (__int64 *)v213 != v215
          || (v277 = v214[1], v213) && (v276 = *v214, v217 = memcmp(v216, v5, v213), v216 = v276, v215 = v277, v217) )
        {
          v284 = 261;
          v282 = v5;
          v283 = v213;
          v287 = 261;
          v285 = v216;
          v286 = (size_t)v215;
          if ( (unsigned int)sub_228C2E0(&v285, &v282, &v279) || !v279 )
            goto LABEL_344;
        }
      }
      else if ( !(unsigned __int8)v218(v221, *v214, (__int64)v214[1], v5, v213) )
      {
        goto LABEL_344;
      }
      if ( v66 )
      {
        v6 = v213;
        v278 = 1;
        a4 = v270;
        if ( v280[0] )
        {
          operator delete(v280[0]);
          v67 = nullptr;
          goto LABEL_49;
        }
        goto LABEL_133;
      }
      v67 = *v214;
      v66 = v214[1];
LABEL_344:
      v214 += 2;
      if ( v272 == v214 )
      {
        v212 = v280[0];
        v6 = v213;
        a4 = v270;
        if ( v280[0] )
          goto LABEL_349;
LABEL_48:
        if ( v66 )
          goto LABEL_90;
LABEL_49:
        if ( v278 )
          goto LABEL_50;
LABEL_134:
        if ( !v264 )
          goto LABEL_135;
        v281 = 0;
        *(_OWORD *)v280 = 0;
        if ( *(_QWORD *)(v255 + 16) )
        {
          if ( *(_DWORD *)(v255 + 52) )
          {
            sub_1FF5C50(&v285, *(__int64 **)(v255 + 40), *(_DWORD *)(v255 + 48) == 0);
            v177 = v285;
            sub_1FF5C50(&v285, (__int64 *)(*(_QWORD *)(v255 + 40) + 8LL * *(unsigned int *)(v255 + 48)), 1);
            v178 = v285;
            v179 = a4;
            v180 = v5;
            v181 = v6;
            v182 = v179;
            while ( v178 != v177 )
            {
              if ( v177 != v262 )
              {
                v253 = *v177 + 8;
                sub_1FF5C50(&v285, (__int64 *)(*(_QWORD *)(v255 + 40) + 8LL * *(unsigned int *)(v255 + 48)), 1);
                sub_1FF5C90(v253, (__int64)v280, v285);
              }
              v183 = v177[1];
              v184 = v177 + 1;
              if ( v183 == -8 || !v183 )
              {
                v185 = v177 + 2;
                do
                {
                  do
                  {
                    v186 = *v185;
                    v184 = v185++;
                  }
                  while ( v186 == -8 );
                }
                while ( !v186 );
              }
              v177 = v184;
            }
            v187 = v182;
            v6 = v181;
            v5 = v180;
            a4 = v187;
          }
          else
          {
            v202 = *(__int64 **)(v255 + 8);
            v286 = *(_QWORD *)(v255 + 16);
            v285 = v202;
            sub_1075D80((__int64)v280, nullptr, &v285);
          }
        }
        v258 = (__int64 **)v280[1];
        if ( v280[0] == v280[1] )
        {
          v67 = (__int64 *)v280[0];
          if ( !v280[0] )
            goto LABEL_50;
          v219 = v280[0];
          goto LABEL_351;
        }
        v67 = nullptr;
        v175 = nullptr;
        v271 = a4;
        v188 = (__int64 **)v280[0];
LABEL_302:
        v192 = *(__int64 (__fastcall **)(__int64, const void *, __int64, const void *, size_t))(*(_QWORD *)v221 + 16LL);
        if ( v192 == sub_1FF58F0 )
        {
          v189 = v188[1];
          v190 = *v188;
          if ( (__int64 *)v6 == v189
            && ((v275 = v188[1], !v6) || (v273 = *v188, v191 = memcmp(v190, v5, v6), v190 = v273, v189 = v275, !v191))
            || (v282 = v5,
                v284 = 261,
                v283 = v6,
                v287 = 261,
                v285 = v190,
                v286 = (size_t)v189,
                !(unsigned int)sub_228C2E0(&v285, &v282, &v279))
            && v279 )
          {
LABEL_299:
            if ( v175 )
            {
              v219 = v280[0];
              a4 = v271;
              v278 = 1;
              if ( v280[0] )
              {
LABEL_351:
                operator delete(v219);
                v67 = nullptr;
                goto LABEL_50;
              }
LABEL_135:
              v67 = nullptr;
              if ( v278 )
                goto LABEL_52;
              break;
            }
            v67 = *v188;
            v175 = v188[1];
          }
        }
        else if ( (unsigned __int8)v192(v221, *v188, (__int64)v188[1], v5, v6) )
        {
          goto LABEL_299;
        }
        v188 += 2;
        if ( v258 == v188 )
        {
          a4 = v271;
          if ( v280[0] )
            operator delete(v280[0]);
LABEL_268:
          if ( !v175 )
          {
LABEL_50:
            if ( v278 )
              goto LABEL_51;
            break;
          }
LABEL_90:
          v76 = v278;
          goto LABEL_64;
        }
        goto LABEL_302;
      }
    }
  }
  if ( !v259 )
    goto LABEL_137;
  v281 = 0;
  *(_OWORD *)v280 = 0;
  if ( *(_QWORD *)(v246 + 16) )
  {
    if ( *(_DWORD *)(v246 + 52) )
    {
      sub_1FF5C50(&v285, *(__int64 **)(v246 + 40), *(_DWORD *)(v246 + 48) == 0);
      v152 = v285;
      sub_1FF5C50(&v285, (__int64 *)(*(_QWORD *)(v246 + 40) + 8LL * *(unsigned int *)(v246 + 48)), 1);
      v153 = v285;
      if ( v152 != v285 )
      {
        v154 = a4;
        v155 = v5;
        v156 = v6;
        v157 = v154;
        do
        {
          if ( v261 != v152 )
          {
            v252 = *v152 + 8;
            sub_1FF5C50(&v285, (__int64 *)(*(_QWORD *)(v246 + 40) + 8LL * *(unsigned int *)(v246 + 48)), 1);
            sub_1FF5C90(v252, (__int64)v280, v285);
          }
          v158 = v152[1];
          if ( v158 != -8 && v158 )
          {
            ++v152;
          }
          else
          {
            v159 = v152 + 2;
            do
            {
              do
              {
                v160 = *v159;
                v152 = v159++;
              }
              while ( v160 == -8 );
            }
            while ( !v160 );
          }
        }
        while ( v153 != v152 );
        v161 = v157;
        v6 = v156;
        v5 = v155;
        a4 = v161;
      }
    }
    else
    {
      v201 = *(__int64 **)(v246 + 8);
      v286 = *(_QWORD *)(v246 + 16);
      v285 = v201;
      sub_1075D80((__int64)v280, nullptr, &v285);
    }
  }
  v162 = v280[0];
  if ( v280[0] == v280[1] )
  {
    v67 = nullptr;
    v150 = nullptr;
    if ( v280[0] )
    {
LABEL_275:
      operator delete(v162);
      goto LABEL_226;
    }
LABEL_51:
    if ( v278 )
      goto LABEL_52;
    goto LABEL_138;
  }
  v150 = nullptr;
  v265 = v17;
  v163 = (__int64 **)v280[1];
  v247 = nullptr;
  v164 = v6;
  v165 = (__int64 **)v280[0];
  while ( 1 )
  {
    v169 = *(__int64 (__fastcall **)(__int64, const void *, __int64, const void *, size_t))(*(_QWORD *)v221 + 16LL);
    if ( v169 == sub_1FF58F0 )
    {
      v166 = v165[1];
      v167 = *v165;
      if ( v166 != (__int64 *)v164
        || (v257 = v165[1], v164) && (v263 = *v165, v168 = memcmp(v167, v5, v164), v167 = v263, v166 = v257, v168) )
      {
        v282 = v5;
        v284 = 261;
        v287 = 261;
        v283 = v164;
        v285 = v167;
        v286 = (size_t)v166;
        if ( (unsigned int)sub_228C2E0(&v285, &v282, &v279) || !v279 )
          goto LABEL_257;
      }
    }
    else if ( !(unsigned __int8)v169(v221, *v165, (__int64)v165[1], v5, v164) )
    {
      goto LABEL_257;
    }
    if ( v150 )
      break;
    v150 = v165[1];
    v247 = *v165;
LABEL_257:
    v165 += 2;
    if ( v163 == v165 )
    {
      v162 = v280[0];
      v6 = v164;
      v17 = v265;
      v67 = v247;
      if ( v280[0] )
        goto LABEL_275;
LABEL_226:
      v76 = v278;
      if ( !v150 )
        goto LABEL_51;
LABEL_64:
      if ( v76 )
        goto LABEL_69;
      return v67;
    }
  }
  v17 = v265;
  v6 = v164;
  v278 = 1;
  if ( v280[0] )
  {
    operator delete(v280[0]);
    v67 = nullptr;
    goto LABEL_51;
  }
LABEL_137:
  v67 = nullptr;
  if ( v278 )
  {
LABEL_53:
    if ( v278 )
      goto LABEL_56;
    goto LABEL_54;
  }
LABEL_138:
  if ( !v243 )
    goto LABEL_139;
  v281 = 0;
  *(_OWORD *)v280 = 0;
  v129 = *(__int64 **)(v233 + 16);
  if ( !v129 )
  {
    v67 = nullptr;
    goto LABEL_231;
  }
  if ( *(_DWORD *)(v233 + 52) )
  {
    sub_1FF5C50(&v285, *(__int64 **)(v233 + 40), *(_DWORD *)(v233 + 48) == 0);
    v132 = v285;
    sub_1FF5C50(&v285, (__int64 *)(*(_QWORD *)(v233 + 40) + 8LL * *(unsigned int *)(v233 + 48)), 1);
    v245 = v285;
    if ( v132 != v285 )
    {
      v250 = v5;
      v133 = v132;
      do
      {
        if ( v133 != v239 )
        {
          v134 = *v133 + 8;
          sub_1FF5C50(&v285, (__int64 *)(*(_QWORD *)(v233 + 40) + 8LL * *(unsigned int *)(v233 + 48)), 1);
          sub_1FF5C90(v134, (__int64)v280, v285);
        }
        v135 = v133[1];
        if ( v135 != -8 && v135 )
        {
          ++v133;
        }
        else
        {
          v136 = v133 + 2;
          do
          {
            do
            {
              v137 = *v136;
              v133 = v136++;
            }
            while ( v137 == -8 );
          }
          while ( !v137 );
        }
      }
      while ( v245 != v133 );
      v5 = v250;
    }
    v138 = (__int64 **)v280[0];
    v235 = (__int64 **)v280[1];
  }
  else
  {
    v176 = *(__int64 **)(v233 + 8);
    v286 = *(_QWORD *)(v233 + 16);
    v285 = v176;
    sub_1075D80((__int64)v280, nullptr, &v285);
    v138 = (__int64 **)v280[0];
    v235 = (__int64 **)v280[1];
  }
  v67 = nullptr;
  v129 = nullptr;
  if ( v138 == v235 )
  {
LABEL_231:
    if ( v280[0] )
      operator delete(v280[0]);
    goto LABEL_182;
  }
  v260 = v17;
  v139 = v6;
  v140 = v138;
  v251 = nullptr;
  while ( 1 )
  {
    v144 = *(__int64 (__fastcall **)(__int64, const void *, __int64, const void *, size_t))(*(_QWORD *)v221 + 16LL);
    if ( v144 == sub_1FF58F0 )
    {
      v141 = v140[1];
      v142 = *v140;
      if ( (__int64 *)v139 != v141
        || (v242 = v140[1], v139) && (v256 = *v140, v143 = memcmp(v142, v5, v139), v142 = v256, v141 = v242, v143) )
      {
        v282 = v5;
        v284 = 261;
        v283 = v139;
        v287 = 261;
        v285 = v142;
        v286 = (size_t)v141;
        if ( (unsigned int)sub_228C2E0(&v285, &v282, &v279) || !v279 )
          goto LABEL_216;
      }
    }
    else if ( !(unsigned __int8)v144(v221, *v140, (__int64)v140[1], v5, v139) )
    {
      goto LABEL_216;
    }
    if ( v129 )
      break;
    v129 = v140[1];
    v251 = *v140;
LABEL_216:
    v140 += 2;
    if ( v235 == v140 )
    {
      v6 = v139;
      v67 = v251;
      v17 = v260;
      goto LABEL_231;
    }
  }
  v6 = v139;
  v278 = 1;
  v17 = v260;
  if ( v280[0] )
  {
    operator delete(v280[0]);
    v67 = nullptr;
    goto LABEL_52;
  }
LABEL_139:
  if ( v278 )
    goto LABEL_55;
LABEL_140:
  if ( !v236 )
    goto LABEL_68;
  v281 = 0;
  *(_OWORD *)v280 = 0;
  v106 = *(__int64 **)(v225 + 16);
  if ( !v106 )
  {
    v67 = nullptr;
    goto LABEL_187;
  }
  if ( *(_DWORD *)(v225 + 52) )
  {
    sub_1FF5C50(&v285, *(__int64 **)(v225 + 40), *(_DWORD *)(v225 + 48) == 0);
    v109 = v285;
    sub_1FF5C50(&v285, (__int64 *)(*(_QWORD *)(v225 + 40) + 8LL * *(unsigned int *)(v225 + 48)), 1);
    if ( v109 != v285 )
    {
      v240 = v6;
      v110 = v225;
      v226 = a4;
      v111 = v109;
      v238 = v5;
      v112 = v285;
      do
      {
        if ( v111 != v230 )
        {
          v113 = *v111 + 8;
          sub_1FF5C50(&v285, (__int64 *)(*(_QWORD *)(v110 + 40) + 8LL * *(unsigned int *)(v110 + 48)), 1);
          sub_1FF5C90(v113, (__int64)v280, v285);
        }
        v114 = v111[1];
        if ( v114 && v114 != -8 )
        {
          ++v111;
        }
        else
        {
          v115 = v111 + 2;
          do
          {
            do
            {
              v116 = *v115;
              v111 = v115++;
            }
            while ( v116 == -8 );
          }
          while ( !v116 );
        }
      }
      while ( v112 != v111 );
      v5 = v238;
      v6 = v240;
      a4 = v226;
    }
    v117 = (__int64 **)v280[0];
    v227 = (__int64 **)v280[1];
  }
  else
  {
    v151 = *(__int64 **)(v225 + 8);
    v286 = *(_QWORD *)(v225 + 16);
    v285 = v151;
    sub_1075D80((__int64)v280, nullptr, &v285);
    v117 = (__int64 **)v280[0];
    v227 = (__int64 **)v280[1];
  }
  v67 = nullptr;
  v106 = nullptr;
  if ( v117 == v227 )
  {
LABEL_187:
    if ( v280[0] )
      operator delete(v280[0]);
LABEL_128:
    v76 = v278;
    if ( !v106 )
      goto LABEL_53;
    goto LABEL_64;
  }
  v241 = nullptr;
  v118 = v6;
  v119 = v117;
  while ( 1 )
  {
    v123 = *(__int64 (__fastcall **)(__int64, const void *, __int64, const void *, size_t))(*(_QWORD *)v221 + 16LL);
    if ( v123 == sub_1FF58F0 )
    {
      v120 = v119[1];
      v121 = *v119;
      if ( (__int64 *)v118 != v120
        || (v232 = v119[1], v118) && (v244 = *v119, v122 = memcmp(v121, v5, v118), v121 = v244, v120 = v232, v122) )
      {
        v282 = v5;
        v284 = 261;
        v283 = v118;
        v287 = 261;
        v285 = v121;
        v286 = (size_t)v120;
        if ( (unsigned int)sub_228C2E0(&v285, &v282, &v279) || !v279 )
          goto LABEL_164;
      }
    }
    else if ( !(unsigned __int8)v123(v221, *v119, (__int64)v119[1], v5, v118) )
    {
      goto LABEL_164;
    }
    if ( v106 )
      break;
    v106 = v119[1];
    v241 = *v119;
LABEL_164:
    v119 += 2;
    if ( v227 == v119 )
    {
      v6 = v118;
      v67 = v241;
      goto LABEL_187;
    }
  }
  v6 = v118;
  v278 = 1;
  if ( v280[0] )
  {
    operator delete(v280[0]);
    v67 = nullptr;
    goto LABEL_53;
  }
LABEL_68:
  v67 = nullptr;
  if ( v278 )
    goto LABEL_69;
LABEL_54:
  if ( !v228 )
    goto LABEL_55;
  v281 = 0;
  *(_OWORD *)v280 = 0;
  if ( !*(_QWORD *)(v17 + 16) )
    goto LABEL_55;
  if ( *(_DWORD *)(v17 + 52) )
  {
    sub_1FF5C50(&v285, *(__int64 **)(v17 + 40), *(_DWORD *)(v17 + 48) == 0);
    v87 = v285;
    sub_1FF5C50(&v285, (__int64 *)(*(_QWORD *)(v17 + 40) + 8LL * *(unsigned int *)(v17 + 48)), 1);
    v88 = v285;
    if ( v87 != v285 )
    {
      v229 = v5;
      v89 = v87;
      do
      {
        if ( v223 != v89 )
        {
          v90 = *v89 + 8;
          sub_1FF5C50(&v285, (__int64 *)(*(_QWORD *)(v17 + 40) + 8LL * *(unsigned int *)(v17 + 48)), 1);
          sub_1FF5C90(v90, (__int64)v280, v285);
        }
        v91 = v89[1];
        if ( v91 && v91 != -8 )
        {
          ++v89;
        }
        else
        {
          v92 = v89 + 2;
          do
          {
            do
            {
              v93 = *v92;
              v89 = v92++;
            }
            while ( v93 == -8 );
          }
          while ( !v93 );
        }
      }
      while ( v88 != v89 );
      v5 = v229;
    }
    v94 = (__int64 **)v280[0];
    v224 = (__int64 **)v280[1];
  }
  else
  {
    v131 = *(__int64 **)(v17 + 8);
    v286 = *(_QWORD *)(v17 + 16);
    v285 = v131;
    sub_1075D80((__int64)v280, nullptr, &v285);
    v94 = (__int64 **)v280[0];
    v224 = (__int64 **)v280[1];
  }
  if ( v94 == v224 )
  {
    v67 = nullptr;
    v85 = nullptr;
LABEL_169:
    if ( v224 )
      operator delete(v224);
LABEL_82:
    v76 = v278;
    if ( !v85 )
      goto LABEL_56;
    goto LABEL_64;
  }
  v85 = nullptr;
  v231 = nullptr;
  v95 = v94;
  v237 = a4;
  v96 = v221;
  while ( 1 )
  {
    v100 = *(__int64 (__fastcall **)(__int64, const void *, __int64, const void *, size_t))(*(_QWORD *)v96 + 16LL);
    if ( v100 == sub_1FF58F0 )
    {
      v97 = v95[1];
      v98 = *v95;
      if ( (__int64 *)v6 != v97
        || (v222 = v95[1], v6) && (v234 = *v95, v99 = memcmp(v98, v5, v6), v98 = v234, v97 = v222, v99) )
      {
        v287 = 261;
        v284 = 261;
        v282 = v5;
        v283 = v6;
        v285 = v98;
        v286 = (size_t)v97;
        if ( (unsigned int)sub_228C2E0(&v285, &v282, &v279) || !v279 )
          goto LABEL_114;
      }
    }
    else if ( !(unsigned __int8)v100(v96, *v95, (__int64)v95[1], v5, v6) )
    {
      goto LABEL_114;
    }
    if ( v85 )
      break;
    v85 = v95[1];
    v231 = *v95;
LABEL_114:
    v95 += 2;
    if ( v224 == v95 )
    {
      v67 = v231;
      a4 = v237;
      v224 = (__int64 **)v280[0];
      goto LABEL_169;
    }
  }
  a4 = v237;
  v278 = 1;
  if ( v280[0] )
    operator delete(v280[0]);
LABEL_55:
  v67 = nullptr;
LABEL_56:
  if ( !v278 )
    return nullptr;
LABEL_69:
  v78 = *(__m128i **)(a4 + 32);
  if ( *(_QWORD *)(a4 + 24) - (_QWORD)v78 > 0x10u )
  {
    v108 = _mm_load_si128((const __m128i *)&xmmword_23AAEB0);
    v78[1].m128i_i8[0] = 115;
    *v78 = v108;
    *(_QWORD *)(a4 + 32) += 17LL;
  }
  else
  {
    sub_227BF10(a4, "Path is ambiguous", 17);
  }
  return v67;
}
