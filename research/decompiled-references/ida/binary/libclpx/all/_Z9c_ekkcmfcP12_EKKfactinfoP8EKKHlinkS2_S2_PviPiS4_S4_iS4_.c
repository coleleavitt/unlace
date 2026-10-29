__int64 __fastcall c_ekkcmfc(
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
  unsigned __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // rbp
  signed int v15; // r8d
  int v16; // ecx
  int v17; // ebx
  __int64 v18; // rdx
  unsigned int v19; // edi
  unsigned __int64 v20; // rax
  unsigned int v21; // eax
  int v22; // esi
  __int64 v23; // rcx
  unsigned int v24; // edi
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // edx
  __int64 v28; // r9
  __int64 v29; // rcx
  int v30; // esi
  int v31; // eax
  int v32; // esi
  _DWORD *v33; // rsi
  __int64 v34; // rax
  __m128i si128; // xmm0
  __m128i v36; // xmm11
  _OWORD *v37; // rcx
  unsigned int v38; // edx
  __m128i v39; // xmm10
  __m128i v40; // xmm9
  __m128i v41; // xmm8
  __m128i v42; // xmm4
  __m128i v43; // xmm5
  __m128i v44; // xmm3
  __m128i v45; // xmm1
  __m128i v46; // xmm3
  unsigned int v47; // eax
  signed int v48; // edi
  _DWORD *v49; // rcx
  signed int v50; // edx
  _DWORD *v51; // r8
  signed int v52; // ecx
  _DWORD *v53; // rdi
  signed int v54; // edx
  _DWORD *v55; // rdi
  signed int v56; // ecx
  _DWORD *v57; // r8
  signed int v58; // edi
  _DWORD *v59; // r8
  signed int v60; // edx
  _DWORD *v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  _DWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // r12
  __int64 v68; // rbp
  int v69; // eax
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rcx
  int v73; // edx
  double v74; // xmm0_8
  int v75; // ecx
  __int64 v76; // r9
  int v77; // esi
  __int64 v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rdi
  __int64 v82; // r8
  int v83; // ecx
  __int64 v84; // r15
  __int64 v85; // rbp
  int *v86; // rax
  int v87; // ebx
  __int64 v88; // rax
  unsigned int v89; // r13d
  __int64 v90; // r9
  __int64 v91; // rdi
  int v92; // r10d
  int *v93; // rsi
  _DWORD *v94; // rax
  __int64 v95; // rdx
  _DWORD *v96; // rdi
  __int64 v97; // r8
  _DWORD *v98; // r11
  double *v99; // rcx
  double v100; // xmm0_8
  int v101; // edx
  double v102; // xmm0_8
  int v103; // r11d
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rax
  __int16 *v107; // rdi
  __int64 v108; // rsi
  double v109; // xmm2_8
  int v110; // r8d
  __int64 v111; // rsi
  __int16 v112; // di
  int v113; // r13d
  double *v114; // rdx
  unsigned __int64 v115; // rbx
  bool v116; // r11
  __int16 *v117; // r12
  __int64 v118; // rsi
  double v119; // xmm1_8
  double v120; // xmm1_8
  double v121; // xmm1_8
  double v122; // xmm1_8
  int *v123; // rbx
  __int64 v124; // r12
  int v125; // eax
  int v126; // r11d
  int v127; // r9d
  int v128; // eax
  int v129; // edx
  int v130; // eax
  __int64 v131; // rdx
  __int64 v132; // rcx
  int v133; // ebx
  __int64 v134; // rax
  __int64 v135; // r11
  __int64 v136; // rsi
  __int64 v137; // rdi
  __int64 v138; // r11
  __int64 v139; // rcx
  int v140; // esi
  __int64 v141; // xmm1_8
  unsigned __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // r8
  __int64 v145; // rdi
  int v146; // ebx
  unsigned int v147; // r12d
  __int64 v148; // rsi
  __int64 v149; // rcx
  __int64 v150; // rax
  unsigned int v151; // edx
  __int128 v152; // xmm2
  signed int v153; // r10d
  int v154; // edx
  __int64 v155; // rax
  int v156; // eax
  __int64 v157; // xmm1_8
  int v158; // edx
  __int64 v159; // rax
  int v160; // eax
  int v161; // r10d
  __int64 v162; // xmm1_8
  int v163; // edx
  __int64 v164; // rax
  int v165; // edx
  __int64 v166; // rax
  __int64 v167; // rbx
  __int64 v168; // r13
  __int64 v169; // r12
  __int16 *v170; // rdx
  __int64 v171; // rax
  double v172; // xmm1_8
  __int64 v173; // r12
  __int64 v174; // r8
  int *v175; // r15
  int *v176; // r12
  int v177; // eax
  int v178; // ecx
  int v179; // esi
  int v180; // edi
  int v181; // edx
  int *v182; // rdi
  int v183; // r9d
  __int64 v184; // r12
  __int64 v185; // r11
  __int64 v186; // rax
  __int64 v187; // r8
  unsigned __int64 v188; // rax
  int v189; // r11d
  unsigned int v190; // r12d
  _DWORD *v191; // rax
  _DWORD *v192; // rax
  __int64 v193; // rdi
  __int64 v194; // rax
  unsigned int v195; // r10d
  __int64 v196; // r12
  unsigned int v197; // r8d
  unsigned int v198; // r9d
  int v199; // r9d
  int v200; // r11d
  _DWORD *v201; // rdi
  int v202; // eax
  _DWORD *v203; // rdi
  int v204; // eax
  _DWORD *v205; // rdi
  int v206; // eax
  _DWORD *v207; // rdi
  int v208; // eax
  int v209; // r11d
  _DWORD *v210; // rdi
  _DWORD *v211; // rax
  int v212; // edx
  int v213; // r10d
  double v214; // xmm0_8
  int v215; // edx
  __int64 v216; // rax
  int v217; // ecx
  double *v218; // rdi
  int *v219; // r9
  double v220; // xmm4_8
  int v221; // esi
  __int64 v222; // rax
  int v223; // edx
  int v224; // esi
  __int64 v225; // rcx
  __int64 v226; // rsi
  double v227; // xmm1_8
  bool v228; // cc
  double v229; // xmm2_8
  double v230; // xmm0_8
  int v231; // r8d
  int *v232; // rax
  double *v233; // rdx
  double v234; // xmm0_8
  int v235; // ecx
  __int64 v236; // rax
  int *v237; // rdx
  __int64 v238; // rax
  int v239; // esi
  int v240; // edi
  __int64 v241; // rdx
  __int64 v242; // rax
  __int64 v243; // rcx
  __int64 v244; // rsi
  __int64 v245; // rax
  int v246; // ecx
  __int64 v247; // rsi
  int *v248; // rbx
  __int64 v249; // rax
  int v250; // r15d
  int v251; // edx
  int v252; // eax
  int v253; // edx
  int v254; // edx
  int v255; // eax
  int v256; // ecx
  int *v257; // rsi
  int v258; // edx
  int v260; // eax
  int v261; // r8d
  int v262; // r12d
  __int64 v263; // r9
  __int64 v264; // r10
  __int64 v265; // rax
  bool v266; // sf
  bool v267; // of
  unsigned __int64 v268; // rax
  int v269; // r9d
  unsigned int v270; // r10d
  int v271; // r8d
  _DWORD *v272; // rax
  __int64 v273; // rax
  int v274; // r8d
  _DWORD *v275; // rax
  __int64 v276; // rax
  __int64 v277; // rdi
  unsigned int v278; // r11d
  unsigned int v279; // r10d
  unsigned int v280; // r8d
  __int64 v281; // r11
  __int64 v282; // rax
  unsigned int v283; // r8d
  int v284; // r8d
  int v285; // r9d
  _DWORD *v286; // rdi
  int v287; // eax
  _DWORD *v288; // rdi
  int v289; // eax
  _DWORD *v290; // rdi
  int v291; // eax
  _DWORD *v292; // rdi
  int v293; // eax
  int v294; // r9d
  _DWORD *v295; // rdi
  _DWORD *v296; // rax
  __int64 v297; // rsi
  __int64 v298; // rdx
  int v299; // ebx
  __int64 v300; // rdi
  __int64 v301; // rax
  int *v302; // rdx
  int v303; // ecx
  int v304; // edx
  int v305; // ecx
  _DWORD *v306; // r8
  _DWORD *v307; // rax
  _DWORD *v308; // rax
  int *v309; // rax
  __int64 v310; // rdx
  double *v311; // rdi
  double v312; // xmm2_8
  int v313; // eax
  int v314; // eax
  int v315; // ebx
  unsigned int v316; // eax
  __int64 i; // rdx
  int v318; // r8d
  int v319; // ecx
  _OWORD *v320; // rax
  __int64 v321; // rax
  __int64 v322; // rax
  int *v323; // rax
  __int64 v324; // rsi
  __int64 v325; // rdx
  int v326; // ecx
  int *v327; // r11
  __int64 v328; // rdx
  int v329; // edx
  __int64 v330; // rcx
  __int64 v331; // rax
  __int64 v332; // rcx
  int v333; // ebx
  __int64 v334; // rax
  _OWORD *v335; // rax
  int v336; // eax
  int v337; // ebx
  _OWORD *v338; // rax
  int v339; // [rsp+8h] [rbp-1A0h]
  int v340; // [rsp+8h] [rbp-1A0h]
  int v342; // [rsp+18h] [rbp-190h]
  __int64 v343; // [rsp+20h] [rbp-188h]
  __int64 v344; // [rsp+28h] [rbp-180h]
  __int64 v345; // [rsp+30h] [rbp-178h]
  int v346; // [rsp+3Ch] [rbp-16Ch]
  __int64 v347; // [rsp+40h] [rbp-168h]
  int v348; // [rsp+4Ch] [rbp-15Ch]
  __int64 v349; // [rsp+50h] [rbp-158h]
  unsigned int *v350; // [rsp+58h] [rbp-150h]
  int v351; // [rsp+60h] [rbp-148h]
  unsigned int v352; // [rsp+60h] [rbp-148h]
  unsigned int v353; // [rsp+60h] [rbp-148h]
  unsigned int v354; // [rsp+60h] [rbp-148h]
  int *v355; // [rsp+68h] [rbp-140h]
  unsigned int v356; // [rsp+70h] [rbp-138h]
  int v357; // [rsp+70h] [rbp-138h]
  bool v358; // [rsp+70h] [rbp-138h]
  __int64 v359; // [rsp+80h] [rbp-128h]
  __int64 v360; // [rsp+88h] [rbp-120h]
  int v361; // [rsp+90h] [rbp-118h]
  int v362; // [rsp+94h] [rbp-114h]
  int v363; // [rsp+98h] [rbp-110h]
  bool v364; // [rsp+98h] [rbp-110h]
  __int64 v365; // [rsp+98h] [rbp-110h]
  __int64 v366; // [rsp+A0h] [rbp-108h]
  int v368; // [rsp+B0h] [rbp-F8h]
  int v369; // [rsp+B4h] [rbp-F4h]
  int v370; // [rsp+B8h] [rbp-F0h]
  int v371; // [rsp+BCh] [rbp-ECh]
  int v372; // [rsp+C0h] [rbp-E8h]
  int v373; // [rsp+C4h] [rbp-E4h]
  double v374; // [rsp+C8h] [rbp-E0h]
  __int64 v376; // [rsp+D8h] [rbp-D0h]
  int v377; // [rsp+E0h] [rbp-C8h]
  unsigned int v378; // [rsp+E4h] [rbp-C4h]
  _DWORD *v380; // [rsp+100h] [rbp-A8h]
  unsigned int v381; // [rsp+108h] [rbp-A0h]
  int v382; // [rsp+10Ch] [rbp-9Ch]
  __int64 v383; // [rsp+110h] [rbp-98h]
  int v386; // [rsp+12Ch] [rbp-7Ch]
  int v387; // [rsp+138h] [rbp-70h]
  int v388; // [rsp+13Ch] [rbp-6Ch]
  __int64 v389; // [rsp+140h] [rbp-68h]
  int v390; // [rsp+148h] [rbp-60h]
  int v391; // [rsp+14Ch] [rbp-5Ch]
  unsigned int v392; // [rsp+154h] [rbp-54h] BYREF
  int v393; // [rsp+158h] [rbp-50h] BYREF
  int v394; // [rsp+15Ch] [rbp-4Ch] BYREF
  int v395; // [rsp+160h] [rbp-48h] BYREF
  int v396; // [rsp+164h] [rbp-44h] BYREF
  int v397; // [rsp+168h] [rbp-40h] BYREF
  int v398[15]; // [rsp+16Ch] [rbp-3Ch] BYREF

  v11 = a5 - 2;
  v12 = *(_QWORD *)(a1 + 160);
  v344 = *(_QWORD *)(a1 + 224);
  v13 = *(_QWORD *)(a1 + 176);
  v14 = *(_QWORD *)(a1 + 168);
  v359 = *(_QWORD *)(a1 + 40);
  v345 = *(_QWORD *)(a1 + 48);
  v366 = *(_QWORD *)(a1 + 56);
  v347 = *(_QWORD *)(a1 + 64);
  v376 = *(_QWORD *)(a1 + 72);
  v383 = *(_QWORD *)(a1 + 80);
  v392 = *(_DWORD *)(a1 + 284);
  v15 = a6 - v392;
  v16 = *(_DWORD *)(a1 + 340);
  v17 = *(_DWORD *)(a1 + 240);
  v393 = *(_DWORD *)(a1 + 288);
  v391 = v16;
  v377 = v17;
  v370 = a6 - v392 + 1;
  v394 = *(_DWORD *)(a1 + 300);
  v395 = *a9;
  v396 = *a11;
  if ( a6 < v370 )
    goto LABEL_18;
  v18 = v15 + 1LL;
  v19 = v392;
  v20 = v12 + 4 * v18;
  if ( v20 < v14 + 4LL * v15 + 20 && v14 + 4 * v18 < (unsigned __int64)(v12 + 4LL * v15 + 20) || v392 <= 0xC )
  {
    v321 = 4LL * v370;
    do
    {
      *(_DWORD *)(v14 + v321) = *(_DWORD *)(v12 + v321);
      v321 += 4;
    }
    while ( v321 != 4 * (v370 + (unsigned __int64)(unsigned int)(a6 - 1 - v15) + 1) );
    goto LABEL_18;
  }
  v21 = -(int)(v20 >> 2) & 3;
  if ( v21 + 3 > v392 - 1 )
  {
    v30 = a6 - v392 + 1;
LABEL_12:
    *(_DWORD *)(v14 + 4LL * v30) = *(_DWORD *)(v12 + 4LL * v30);
    if ( a6 >= v30 + 1 )
    {
      *(_DWORD *)(v14 + 4LL * (v30 + 1)) = *(_DWORD *)(v12 + 4LL * (v30 + 1));
      if ( a6 >= v30 + 2 )
      {
        *(_DWORD *)(v14 + 4LL * (v30 + 2)) = *(_DWORD *)(v12 + 4LL * (v30 + 2));
        if ( a6 >= v30 + 3 )
        {
          *(_DWORD *)(v14 + 4LL * (v30 + 3)) = *(_DWORD *)(v12 + 4LL * (v30 + 3));
          v31 = v30 + 4;
          if ( a6 >= v30 + 4 )
          {
            v32 = v30 + 5;
            *(_DWORD *)(v14 + 4LL * v31) = *(_DWORD *)(v12 + 4LL * v31);
            if ( a6 >= v32 )
              *(_DWORD *)(v14 + 4LL * v32) = *(_DWORD *)(v12 + 4LL * v32);
          }
        }
      }
    }
    goto LABEL_18;
  }
  v22 = a6 - v392 + 1;
  if ( v21 )
  {
    *(_DWORD *)(v14 + 4LL * v370) = *(_DWORD *)(v12 + 4LL * v370);
    v22 = v15 + 2;
    if ( v21 != 1 )
    {
      *(_DWORD *)(v14 + 4LL * v22) = *(_DWORD *)(v12 + 4LL * v22);
      v22 = v15 + 3;
      if ( v21 != 2 )
      {
        *(_DWORD *)(v14 + 4LL * v22) = *(_DWORD *)(v12 + 4LL * v22);
        v22 = v15 + 4;
      }
    }
  }
  v23 = v21;
  v24 = v19 - v21;
  v25 = 0;
  v26 = v18 + v23;
  v27 = 0;
  v26 *= 4;
  v28 = v12 + v26;
  v29 = v14 + v26;
  do
  {
    ++v27;
    *(__m128i *)(v29 + v25) = _mm_load_si128((const __m128i *)(v28 + v25));
    v25 += 16;
  }
  while ( v24 >> 2 > v27 );
  v30 = (v24 & 0xFFFFFFFC) + v22;
  if ( (v24 & 0xFFFFFFFC) != v24 )
    goto LABEL_12;
LABEL_18:
  v33 = (_DWORD *)(8LL * v17 + a4);
  if ( v17 <= 0 )
  {
    v371 = v17;
    v381 = 0;
    v372 = 1;
    *(_DWORD *)(a4 + 12) = v17;
    *v33 = 1;
    goto LABEL_168;
  }
  v34 = a4 + 8;
  if ( (a4 + 8 >= a5 + 2LL * v17 || a5 >= a4 + 8LL * v17 + 8) && (unsigned int)v17 > 9 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_298750);
    v36 = _mm_load_si128((const __m128i *)&xmmword_298760);
    v37 = (_OWORD *)a5;
    v38 = 0;
    v39 = _mm_load_si128((const __m128i *)&xmmword_290840);
    v40 = _mm_load_si128((const __m128i *)&xmmword_289C00);
    v41 = _mm_load_si128((const __m128i *)&xmmword_290850);
    do
    {
      ++v38;
      v42 = _mm_add_epi32(si128, (__m128i)-1LL);
      v43 = _mm_add_epi32(si128, v40);
      v44 = si128;
      v45 = _mm_add_epi32(si128, v41);
      *v37 = 0;
      si128 = _mm_add_epi32(si128, v36);
      v46 = _mm_add_epi32(v44, v39);
      v34 += 64;
      *(__m128i *)(v34 - 48) = _mm_unpackhi_epi32(v43, v42);
      ++v37;
      *(__m128i *)(v34 - 64) = _mm_unpacklo_epi32(v43, v42);
      *(__m128i *)(v34 - 32) = _mm_unpacklo_epi32(v45, v46);
      *(__m128i *)(v34 - 16) = _mm_unpackhi_epi32(v45, v46);
    }
    while ( (unsigned int)v17 >> 3 > v38 );
    v47 = v17 & 0xFFFFFFF8;
    v48 = (v17 & 0xFFFFFFF8) + 1;
    if ( (v17 & 0xFFFFFFF8) != v17 )
    {
      *(_WORD *)(v11 + 2LL * v48) = 0;
      v49 = (_DWORD *)(a4 + 8LL * v48);
      v50 = v47 + 2;
      v49[1] = v47;
      *v49 = v47 + 2;
      if ( v17 >= (int)(v47 + 2) )
      {
        *(_WORD *)(v11 + 2LL * v50) = 0;
        v51 = (_DWORD *)(a4 + 8LL * v50);
        v52 = v47 + 3;
        v51[1] = v48;
        *v51 = v47 + 3;
        if ( v17 >= (int)(v47 + 3) )
        {
          *(_WORD *)(v11 + 2LL * v52) = 0;
          v53 = (_DWORD *)(a4 + 8LL * v52);
          v53[1] = v50;
          v54 = v47 + 4;
          *v53 = v47 + 4;
          if ( v17 >= (int)(v47 + 4) )
          {
            *(_WORD *)(v11 + 2LL * v54) = 0;
            v55 = (_DWORD *)(a4 + 8LL * v54);
            v55[1] = v52;
            v56 = v47 + 5;
            *v55 = v47 + 5;
            if ( v17 >= (int)(v47 + 5) )
            {
              *(_WORD *)(v11 + 2LL * v56) = 0;
              v57 = (_DWORD *)(a4 + 8LL * v56);
              v58 = v47 + 6;
              v57[1] = v54;
              *v57 = v47 + 6;
              if ( v17 >= (int)(v47 + 6) )
              {
                *(_WORD *)(v11 + 2LL * v58) = 0;
                v59 = (_DWORD *)(a4 + 8LL * v58);
                v60 = v47 + 7;
                v59[1] = v56;
                *v59 = v47 + 7;
                if ( v17 >= (int)(v47 + 7) )
                {
                  *(_WORD *)(v11 + 2LL * v60) = 0;
                  v61 = (_DWORD *)(a4 + 8LL * v60);
                  v61[1] = v58;
                  *v61 = v47 + 8;
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v322 = 0;
    do
    {
      *(_WORD *)(a5 + 2 * v322) = 0;
      *(_DWORD *)(a4 + 8 * v322 + 12) = v322;
      *(_DWORD *)(a4 + 8 * v322 + 8) = v322 + 2;
      ++v322;
    }
    while ( v322 != (unsigned int)(v17 - 1) + 1LL );
  }
  v371 = v17;
  v387 = 0;
  v390 = v17 >> 3;
  v388 = 0;
  *(_DWORD *)(a4 + 12) = v17;
  *v33 = 1;
  v372 = 1;
  v386 = 1;
  v382 = 2 * v17;
  v378 = 0;
  v62 = (unsigned int)((v17 >> 3) - 1);
  v63 = 32 * (v62 + 1);
  v64 = 32 * v62;
  v65 = (_DWORD *)(a5 + v63);
  if ( !(v17 >> 3) )
    v65 = (_DWORD *)a5;
  v380 = v65;
  v66 = v11;
  v389 = a5 + v64 + 32;
  v67 = v14;
  v68 = v66;
LABEL_34:
  if ( *(int *)(v383 + 4) > 0 )
  {
    v381 = sub_216720(a1, a2, a3, a7);
    if ( v381 )
    {
      v381 = 7;
      if ( *(int *)(a1 + 272) >= 0 )
        goto LABEL_168;
    }
    if ( *(_DWORD *)(a1 + 296) >= v377 )
      goto LABEL_168;
  }
  if ( *(int *)(v376 + 4) > 0 )
  {
    v69 = sub_21AC40(a1, a2, a3, a4, v372, a7, (unsigned int *)&a10, &v395, &v393, &v394, &v396, (int *)&v392);
    v381 = v69;
    if ( v69 && (v69 < 0 || *(int *)(a1 + 272) >= 0) || *(_DWORD *)(a1 + 296) >= v377 )
      goto LABEL_168;
    v370 = a6 - v392 + 1;
  }
  v381 = sub_216A50(a1, a2, a3, a7, a8, &v397, v398);
  if ( v381 )
    goto LABEL_168;
  sub_216EB0(a1, a2, a3, *a8, v397, v398[0]);
  v373 = *(_DWORD *)(v347 + 4LL * v398[0]);
  v70 = *(_DWORD *)(a1 + 304) + 1;
  *(_DWORD *)(a1 + 304) = v70;
  *(_DWORD *)(v345 + 4LL * v70) = v370 - 1;
  *(_DWORD *)(v383 + 4LL * *(int *)(a1 + 304)) = v397;
  v71 = v397;
  v72 = *(int *)(v359 + 4LL * v397);
  v368 = *(_DWORD *)(v366 + 4LL * v397) - 1;
  v73 = *(_DWORD *)(v359 + 4LL * v397);
  v342 = v72 + v368;
  v362 = v72 + 1;
  v374 = 1.0 / *(double *)(v13 + 8 * v72);
  v74 = (double)(v377 - *(_DWORD *)(a1 + 296));
  if ( v74 > 70.0 && (double)(v393 - *(_DWORD *)(a1 + 352)) * 1.8 > v74 * v74 )
  {
    v319 = 1;
    if ( *a7 )
      v319 = v387;
    v387 = v319;
  }
  v75 = v73 + 1;
  v361 = *(_DWORD *)(v345 + 4LL * v398[0]) - 1;
  if ( v342 < v73 + 1 )
  {
    if ( v373 <= 0 )
    {
      v213 = v370;
LABEL_266:
      v370 = v213;
      goto LABEL_157;
    }
  }
  else
  {
    v76 = v75;
    v77 = 1;
    v78 = (unsigned int)(~v73 + v342);
    v79 = v75 + 1LL;
    v80 = v75;
    v81 = v79 + v78;
    v82 = v344 - 8LL * v75;
    while ( 1 )
    {
      v83 = *(_DWORD *)(v12 + 4 * v80);
      *(_QWORD *)(v82 + 8 * v80 + 8) = *(_QWORD *)(v13 + 8 * v80);
      *(_WORD *)(v68 + 2LL * v83) = v77++;
      v80 = v79;
      if ( v79 == v81 )
        break;
      ++v79;
    }
    if ( v373 <= 0 )
    {
      v240 = v342;
      v239 = *a8;
      goto LABEL_147;
    }
  }
  v343 = v13;
  v84 = v68;
  v13 = v12;
  v85 = v67;
  v349 = v370;
LABEL_48:
  v86 = (int *)(v85 + 4LL * ++v361);
  v87 = *v86;
  *v86 = 0;
  v346 = v87;
  --*(_DWORD *)(v347 + 4LL * v398[0]);
  ++*(_DWORD *)(v345 + 4LL * v398[0]);
  v360 = v87;
  v88 = 4LL * v87;
  v350 = (unsigned int *)(v88 + v366);
  v89 = *(_DWORD *)(v88 + v366) - 1;
  v355 = (int *)(v359 + v88);
  *(_DWORD *)(v88 + v366) = v89;
  v90 = *(int *)(v359 + v88);
  v91 = 4 * v90;
  v92 = *(_DWORD *)(v359 + v88);
  v93 = (int *)(v13 + 4 * v90);
  v351 = v89 + v90;
  if ( v398[0] == *v93 )
  {
    v94 = (_DWORD *)(v13 + 4 * v90);
    v95 = v90;
  }
  else
  {
    v94 = (_DWORD *)(v13 + v91 + 4);
    v95 = (int)v90 + 1;
    if ( *v94 != v398[0] )
    {
      v94 = (_DWORD *)(v13 + v91 + 8);
      v95 = (int)v90 + 2;
      if ( *v94 != v398[0] )
      {
        v95 = v90 + 3;
        v96 = (_DWORD *)(v13 + v91 + 12);
        while ( 1 )
        {
          v94 = v96;
          if ( *v96 == v398[0] )
            break;
          v97 = v95 + 1;
          v98 = v96 + 1;
          if ( v96[1] == v398[0] )
            goto LABEL_207;
          if ( v96[2] == v398[0] )
          {
            v94 = v96 + 2;
            v95 += 2;
            break;
          }
          v97 = v95 + 3;
          v95 += 4;
          v98 = v96 + 3;
          v96 += 4;
          if ( v94[3] == v398[0] )
          {
LABEL_207:
            v94 = v98;
            v95 = v97;
            break;
          }
        }
      }
    }
  }
  v99 = (double *)(v343 + 8 * v95);
  v100 = *v99;
  v101 = *(_DWORD *)(v13 + 4LL * v351);
  *v99 = *(double *)(v343 + 8LL * v351);
  *v94 = v101;
  v339 = v351 - 1;
  v102 = -v100 * v374;
  v103 = v90 + (v89 & 1);
  v348 = v368 - v89;
  v104 = 4LL * v103;
  v105 = v13 + v104;
  v106 = *(int *)(v13 + v104);
  if ( (_DWORD)v90 == v103 )
  {
    v109 = 9.999999999999999e32;
  }
  else
  {
    v107 = (__int16 *)(v84 + 2LL * *v93);
    v108 = *v107;
    if ( (_WORD)v108 )
    {
      *v107 = -(__int16)v108;
      v311 = (double *)(v343 + 8 * v90);
      v312 = *(double *)(v344 + 8 * v108) * v102 + *v311;
      *v311 = v312;
      v109 = fabs(v312);
    }
    else
    {
      v109 = 9.999999999999999e32;
      v348 = v368 - v89 + 1;
    }
  }
  v110 = *(__int16 *)(v84 + 2 * v106);
  v111 = *(int *)(v13 + v104 + 4);
  v112 = *(_WORD *)(v84 + 2 * v106);
  if ( v339 <= v103 )
  {
LABEL_72:
    if ( v109 <= *(double *)(a1 + 24) )
      goto LABEL_191;
LABEL_73:
    if ( !v348 )
      goto LABEL_203;
    goto LABEL_74;
  }
  v356 = v89;
  v113 = v348;
  v114 = (double *)(v343 + 8LL * v103);
  v115 = v343 + 8 * (v103 + (unsigned __int64)((v351 - 2 - v103) & 0xFFFFFFFE)) + 16;
  v116 = 0;
  do
  {
    v117 = (__int16 *)(v84 + 2 * v111);
    v118 = *v117;
    if ( v110 )
    {
      v119 = *(double *)(v344 + 8LL * v110);
      *(_WORD *)(v84 + 2 * v106) = -v112;
      v120 = v119 * v102 + *v114;
      *v114 = v120;
      if ( !v116 )
        v116 = v109 <= *(double *)(a1 + 24);
      v106 = *(int *)(v105 + 8);
      v109 = fabs(v120);
      if ( !(_WORD)v118 )
      {
LABEL_62:
        ++v113;
        goto LABEL_63;
      }
    }
    else
    {
      ++v113;
      v106 = *(int *)(v105 + 8);
      if ( !(_WORD)v118 )
        goto LABEL_62;
    }
    v121 = *(double *)(v344 + 8 * v118);
    *v117 = -*v117;
    v122 = v121 * v102 + v114[1];
    v114[1] = v122;
    if ( !v116 )
      v116 = v109 <= *(double *)(a1 + 24);
    v109 = fabs(v122);
LABEL_63:
    v110 = *(__int16 *)(v84 + 2 * v106);
    v114 += 2;
    v111 = *(int *)(v105 + 12);
    v105 += 8;
    v112 = *(_WORD *)(v84 + 2 * v106);
  }
  while ( v114 != (double *)v115 );
  v348 = v113;
  v89 = v356;
  if ( !v116 )
    goto LABEL_72;
LABEL_191:
  if ( v92 > v339 )
  {
    v339 = v92 - 1;
    goto LABEL_73;
  }
  v297 = v90 + 1;
  v298 = v90;
  v299 = v92 - 1;
  v300 = v90 + 1 + (unsigned int)(~v92 + v351);
  while ( 2 )
  {
    v301 = *(int *)(v13 + 4 * v298);
    if ( fabs(*(double *)(v343 + 8 * v298)) > *(double *)(a1 + 24) )
    {
      *(_QWORD *)(v343 + 8LL * ++v299) = *(_QWORD *)(v343 + 8 * v298);
      *(_DWORD *)(v13 + 4LL * v299) = v301;
LABEL_194:
      v298 = v297;
      if ( v297 == v300 )
        goto LABEL_202;
LABEL_195:
      ++v297;
      continue;
    }
    break;
  }
  --v393;
  --v89;
  v302 = (int *)(v347 + 4 * v301);
  v303 = *v302 - 1;
  *v302 = v303;
  v304 = *(_DWORD *)(v345 + 4 * v301);
  v305 = v304 + v303;
  if ( v304 > v305 )
    goto LABEL_194;
  v306 = (_DWORD *)(v85 + 4LL * v304);
  v307 = v306 + 1;
  if ( v346 != *v306 )
  {
    while ( v305 >= ++v304 )
    {
      v306 = v307++;
      if ( *(v307 - 1) == v346 )
        goto LABEL_201;
    }
    goto LABEL_194;
  }
LABEL_201:
  v308 = (_DWORD *)(v85 + 4LL * v305);
  *v306 = *v308;
  *v308 = 0;
  v298 = v297;
  if ( v297 != v300 )
    goto LABEL_195;
LABEL_202:
  v339 = v299;
  if ( !v348 )
  {
LABEL_203:
    if ( v362 <= v342 )
    {
      v309 = (int *)(v13 + 4LL * v362);
      do
      {
        v310 = *v309++;
        *(_WORD *)(v84 + 2 * v310) = -*(_WORD *)(v84 + 2 * v310);
      }
      while ( v309 != (int *)(v13 + 4 * (v362 + (unsigned __int64)(unsigned int)(v342 - v362)) + 4) );
    }
    goto LABEL_126;
  }
LABEL_74:
  v123 = (int *)(a4 + 8 * v360);
  v124 = *v123;
  v125 = *(_DWORD *)(v359 + 4 * v124) + ~v339;
  v126 = *v123;
  v369 = v125;
  if ( v348 <= v125 )
  {
    if ( v393 + v125 + 2 >= (int)v349 )
      goto LABEL_228;
    if ( v362 > v342 )
      goto LABEL_126;
    goto LABEL_97;
  }
  v127 = v395;
  if ( (int)(v395 + v89 + v348 + 1) < (int)v349 )
  {
LABEL_78:
    v339 = v89 + v92 - 1;
    if ( v346 != v371 )
    {
      v131 = v123[1];
      if ( v346 == v372 )
      {
        v132 = v124;
        v372 = v126;
      }
      else
      {
        v132 = v372;
      }
      *(_DWORD *)(a4 + 8 * v124 + 4) = v131;
      *(_DWORD *)(a4 + 8 * v131) = v126;
      *(_DWORD *)(a4 + 8 * v132 + 4) = v346;
      *(_DWORD *)(a4 + 8LL * v371) = v346;
      *v123 = v372;
      v123[1] = v371;
      v133 = v127 + 1;
      *v355 = v127 + 1;
      v363 = v127 + 1 - v92;
      if ( v92 <= (int)(v89 + v92 - 1) )
      {
        v134 = v92;
        v135 = v127 - v92;
        v136 = v135 + v92 + 5;
        v137 = 8LL * v92;
        v138 = v92 + 1LL + v135;
        if ( v89 > 0xC
          && (v137 >= 8 * v136 || 8 * v138 >= v137 + 32)
          && (4LL * v92 >= 4 * v136 || 4 * v138 >= 4LL * v92 + 16)
          && (v13 + 4 * v138 >= v343 + 8 * ((unsigned __int64)v89 + v138)
           || v343 + 8 * v138 >= v13 + 4 * ((unsigned __int64)v89 + v138)) )
        {
          v139 = ((unsigned __int64)(v343 + v137) >> 3) & 1;
          if ( (((unsigned __int64)(v343 + v137) >> 3) & 1) != 0 )
          {
            v140 = *(_DWORD *)(v13 + 4LL * v92);
            v141 = *(_QWORD *)(v343 + 8LL * v92++);
            *(_QWORD *)(v343 + 8LL * v133) = v141;
            *(_DWORD *)(v13 + 4LL * v133) = v140;
          }
          v142 = (((unsigned __int64)(v343 + v137) >> 3) & 1) + v134;
          v143 = v138 + (((unsigned __int64)(v343 + v137) >> 3) & 1);
          v144 = v13 + 4 * v142;
          v145 = v13 + 4 * v143;
          v146 = v89 - v139;
          v147 = (v89 - (unsigned int)v139) >> 2;
          v148 = v343 + 8 * v142;
          v149 = v343 + 8 * v143;
          v150 = 0;
          v151 = 0;
          do
          {
            ++v151;
            v152 = *(_OWORD *)(v148 + 2 * v150);
            *(_OWORD *)(v149 + 2 * v150 + 16) = *(_OWORD *)(v148 + 2 * v150 + 16);
            *(_OWORD *)(v149 + 2 * v150) = v152;
            *(__m128i *)(v145 + v150) = _mm_loadu_si128((const __m128i *)(v144 + v150));
            v150 += 16;
          }
          while ( v147 > v151 );
          v153 = (v146 & 0xFFFFFFFC) + v92;
          if ( (v146 & 0xFFFFFFFC) != v146 )
          {
            v154 = *(_DWORD *)(v13 + 4LL * v153);
            v155 = v363 + v153;
            *(_QWORD *)(v343 + 8 * v155) = *(_QWORD *)(v343 + 8LL * v153);
            *(_DWORD *)(v13 + 4 * v155) = v154;
            v156 = v153 + 1;
            if ( v339 >= v153 + 1 )
            {
              v157 = *(_QWORD *)(v343 + 8LL * v156);
              v158 = *(_DWORD *)(v13 + 4LL * v156);
              v159 = v363 + v156;
              *(_QWORD *)(v343 + 8 * v159) = v157;
              *(_DWORD *)(v13 + 4 * v159) = v158;
              v160 = v153 + 2;
              if ( v153 + 2 <= v339 )
              {
                v161 = v153 + 3;
                v162 = *(_QWORD *)(v343 + 8LL * v160);
                v163 = *(_DWORD *)(v13 + 4LL * v160);
                v164 = v363 + v160;
                *(_QWORD *)(v343 + 8 * v164) = v162;
                *(_DWORD *)(v13 + 4 * v164) = v163;
                if ( v161 <= v339 )
                {
                  v165 = *(_DWORD *)(v13 + 4LL * v161);
                  v166 = v363 + v161;
                  *(_QWORD *)(v343 + 8 * v166) = *(_QWORD *)(v343 + 8LL * v161);
                  *(_DWORD *)(v13 + 4 * v166) = v165;
                }
              }
            }
          }
        }
        else
        {
          for ( i = v92 + 1LL; ; ++i )
          {
            v318 = *(_DWORD *)(v13 + 4 * v134);
            *(_QWORD *)(v343 + 8LL * v363 + 8 * v134) = *(_QWORD *)(v343 + 8 * v134);
            *(_DWORD *)(v13 + 4LL * v363 + 4 * v134) = v318;
            v134 = i;
            if ( i == v92 + 1LL + v89 - 1 )
              break;
          }
        }
      }
      v339 = v89 + v127;
    }
    if ( v378 )
    {
      v395 += v378;
    }
    else
    {
      v315 = v339;
      if ( v382 + v339 + 100 >= (int)v349 )
      {
        v395 = v339;
      }
      else
      {
        v316 = (v377 - *(_DWORD *)(a1 + 296) + 32) & 0xFFFFFFE0;
        if ( (int)(v339 + v316 * v316 + 32) >= (int)v349 )
        {
          v395 = (v339 + 31) & 0xFFFFFFE0;
        }
        else
        {
          v378 = (v377 - *(_DWORD *)(a1 + 296) + 32) & 0xFFFFFFE0;
          if ( v395 >= v339 )
            v315 = v395;
          v395 = v316 + (v315 & 0xFFFFFFE0);
        }
      }
    }
    *v350 = v89;
    v371 = v346;
    if ( v362 > v342 )
    {
LABEL_125:
      v395 = v339;
      goto LABEL_126;
    }
LABEL_97:
    v167 = v362;
    v168 = v84;
    while ( 1 )
    {
      v169 = *(int *)(v13 + 4 * v167);
      v170 = (__int16 *)(v168 + 2 * v169);
      v171 = *v170;
      if ( (__int16)v171 <= 0 )
      {
        *v170 = -(__int16)v171;
        goto LABEL_123;
      }
      v172 = *(double *)(v344 + 8 * v171) * v102;
      if ( fabs(v172) > *(double *)(a1 + 24) )
        break;
LABEL_123:
      if ( v342 < (int)++v167 )
      {
        v84 = v168;
        if ( v348 > v369 )
          goto LABEL_125;
LABEL_126:
        *v350 = v339 - *v355 + 1;
        if ( a10 + 1 >= (int)v349 )
        {
          a10 = c_ekkclco(a1, v85, v345, v347, (unsigned int)a10);
          ++v396;
          v361 = *(_DWORD *)(v345 + 4LL * v398[0]) - 1;
        }
        if ( v395 + 1 >= (int)v349 )
        {
          v313 = c_ekkrwcs(a1, v343, v13, v359, v366, a4, v372);
          ++v396;
          v394 += v395 - v313;
          v395 = v313 - 1;
          v314 = *(_DWORD *)(v359 + 4LL * v397);
          v362 = v314 + 1;
          v342 = v314 + v368;
        }
        ++v392;
        --v393;
        v213 = v349 - 1;
        *(double *)(v343 + 8 * v349 - 8) = v102;
        *(_DWORD *)(v85 + 4 * v349 - 4) = v346;
        v214 = 0.0;
        v215 = *v350;
        v216 = *v355;
        v217 = *v350 & 1;
        v218 = (double *)(v343 + 8 * v216);
        v219 = (int *)(v13 + 4 * v216);
        v220 = *v218;
        if ( v217 )
          v214 = fabs(v220);
        if ( v217 >= v215 )
        {
          v234 = *v218;
          v233 = (double *)(v343 + 8 * v216);
          v232 = (int *)(v13 + 4 * v216);
        }
        else
        {
          v221 = v215 - 1;
          v222 = v217;
          v223 = 0;
          v224 = v221 - v217;
          v225 = v217 + 2LL;
          v226 = v225 + (v224 & 0xFFFFFFFE);
          while ( 1 )
          {
            v227 = fabs(v218[v222]);
            v228 = v227 <= v214;
            v229 = fmax(v227, v214);
            v230 = fabs(v218[v222 + 1]);
            if ( !v228 )
              v223 = v222;
            v231 = v223;
            v223 = v222 + 1;
            v222 = v225;
            v228 = v230 <= v229;
            v214 = fmax(v230, v229);
            if ( v228 )
              v223 = v231;
            if ( v225 == v226 )
              break;
            v225 += 2;
          }
          v232 = &v219[v223];
          v233 = &v218[v223];
          v234 = *v233;
        }
        v235 = *v232;
        *v232 = *v219;
        *v219 = v235;
        *v233 = v220;
        *v218 = v234;
        v236 = (int)*v350;
        if ( (int)v236 > 0 )
        {
          v237 = (int *)(v376 + 4 * v236);
          v238 = *v237;
          *v237 = v346;
          *(_QWORD *)(a2 + 8 * v360) = (unsigned int)v238;
          if ( (_DWORD)v238 )
            *(_DWORD *)(a2 + 8 * v238 + 4) = v346;
        }
        if ( v373 >= v370 + 1 - (int)--v349 )
          goto LABEL_48;
        v12 = v13;
        v67 = v85;
        v13 = v343;
        v68 = v84;
        v239 = *a8;
        if ( v362 > v342 )
        {
          v71 = v397;
          goto LABEL_266;
        }
        v76 = v362;
        v370 = v213;
        v240 = v342;
LABEL_147:
        v241 = v76;
        v242 = v76;
        do
        {
          v243 = *(int *)(v12 + 4 * v242++);
          *(_WORD *)(v68 + 2 * v243) = 0;
        }
        while ( v240 >= (int)v242 );
        if ( v239 <= 0 )
        {
          if ( v342 >= v362 )
          {
            v323 = (int *)(v12 + 4 * v76);
            do
            {
              v324 = *v323;
              v325 = *(int *)(v347 + 4 * v324);
              v326 = *v323;
              if ( (int)v325 > 0 )
              {
                v327 = (int *)(v383 + 4 * v325);
                v328 = *v327;
                *v327 = v324;
                *(_QWORD *)(a3 + 8 * v324) = (unsigned int)v328;
                if ( (_DWORD)v328 )
                  *(_DWORD *)(a3 + 8 * v328 + 4) = v326;
              }
              ++v323;
            }
            while ( v323 != (int *)(v12 + 4 * ((unsigned int)(v342 - v362) + v76) + 4) );
          }
        }
        else
        {
          do
          {
            v244 = *(int *)(v12 + 4 * v241);
            v245 = *(int *)(v347 + 4 * v244);
            v246 = *(_DWORD *)(v12 + 4 * v241);
            if ( (int)v245 > 0 )
            {
              v247 = a3 + 8 * v244;
              if ( *(_DWORD *)(v247 + 4) <= v377 || (_DWORD)v245 == 1 )
              {
                v248 = (int *)(v383 + 4 * v245);
                v249 = *v248;
                *v248 = v246;
                *(_QWORD *)v247 = (unsigned int)v249;
                if ( (_DWORD)v249 )
                  *(_DWORD *)(a3 + 8 * v249 + 4) = v246;
              }
            }
            ++v241;
          }
          while ( v342 >= (int)v241 );
        }
        v71 = v397;
LABEL_157:
        *(_DWORD *)(a1 + 352) += *(_DWORD *)(v366 + 4 * v71);
        if ( v387 )
        {
          v250 = v377 - *(_DWORD *)(a1 + 296);
          v340 = v250 * v250;
          if ( v395 + v250 * v250 >= v370 )
          {
            if ( !v388 )
            {
              v251 = *(_DWORD *)(a1 + 376);
              v252 = a6 - *(_DWORD *)(a1 + 284) + 4 * *(_DWORD *)(a1 + 288) + 1000;
              if ( v252 < v251 )
                v252 = *(_DWORD *)(a1 + 376);
              v253 = (int)((double)v251 * 1.2);
              if ( v252 > v253 )
                v252 = v253;
              v254 = *(_DWORD *)(a1 + 384);
              *(_DWORD *)(a1 + 376) = v252;
              if ( v254 < v252 && v254 > 0 )
              {
                *(_DWORD *)(a1 + 376) = v254;
                v388 = v250;
              }
              else
              {
                v388 = v250;
              }
            }
            goto LABEL_167;
          }
          if ( v390 )
          {
            v320 = (_OWORD *)a5;
            do
            {
              *v320 = 0;
              v320 += 2;
              *(v320 - 1) = 0;
            }
            while ( v320 != (_OWORD *)v389 );
          }
          switch ( v377 & 7 )
          {
            case 0:
              goto LABEL_277;
            case 1:
              goto LABEL_276;
            case 2:
              goto LABEL_275;
            case 3:
              goto LABEL_274;
            case 4:
              goto LABEL_273;
            case 5:
              goto LABEL_272;
            case 6:
              goto LABEL_271;
            case 7:
              v380[6] = 0;
LABEL_271:
              v380[5] = 0;
LABEL_272:
              v380[4] = 0;
LABEL_273:
              v380[3] = 0;
LABEL_274:
              v380[2] = 0;
LABEL_275:
              v380[1] = 0;
LABEL_276:
              *v380 = 0;
LABEL_277:
              v329 = 0;
              v330 = (unsigned int)(v377 - 1);
              v331 = 0;
              do
              {
                if ( *(int *)(a3 + 8 * v331 + 12) >= 0 )
                  *(_WORD *)(a5 + 2 * v331) = ++v329;
                ++v331;
              }
              while ( v331 != v330 + 1 );
              v332 = v330 + 2;
              v333 = 0;
              v334 = 1;
              do
              {
                if ( *(int *)(a2 + 8 * v334 + 4) >= 0 )
                  v333 = v250 + v333 - *(_DWORD *)(v366 + 4 * v334);
                ++v334;
              }
              while ( v334 != v332 );
              if ( v377 - *(_DWORD *)(a1 + 296) == v329 )
              {
                v336 = c_ekkrwcs(a1, v13, v12, v359, v366, a4, v372);
                v394 += v395 - v336;
                v395 = v336 - 1;
                v337 = v336 - 1 + v333;
                if ( v337 + v340 < v370 )
                {
                  v395 = v337;
                  c_ekkrwct(a1, v13, v12, v359, v366, a4, a2, v68, v344, v371, v337);
                  v394 += v395;
                  if ( (int)(v393 + v392) > 5 * v377 && v340 > (int)(v393 + v392) >> 2 && !v391 )
                    *(_DWORD *)(a1 + 292) = v250;
                  v381 = c_ekkcmfd(
                           a1,
                           (int)v344 + 4,
                           a2,
                           a3,
                           (int)a5 + 4,
                           a6,
                           (__int64)&v392,
                           (__int64)&v393,
                           (__int64)a7);
                  goto LABEL_168;
                }
                if ( v390 )
                {
                  v338 = (_OWORD *)a5;
                  do
                  {
                    *v338 = 0;
                    v338 += 2;
                    *(v338 - 1) = 0;
                  }
                  while ( v338 != (_OWORD *)v389 );
                }
                switch ( v377 & 7 )
                {
                  case 0:
                    goto LABEL_167;
                  case 1:
                    goto LABEL_296;
                  case 2:
                    goto LABEL_295;
                  case 3:
                    goto LABEL_294;
                  case 4:
                    goto LABEL_293;
                  case 5:
                    goto LABEL_292;
                  case 6:
                    goto LABEL_291;
                  case 7:
LABEL_290:
                    v380[6] = 0;
LABEL_291:
                    v380[5] = 0;
LABEL_292:
                    v380[4] = 0;
LABEL_293:
                    v380[3] = 0;
LABEL_294:
                    v380[2] = 0;
LABEL_295:
                    v380[1] = 0;
LABEL_296:
                    *v380 = 0;
                    break;
                }
              }
              else
              {
                if ( v390 )
                {
                  v335 = (_OWORD *)a5;
                  do
                  {
                    *v335 = 0;
                    v335 += 2;
                    *(v335 - 1) = 0;
                  }
                  while ( v335 != (_OWORD *)v389 );
                }
                switch ( v377 & 7 )
                {
                  case 0:
                    goto LABEL_167;
                  case 1:
                    goto LABEL_296;
                  case 2:
                    goto LABEL_295;
                  case 3:
                    goto LABEL_294;
                  case 4:
                    goto LABEL_293;
                  case 5:
                    goto LABEL_292;
                  case 6:
                    goto LABEL_291;
                  case 7:
                    goto LABEL_290;
                }
              }
              break;
          }
        }
LABEL_167:
        if ( v377 < ++v386 )
          goto LABEL_168;
        goto LABEL_34;
      }
    }
    *(double *)(v343 + 8LL * ++v339) = v172;
    *(_DWORD *)(v13 + 4LL * v339) = v169;
    v173 = 4 * v169;
    v174 = a10;
    v175 = (int *)(v347 + v173);
    v176 = (int *)(v345 + v173);
    v177 = ++v393;
    v178 = *v175;
    v179 = *v176;
    v180 = *v175 + *v176;
    v181 = v180 - 1;
    if ( a10 == v180 - 1 )
    {
      if ( v180 < (int)v349 )
      {
        a10 = *v175 + *v176;
        v182 = (int *)(v85 + 4 * v174 + 4);
        goto LABEL_122;
      }
      if ( v178 + v180 < (int)v349 )
      {
        v260 = v180 - 1;
      }
      else
      {
        if ( v177 + v178 + 1 >= (int)v349 )
          goto LABEL_228;
        v260 = c_ekkclco(a1, v85, v345, v347, (unsigned int)v181);
        ++v396;
        a10 = v260;
        v178 = *v175;
        v361 = *(_DWORD *)(v345 + 4LL * v398[0]) - 1;
        v179 = *v176;
        v181 = *v175 + *v176 - 1;
      }
      v261 = v260 + 1;
      *v176 = v260 + 1;
      v262 = v260 + 1 - v179;
      if ( v181 >= v179 )
      {
        v263 = (unsigned int)(v181 - v179);
        v264 = v260 - v179;
        v353 = v263 + 1;
        v265 = 4LL * v179;
        v365 = v264 + v179 + 1;
        v358 = v265 >= 4 * (v264 + v179 + 5);
        v267 = __OFSUB__(4 * v365, v265 + 16);
        v266 = 4 * v365 - (v265 + 16) < 0;
        v268 = v85 + v265;
        if ( (v266 == v267 || v358) && v353 > 0xA )
        {
          v269 = v179;
          v270 = -(int)(v268 >> 2) & 3;
          if ( v270 )
          {
            *(_DWORD *)(v85 + 4LL * v261) = *(_DWORD *)v268;
            *(_DWORD *)v268 = 0;
            v269 = v179 + 1;
            if ( v270 != 1 )
            {
              v271 = v262 + v269;
              v272 = (_DWORD *)(v85 + 4LL * v269);
              v269 = v179 + 2;
              *(_DWORD *)(v85 + 4LL * v271) = *v272;
              *v272 = 0;
              if ( v270 != 2 )
              {
                v273 = v269;
                v274 = v269 + v262;
                v269 = v179 + 3;
                v275 = (_DWORD *)(v85 + 4 * v273);
                *(_DWORD *)(v85 + 4LL * v274) = *v275;
                *v275 = 0;
              }
            }
          }
          v276 = v365 + v270;
          v277 = v85 + 4 * (v270 + (__int64)v179);
          v278 = v353 - v270;
          v279 = 0;
          v280 = v278 - 4;
          v354 = v278;
          v281 = v85 + 4 * v276;
          v282 = 0;
          v283 = (v280 >> 2) + 1;
          do
          {
            ++v279;
            *(__m128i *)(v281 + v282) = _mm_load_si128((const __m128i *)(v277 + v282));
            *(_OWORD *)(v277 + v282) = 0;
            v282 += 16;
          }
          while ( v283 > v279 );
          v284 = 4 * v283;
          v285 = v284 + v269;
          if ( v284 != v354 )
          {
            v286 = (_DWORD *)(v85 + 4LL * v285);
            *(_DWORD *)(v85 + 4LL * (v262 + v285)) = *v286;
            v287 = v285 + 1;
            *v286 = 0;
            if ( v181 >= v285 + 1 )
            {
              v288 = (_DWORD *)(v85 + 4LL * v287);
              *(_DWORD *)(v85 + 4LL * (v262 + v287)) = *v288;
              v289 = v285 + 2;
              *v288 = 0;
              if ( v181 >= v285 + 2 )
              {
                v290 = (_DWORD *)(v85 + 4LL * v289);
                *(_DWORD *)(v85 + 4LL * (v262 + v289)) = *v290;
                v291 = v285 + 3;
                *v290 = 0;
                if ( v181 >= v285 + 3 )
                {
                  v292 = (_DWORD *)(v85 + 4LL * v291);
                  *(_DWORD *)(v85 + 4LL * (v262 + v291)) = *v292;
                  v293 = v285 + 4;
                  *v292 = 0;
                  if ( v285 + 4 <= v181 )
                  {
                    v294 = v285 + 5;
                    v295 = (_DWORD *)(v85 + 4LL * v293);
                    *(_DWORD *)(v85 + 4LL * (v262 + v293)) = *v295;
                    *v295 = 0;
                    if ( v294 <= v181 )
                    {
                      v296 = (_DWORD *)(v85 + 4LL * v294);
                      *(_DWORD *)(v85 + 4LL * (v262 + v294)) = *v296;
                      *v296 = 0;
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
            *(_DWORD *)(v268 + 4LL * v262) = *(_DWORD *)v268;
            *(_DWORD *)v268 = 0;
            v268 += 4LL;
          }
          while ( v268 != v85 + 4 * (v179 + v263) + 4 );
        }
      }
    }
    else
    {
      v182 = (int *)(v85 + 4LL * v181 + 4);
      if ( !*v182 )
      {
LABEL_122:
        *v182 = v346;
        *v175 = v178 + 1;
        goto LABEL_123;
      }
      if ( a10 + v178 + 1 >= (int)v349 )
      {
        if ( v177 + v178 + 1 >= (int)v349 )
          goto LABEL_228;
        a10 = c_ekkclco(a1, v85, v345, v347, a10);
        LODWORD(v174) = a10;
        ++v396;
        v178 = *v175;
        v179 = *v176;
        v181 = *v175 + *v176 - 1;
        v361 = *(_DWORD *)(v345 + 4LL * v398[0]) - 1;
      }
      v183 = v174 + 1;
      *v176 = v174 + 1;
      v357 = v174 + 1 - v179;
      if ( v181 >= v179 )
      {
        v184 = (int)v174 - v179;
        v185 = (unsigned int)(v181 - v179);
        v186 = 4LL * v179;
        v187 = v184 + v179 + 1;
        v352 = v185 + 1;
        v364 = v186 >= 4 * (v184 + v179 + 5);
        LOBYTE(v184) = 4 * v187 >= v186 + 16;
        v188 = v85 + v186;
        if ( (unsigned __int8)v184 | v364 && v352 > 0xA )
        {
          v189 = v179;
          v190 = -(int)(v188 >> 2) & 3;
          if ( v190 )
          {
            *(_DWORD *)(v85 + 4LL * v183) = *(_DWORD *)v188;
            *(_DWORD *)v188 = 0;
            v189 = v179 + 1;
            if ( v190 != 1 )
            {
              v191 = (_DWORD *)(v85 + 4LL * v189);
              *(_DWORD *)(v85 + 4LL * (v357 + v189)) = *v191;
              *v191 = 0;
              v189 = v179 + 2;
              if ( v190 != 2 )
              {
                v192 = (_DWORD *)(v85 + 4LL * v189);
                *(_DWORD *)(v85 + 4LL * (v357 + v189)) = *v192;
                v189 = v179 + 3;
                *v192 = 0;
              }
            }
          }
          v193 = v85 + 4 * (v190 + (__int64)v179);
          v194 = 0;
          v195 = v352 - v190;
          v196 = v85 + 4 * (v190 + v187);
          v197 = 0;
          v198 = ((v195 - 4) >> 2) + 1;
          do
          {
            ++v197;
            *(__m128i *)(v196 + v194) = _mm_load_si128((const __m128i *)(v193 + v194));
            *(_OWORD *)(v193 + v194) = 0;
            v194 += 16;
          }
          while ( v198 > v197 );
          v199 = 4 * v198;
          v200 = v199 + v189;
          if ( v199 != v195 )
          {
            v201 = (_DWORD *)(v85 + 4LL * v200);
            *(_DWORD *)(v85 + 4LL * (v357 + v200)) = *v201;
            v202 = v200 + 1;
            *v201 = 0;
            if ( v181 >= v200 + 1 )
            {
              v203 = (_DWORD *)(v85 + 4LL * v202);
              *(_DWORD *)(v85 + 4LL * (v357 + v202)) = *v203;
              v204 = v200 + 2;
              *v203 = 0;
              if ( v181 >= v200 + 2 )
              {
                v205 = (_DWORD *)(v85 + 4LL * v204);
                *(_DWORD *)(v85 + 4LL * (v357 + v204)) = *v205;
                v206 = v200 + 3;
                *v205 = 0;
                if ( v181 >= v200 + 3 )
                {
                  v207 = (_DWORD *)(v85 + 4LL * v206);
                  *(_DWORD *)(v85 + 4LL * (v357 + v206)) = *v207;
                  v208 = v200 + 4;
                  *v207 = 0;
                  if ( v200 + 4 <= v181 )
                  {
                    v209 = v200 + 5;
                    v210 = (_DWORD *)(v85 + 4LL * v208);
                    *(_DWORD *)(v85 + 4LL * (v357 + v208)) = *v210;
                    *v210 = 0;
                    if ( v209 <= v181 )
                    {
                      v211 = (_DWORD *)(v85 + 4LL * v209);
                      *(_DWORD *)(v85 + 4LL * (v357 + v209)) = *v211;
                      *v211 = 0;
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
            *(_DWORD *)(v188 + 4LL * v357) = *(_DWORD *)v188;
            *(_DWORD *)v188 = 0;
            v188 += 4LL;
          }
          while ( v188 != v85 + 4 * (v179 + v185) + 4 );
        }
      }
    }
    v212 = a10 + v181 - v179;
    v182 = (int *)(v85 + 4LL * (v212 + 1) + 4);
    a10 = v212 + 2;
    goto LABEL_122;
  }
  if ( (int)(v393 + v89 + v348 + 1) < (int)v349 )
  {
    v128 = c_ekkrwcs(a1, v343, v13, v359, v366, a4, v372);
    v129 = v395;
    v127 = v128 - 1;
    ++v396;
    v395 = v128 - 1;
    v394 += v129 - v128;
    v130 = *(_DWORD *)(v359 + 4LL * v397);
    v362 = v130 + 1;
    v342 = v130 + v368;
    v92 = *v355;
    v126 = v124;
    goto LABEL_78;
  }
LABEL_228:
  LODWORD(v12) = v13;
  v381 = -5;
  LODWORD(v13) = v343;
LABEL_168:
  v255 = c_ekkrwcs(a1, v13, v12, v359, v366, a4, v372);
  v256 = v396 + 1;
  v257 = (int *)(a4 + 8LL * v377 + 8);
  v258 = v394 + v395 - v255--;
  v257[1] = v372;
  *v257 = v371;
  LODWORD(v257) = v392;
  *(_DWORD *)(a1 + 288) = v255;
  *(_DWORD *)(a1 + 300) = v258;
  *(_DWORD *)(a1 + 284) = (_DWORD)v257;
  *a9 = v255;
  *a11 = v256;
  return v381;
}

