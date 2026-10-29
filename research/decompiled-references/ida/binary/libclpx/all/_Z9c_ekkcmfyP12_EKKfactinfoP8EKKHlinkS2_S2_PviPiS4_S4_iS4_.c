__int64 __fastcall c_ekkcmfy(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
        _DWORD *a7,
        int *a8,
        int *a9,
        int a10,
        int *a11)
{
  _DWORD *v11; // r15
  unsigned __int64 v12; // rbp
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r12
  signed int v17; // ecx
  int v18; // ebx
  __int64 v19; // rdx
  unsigned int v20; // r10d
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  int v23; // esi
  unsigned int v24; // r10d
  unsigned int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rax
  int v30; // esi
  int v31; // eax
  int v32; // esi
  _DWORD *v33; // rsi
  __int64 v34; // rax
  __m128i si128; // xmm1
  unsigned int v36; // edx
  __m128i v37; // xmm7
  __m128i v38; // xmm6
  __m128i v39; // xmm0
  __m128i v40; // xmm2
  __m128i v41; // xmm3
  __m128i v42; // xmm2
  unsigned int v43; // eax
  signed int v44; // edx
  _DWORD *v45; // rdi
  signed int v46; // ecx
  _DWORD *v47; // rdi
  signed int v48; // edx
  _DWORD *v49; // rdx
  __int64 v50; // r15
  int v51; // eax
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rdx
  int v55; // ecx
  int v56; // ebx
  int v57; // esi
  __int64 v58; // r9
  __int64 v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rcx
  int v64; // esi
  int *v65; // rax
  int v66; // ebx
  __int64 v67; // rax
  unsigned int v68; // r13d
  __int64 v69; // r9
  __int64 v70; // rdi
  int v71; // r10d
  int *v72; // rsi
  _DWORD *v73; // rax
  __int64 v74; // rdx
  _DWORD *v75; // rdi
  __int64 v76; // r8
  _DWORD *v77; // r11
  double *v78; // rcx
  double v79; // xmm0_8
  int v80; // r15d
  int v81; // edx
  int v82; // r8d
  __int64 v83; // rdx
  __int64 v84; // rcx
  double v85; // xmm0_8
  __int64 v86; // rax
  int *v87; // rdi
  __int64 v88; // rsi
  double v89; // xmm2_8
  __int64 v90; // rdi
  __int64 v91; // rsi
  double *v92; // rdx
  int v93; // r10d
  unsigned __int64 v94; // rbx
  bool v95; // r11
  int *v96; // r8
  __int64 v97; // rdi
  double v98; // xmm1_8
  double v99; // xmm1_8
  double v100; // xmm1_8
  double v101; // xmm1_8
  int *v102; // rbx
  __int64 v103; // r11
  int v104; // eax
  int v105; // r9d
  int v106; // eax
  int v107; // edx
  int v108; // eax
  __int64 v109; // rcx
  __int64 v110; // rdx
  __int64 v111; // rax
  __int64 v112; // r11
  __int64 v113; // rdi
  __int64 v114; // rsi
  __int64 v115; // r11
  __int64 v116; // rcx
  int v117; // esi
  unsigned __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // r8
  __int64 v121; // rdi
  unsigned int v122; // ebx
  __int64 v123; // rsi
  __int64 v124; // rcx
  __int64 v125; // rax
  unsigned int v126; // edx
  __int128 v127; // xmm2
  signed int v128; // r10d
  int v129; // edx
  __int64 v130; // rax
  int v131; // eax
  __int64 v132; // xmm1_8
  int v133; // edx
  __int64 v134; // rax
  int v135; // eax
  int v136; // r10d
  __int64 v137; // xmm1_8
  int v138; // edx
  __int64 v139; // rax
  int v140; // edx
  __int64 v141; // rax
  __int64 v142; // rbx
  unsigned __int64 v143; // r15
  __int64 v144; // rcx
  __int64 v145; // rbp
  int *v146; // rdx
  __int64 v147; // rax
  double v148; // xmm1_8
  __int64 v149; // r8
  int *v150; // r13
  int *v151; // rbp
  int v152; // eax
  int v153; // ecx
  int v154; // esi
  int v155; // edi
  int v156; // edx
  int *v157; // rdi
  int v158; // r9d
  __int64 v159; // rbp
  __int64 v160; // r11
  __int64 v161; // rax
  __int64 v162; // r8
  unsigned __int64 v163; // rax
  int v164; // r11d
  unsigned int v165; // ebp
  _DWORD *v166; // rax
  _DWORD *v167; // rax
  __int64 v168; // rdi
  __int64 v169; // rax
  unsigned int v170; // r10d
  __int64 v171; // rbp
  unsigned int v172; // r8d
  unsigned int v173; // r9d
  int v174; // r9d
  int v175; // r11d
  _DWORD *v176; // rdi
  int v177; // eax
  _DWORD *v178; // rdi
  int v179; // eax
  _DWORD *v180; // rdi
  int v181; // eax
  _DWORD *v182; // rdi
  int v183; // eax
  int v184; // r11d
  _DWORD *v185; // rdi
  _DWORD *v186; // rax
  int v187; // edx
  int v188; // r10d
  double v189; // xmm0_8
  int v190; // edx
  __int64 v191; // rax
  int v192; // ecx
  double *v193; // rdi
  int *v194; // r9
  double v195; // xmm4_8
  int v196; // esi
  __int64 v197; // rax
  int v198; // edx
  int v199; // esi
  __int64 v200; // rcx
  __int64 v201; // rsi
  double v202; // xmm1_8
  bool v203; // cc
  double v204; // xmm2_8
  double v205; // xmm0_8
  int v206; // r8d
  int *v207; // rax
  double *v208; // rdx
  double v209; // xmm0_8
  int v210; // ecx
  __int64 v211; // rax
  int *v212; // rdx
  __int64 v213; // rax
  __int64 v214; // rdx
  __int64 v215; // rax
  __int64 v216; // rcx
  __int64 v217; // rsi
  __int64 v218; // rax
  int v219; // ecx
  __int64 v220; // rsi
  int *v221; // rbx
  __int64 v222; // rax
  int v223; // eax
  int v224; // r9d
  __int64 v225; // r8
  __int64 v226; // r10
  __int64 v227; // rbp
  __int64 v228; // rax
  bool v229; // r11
  unsigned __int64 v230; // rax
  int v231; // r8d
  unsigned int v232; // r10d
  _DWORD *v233; // rax
  _DWORD *v234; // rax
  __int64 v235; // rbp
  __int64 v236; // rax
  unsigned int v237; // r11d
  __int64 v238; // r10
  unsigned int v239; // edi
  unsigned int v240; // r9d
  int v241; // r9d
  int v242; // r8d
  _DWORD *v243; // rdi
  int v244; // eax
  _DWORD *v245; // rdi
  int v246; // eax
  _DWORD *v247; // rdi
  int v248; // eax
  _DWORD *v249; // rdi
  int v250; // eax
  int v251; // r8d
  _DWORD *v252; // rdi
  _DWORD *v253; // rax
  __int64 v254; // rsi
  __int64 v255; // rdx
  __int64 v256; // rax
  int *v257; // rdx
  int v258; // ecx
  int v259; // edx
  int v260; // ecx
  _DWORD *v261; // r8
  _DWORD *v262; // rax
  _DWORD *v263; // rax
  int *v264; // rax
  __int64 v265; // rdx
  double *v266; // rdi
  double v267; // xmm2_8
  int v268; // eax
  int v269; // eax
  unsigned int v270; // eax
  int v271; // edx
  int v272; // eax
  int v273; // ecx
  int v274; // edx
  int *v275; // rsi
  __int64 i; // rdx
  int v278; // r8d
  __int64 v279; // rax
  __int64 v280; // rax
  unsigned __int64 v281; // rcx
  int *v282; // rax
  __int64 v283; // rsi
  __int64 v284; // rdx
  int v285; // ecx
  int *v286; // r11
  __int64 v287; // rdx
  __int64 v288; // [rsp+8h] [rbp-170h]
  int v289; // [rsp+10h] [rbp-168h]
  int v290; // [rsp+10h] [rbp-168h]
  int v291; // [rsp+10h] [rbp-168h]
  __int64 v292; // [rsp+18h] [rbp-160h]
  __int64 v293; // [rsp+20h] [rbp-158h]
  __int64 v294; // [rsp+28h] [rbp-150h]
  int v295; // [rsp+30h] [rbp-148h]
  int v296; // [rsp+34h] [rbp-144h]
  __int64 v297; // [rsp+38h] [rbp-140h]
  int v298; // [rsp+44h] [rbp-134h]
  __int64 v299; // [rsp+48h] [rbp-130h]
  unsigned int *v300; // [rsp+50h] [rbp-128h]
  int *v301; // [rsp+58h] [rbp-120h]
  int v302; // [rsp+60h] [rbp-118h]
  int v303; // [rsp+60h] [rbp-118h]
  int v304; // [rsp+60h] [rbp-118h]
  __int64 v305; // [rsp+70h] [rbp-108h]
  int v306; // [rsp+70h] [rbp-108h]
  unsigned int v307; // [rsp+70h] [rbp-108h]
  unsigned int v308; // [rsp+70h] [rbp-108h]
  __int64 v309; // [rsp+78h] [rbp-100h]
  int v310; // [rsp+80h] [rbp-F8h]
  int v311; // [rsp+84h] [rbp-F4h]
  __int64 v312; // [rsp+88h] [rbp-F0h]
  bool v313; // [rsp+90h] [rbp-E8h]
  bool v314; // [rsp+90h] [rbp-E8h]
  __int64 v315; // [rsp+98h] [rbp-E0h]
  int v317; // [rsp+A8h] [rbp-D0h]
  int v318; // [rsp+ACh] [rbp-CCh]
  int v319; // [rsp+B0h] [rbp-C8h]
  int v320; // [rsp+B8h] [rbp-C0h]
  int v321; // [rsp+BCh] [rbp-BCh]
  double v322; // [rsp+C0h] [rbp-B8h]
  __int64 v324; // [rsp+D0h] [rbp-A8h]
  int v325; // [rsp+D8h] [rbp-A0h]
  unsigned int v326; // [rsp+DCh] [rbp-9Ch]
  int v328; // [rsp+F0h] [rbp-88h]
  unsigned int v329; // [rsp+F4h] [rbp-84h]
  int v330; // [rsp+F8h] [rbp-80h]
  __int64 v331; // [rsp+100h] [rbp-78h]
  int v333; // [rsp+114h] [rbp-64h]
  __int64 v334; // [rsp+118h] [rbp-60h]
  unsigned int v335; // [rsp+124h] [rbp-54h] BYREF
  int v336; // [rsp+128h] [rbp-50h] BYREF
  int v337; // [rsp+12Ch] [rbp-4Ch] BYREF
  int v338; // [rsp+130h] [rbp-48h] BYREF
  int v339; // [rsp+134h] [rbp-44h] BYREF
  int v340; // [rsp+138h] [rbp-40h] BYREF
  int v341[15]; // [rsp+13Ch] [rbp-3Ch] BYREF

  v11 = (_DWORD *)a1;
  v12 = a5 - 4;
  v13 = *(_QWORD *)(a1 + 160);
  v293 = *(_QWORD *)(a1 + 224);
  v14 = *(_QWORD *)(a1 + 40);
  v15 = *(_QWORD *)(a1 + 176);
  v16 = *(_QWORD *)(a1 + 168);
  v336 = *(_DWORD *)(a1 + 288);
  v312 = v14;
  v294 = *(_QWORD *)(a1 + 48);
  v315 = *(_QWORD *)(a1 + 56);
  v297 = *(_QWORD *)(a1 + 64);
  v324 = *(_QWORD *)(a1 + 72);
  v331 = *(_QWORD *)(a1 + 80);
  v335 = *(_DWORD *)(a1 + 284);
  v17 = a6 - v335;
  v337 = *(_DWORD *)(a1 + 300);
  v320 = a6 - v335 + 1;
  v338 = *a9;
  v18 = *(_DWORD *)(a1 + 240);
  v339 = *a11;
  v328 = v18;
  if ( a6 >= v320 )
  {
    v19 = v17 + 1LL;
    v20 = v335;
    v21 = v13 + 4 * v19;
    if ( (v21 >= v16 + 4LL * v17 + 20 || v16 + 4 * v19 >= (unsigned __int64)(v13 + 4LL * v17 + 20)) && v335 > 0xC )
    {
      v22 = -(int)(v21 >> 2) & 3;
      if ( (int)v22 + 3 > v335 - 1 )
      {
        v30 = a6 - v335 + 1;
      }
      else
      {
        v23 = a6 - v335 + 1;
        if ( (_DWORD)v22 )
        {
          *(_DWORD *)(v16 + 4LL * v320) = *(_DWORD *)(v13 + 4LL * v320);
          v23 = v17 + 2;
          if ( (_DWORD)v22 != 1 )
          {
            *(_DWORD *)(v16 + 4LL * v23) = *(_DWORD *)(v13 + 4LL * v23);
            v23 = v17 + 3;
            if ( (_DWORD)v22 != 2 )
            {
              *(_DWORD *)(v16 + 4LL * v23) = *(_DWORD *)(v13 + 4LL * v23);
              v23 = v17 + 4;
            }
          }
        }
        v24 = v20 - v22;
        v25 = 0;
        v26 = 4 * (v19 + v22);
        v27 = 0;
        v28 = v13 + v26;
        v29 = v16 + v26;
        do
        {
          ++v25;
          *(__m128i *)(v29 + v27) = _mm_load_si128((const __m128i *)(v28 + v27));
          v27 += 16;
        }
        while ( v24 >> 2 > v25 );
        v30 = (v24 & 0xFFFFFFFC) + v23;
        if ( (v24 & 0xFFFFFFFC) == v24 )
          goto LABEL_18;
      }
      *(_DWORD *)(v16 + 4LL * v30) = *(_DWORD *)(v13 + 4LL * v30);
      if ( a6 >= v30 + 1 )
      {
        *(_DWORD *)(v16 + 4LL * (v30 + 1)) = *(_DWORD *)(v13 + 4LL * (v30 + 1));
        if ( a6 >= v30 + 2 )
        {
          *(_DWORD *)(v16 + 4LL * (v30 + 2)) = *(_DWORD *)(v13 + 4LL * (v30 + 2));
          if ( a6 >= v30 + 3 )
          {
            *(_DWORD *)(v16 + 4LL * (v30 + 3)) = *(_DWORD *)(v13 + 4LL * (v30 + 3));
            v31 = v30 + 4;
            if ( a6 >= v30 + 4 )
            {
              v32 = v30 + 5;
              *(_DWORD *)(v16 + 4LL * v31) = *(_DWORD *)(v13 + 4LL * v31);
              if ( a6 >= v32 )
                *(_DWORD *)(v16 + 4LL * v32) = *(_DWORD *)(v13 + 4LL * v32);
            }
          }
        }
      }
    }
    else
    {
      v280 = 4LL * v320;
      v281 = 4 * (v320 + (unsigned __int64)(v335 - 1) + 1);
      do
      {
        *(_DWORD *)(v16 + v280) = *(_DWORD *)(v13 + v280);
        v280 += 4;
      }
      while ( v280 != v281 );
    }
  }
LABEL_18:
  v334 = 8LL * v18;
  v33 = (_DWORD *)(v334 + a4);
  if ( v18 <= 0 )
  {
    v319 = v18;
    v329 = 0;
    v321 = 1;
    *(_DWORD *)(a4 + 12) = v18;
    *v33 = 1;
    goto LABEL_209;
  }
  if ( (a5 >= a4 + 8LL * v18 + 8 || a4 + 8 >= a5 + 4LL * v18) && (unsigned int)v18 > 8 )
  {
    v34 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_298750);
    v36 = 0;
    v37 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
    v38 = _mm_load_si128((const __m128i *)&xmmword_289C00);
    do
    {
      v39 = si128;
      v40 = si128;
      si128 = _mm_add_epi32(si128, v37);
      ++v36;
      v41 = _mm_add_epi32(v39, v38);
      v42 = _mm_add_epi32(v40, (__m128i)-1LL);
      *(_OWORD *)(a5 + v34) = 0;
      *(__m128i *)(a4 + 2 * v34 + 8) = _mm_unpacklo_epi32(v41, v42);
      *(__m128i *)(a4 + 2 * v34 + 24) = _mm_unpackhi_epi32(v41, v42);
      v34 += 16;
    }
    while ( (unsigned int)v18 >> 2 > v36 );
    v43 = v18 & 0xFFFFFFFC;
    v44 = (v18 & 0xFFFFFFFC) + 1;
    if ( (v18 & 0xFFFFFFFC) != v18 )
    {
      *(_DWORD *)(v12 + 4LL * v44) = 0;
      v45 = (_DWORD *)(a4 + 8LL * v44);
      v46 = v43 + 2;
      v45[1] = v43;
      *v45 = v43 + 2;
      if ( v18 >= (int)(v43 + 2) )
      {
        *(_DWORD *)(v12 + 4LL * v46) = 0;
        v47 = (_DWORD *)(a4 + 8LL * v46);
        v47[1] = v44;
        v48 = v43 + 3;
        *v47 = v43 + 3;
        if ( v18 >= (int)(v43 + 3) )
        {
          *(_DWORD *)(v12 + 4LL * v48) = 0;
          v49 = (_DWORD *)(a4 + 8LL * v48);
          v49[1] = v46;
          *v49 = v43 + 4;
        }
      }
    }
  }
  else
  {
    v279 = 0;
    do
    {
      *(_DWORD *)(a5 + 4 * v279) = 0;
      *(_DWORD *)(a4 + 8 * v279 + 12) = v279;
      *(_DWORD *)(a4 + 8 * v279 + 8) = v279 + 2;
      ++v279;
    }
    while ( v279 != (unsigned int)(v18 - 1) + 1LL );
  }
  v288 = (__int64)v11;
  v321 = 1;
  v50 = v15;
  v333 = 1;
  v326 = 0;
  v15 = v13;
  *(_DWORD *)(a4 + 12) = v18;
  *v33 = 1;
  v319 = v18;
  do
  {
    if ( *(int *)(v331 + 4) > 0 )
    {
      v329 = sub_216720(v288, a2, a3, a7);
      if ( v329 )
      {
        if ( *(int *)(v288 + 272) >= 0 )
        {
          LODWORD(v13) = v15;
          v329 = 7;
          LODWORD(v15) = v50;
          v11 = (_DWORD *)v288;
          goto LABEL_209;
        }
        v329 = 7;
      }
      if ( *(_DWORD *)(v288 + 296) >= v328 )
      {
        LODWORD(v13) = v15;
        LODWORD(v15) = v50;
        v11 = (_DWORD *)v288;
        goto LABEL_209;
      }
    }
    if ( *(int *)(v324 + 4) > 0 )
    {
      v51 = sub_21AC40(v288, a2, a3, a4, v321, a7, (unsigned int *)&a10, &v338, &v336, &v337, &v339, (int *)&v335);
      v329 = v51;
      if ( v51 && (v51 < 0 || *(int *)(v288 + 272) >= 0) || *(_DWORD *)(v288 + 296) >= v328 )
      {
LABEL_223:
        LODWORD(v13) = v15;
        LODWORD(v15) = v50;
        v11 = (_DWORD *)v288;
        goto LABEL_209;
      }
      v320 = a6 - v335 + 1;
    }
    v329 = sub_216A50(v288, a2, a3, a7, a8, &v340, v341);
    if ( v329 )
      goto LABEL_223;
    sub_216EB0(v288, a2, a3, *a8, v340, v341[0]);
    v325 = *(_DWORD *)(v297 + 4LL * v341[0]);
    v52 = *(_DWORD *)(v288 + 304) + 1;
    *(_DWORD *)(v288 + 304) = v52;
    *(_DWORD *)(v294 + 4LL * v52) = v320 - 1;
    *(_DWORD *)(v331 + 4LL * *(int *)(v288 + 304)) = v340;
    v53 = v340;
    v54 = *(int *)(v312 + 4LL * v340);
    v55 = *(_DWORD *)(v315 + 4LL * v340) - 1 + v54;
    v317 = *(_DWORD *)(v315 + 4LL * v340) - 1;
    v56 = v54 + 1;
    v57 = *(_DWORD *)(v312 + 4LL * v340);
    v295 = v55;
    v311 = v54 + 1;
    v322 = 1.0 / *(double *)(v50 + 8 * v54);
    if ( v55 < (int)v54 + 1 )
    {
      v310 = *(_DWORD *)(v294 + 4LL * v341[0]) - 1;
      if ( v325 <= 0 )
      {
        v188 = v320;
        goto LABEL_241;
      }
    }
    else
    {
      v58 = v56;
      v59 = (unsigned int)(~(_DWORD)v54 + v55);
      v60 = v56 + 1LL;
      v61 = v56;
      v62 = v60 + v59;
      while ( 1 )
      {
        v63 = *(int *)(v15 + 4 * v61);
        *(_QWORD *)(v293 - 8LL * v56 + 8 * v61 + 8) = *(_QWORD *)(v50 + 8 * v61);
        *(_DWORD *)(v12 + 4 * v63) = v61 - v57;
        v61 = v60;
        if ( v60 == v62 )
          break;
        ++v60;
      }
      v64 = v295;
      v310 = *(_DWORD *)(v294 + 4LL * v341[0]) - 1;
      if ( v325 <= 0 )
      {
LABEL_139:
        v214 = v58;
        v215 = v58;
        do
        {
          v216 = *(int *)(v15 + 4 * v215++);
          *(_DWORD *)(v12 + 4 * v216) = 0;
        }
        while ( v64 >= (int)v215 );
        if ( *a8 <= 0 )
        {
          if ( v311 <= v295 )
          {
            v282 = (int *)(v15 + 4 * v58);
            do
            {
              v283 = *v282;
              v284 = *(int *)(v297 + 4 * v283);
              v285 = *v282;
              if ( (int)v284 > 0 )
              {
                v286 = (int *)(v331 + 4 * v284);
                v287 = *v286;
                *v286 = v283;
                *(_QWORD *)(a3 + 8 * v283) = (unsigned int)v287;
                if ( (_DWORD)v287 )
                  *(_DWORD *)(a3 + 8 * v287 + 4) = v285;
              }
              ++v282;
            }
            while ( (int *)(v15 + 4 * ((unsigned int)(v295 - v311) + v58) + 4) != v282 );
          }
        }
        else
        {
          do
          {
            v217 = *(int *)(v15 + 4 * v214);
            v218 = *(int *)(v297 + 4 * v217);
            v219 = *(_DWORD *)(v15 + 4 * v214);
            if ( (int)v218 > 0 )
            {
              v220 = a3 + 8 * v217;
              if ( *(_DWORD *)(v220 + 4) <= v328 || (_DWORD)v218 == 1 )
              {
                v221 = (int *)(v331 + 4 * v218);
                v222 = *v221;
                *v221 = v219;
                *(_QWORD *)v220 = (unsigned int)v222;
                if ( (_DWORD)v222 )
                  *(_DWORD *)(a3 + 8 * v222 + 4) = v219;
              }
            }
            ++v214;
          }
          while ( v295 >= (int)v214 );
        }
        v53 = v340;
        goto LABEL_149;
      }
    }
    v292 = v50;
    v299 = v320;
    do
    {
      v65 = (int *)(v16 + 4LL * ++v310);
      v66 = *v65;
      *v65 = 0;
      v296 = v66;
      --*(_DWORD *)(v297 + 4LL * v341[0]);
      ++*(_DWORD *)(v294 + 4LL * v341[0]);
      v309 = v66;
      v67 = 4LL * v66;
      v300 = (unsigned int *)(v67 + v315);
      v68 = *(_DWORD *)(v67 + v315) - 1;
      v301 = (int *)(v312 + v67);
      *(_DWORD *)(v67 + v315) = v68;
      v69 = *(int *)(v312 + v67);
      v70 = 4 * v69;
      v71 = *(_DWORD *)(v312 + v67);
      v72 = (int *)(v15 + 4 * v69);
      v289 = v68 + v69;
      if ( *v72 == v341[0] )
      {
        v73 = (_DWORD *)(v15 + 4 * v69);
        v74 = v69;
      }
      else
      {
        v73 = (_DWORD *)(v15 + v70 + 4);
        v74 = (int)v69 + 1;
        if ( *v73 != v341[0] )
        {
          v73 = (_DWORD *)(v15 + v70 + 8);
          v74 = (int)v69 + 2;
          if ( *v73 != v341[0] )
          {
            v74 = v69 + 3;
            v75 = (_DWORD *)(v15 + v70 + 12);
            while ( 1 )
            {
              v73 = v75;
              if ( *v75 == v341[0] )
                break;
              v76 = v74 + 1;
              v77 = v75 + 1;
              if ( v75[1] == v341[0] )
                goto LABEL_184;
              if ( v75[2] == v341[0] )
              {
                v73 = v75 + 2;
                v74 += 2;
                break;
              }
              v76 = v74 + 3;
              v74 += 4;
              v77 = v75 + 3;
              v75 += 4;
              if ( v73[3] == v341[0] )
              {
LABEL_184:
                v73 = v77;
                v74 = v76;
                break;
              }
            }
          }
        }
      }
      v78 = (double *)(v292 + 8 * v74);
      v79 = *v78;
      v80 = v289 - 1;
      v81 = *(_DWORD *)(v15 + 4LL * v289);
      *v78 = *(double *)(v292 + 8LL * v289);
      v82 = v69 + (v68 & 1);
      *v73 = v81;
      v298 = v317 - v68;
      v83 = 4LL * v82;
      v84 = v15 + v83;
      v85 = -v79 * v322;
      v86 = *(int *)(v15 + v83);
      if ( (_DWORD)v69 == v82 )
      {
        v89 = 9.999999999999999e32;
      }
      else
      {
        v87 = (int *)(v12 + 4LL * *v72);
        v88 = *v87;
        if ( (_DWORD)v88 )
        {
          *v87 = -(int)v88;
          v266 = (double *)(v292 + 8 * v69);
          v267 = *(double *)(v293 + 8 * v88) * v85 + *v266;
          *v266 = v267;
          v89 = fabs(v267);
        }
        else
        {
          v89 = 9.999999999999999e32;
          v298 = v317 - v68 + 1;
        }
      }
      v90 = *(int *)(v15 + v83 + 4);
      v91 = *(int *)(v12 + 4 * v86);
      if ( v80 <= v82 )
      {
LABEL_64:
        if ( v89 <= *(double *)(v288 + 24) )
          goto LABEL_173;
        goto LABEL_65;
      }
      v92 = (double *)(v292 + 8LL * v82);
      v93 = v298;
      v94 = v292 + 8 * (v82 + (unsigned __int64)((v289 - 2 - v82) & 0xFFFFFFFE)) + 16;
      v95 = 0;
      do
      {
        v96 = (int *)(v12 + 4 * v90);
        v97 = *v96;
        if ( (_DWORD)v91 )
        {
          v98 = *(double *)(v293 + 8 * v91);
          *(_DWORD *)(v12 + 4 * v86) = -(int)v91;
          v99 = v98 * v85 + *v92;
          *v92 = v99;
          if ( !v95 )
            v95 = v89 <= *(double *)(v288 + 24);
          v86 = *(int *)(v84 + 8);
          v89 = fabs(v99);
          if ( !(_DWORD)v97 )
          {
LABEL_54:
            ++v93;
            goto LABEL_55;
          }
        }
        else
        {
          ++v93;
          v86 = *(int *)(v84 + 8);
          if ( !(_DWORD)v97 )
            goto LABEL_54;
        }
        v100 = *(double *)(v293 + 8 * v97);
        *v96 = -*v96;
        v101 = v100 * v85 + v92[1];
        v92[1] = v101;
        if ( !v95 )
          v95 = v89 <= *(double *)(v288 + 24);
        v89 = fabs(v101);
LABEL_55:
        v92 += 2;
        v90 = *(int *)(v84 + 12);
        v84 += 8;
        v91 = *(int *)(v12 + 4 * v86);
      }
      while ( v92 != (double *)v94 );
      v298 = v93;
      v71 = v69;
      if ( !v95 )
        goto LABEL_64;
LABEL_173:
      if ( v71 > v80 )
      {
        v80 = v71 - 1;
      }
      else
      {
        v254 = v69 + 1;
        v80 = v71 - 1;
        v255 = v69;
        while ( 1 )
        {
          v256 = *(int *)(v15 + 4 * v255);
          if ( fabs(*(double *)(v292 + 8 * v255)) > *(double *)(v288 + 24) )
          {
            *(_QWORD *)(v292 + 8LL * ++v80) = *(_QWORD *)(v292 + 8 * v255);
            *(_DWORD *)(v15 + 4LL * v80) = v256;
          }
          else
          {
            --v336;
            --v68;
            v257 = (int *)(v297 + 4 * v256);
            v258 = *v257 - 1;
            *v257 = v258;
            v259 = *(_DWORD *)(v294 + 4 * v256);
            v260 = v259 + v258;
            if ( v259 <= v260 )
            {
              v261 = (_DWORD *)(v16 + 4LL * v259);
              v262 = v261 + 1;
              if ( v296 == *v261 )
              {
LABEL_183:
                v263 = (_DWORD *)(v16 + 4LL * v260);
                *v261 = *v263;
                *v263 = 0;
              }
              else
              {
                while ( v260 >= ++v259 )
                {
                  v261 = v262++;
                  if ( *(v262 - 1) == v296 )
                    goto LABEL_183;
                }
              }
            }
          }
          v255 = v254;
          if ( v254 == v69 + 1 + (unsigned int)(~v71 + v289) )
            break;
          ++v254;
        }
      }
LABEL_65:
      if ( !v298 )
      {
        if ( v295 >= v311 )
        {
          v264 = (int *)(v15 + 4LL * v311);
          do
          {
            v265 = *v264++;
            *(_DWORD *)(v12 + 4 * v265) = -*(_DWORD *)(v12 + 4 * v265);
          }
          while ( v264 != (int *)(v15 + 4 * (v311 + (unsigned __int64)(unsigned int)(v295 - v311)) + 4) );
        }
        goto LABEL_118;
      }
      v102 = (int *)(a4 + 8 * v309);
      v103 = *v102;
      v104 = *(_DWORD *)(v312 + 4 * v103) + ~v80;
      v290 = *v102;
      v318 = v104;
      if ( v298 <= v104 )
      {
        if ( v336 + v104 + 2 >= (int)v299 )
          goto LABEL_208;
        if ( v295 < v311 )
          goto LABEL_118;
      }
      else
      {
        v105 = v338;
        if ( (int)(v338 + v68 + v298 + 1) >= (int)v299 )
        {
          v305 = *v102;
          if ( (int)(v336 + v68 + v298 + 1) < (int)v299 )
          {
            v106 = c_ekkrwcs(v288, v292, v15, v312, v315, a4, v321);
            v107 = v338;
            v105 = v106 - 1;
            ++v339;
            v338 = v106 - 1;
            v337 += v107 - v106;
            v108 = *(_DWORD *)(v312 + 4LL * v340);
            v311 = v108 + 1;
            v295 = v108 + v317;
            v71 = *v301;
            v103 = v305;
            goto LABEL_70;
          }
LABEL_208:
          LODWORD(v13) = v15;
          v11 = (_DWORD *)v288;
          LODWORD(v15) = v292;
          v329 = -5;
          goto LABEL_209;
        }
LABEL_70:
        v80 = v68 + v71 - 1;
        if ( v296 != v319 )
        {
          v109 = v321;
          v110 = v102[1];
          if ( v296 == v321 )
          {
            v109 = v103;
            v321 = v290;
          }
          *(_DWORD *)(a4 + 8 * v103 + 4) = v110;
          *(_DWORD *)(a4 + 8 * v110) = v290;
          *(_DWORD *)(a4 + 8 * v109 + 4) = v296;
          *(_DWORD *)(a4 + 8LL * v319) = v296;
          v102[1] = v319;
          *v102 = v321;
          v330 = v105 + 1;
          *v301 = v105 + 1;
          v302 = v105 + 1 - v71;
          if ( v71 <= v80 )
          {
            v111 = v71;
            v112 = v105 - v71;
            v113 = 8LL * v71;
            v114 = v112 + v71 + 5;
            v115 = v71 + 1LL + v112;
            if ( v68 > 0xC
              && (v113 >= 8 * v114 || 8 * v115 >= v113 + 32)
              && (4LL * v71 >= 4 * v114 || 4 * v115 >= 4LL * v71 + 16)
              && (v15 + 4 * v115 >= v292 + 8 * ((unsigned __int64)v68 + v115)
               || v292 + 8 * v115 >= v15 + 4 * ((unsigned __int64)v68 + v115)) )
            {
              v116 = ((unsigned __int64)(v292 + v113) >> 3) & 1;
              if ( (((unsigned __int64)(v292 + v113) >> 3) & 1) != 0 )
              {
                v117 = *(_DWORD *)(v15 + 4LL * v71++);
                *(_QWORD *)(v292 + 8LL * v330) = *(_QWORD *)(v292 + v113);
                *(_DWORD *)(v15 + 4LL * v330) = v117;
              }
              v118 = (((unsigned __int64)(v292 + v113) >> 3) & 1) + v111;
              v119 = v115 + (((unsigned __int64)(v292 + v113) >> 3) & 1);
              v120 = v15 + 4 * v118;
              v121 = v15 + 4 * v119;
              v306 = v68 - v116;
              v122 = (v68 - (unsigned int)v116) >> 2;
              v123 = v292 + 8 * v118;
              v124 = v292 + 8 * v119;
              v125 = 0;
              v126 = 0;
              do
              {
                ++v126;
                v127 = *(_OWORD *)(v123 + 2 * v125);
                *(_OWORD *)(v124 + 2 * v125 + 16) = *(_OWORD *)(v123 + 2 * v125 + 16);
                *(_OWORD *)(v124 + 2 * v125) = v127;
                *(__m128i *)(v121 + v125) = _mm_loadu_si128((const __m128i *)(v120 + v125));
                v125 += 16;
              }
              while ( v122 > v126 );
              v128 = (v306 & 0xFFFFFFFC) + v71;
              if ( (v306 & 0xFFFFFFFC) != v306 )
              {
                v129 = *(_DWORD *)(v15 + 4LL * v128);
                v130 = v302 + v128;
                *(_QWORD *)(v292 + 8 * v130) = *(_QWORD *)(v292 + 8LL * v128);
                *(_DWORD *)(v15 + 4 * v130) = v129;
                v131 = v128 + 1;
                if ( v80 >= v128 + 1 )
                {
                  v132 = *(_QWORD *)(v292 + 8LL * v131);
                  v133 = *(_DWORD *)(v15 + 4LL * v131);
                  v134 = v302 + v131;
                  *(_QWORD *)(v292 + 8 * v134) = v132;
                  *(_DWORD *)(v15 + 4 * v134) = v133;
                  v135 = v128 + 2;
                  if ( v80 >= v128 + 2 )
                  {
                    v136 = v128 + 3;
                    v137 = *(_QWORD *)(v292 + 8LL * v135);
                    v138 = *(_DWORD *)(v15 + 4LL * v135);
                    v139 = v302 + v135;
                    *(_QWORD *)(v292 + 8 * v139) = v137;
                    *(_DWORD *)(v15 + 4 * v139) = v138;
                    if ( v80 >= v136 )
                    {
                      v140 = *(_DWORD *)(v15 + 4LL * v136);
                      v141 = v302 + v136;
                      *(_QWORD *)(v292 + 8 * v141) = *(_QWORD *)(v292 + 8LL * v136);
                      *(_DWORD *)(v15 + 4 * v141) = v140;
                    }
                  }
                }
              }
            }
            else
            {
              for ( i = v71 + 1LL; ; ++i )
              {
                v278 = *(_DWORD *)(v15 + 4 * v111);
                *(_QWORD *)(v292 + 8LL * v302 + 8 * v111) = *(_QWORD *)(v292 + 8 * v111);
                *(_DWORD *)(v15 + 4LL * v302 + 4 * v111) = v278;
                v111 = i;
                if ( i == v71 + 1LL + v68 - 1 )
                  break;
              }
            }
          }
          v80 = v105 + v68;
        }
        if ( v326 )
        {
          v338 += v326;
        }
        else if ( 2 * v328 + v80 + 100 >= (int)v299 )
        {
          v338 = v80;
        }
        else
        {
          v270 = (v328 - *(_DWORD *)(v288 + 296) + 32) & 0xFFFFFFE0;
          if ( (int)(v80 + v270 * v270 + 32) >= (int)v299 )
          {
            v338 = (v80 + 31) & 0xFFFFFFE0;
          }
          else
          {
            v271 = v80;
            v326 = (v328 - *(_DWORD *)(v288 + 296) + 32) & 0xFFFFFFE0;
            if ( v338 >= v80 )
              v271 = v338;
            v338 = v270 + (v271 & 0xFFFFFFE0);
          }
        }
        *v300 = v68;
        v319 = v296;
        if ( v311 > v295 )
        {
LABEL_117:
          v338 = v80;
          goto LABEL_118;
        }
      }
      v142 = v311;
      v291 = v80;
      v143 = v12;
      while ( 2 )
      {
        v144 = *(int *)(v15 + 4 * v142);
        v145 = 4 * v144;
        v146 = (int *)(v143 + 4 * v144);
        v147 = *v146;
        if ( (int)v147 <= 0 )
        {
          *v146 = -(int)v147;
        }
        else
        {
          v148 = *(double *)(v293 + 8 * v147) * v85;
          if ( fabs(v148) > *(double *)(v288 + 24) )
          {
            *(double *)(v292 + 8LL * ++v291) = v148;
            *(_DWORD *)(v15 + 4LL * v291) = v144;
            v149 = a10;
            v150 = (int *)(v297 + v145);
            v151 = (int *)(v294 + v145);
            v152 = ++v336;
            v153 = *v150;
            v154 = *v151;
            v155 = *v150 + *v151;
            v156 = v155 - 1;
            if ( a10 == v155 - 1 )
            {
              if ( v155 < (int)v299 )
              {
                a10 = *v150 + *v151;
                v157 = (int *)(v16 + 4 * v149 + 4);
              }
              else
              {
                if ( v153 + v155 < (int)v299 )
                {
                  v223 = v155 - 1;
                }
                else
                {
                  if ( v152 + v153 + 1 >= (int)v299 )
                    goto LABEL_208;
                  v223 = c_ekkclco(v288, v16, v294, v297, (unsigned int)v156);
                  ++v339;
                  a10 = v223;
                  v153 = *v150;
                  v310 = *(_DWORD *)(v294 + 4LL * v341[0]) - 1;
                  v154 = *v151;
                  v156 = *v150 + *v151 - 1;
                }
                v224 = v223 + 1;
                *v151 = v223 + 1;
                v304 = v223 + 1 - v154;
                if ( v156 >= v154 )
                {
                  v225 = (unsigned int)(v156 - v154);
                  v226 = v223 - v154;
                  v308 = v225 + 1;
                  v227 = v226 + v154 + 1;
                  v228 = 4LL * v154;
                  v314 = v228 >= 4 * (v226 + v154 + 5);
                  v229 = 4 * v227 >= v228 + 16;
                  v230 = v16 + v228;
                  if ( (v229 || v314) && v308 > 0xA )
                  {
                    v231 = v154;
                    v232 = -(int)(v230 >> 2) & 3;
                    if ( v232 )
                    {
                      *(_DWORD *)(v16 + 4LL * v224) = *(_DWORD *)v230;
                      *(_DWORD *)v230 = 0;
                      v231 = v154 + 1;
                      if ( v232 != 1 )
                      {
                        v233 = (_DWORD *)(v16 + 4LL * v231);
                        *(_DWORD *)(v16 + 4LL * (v304 + v231)) = *v233;
                        *v233 = 0;
                        v231 = v154 + 2;
                        if ( v232 != 2 )
                        {
                          v234 = (_DWORD *)(v16 + 4LL * v231);
                          *(_DWORD *)(v16 + 4LL * (v304 + v231)) = *v234;
                          v231 = v154 + 3;
                          *v234 = 0;
                        }
                      }
                    }
                    v235 = v16 + 4 * (v227 + v232);
                    v236 = 0;
                    v237 = v308 - v232;
                    v238 = v16 + 4 * (v232 + (__int64)v154);
                    v239 = 0;
                    v240 = ((v237 - 4) >> 2) + 1;
                    do
                    {
                      ++v239;
                      *(__m128i *)(v235 + v236) = _mm_load_si128((const __m128i *)(v238 + v236));
                      *(_OWORD *)(v238 + v236) = 0;
                      v236 += 16;
                    }
                    while ( v240 > v239 );
                    v241 = 4 * v240;
                    v242 = v241 + v231;
                    if ( v241 != v237 )
                    {
                      v243 = (_DWORD *)(v16 + 4LL * v242);
                      *(_DWORD *)(v16 + 4LL * (v304 + v242)) = *v243;
                      v244 = v242 + 1;
                      *v243 = 0;
                      if ( v156 >= v242 + 1 )
                      {
                        v245 = (_DWORD *)(v16 + 4LL * v244);
                        *(_DWORD *)(v16 + 4LL * (v304 + v244)) = *v245;
                        v246 = v242 + 2;
                        *v245 = 0;
                        if ( v242 + 2 <= v156 )
                        {
                          v247 = (_DWORD *)(v16 + 4LL * v246);
                          *(_DWORD *)(v16 + 4LL * (v304 + v246)) = *v247;
                          v248 = v242 + 3;
                          *v247 = 0;
                          if ( v242 + 3 <= v156 )
                          {
                            v249 = (_DWORD *)(v16 + 4LL * v248);
                            *(_DWORD *)(v16 + 4LL * (v304 + v248)) = *v249;
                            v250 = v242 + 4;
                            *v249 = 0;
                            if ( v242 + 4 <= v156 )
                            {
                              v251 = v242 + 5;
                              v252 = (_DWORD *)(v16 + 4LL * v250);
                              *(_DWORD *)(v16 + 4LL * (v304 + v250)) = *v252;
                              *v252 = 0;
                              if ( v156 >= v251 )
                              {
                                v253 = (_DWORD *)(v16 + 4LL * v251);
                                *(_DWORD *)(v16 + 4LL * (v304 + v251)) = *v253;
                                *v253 = 0;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    do
                    {
                      *(_DWORD *)(v230 + 4LL * v304) = *(_DWORD *)v230;
                      *(_DWORD *)v230 = 0;
                      v230 += 4LL;
                    }
                    while ( v230 != v16 + 4 * (v154 + v225) + 4 );
                  }
                }
LABEL_113:
                v187 = a10 + v156 - v154;
                v157 = (int *)(v16 + 4LL * (v187 + 1) + 4);
                a10 = v187 + 2;
              }
            }
            else
            {
              v157 = (int *)(v16 + 4LL * v156 + 4);
              if ( *v157 )
              {
                if ( a10 + v153 + 1 >= (int)v299 )
                {
                  if ( v152 + v153 + 1 >= (int)v299 )
                    goto LABEL_208;
                  a10 = c_ekkclco(v288, v16, v294, v297, a10);
                  LODWORD(v149) = a10;
                  ++v339;
                  v153 = *v150;
                  v154 = *v151;
                  v156 = *v150 + *v151 - 1;
                  v310 = *(_DWORD *)(v294 + 4LL * v341[0]) - 1;
                }
                v158 = v149 + 1;
                *v151 = v149 + 1;
                v303 = v149 + 1 - v154;
                if ( v156 >= v154 )
                {
                  v159 = (int)v149 - v154;
                  v160 = (unsigned int)(v156 - v154);
                  v161 = 4LL * v154;
                  v162 = v159 + v154 + 1;
                  v307 = v160 + 1;
                  v313 = v161 >= 4 * (v159 + v154 + 5);
                  LOBYTE(v159) = 4 * v162 >= v161 + 16;
                  v163 = v16 + v161;
                  if ( (unsigned __int8)v159 | v313 && v307 > 0xA )
                  {
                    v164 = v154;
                    v165 = -(int)(v163 >> 2) & 3;
                    if ( v165 )
                    {
                      *(_DWORD *)(v16 + 4LL * v158) = *(_DWORD *)v163;
                      *(_DWORD *)v163 = 0;
                      v164 = v154 + 1;
                      if ( v165 != 1 )
                      {
                        v166 = (_DWORD *)(v16 + 4LL * v164);
                        *(_DWORD *)(v16 + 4LL * (v303 + v164)) = *v166;
                        *v166 = 0;
                        v164 = v154 + 2;
                        if ( v165 != 2 )
                        {
                          v167 = (_DWORD *)(v16 + 4LL * v164);
                          *(_DWORD *)(v16 + 4LL * (v303 + v164)) = *v167;
                          v164 = v154 + 3;
                          *v167 = 0;
                        }
                      }
                    }
                    v168 = v16 + 4 * (v165 + (__int64)v154);
                    v169 = 0;
                    v170 = v307 - v165;
                    v171 = v16 + 4 * (v165 + v162);
                    v172 = 0;
                    v173 = ((v170 - 4) >> 2) + 1;
                    do
                    {
                      ++v172;
                      *(__m128i *)(v171 + v169) = _mm_load_si128((const __m128i *)(v168 + v169));
                      *(_OWORD *)(v168 + v169) = 0;
                      v169 += 16;
                    }
                    while ( v173 > v172 );
                    v174 = 4 * v173;
                    v175 = v174 + v164;
                    if ( v174 != v170 )
                    {
                      v176 = (_DWORD *)(v16 + 4LL * v175);
                      *(_DWORD *)(v16 + 4LL * (v303 + v175)) = *v176;
                      v177 = v175 + 1;
                      *v176 = 0;
                      if ( v156 >= v175 + 1 )
                      {
                        v178 = (_DWORD *)(v16 + 4LL * v177);
                        *(_DWORD *)(v16 + 4LL * (v303 + v177)) = *v178;
                        v179 = v175 + 2;
                        *v178 = 0;
                        if ( v156 >= v175 + 2 )
                        {
                          v180 = (_DWORD *)(v16 + 4LL * v179);
                          *(_DWORD *)(v16 + 4LL * (v303 + v179)) = *v180;
                          v181 = v175 + 3;
                          *v180 = 0;
                          if ( v175 + 3 <= v156 )
                          {
                            v182 = (_DWORD *)(v16 + 4LL * v181);
                            *(_DWORD *)(v16 + 4LL * (v303 + v181)) = *v182;
                            v183 = v175 + 4;
                            *v182 = 0;
                            if ( v156 >= v175 + 4 )
                            {
                              v184 = v175 + 5;
                              v185 = (_DWORD *)(v16 + 4LL * v183);
                              *(_DWORD *)(v16 + 4LL * (v303 + v183)) = *v185;
                              *v185 = 0;
                              if ( v156 >= v184 )
                              {
                                v186 = (_DWORD *)(v16 + 4LL * v184);
                                *(_DWORD *)(v16 + 4LL * (v303 + v184)) = *v186;
                                *v186 = 0;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    do
                    {
                      *(_DWORD *)(v163 + 4LL * v303) = *(_DWORD *)v163;
                      *(_DWORD *)v163 = 0;
                      v163 += 4LL;
                    }
                    while ( v163 != v16 + 4 * (v154 + v160) + 4 );
                  }
                }
                goto LABEL_113;
              }
            }
            *v157 = v296;
            *v150 = v153 + 1;
          }
        }
        if ( v295 >= (int)++v142 )
          continue;
        break;
      }
      v12 = v143;
      v80 = v291;
      if ( v298 > v318 )
        goto LABEL_117;
LABEL_118:
      *v300 = v80 - *v301 + 1;
      if ( a10 + 1 >= (int)v299 )
      {
        a10 = c_ekkclco(v288, v16, v294, v297, (unsigned int)a10);
        ++v339;
        v310 = *(_DWORD *)(v294 + 4LL * v341[0]) - 1;
      }
      if ( v338 + 1 >= (int)v299 )
      {
        v268 = c_ekkrwcs(v288, v292, v15, v312, v315, a4, v321);
        ++v339;
        v337 += v338 - v268;
        v338 = v268 - 1;
        v269 = *(_DWORD *)(v312 + 4LL * v340);
        v311 = v269 + 1;
        v295 = v269 + v317;
      }
      ++v335;
      --v336;
      v188 = v299 - 1;
      *(double *)(v292 + 8 * v299 - 8) = v85;
      *(_DWORD *)(v16 + 4 * v299 - 4) = v296;
      v189 = 0.0;
      v190 = *v300;
      v191 = *v301;
      v192 = *v300 & 1;
      v193 = (double *)(v292 + 8 * v191);
      v194 = (int *)(v15 + 4 * v191);
      v195 = *v193;
      if ( v192 )
        v189 = fabs(v195);
      if ( v192 >= v190 )
      {
        v209 = *v193;
        v208 = (double *)(v292 + 8 * v191);
        v207 = (int *)(v15 + 4 * v191);
      }
      else
      {
        v196 = v190 - 1;
        v197 = v192;
        v198 = 0;
        v199 = v196 - v192;
        v200 = v192 + 2LL;
        v201 = v200 + (v199 & 0xFFFFFFFE);
        while ( 1 )
        {
          v202 = fabs(v193[v197]);
          v203 = v202 <= v189;
          v204 = fmax(v202, v189);
          v205 = fabs(v193[v197 + 1]);
          if ( !v203 )
            v198 = v197;
          v206 = v198;
          v198 = v197 + 1;
          v197 = v200;
          v203 = v205 <= v204;
          v189 = fmax(v205, v204);
          if ( v203 )
            v198 = v206;
          if ( v200 == v201 )
            break;
          v200 += 2;
        }
        v207 = &v194[v198];
        v208 = &v193[v198];
        v209 = *v208;
      }
      v210 = *v207;
      *v207 = *v194;
      *v194 = v210;
      *v208 = v195;
      *v193 = v209;
      v211 = (int)*v300;
      if ( (int)v211 > 0 )
      {
        v212 = (int *)(v324 + 4 * v211);
        v213 = *v212;
        *v212 = v296;
        *(_QWORD *)(a2 + 8 * v309) = (unsigned int)v213;
        if ( (_DWORD)v213 )
          *(_DWORD *)(a2 + 8 * v213 + 4) = v296;
      }
      --v299;
    }
    while ( v325 >= v320 + 1 - (int)v299 );
    v50 = v292;
    if ( v311 <= v295 )
    {
      v58 = v311;
      v320 = v188;
      v64 = v295;
      goto LABEL_139;
    }
    v53 = v340;
LABEL_241:
    v320 = v188;
LABEL_149:
    ++v333;
    *(_DWORD *)(v288 + 352) += *(_DWORD *)(v315 + 4 * v53);
  }
  while ( v328 >= v333 );
  LODWORD(v13) = v15;
  LODWORD(v15) = v50;
  v11 = (_DWORD *)v288;
LABEL_209:
  v272 = c_ekkrwcs((int)v11, v15, v13, v312, v315, a4, v321);
  v273 = v339 + 1;
  v274 = v337 + v338 - v272--;
  v275 = (int *)(a4 + v334 + 8);
  v275[1] = v321;
  *v275 = v319;
  LODWORD(v275) = v335;
  v11[72] = v272;
  v11[75] = v274;
  v11[71] = (_DWORD)v275;
  *a9 = v272;
  *a11 = v273;
  return v329;
}

