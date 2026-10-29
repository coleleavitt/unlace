void __fastcall sub_1FF8A70(__int64 *a1, _BYTE *a2, size_t a3)
{
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  size_t v9; // rdx
  size_t v10; // r14
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // r8
  __int64 *v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r9d
  __int64 *v18; // r8
  __int64 v19; // rcx
  __m128i v20; // xmm0
  unsigned int v21; // eax
  __int64 v22; // rbp
  unsigned __int64 v23; // r15
  __int64 v24; // r15
  size_t v25; // rsi
  __int64 v26; // rax
  size_t v27; // rdx
  size_t v28; // r14
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 *v32; // r8
  __int64 *v33; // rax
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // rax
  __int64 v36; // r15
  size_t v37; // rsi
  __int64 v38; // rax
  size_t v39; // rdx
  size_t v40; // r14
  unsigned int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 *v44; // r8
  __int64 v45; // rax
  unsigned int v46; // r9d
  __int64 *v47; // r8
  __int64 v48; // rcx
  __m128i v49; // xmm0
  unsigned int v50; // eax
  __int64 *v51; // rax
  unsigned __int64 v52; // r15
  unsigned __int64 v53; // rax
  __int64 v54; // r15
  size_t v55; // rsi
  __int64 v56; // rax
  size_t v57; // rdx
  size_t v58; // r14
  unsigned int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 *v62; // r8
  __int64 *v63; // rax
  unsigned __int64 v64; // r15
  unsigned __int64 v65; // rax
  __int64 v66; // r15
  size_t v67; // rsi
  __int64 v68; // rax
  size_t v69; // rdx
  size_t v70; // r14
  unsigned int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 *v74; // r8
  __int64 *v75; // rax
  __int64 v76; // rbp
  char *v77; // rcx
  unsigned int v78; // eax
  __int64 v79; // r15
  size_t v80; // rax
  const void *v81; // r15
  size_t v82; // rdx
  size_t v83; // r14
  unsigned int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 *v87; // r8
  __int64 *v88; // rax
  __int64 v89; // r15
  char *v90; // rcx
  unsigned int v91; // eax
  __int64 v92; // rbp
  size_t v93; // rax
  const void *v94; // r14
  size_t v95; // rdx
  size_t v96; // rbp
  unsigned int v97; // eax
  unsigned int v98; // eax
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 *v101; // r9
  _QWORD *v102; // rax
  _BYTE *v103; // r15
  _BYTE *v104; // rdi
  __int64 v105; // rax
  size_t v106; // rdx
  size_t v107; // r14
  unsigned int v108; // eax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 *v111; // r8
  _QWORD *v112; // rax
  __int64 v113; // r14
  unsigned __int64 v114; // rsi
  __int64 v115; // rax
  size_t v116; // rdx
  size_t v117; // r14
  unsigned int v118; // eax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 *v121; // r8
  _QWORD *v122; // rax
  __int64 v123; // rax
  unsigned int v124; // r9d
  __int64 *v125; // r8
  __int64 v126; // rcx
  __m128i si128; // xmm0
  unsigned int v128; // eax
  __int64 v129; // rax
  unsigned int v130; // r9d
  __int64 *v131; // r8
  __int64 v132; // rcx
  __m128i v133; // xmm0
  unsigned int v134; // eax
  _BYTE *v135; // rdi
  __int64 v136; // rax
  void *v137; // rdi
  __int64 v138; // rax
  unsigned int v139; // r9d
  __int64 *v140; // r8
  __int64 v141; // rcx
  __m128i v142; // xmm0
  unsigned int v143; // eax
  __int64 v144; // r14
  unsigned __int64 v145; // rsi
  __int64 v146; // rax
  size_t v147; // rdx
  size_t v148; // r14
  unsigned int v149; // eax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 *v152; // r8
  _QWORD *v153; // rax
  __int64 v154; // r14
  unsigned __int64 v155; // rsi
  __int64 v156; // rax
  size_t v157; // rdx
  size_t v158; // r14
  unsigned int v159; // eax
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 *v162; // r8
  _QWORD *v163; // rax
  __int64 v164; // rax
  unsigned int v165; // r9d
  __int64 *v166; // r8
  __int64 v167; // rcx
  __m128i v168; // xmm0
  unsigned int v169; // eax
  size_t v170; // rdx
  size_t v171; // rdx
  __int64 v172; // rax
  unsigned int v173; // r9d
  __int64 *v174; // r8
  __int64 v175; // rcx
  __m128i v176; // xmm0
  unsigned int v177; // eax
  __int64 v178; // rax
  unsigned int v179; // r9d
  __int64 *v180; // r8
  __int64 v181; // rcx
  __m128i v182; // xmm0
  unsigned int v183; // eax
  __int64 v184; // rax
  unsigned int v185; // r9d
  __int64 *v186; // r8
  __int64 v187; // rcx
  __m128i v188; // xmm0
  unsigned int v189; // eax
  __int64 v190; // r14
  unsigned __int64 v191; // rsi
  unsigned __int64 v192; // rax
  bool v193; // cc
  __int64 v194; // rax
  size_t v195; // rdx
  size_t v196; // r14
  unsigned int v197; // eax
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 *v200; // r8
  _QWORD *v201; // rax
  __int64 v202; // rax
  unsigned int v203; // r9d
  __int64 *v204; // r8
  __int64 v205; // rcx
  __m128i v206; // xmm0
  unsigned int v207; // eax
  __int64 v208; // rax
  unsigned int v209; // r9d
  __int64 *v210; // r8
  __int64 v211; // rcx
  __m128i v212; // xmm0
  unsigned int v213; // eax
  __int64 v214; // r14
  int v215; // eax
  __int64 v216; // rax
  size_t v217; // rdx
  size_t v218; // r14
  unsigned int v219; // eax
  __int64 v220; // rdx
  __int64 v221; // rcx
  __int64 *v222; // r8
  _QWORD *v223; // rax
  __int64 v224; // rax
  unsigned int v225; // r10d
  __int64 *v226; // r9
  __int64 v227; // rcx
  __m128i v228; // xmm0
  unsigned int v229; // eax
  _BYTE *v230; // rdi
  _BYTE *v231; // rax
  __int64 v232; // rdx
  __int64 v233; // rax
  unsigned int v234; // r9d
  __int64 *v235; // r8
  __int64 v236; // rcx
  __m128i v237; // xmm0
  unsigned int v238; // eax
  __int64 v239; // r14
  int v240; // eax
  __int64 v241; // rax
  size_t v242; // rdx
  size_t v243; // r14
  unsigned int v244; // eax
  unsigned int v245; // eax
  __int64 v246; // rcx
  __int64 v247; // r8
  __int64 *v248; // r9
  _QWORD *v249; // rax
  _BYTE *v250; // rdi
  __int64 v251; // rax
  __int64 v252; // rax
  unsigned int v253; // r10d
  __int64 *v254; // r9
  __int64 v255; // rcx
  __m128i v256; // xmm0
  unsigned int v257; // eax
  size_t v258; // rdx
  size_t v259; // rdx
  void *src; // [rsp+0h] [rbp-98h]
  unsigned __int64 srca; // [rsp+0h] [rbp-98h]
  void *srcb; // [rsp+0h] [rbp-98h]
  unsigned __int64 srcc; // [rsp+0h] [rbp-98h]
  void *srcd; // [rsp+0h] [rbp-98h]
  unsigned __int64 srce; // [rsp+0h] [rbp-98h]
  void *srcf; // [rsp+0h] [rbp-98h]
  unsigned __int64 srcg; // [rsp+0h] [rbp-98h]
  void *srch; // [rsp+0h] [rbp-98h]
  void *srci; // [rsp+0h] [rbp-98h]
  void *srcj; // [rsp+0h] [rbp-98h]
  void *srck; // [rsp+0h] [rbp-98h]
  char *srcl; // [rsp+0h] [rbp-98h]
  char *srcm; // [rsp+0h] [rbp-98h]
  unsigned int v274; // [rsp+Ch] [rbp-8Ch]
  unsigned int v275; // [rsp+Ch] [rbp-8Ch]
  unsigned int v276; // [rsp+Ch] [rbp-8Ch]
  unsigned int v277; // [rsp+Ch] [rbp-8Ch]
  unsigned int v278; // [rsp+Ch] [rbp-8Ch]
  unsigned int v279; // [rsp+Ch] [rbp-8Ch]
  unsigned int v280; // [rsp+Ch] [rbp-8Ch]
  unsigned int v281; // [rsp+Ch] [rbp-8Ch]
  __int64 *v282; // [rsp+10h] [rbp-88h]
  unsigned int v283; // [rsp+10h] [rbp-88h]
  void *v284; // [rsp+10h] [rbp-88h]
  __int64 *v285; // [rsp+10h] [rbp-88h]
  unsigned int v286; // [rsp+10h] [rbp-88h]
  void *v287; // [rsp+10h] [rbp-88h]
  void *v288; // [rsp+10h] [rbp-88h]
  unsigned int v289; // [rsp+10h] [rbp-88h]
  unsigned int v290; // [rsp+10h] [rbp-88h]
  void *v291; // [rsp+10h] [rbp-88h]
  unsigned int v292; // [rsp+10h] [rbp-88h]
  void *v293; // [rsp+10h] [rbp-88h]
  unsigned int v294; // [rsp+10h] [rbp-88h]
  void *v295; // [rsp+10h] [rbp-88h]
  __int64 *v296; // [rsp+18h] [rbp-80h]
  __int64 *v297; // [rsp+18h] [rbp-80h]
  __int64 v298; // [rsp+18h] [rbp-80h]
  unsigned int v299; // [rsp+18h] [rbp-80h]
  unsigned int v300; // [rsp+18h] [rbp-80h]
  __int64 v301; // [rsp+18h] [rbp-80h]
  __int64 *v302; // [rsp+18h] [rbp-80h]
  __int64 *v303; // [rsp+18h] [rbp-80h]
  unsigned int v304; // [rsp+18h] [rbp-80h]
  __int64 *v305; // [rsp+18h] [rbp-80h]
  unsigned int v306; // [rsp+18h] [rbp-80h]
  __int64 *v307; // [rsp+18h] [rbp-80h]
  unsigned int v308; // [rsp+18h] [rbp-80h]
  unsigned int v309; // [rsp+18h] [rbp-80h]
  __int64 v310; // [rsp+20h] [rbp-78h]
  __int64 *v311; // [rsp+20h] [rbp-78h]
  __int64 *v312; // [rsp+20h] [rbp-78h]
  __int64 v313; // [rsp+20h] [rbp-78h]
  __int64 *v314; // [rsp+20h] [rbp-78h]
  __int64 v315; // [rsp+20h] [rbp-78h]
  __int64 *v316; // [rsp+20h] [rbp-78h]
  __int64 v317; // [rsp+20h] [rbp-78h]
  __int64 *v318; // [rsp+20h] [rbp-78h]
  __int64 v319; // [rsp+20h] [rbp-78h]
  __int64 *v320; // [rsp+20h] [rbp-78h]
  __int64 v321; // [rsp+20h] [rbp-78h]
  __int64 v322; // [rsp+28h] [rbp-70h]
  __int64 v323; // [rsp+28h] [rbp-70h]
  __int64 v324; // [rsp+28h] [rbp-70h]
  __int64 v325; // [rsp+28h] [rbp-70h]
  __int64 v326; // [rsp+28h] [rbp-70h]
  __int64 v327; // [rsp+28h] [rbp-70h]
  void *v328; // [rsp+30h] [rbp-68h] BYREF
  size_t n; // [rsp+38h] [rbp-60h]
  _QWORD v330[2]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v331; // [rsp+50h] [rbp-48h]

  v5 = *a1;
  v331 = 261;
  v328 = a2;
  n = a3;
  if ( (unsigned __int8)sub_228B190(&v328, 0) )
    return;
  v6 = *(_QWORD *)(v5 + 8);
  if ( !v6 )
  {
    v328 = v330;
    sub_1FF59C0(&v328, a2, (__int64)&a2[a3]);
    v135 = *(_BYTE **)v5;
    if ( v328 != v330 )
    {
      if ( v135 == (_BYTE *)(v5 + 16) )
      {
        *(_QWORD *)v5 = v328;
        *(_QWORD *)(v5 + 8) = n;
        *(_QWORD *)(v5 + 16) = v330[0];
        goto LABEL_101;
      }
      *(_QWORD *)v5 = v328;
      v136 = *(_QWORD *)(v5 + 16);
      *(_QWORD *)(v5 + 8) = n;
      *(_QWORD *)(v5 + 16) = v330[0];
      if ( !v135 )
      {
LABEL_101:
        v135 = v330;
        v328 = v330;
        goto LABEL_96;
      }
LABEL_95:
      v328 = v135;
      v330[0] = v136;
      goto LABEL_96;
    }
    v170 = n;
    if ( n )
    {
      if ( n == 1 )
        *v135 = v330[0];
      else
        memcpy(v135, v328, n);
      v170 = n;
      v135 = *(_BYTE **)v5;
    }
    *(_QWORD *)(v5 + 8) = v170;
    v135[v170] = 0;
    v135 = v328;
LABEL_96:
    n = 0;
    *v135 = 0;
    v137 = v328;
    if ( v328 == v330 )
      return;
    goto LABEL_97;
  }
  v7 = v5 + 32;
  if ( !*(_DWORD *)(v5 + 44) )
  {
    v103 = *(_BYTE **)v5;
    if ( v6 == a3 && !memcmp(a2, *(const void **)v5, *(_QWORD *)(v5 + 8)) )
      return;
    v104 = v103;
    v7 = v5 + 32;
    v105 = sub_228AA60(v104, v6, 0);
    v107 = v106;
    srck = (void *)v105;
    v108 = sub_2244B30(v105, v106);
    v109 = (unsigned int)sub_2244CB0(v5 + 32, srck, v107, v108);
    v111 = (__int64 *)(*(_QWORD *)(v5 + 32) + 8 * v109);
    if ( *v111 )
    {
      if ( *v111 != -8 )
      {
        sub_1FF85B0((__int64 **)&v328, v111, 0);
        v112 = v328;
LABEL_74:
        sub_9EE8A0(*v112 + 8LL, v5);
        goto LABEL_4;
      }
      --*(_DWORD *)(v5 + 48);
    }
    v285 = v111;
    v281 = v109;
    v123 = sub_22300B0(v107 + 65, 8, v109, v110, v111, v109);
    v124 = v281;
    v125 = v285;
    v126 = v123;
    if ( v107 )
    {
      v301 = v123;
      memcpy((void *)(v123 + 64), srck, v107);
      v126 = v301;
      v125 = v285;
      v124 = v281;
    }
    *(_BYTE *)(v126 + v107 + 64) = 0;
    *(_OWORD *)(v126 + 24) = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AAE90);
    *(_QWORD *)v126 = v107;
    *(_QWORD *)(v126 + 8) = v126 + 24;
    *(_QWORD *)(v126 + 16) = 0;
    *(_QWORD *)(v126 + 40) = 0;
    *(__m128i *)(v126 + 48) = si128;
    *v125 = v126;
    ++*(_DWORD *)(v5 + 44);
    v128 = sub_22450D0(v5 + 32, v124);
    sub_1FF85B0((__int64 **)&v328, (__int64 *)(*(_QWORD *)(v5 + 32) + 8LL * v128), 0);
    v112 = v328;
    goto LABEL_74;
  }
LABEL_4:
  v8 = sub_228AA60(a2, a3, 0);
  v10 = v9;
  src = (void *)v8;
  v11 = sub_2244B30(v8, v9);
  v12 = (unsigned int)sub_2244CB0(v7, src, v10, v11);
  v14 = (__int64 *)(*(_QWORD *)(v5 + 32) + 8 * v12);
  if ( *v14 )
  {
    if ( *v14 != -8 )
    {
      sub_1FF85B0((__int64 **)&v328, v14, 0);
      v15 = (__int64 *)v328;
      goto LABEL_11;
    }
    --*(_DWORD *)(v5 + 48);
  }
  v282 = v14;
  v274 = v12;
  v16 = sub_22300B0(v10 + 65, 8, v12, v13, v14, v12);
  v17 = v274;
  v18 = v282;
  v19 = v16;
  if ( v10 )
  {
    v298 = v16;
    memcpy((void *)(v16 + 64), src, v10);
    v19 = v298;
    v18 = v282;
    v17 = v274;
  }
  *(_BYTE *)(v19 + v10 + 64) = 0;
  *(_OWORD *)(v19 + 24) = 0;
  v20 = _mm_load_si128((const __m128i *)&xmmword_23AAE90);
  *(_QWORD *)v19 = v10;
  *(_QWORD *)(v19 + 8) = v19 + 24;
  *(_QWORD *)(v19 + 16) = 0;
  *(_QWORD *)(v19 + 40) = 0;
  *(__m128i *)(v19 + 48) = v20;
  *v18 = v19;
  ++*(_DWORD *)(v5 + 44);
  v21 = sub_22450D0(v7, v17);
  sub_1FF85B0((__int64 **)&v328, (__int64 *)(*(_QWORD *)(v5 + 32) + 8LL * v21), 0);
  v15 = (__int64 *)v328;
LABEL_11:
  v22 = *v15;
  v331 = 261;
  v328 = a2;
  n = a3;
  if ( (unsigned __int8)sub_228B190(&v328, 0) )
    return;
  v23 = *(_QWORD *)(v22 + 16);
  if ( !v23 )
  {
LABEL_98:
    v328 = v330;
    sub_1FF59C0(&v328, a2, (__int64)&a2[a3]);
    v135 = *(_BYTE **)(v22 + 8);
    if ( v328 != v330 )
    {
      if ( v135 == (_BYTE *)(v22 + 24) )
      {
        *(_QWORD *)(v22 + 8) = v328;
        *(_QWORD *)(v22 + 16) = n;
        *(_QWORD *)(v22 + 24) = v330[0];
        goto LABEL_101;
      }
      *(_QWORD *)(v22 + 8) = v328;
      v136 = *(_QWORD *)(v22 + 24);
      *(_QWORD *)(v22 + 16) = n;
      *(_QWORD *)(v22 + 24) = v330[0];
      if ( !v135 )
        goto LABEL_101;
      goto LABEL_95;
    }
    v171 = n;
    if ( n )
    {
      if ( n == 1 )
        *v135 = v330[0];
      else
        memcpy(v135, v328, n);
      v171 = n;
      v135 = *(_BYTE **)(v22 + 8);
    }
    *(_QWORD *)(v22 + 16) = v171;
    v135[v171] = 0;
    v135 = v328;
    goto LABEL_96;
  }
  v275 = v10 + 1;
  if ( *(_DWORD *)(v22 + 52) )
  {
    srca = (unsigned int)(v10 + 1);
    v24 = v22 + 40;
    goto LABEL_15;
  }
  v113 = *(_QWORD *)(v22 + 8);
  if ( v23 == a3 && !memcmp(a2, *(const void **)(v22 + 8), a3) )
    return;
  v114 = v23 - v275;
  srca = v275;
  if ( v114 > v23 )
    v114 = v23;
  v24 = v22 + 40;
  v115 = sub_228AA60(v113, v114, 0);
  v117 = v116;
  v284 = (void *)v115;
  v118 = sub_2244B30(v115, v116);
  v119 = (unsigned int)sub_2244CB0(v22 + 40, v284, v117, v118);
  v121 = (__int64 *)(*(_QWORD *)(v22 + 40) + 8 * v119);
  if ( !*v121 )
    goto LABEL_103;
  if ( *v121 == -8 )
  {
    --*(_DWORD *)(v22 + 56);
LABEL_103:
    v311 = v121;
    v299 = v119;
    v138 = sub_22300B0(v117 + 65, 8, v119, v120, v121, v119);
    v139 = v299;
    v140 = v311;
    v141 = v138;
    if ( v117 )
    {
      v322 = v138;
      memcpy((void *)(v138 + 64), v284, v117);
      v141 = v322;
      v140 = v311;
      v139 = v299;
    }
    *(_BYTE *)(v141 + v117 + 64) = 0;
    *(_OWORD *)(v141 + 24) = 0;
    v142 = _mm_load_si128((const __m128i *)&xmmword_23AAE90);
    *(_QWORD *)v141 = v117;
    *(_QWORD *)(v141 + 8) = v141 + 24;
    *(_QWORD *)(v141 + 16) = 0;
    *(_QWORD *)(v141 + 40) = 0;
    *(__m128i *)(v141 + 48) = v142;
    *v140 = v141;
    ++*(_DWORD *)(v22 + 52);
    v143 = sub_22450D0(v22 + 40, v139);
    sub_1FF85B0((__int64 **)&v328, (__int64 *)(*(_QWORD *)(v22 + 40) + 8LL * v143), 0);
    v122 = v328;
    goto LABEL_106;
  }
  sub_1FF85B0((__int64 **)&v328, v121, 0);
  v122 = v328;
LABEL_106:
  sub_9EE8A0(*v122 + 8LL, v22 + 8);
LABEL_15:
  v25 = a3 - srca;
  if ( a3 - srca > a3 )
    v25 = a3;
  v26 = sub_228AA60(a2, v25, 0);
  v28 = v27;
  srcb = (void *)v26;
  v29 = sub_2244B30(v26, v27);
  v30 = (unsigned int)sub_2244CB0(v24, srcb, v28, v29);
  v32 = (__int64 *)(*(_QWORD *)(v22 + 40) + 8 * v30);
  if ( *v32 )
  {
    if ( *v32 != -8 )
    {
      sub_1FF85B0((__int64 **)&v328, v32, 0);
      v33 = (__int64 *)v328;
      goto LABEL_20;
    }
    --*(_DWORD *)(v22 + 56);
  }
  v297 = v32;
  v286 = v30;
  v129 = sub_22300B0(v28 + 65, 8, v30, v31, v32, v30);
  v130 = v286;
  v131 = v297;
  v132 = v129;
  if ( v28 )
  {
    v313 = v129;
    memcpy((void *)(v129 + 64), srcb, v28);
    v132 = v313;
    v131 = v297;
    v130 = v286;
  }
  *(_BYTE *)(v132 + v28 + 64) = 0;
  *(_OWORD *)(v132 + 24) = 0;
  v133 = _mm_load_si128((const __m128i *)&xmmword_23AAE90);
  *(_QWORD *)v132 = v28;
  *(_QWORD *)(v132 + 8) = v132 + 24;
  *(_QWORD *)(v132 + 16) = 0;
  *(_QWORD *)(v132 + 40) = 0;
  *(__m128i *)(v132 + 48) = v133;
  *v131 = v132;
  ++*(_DWORD *)(v22 + 52);
  v134 = sub_22450D0(v24, v130);
  sub_1FF85B0((__int64 **)&v328, (__int64 *)(*(_QWORD *)(v22 + 40) + 8LL * v134), 0);
  v33 = (__int64 *)v328;
LABEL_20:
  v22 = *v33;
  v331 = 261;
  v328 = a2;
  n = a3;
  if ( (unsigned __int8)sub_228B190(&v328, 0) )
    return;
  v34 = *(_QWORD *)(v22 + 16);
  if ( !v34 )
    goto LABEL_98;
  v35 = v275 + (unsigned int)v28 + 1;
  v276 = v275 + v28 + 1;
  if ( *(_DWORD *)(v22 + 52) )
  {
    srcc = v35;
    v36 = v22 + 40;
    goto LABEL_24;
  }
  v144 = *(_QWORD *)(v22 + 8);
  if ( v34 == a3 && !memcmp(a2, *(const void **)(v22 + 8), a3) )
    return;
  v145 = v34 - v276;
  srcc = v276;
  if ( v145 > v34 )
    v145 = v34;
  v36 = v22 + 40;
  v146 = sub_228AA60(v144, v145, 0);
  v148 = v147;
  v287 = (void *)v146;
  v149 = sub_2244B30(v146, v147);
  v150 = (unsigned int)sub_2244CB0(v22 + 40, v287, v148, v149);
  v152 = (__int64 *)(*(_QWORD *)(v22 + 40) + 8 * v150);
  if ( !*v152 )
    goto LABEL_126;
  if ( *v152 == -8 )
  {
    --*(_DWORD *)(v22 + 56);
LABEL_126:
    v312 = v152;
    v300 = v150;
    v164 = sub_22300B0(v148 + 65, 8, v150, v151, v152, v150);
    v165 = v300;
    v166 = v312;
    v167 = v164;
    if ( v148 )
    {
      v323 = v164;
      memcpy((void *)(v164 + 64), v287, v148);
      v167 = v323;
      v166 = v312;
      v165 = v300;
    }
    *(_BYTE *)(v167 + v148 + 64) = 0;
    *(_OWORD *)(v167 + 24) = 0;
    v168 = _mm_load_si128((const __m128i *)&xmmword_23AAE90);
    *(_QWORD *)v167 = v148;
    *(_QWORD *)(v167 + 8) = v167 + 24;
    *(_QWORD *)(v167 + 16) = 0;
    *(_QWORD *)(v167 + 40) = 0;
    *(__m128i *)(v167 + 48) = v168;
    *v166 = v167;
    ++*(_DWORD *)(v22 + 52);
    v169 = sub_22450D0(v22 + 40, v165);
    sub_1FF85B0((__int64 **)&v328, (__int64 *)(*(_QWORD *)(v22 + 40) + 8LL * v169), 0);
    v153 = v328;
    goto LABEL_113;
  }
  sub_1FF85B0((__int64 **)&v328, v152, 0);
  v153 = v328;
LABEL_113:
  sub_9EE8A0(*v153 + 8LL, v22 + 8);
LABEL_24:
  v37 = a3 - srcc;
  if ( a3 - srcc > a3 )
    v37 = a3;
  v38 = sub_228AA60(a2, v37, 0);
  v40 = v39;
  srcd = (void *)v38;
  v41 = sub_2244B30(v38, v39);
  v42 = (unsigned int)sub_2244CB0(v36, srcd, v40, v41);
  v44 = (__int64 *)(*(_QWORD *)(v22 + 40) + 8 * v42);
  if ( *v44 )
  {
    if ( *v44 != -8 )
    {
      sub_1FF85B0((__int64 **)&v328, v44, 0);
      v51 = (__int64 *)v328;
      goto LABEL_32;
    }
    --*(_DWORD *)(v22 + 56);
  }
  v296 = v44;
  v283 = v42;
  v45 = sub_22300B0(v40 + 65, 8, v42, v43, v44, v42);
  v46 = v283;
  v47 = v296;
  v48 = v45;
  if ( v40 )
  {
    v310 = v45;
    memcpy((void *)(v45 + 64), srcd, v40);
    v48 = v310;
    v47 = v296;
    v46 = v283;
  }
  *(_BYTE *)(v48 + v40 + 64) = 0;
  *(_OWORD *)(v48 + 24) = 0;
  v49 = _mm_load_si128((const __m128i *)&xmmword_23AAE90);
  *(_QWORD *)v48 = v40;
  *(_QWORD *)(v48 + 8) = v48 + 24;
  *(_QWORD *)(v48 + 16) = 0;
  *(_QWORD *)(v48 + 40) = 0;
  *(__m128i *)(v48 + 48) = v49;
  *v47 = v48;
  ++*(_DWORD *)(v22 + 52);
  v50 = sub_22450D0(v36, v46);
  sub_1FF85B0((__int64 **)&v328, (__int64 *)(*(_QWORD *)(v22 + 40) + 8LL * v50), 0);
  v51 = (__int64 *)v328;
LABEL_32:
  v22 = *v51;
  v331 = 261;
  v328 = a2;
  n = a3;
  if ( (unsigned __int8)sub_228B190(&v328, 0) )
    return;
  v52 = *(_QWORD *)(v22 + 16);
  if ( !v52 )
    goto LABEL_98;
  v53 = v276 + (unsigned int)v40 + 1;
  v277 = v276 + v40 + 1;
  if ( *(_DWORD *)(v22 + 52) )
  {
    srce = v53;
    v54 = v22 + 40;
    goto LABEL_36;
  }
  v154 = *(_QWORD *)(v22 + 8);
  if ( v52 == a3 && !memcmp(a2, *(const void **)(v22 + 8), a3) )
    return;
  v155 = v52 - v277;
  srce = v277;
  if ( v155 > v52 )
    v155 = v52;
  v54 = v22 + 40;
  v156 = sub_228AA60(v154, v155, 0);
  v158 = v157;
  v288 = (void *)v156;
  v159 = sub_2244B30(v156, v157);
  v160 = (unsigned int)sub_2244CB0(v22 + 40, v288, v158, v159);
  v162 = (__int64 *)(*(_QWORD *)(v22 + 40) + 8 * v160);
  if ( !*v162 )
    goto LABEL_150;
  if ( *v162 == -8 )
  {
    --*(_DWORD *)(v22 + 56);
LABEL_150:
    v314 = v162;
    v304 = v160;
    v184 = sub_22300B0(v158 + 65, 8, v160, v161, v162, v160);
    v185 = v304;
    v186 = v314;
    v187 = v184;
    if ( v158 )
    {
      v324 = v184;
      memcpy((void *)(v184 + 64), v288, v158);
      v187 = v324;
      v186 = v314;
      v185 = v304;
    }
    *(_BYTE *)(v187 + v158 + 64) = 0;
    *(_OWORD *)(v187 + 24) = 0;
    v188 = _mm_load_si128((const __m128i *)&xmmword_23AAE90);
    *(_QWORD *)v187 = v158;
    *(_QWORD *)(v187 + 8) = v187 + 24;
    *(_QWORD *)(v187 + 16) = 0;
    *(_QWORD *)(v187 + 40) = 0;
    *(__m128i *)(v187 + 48) = v188;
    *v186 = v187;
    ++*(_DWORD *)(v22 + 52);
    v189 = sub_22450D0(v22 + 40, v185);
    sub_1FF85B0((__int64 **)&v328, (__int64 *)(*(_QWORD *)(v22 + 40) + 8LL * v189), 0);
    v163 = v328;
    goto LABEL_124;
  }
  sub_1FF85B0((__int64 **)&v328, v162, 0);
  v163 = v328;
LABEL_124:
  sub_9EE8A0(*v163 + 8LL, v22 + 8);
LABEL_36:
  v55 = a3 - srce;
  if ( a3 - srce > a3 )
    v55 = a3;
  v56 = sub_228AA60(a2, v55, 0);
  v58 = v57;
  srcf = (void *)v56;
  v59 = sub_2244B30(v56, v57);
  v60 = (unsigned int)sub_2244CB0(v54, srcf, v58, v59);
  v62 = (__int64 *)(*(_QWORD *)(v22 + 40) + 8 * v60);
  if ( *v62 )
  {
    if ( *v62 != -8 )
    {
      sub_1FF85B0((__int64 **)&v328, v62, 0);
      v63 = (__int64 *)v328;
      goto LABEL_41;
    }
    --*(_DWORD *)(v22 + 56);
  }
  v302 = v62;
  v289 = v60;
  v172 = sub_22300B0(v58 + 65, 8, v60, v61, v62, v60);
  v173 = v289;
  v174 = v302;
  v175 = v172;
  if ( v58 )
  {
    v315 = v172;
    memcpy((void *)(v172 + 64), srcf, v58);
    v175 = v315;
    v174 = v302;
    v173 = v289;
  }
  *(_BYTE *)(v175 + v58 + 64) = 0;
  *(_OWORD *)(v175 + 24) = 0;
  v176 = _mm_load_si128((const __m128i *)&xmmword_23AAE90);
  *(_QWORD *)v175 = v58;
  *(_QWORD *)(v175 + 8) = v175 + 24;
  *(_QWORD *)(v175 + 16) = 0;
  *(_QWORD *)(v175 + 40) = 0;
  *(__m128i *)(v175 + 48) = v176;
  *v174 = v175;
  ++*(_DWORD *)(v22 + 52);
  v177 = sub_22450D0(v54, v173);
  sub_1FF85B0((__int64 **)&v328, (__int64 *)(*(_QWORD *)(v22 + 40) + 8LL * v177), 0);
  v63 = (__int64 *)v328;
LABEL_41:
  v22 = *v63;
  v331 = 261;
  v328 = a2;
  n = a3;
  if ( (unsigned __int8)sub_228B190(&v328, 0) )
    return;
  v64 = *(_QWORD *)(v22 + 16);
  if ( !v64 )
    goto LABEL_98;
  v65 = v277 + (unsigned int)v58 + 1;
  v278 = v277 + v58 + 1;
  if ( *(_DWORD *)(v22 + 52) )
  {
    srcg = v65;
    v66 = v22 + 40;
    goto LABEL_45;
  }
  v190 = *(_QWORD *)(v22 + 8);
  if ( v64 == a3 && !memcmp(a2, *(const void **)(v22 + 8), a3) )
    return;
  v191 = v64;
  srcg = v278;
  v192 = v64 - v278;
  v193 = v192 <= v64;
  v66 = v22 + 40;
  if ( v193 )
    v191 = v192;
  v194 = sub_228AA60(v190, v191, 0);
  v196 = v195;
  v291 = (void *)v194;
  v197 = sub_2244B30(v194, v195);
  v198 = (unsigned int)sub_2244CB0(v22 + 40, v291, v196, v197);
  v200 = (__int64 *)(*(_QWORD *)(v22 + 40) + 8 * v198);
  if ( !*v200 )
    goto LABEL_166;
  if ( *v200 == -8 )
  {
    --*(_DWORD *)(v22 + 56);
LABEL_166:
    v316 = v200;
    v306 = v198;
    v208 = sub_22300B0(v196 + 65, 8, v198, v199, v200, v198);
    v209 = v306;
    v210 = v316;
    v211 = v208;
    if ( v196 )
    {
      v325 = v208;
      memcpy((void *)(v208 + 64), v291, v196);
      v211 = v325;
      v210 = v316;
      v209 = v306;
    }
    *(_BYTE *)(v211 + v196 + 64) = 0;
    *(_OWORD *)(v211 + 24) = 0;
    v212 = _mm_load_si128((const __m128i *)&xmmword_23AAE90);
    *(_QWORD *)v211 = v196;
    *(_QWORD *)(v211 + 8) = v211 + 24;
    *(_QWORD *)(v211 + 16) = 0;
    *(_QWORD *)(v211 + 40) = 0;
    *(__m128i *)(v211 + 48) = v212;
    *v210 = v211;
    ++*(_DWORD *)(v22 + 52);
    v213 = sub_22450D0(v22 + 40, v209);
    sub_1FF85B0((__int64 **)&v328, (__int64 *)(*(_QWORD *)(v22 + 40) + 8LL * v213), 0);
    v201 = v328;
    goto LABEL_160;
  }
  sub_1FF85B0((__int64 **)&v328, v200, 0);
  v201 = v328;
LABEL_160:
  sub_9EE8A0(*v201 + 8LL, v22 + 8);
LABEL_45:
  v67 = a3 - srcg;
  if ( a3 - srcg > a3 )
    v67 = a3;
  v68 = sub_228AA60(a2, v67, 0);
  v70 = v69;
  srch = (void *)v68;
  v71 = sub_2244B30(v68, v69);
  v72 = (unsigned int)sub_2244CB0(v66, srch, v70, v71);
  v74 = (__int64 *)(*(_QWORD *)(v22 + 40) + 8 * v72);
  if ( *v74 )
  {
    if ( *v74 != -8 )
    {
      sub_1FF85B0((__int64 **)&v328, v74, 0);
      v75 = (__int64 *)v328;
      goto LABEL_50;
    }
    --*(_DWORD *)(v22 + 56);
  }
  v303 = v74;
  v290 = v72;
  v178 = sub_22300B0(v70 + 65, 8, v72, v73, v74, v72);
  v179 = v290;
  v180 = v303;
  v181 = v178;
  if ( v70 )
  {
    v317 = v178;
    memcpy((void *)(v178 + 64), srch, v70);
    v181 = v317;
    v180 = v303;
    v179 = v290;
  }
  *(_BYTE *)(v181 + v70 + 64) = 0;
  *(_OWORD *)(v181 + 24) = 0;
  v182 = _mm_load_si128((const __m128i *)&xmmword_23AAE90);
  *(_QWORD *)v181 = v70;
  *(_QWORD *)(v181 + 8) = v181 + 24;
  *(_QWORD *)(v181 + 16) = 0;
  *(_QWORD *)(v181 + 40) = 0;
  *(__m128i *)(v181 + 48) = v182;
  *v180 = v181;
  ++*(_DWORD *)(v22 + 52);
  v183 = sub_22450D0(v66, v179);
  sub_1FF85B0((__int64 **)&v328, (__int64 *)(*(_QWORD *)(v22 + 40) + 8LL * v183), 0);
  v75 = (__int64 *)v328;
LABEL_50:
  v76 = *v75;
  v328 = a2;
  v331 = 261;
  n = a3;
  if ( (unsigned __int8)sub_228B190(&v328, 0) )
    return;
  v77 = *(char **)(v76 + 16);
  if ( !v77 )
  {
    v328 = v330;
    sub_1FF59C0(&v328, a2, (__int64)&a2[a3]);
    v230 = *(_BYTE **)(v76 + 8);
    v231 = v230;
    if ( v328 == v330 )
    {
      v258 = n;
      if ( n )
      {
        if ( n == 1 )
          *v230 = v330[0];
        else
          memcpy(v230, v328, n);
        v230 = *(_BYTE **)(v76 + 8);
        v258 = n;
      }
      *(_QWORD *)(v76 + 16) = v258;
      v230[v258] = 0;
      v231 = v328;
      goto LABEL_187;
    }
    if ( v230 == (_BYTE *)(v76 + 24) )
    {
      *(_QWORD *)(v76 + 8) = v328;
      *(_QWORD *)(v76 + 16) = n;
      *(_QWORD *)(v76 + 24) = v330[0];
    }
    else
    {
      *(_QWORD *)(v76 + 8) = v328;
      v232 = *(_QWORD *)(v76 + 24);
      *(_QWORD *)(v76 + 16) = n;
      *(_QWORD *)(v76 + 24) = v330[0];
      if ( v230 )
      {
        v328 = v230;
        v330[0] = v232;
LABEL_187:
        n = 0;
        goto LABEL_188;
      }
    }
    v231 = v330;
    v328 = v330;
    goto LABEL_187;
  }
  v78 = v278 + v70 + 1;
  v279 = v78;
  if ( *(_DWORD *)(v76 + 52) )
  {
    v79 = v78;
    srci = (void *)(v76 + 40);
    goto LABEL_54;
  }
  v214 = *(_QWORD *)(v76 + 8);
  if ( v77 == (char *)a3 )
  {
    srcl = *(char **)(v76 + 16);
    v215 = memcmp(a2, *(const void **)(v76 + 8), a3);
    v77 = srcl;
    if ( !v215 )
      return;
  }
  v79 = v279;
  if ( &v77[-v279] <= v77 )
    v77 -= v279;
  v216 = sub_228AA60(v214, v77, 0);
  v218 = v217;
  srci = (void *)(v76 + 40);
  v293 = (void *)v216;
  v219 = sub_2244B30(v216, v217);
  v220 = (unsigned int)sub_2244CB0(v76 + 40, v293, v218, v219);
  v222 = (__int64 *)(*(_QWORD *)(v76 + 40) + 8 * v220);
  if ( !*v222 )
    goto LABEL_191;
  if ( *v222 == -8 )
  {
    --*(_DWORD *)(v76 + 56);
LABEL_191:
    v318 = v222;
    v308 = v220;
    v233 = sub_22300B0(v218 + 65, 8, v220, v221, v222, v220);
    v234 = v308;
    v235 = v318;
    v236 = v233;
    if ( v218 )
    {
      v326 = v233;
      memcpy((void *)(v233 + 64), v293, v218);
      v236 = v326;
      v235 = v318;
      v234 = v308;
    }
    *(_BYTE *)(v236 + v218 + 64) = 0;
    *(_OWORD *)(v236 + 24) = 0;
    v237 = _mm_load_si128((const __m128i *)&xmmword_23AAE90);
    *(_QWORD *)v236 = v218;
    *(_QWORD *)(v236 + 8) = v236 + 24;
    *(_QWORD *)(v236 + 16) = 0;
    *(_QWORD *)(v236 + 40) = 0;
    *(__m128i *)(v236 + 48) = v237;
    *v235 = v236;
    ++*(_DWORD *)(v76 + 52);
    v238 = sub_22450D0(srci, v234);
    sub_1FF85B0((__int64 **)&v328, (__int64 *)(*(_QWORD *)(v76 + 40) + 8LL * v238), 0);
    v223 = v328;
    goto LABEL_176;
  }
  sub_1FF85B0((__int64 **)&v328, v222, 0);
  v223 = v328;
LABEL_176:
  sub_9EE8A0(*v223 + 8LL, v76 + 8);
LABEL_54:
  v80 = a3 - v79;
  if ( a3 - v79 > a3 )
    v80 = a3;
  v81 = (const void *)sub_228AA60(a2, v80, 0);
  v83 = v82;
  v84 = sub_2244B30(v81, v82);
  v85 = (unsigned int)sub_2244CB0(srci, v81, v83, v84);
  v87 = (__int64 *)(*(_QWORD *)(v76 + 40) + 8 * v85);
  if ( *v87 )
  {
    if ( *v87 != -8 )
    {
      sub_1FF85B0((__int64 **)&v328, v87, 0);
      v88 = (__int64 *)v328;
      goto LABEL_59;
    }
    --*(_DWORD *)(v76 + 56);
  }
  v305 = v87;
  v292 = v85;
  v202 = sub_22300B0(v83 + 65, 8, v85, v86, v87, v85);
  v203 = v292;
  v204 = v305;
  v205 = v202;
  if ( v83 )
  {
    v319 = v202;
    memcpy((void *)(v202 + 64), v81, v83);
    v205 = v319;
    v204 = v305;
    v203 = v292;
  }
  *(_BYTE *)(v205 + v83 + 64) = 0;
  *(_OWORD *)(v205 + 24) = 0;
  v206 = _mm_load_si128((const __m128i *)&xmmword_23AAE90);
  *(_QWORD *)v205 = v83;
  *(_QWORD *)(v205 + 8) = v205 + 24;
  *(_QWORD *)(v205 + 16) = 0;
  *(_QWORD *)(v205 + 40) = 0;
  *(__m128i *)(v205 + 48) = v206;
  *v204 = v205;
  ++*(_DWORD *)(v76 + 52);
  v207 = sub_22450D0(srci, v203);
  sub_1FF85B0((__int64 **)&v328, (__int64 *)(*(_QWORD *)(v76 + 40) + 8LL * v207), 0);
  v88 = (__int64 *)v328;
LABEL_59:
  v89 = *v88;
  v331 = 261;
  v328 = a2;
  n = a3;
  if ( (unsigned __int8)sub_228B190(&v328, 0) )
    return;
  v90 = *(char **)(v89 + 16);
  if ( !v90 )
  {
    v328 = v330;
    sub_1FF59C0(&v328, a2, (__int64)&a2[a3]);
    v250 = *(_BYTE **)(v89 + 8);
    if ( v328 == v330 )
    {
      v259 = n;
      if ( n )
      {
        if ( n == 1 )
          *v250 = v330[0];
        else
          memcpy(v250, v328, n);
        v250 = *(_BYTE **)(v89 + 8);
        v259 = n;
      }
      *(_QWORD *)(v89 + 16) = v259;
      v250[v259] = 0;
      goto LABEL_206;
    }
    if ( v250 == (_BYTE *)(v89 + 24) )
    {
      *(_QWORD *)(v89 + 8) = v328;
      *(_QWORD *)(v89 + 16) = n;
      *(_QWORD *)(v89 + 24) = v330[0];
    }
    else
    {
      *(_QWORD *)(v89 + 8) = v328;
      v251 = *(_QWORD *)(v89 + 24);
      *(_QWORD *)(v89 + 16) = n;
      *(_QWORD *)(v89 + 24) = v330[0];
      if ( v250 )
      {
        v328 = v250;
        v330[0] = v251;
LABEL_206:
        n = 0;
        v231 = v328;
LABEL_188:
        *v231 = 0;
        v137 = v328;
        if ( v328 == v330 )
          return;
LABEL_97:
        operator delete(v137);
        return;
      }
    }
    v328 = v330;
    goto LABEL_206;
  }
  v91 = v279 + v83 + 1;
  v280 = v91;
  if ( *(_DWORD *)(v89 + 52) )
  {
    v92 = v91;
    srcj = (void *)(v89 + 40);
    goto LABEL_63;
  }
  v239 = *(_QWORD *)(v89 + 8);
  if ( v90 != (char *)a3
    || (srcm = *(char **)(v89 + 16), v240 = memcmp(a2, *(const void **)(v89 + 8), a3), v90 = srcm, v240) )
  {
    v92 = v280;
    if ( &v90[-v280] <= v90 )
      v90 -= v280;
    v241 = sub_228AA60(v239, v90, 0);
    v243 = v242;
    srcj = (void *)(v89 + 40);
    v295 = (void *)v241;
    v244 = sub_2244B30(v241, v242);
    v245 = sub_2244CB0(v89 + 40, v295, v243, v244);
    v248 = (__int64 *)(*(_QWORD *)(v89 + 40) + 8LL * v245);
    if ( *v248 )
    {
      if ( *v248 != -8 )
      {
        sub_1FF85B0((__int64 **)&v328, v248, 0);
        v249 = v328;
LABEL_201:
        sub_9EE8A0(*v249 + 8LL, v89 + 8);
LABEL_63:
        v93 = a3 - v92;
        if ( a3 - v92 > a3 )
          v93 = a3;
        v94 = (const void *)sub_228AA60(a2, v93, 0);
        v96 = v95;
        v97 = sub_2244B30(v94, v95);
        v98 = sub_2244CB0(srcj, v94, v96, v97);
        v101 = (__int64 *)(*(_QWORD *)(v89 + 40) + 8LL * v98);
        if ( *v101 )
        {
          if ( *v101 != -8 )
          {
            sub_1FF85B0((__int64 **)&v328, v101, 0);
            v102 = v328;
LABEL_68:
            sub_1FF85F0(*v102 + 8LL, a2, a3, v280 + v96 + 1);
            return;
          }
          --*(_DWORD *)(v89 + 56);
        }
        v307 = v101;
        v294 = v98;
        v224 = sub_22300B0(v96 + 65, 8, v98, v99, v100, v101);
        v225 = v294;
        v226 = v307;
        v227 = v224;
        if ( v96 )
        {
          v321 = v224;
          memcpy((void *)(v224 + 64), v94, v96);
          v227 = v321;
          v226 = v307;
          v225 = v294;
        }
        *(_BYTE *)(v227 + v96 + 64) = 0;
        *(_OWORD *)(v227 + 24) = 0;
        v228 = _mm_load_si128((const __m128i *)&xmmword_23AAE90);
        *(_QWORD *)v227 = v96;
        *(_QWORD *)(v227 + 8) = v227 + 24;
        *(_QWORD *)(v227 + 16) = 0;
        *(_QWORD *)(v227 + 40) = 0;
        *(__m128i *)(v227 + 48) = v228;
        *v226 = v227;
        ++*(_DWORD *)(v89 + 52);
        v229 = sub_22450D0(srcj, v225);
        sub_1FF85B0((__int64 **)&v328, (__int64 *)(*(_QWORD *)(v89 + 40) + 8LL * v229), 0);
        v102 = v328;
        goto LABEL_68;
      }
      --*(_DWORD *)(v89 + 56);
    }
    v320 = v248;
    v309 = v245;
    v252 = sub_22300B0(v243 + 65, 8, v245, v246, v247, v248);
    v253 = v309;
    v254 = v320;
    v255 = v252;
    if ( v243 )
    {
      v327 = v252;
      memcpy((void *)(v252 + 64), v295, v243);
      v255 = v327;
      v254 = v320;
      v253 = v309;
    }
    *(_BYTE *)(v255 + v243 + 64) = 0;
    *(_OWORD *)(v255 + 24) = 0;
    v256 = _mm_load_si128((const __m128i *)&xmmword_23AAE90);
    *(_QWORD *)v255 = v243;
    *(_QWORD *)(v255 + 8) = v255 + 24;
    *(_QWORD *)(v255 + 16) = 0;
    *(_QWORD *)(v255 + 40) = 0;
    *(__m128i *)(v255 + 48) = v256;
    *v254 = v255;
    ++*(_DWORD *)(v89 + 52);
    v257 = sub_22450D0(srcj, v253);
    sub_1FF85B0((__int64 **)&v328, (__int64 *)(*(_QWORD *)(v89 + 40) + 8LL * v257), 0);
    v249 = v328;
    goto LABEL_201;
  }
}
