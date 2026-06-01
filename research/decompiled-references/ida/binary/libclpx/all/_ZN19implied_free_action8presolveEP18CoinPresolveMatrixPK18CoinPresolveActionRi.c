CoinPresolveMatrix *__fastcall implied_free_action::presolve(
        implied_free_action *this,
        CoinPresolveMatrix *a2,
        const CoinPresolveAction *a3,
        int *a4)
{
  int v4; // eax
  unsigned __int64 v5; // r13
  int v7; // ebx
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // r13
  unsigned __int64 v14; // r14
  double v15; // xmm15_8
  __int64 v16; // r10
  int v17; // r9d
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // r8d
  __int64 v21; // rdx
  __m128i si128; // xmm0
  unsigned int v23; // edi
  _DWORD *v24; // rsi
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __m128i v27; // xmm2
  _DWORD *v28; // rdx
  int v29; // eax
  _DWORD *v30; // rdx
  int v31; // eax
  _DWORD *v32; // rdx
  int v33; // eax
  _DWORD *v34; // rdx
  int v35; // eax
  _DWORD *v36; // rdx
  int v37; // r9d
  _DWORD *v38; // rdx
  __int64 v39; // r10
  unsigned __int64 v40; // rcx
  int v41; // edx
  __int64 v42; // rax
  int *v43; // r8
  __int64 v44; // rsi
  __int64 v45; // rdx
  int v46; // eax
  int v47; // edx
  int *v48; // r9
  __int64 v49; // r13
  int *v50; // rax
  int *v51; // r11
  int v52; // edi
  int v53; // esi
  int v54; // eax
  __int64 v55; // rdx
  double v56; // xmm11_8
  __int64 v57; // r12
  double v58; // xmm11_8
  bool v59; // r11
  __m128d v60; // xmm9
  double v61; // xmm5_8
  __m128d v62; // xmm8
  int v63; // r8d
  int v64; // r13d
  int v65; // r9d
  double v66; // xmm8_8
  double v67; // xmm9_8
  double v68; // xmm2_8
  double v69; // xmm8_8
  double v70; // xmm2_8
  double v71; // xmm3_8
  double v72; // xmm9_8
  double v73; // xmm1_8
  __int64 v74; // rax
  int *v75; // r14
  int v76; // ebp
  int v77; // esi
  double v78; // xmm6_8
  double v79; // xmm4_8
  int v80; // r10d
  double v81; // xmm3_8
  CoinPresolveMatrix *v82; // r15
  double v84; // xmm10_8
  __int64 v85; // rax
  __int64 v86; // rbp
  __int64 v87; // r13
  double v88; // xmm5_8
  __m128i v89; // xmm4
  __int64 v90; // rax
  __int64 v91; // rsi
  int v92; // ecx
  __int64 v93; // r8
  __int32 v94; // ebx
  unsigned __int64 v95; // r15
  double v96; // xmm3_8
  double v97; // xmm2_8
  int v98; // r14d
  double v99; // xmm7_8
  double v100; // xmm6_8
  __int64 v101; // rax
  __int64 v102; // rdx
  double v103; // xmm12_8
  int v104; // eax
  __m128i *v105; // r13
  __int64 v106; // xmm0_8
  __int64 v107; // xmm0_8
  int v108; // r11d
  double v109; // xmm6_8
  double v110; // xmm1_8
  __int64 v111; // rax
  __int64 v112; // rdx
  _QWORD *v113; // rcx
  double v114; // xmm1_8
  int *v115; // r9
  __int64 v116; // r10
  _DWORD *v117; // r11
  __int64 v118; // rsi
  int v119; // r13d
  int v120; // r8d
  _DWORD *v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // xmm0_8
  __int64 v126; // rcx
  int *v127; // rdx
  int v128; // esi
  __int64 v129; // rax
  int v130; // ecx
  __int64 v131; // rdx
  int v132; // edx
  __int64 v133; // rax
  _BYTE *v134; // r10
  __int64 v135; // rax
  __int64 v136; // rdx
  double v137; // xmm1_8
  double v138; // xmm8_8
  double v139; // xmm1_8
  double v140; // xmm3_8
  double v141; // xmm9_8
  double v142; // xmm2_8
  int v143; // edi
  __int64 v144; // rax
  char v145; // r8
  int *v146; // rcx
  double *v147; // rsi
  __int64 v148; // rdi
  __m128d v149; // xmm3
  __m128d v150; // xmm5
  double v151; // xmm2_8
  __int64 v152; // r10
  __int64 v153; // rcx
  double v154; // xmm1_8
  __int64 v155; // rax
  double v156; // xmm7_8
  double v157; // xmm2_8
  double v158; // xmm1_8
  double v159; // xmm10_8
  double v160; // xmm2_8
  int v161; // edi
  __int64 v162; // rcx
  __int64 v163; // rax
  __int64 v164; // rsi
  char v165; // di
  __int64 v166; // rsi
  double v167; // xmm2_8
  double v168; // xmm3_8
  CoinMessageHandler *v169; // rbp
  CoinMessageHandler *v170; // rax
  CoinMessageHandler *v171; // rax
  CoinMessageHandler *v172; // rax
  __int64 v173; // rax
  double v174; // xmm3_8
  double v175; // xmm1_8
  double v176; // xmm2_8
  __m128i *v177; // rax
  const __m128i *v178; // rdx
  __m128i *v179; // rbx
  __int64 v180; // rcx
  __m128i *v181; // rsi
  __m128i v182; // xmm0
  __int64 v183; // rax
  unsigned int v184; // esi
  __int64 v185; // r12
  __int64 v186; // rbp
  __m128i v187; // xmm6
  __m128i v188; // xmm4
  __int64 v189; // rbx
  __int64 v190; // r13
  int v191; // r8d
  _DWORD *v192; // r13
  int v193; // r15d
  __int64 v194; // rax
  int v195; // r8d
  __int64 v196; // r10
  int *v197; // r11
  __int64 v198; // rcx
  int v199; // edx
  __int64 v200; // rdi
  char v201; // r9
  int v202; // r14d
  double v203; // xmm5_8
  unsigned __int64 v204; // r8
  __int64 v205; // rcx
  char v206; // si
  double *v207; // rdx
  int *v208; // rdx
  __int64 v209; // r8
  __int64 v210; // rdx
  __int64 v211; // rax
  int v212; // ecx
  int v213; // edx
  int v214; // edx
  int v215; // eax
  int v216; // ecx
  int v217; // esi
  double v218; // xmm5_8
  double *v219; // r15
  __int64 v220; // r12
  int *v221; // r13
  _DWORD *v222; // r12
  double v223; // xmm2_8
  __int64 v224; // rax
  int v225; // esi
  double v226; // xmm3_8
  int v227; // r13d
  __int64 v228; // r10
  int v229; // r11d
  __int64 v230; // r12
  int v231; // r9d
  double v232; // xmm0_8
  __int64 v233; // rax
  int v234; // ecx
  __int64 v235; // rdi
  __int64 v236; // r8
  int *v237; // rdx
  __int64 v238; // rax
  __m128d v239; // xmm0
  double v240; // xmm7_8
  __int64 v241; // rsi
  __int64 v242; // rax
  __int64 v243; // rdi
  unsigned __int64 v244; // rax
  int v245; // eax
  int v246; // ecx
  unsigned int v247; // esi
  __m128i v248; // xmm1
  __int64 v249; // rax
  unsigned int v250; // edx
  __m128i v251; // xmm0
  __m128i v252; // xmm13
  __m128i v253; // xmm12
  __m128i v254; // xmm11
  __m128i v255; // xmm10
  __m128i v256; // xmm3
  __m128i v257; // xmm5
  __m128i v258; // xmm3
  __m128i v259; // xmm6
  __m128i v260; // xmm8
  __m128i v261; // xmm4
  __m128i v262; // xmm2
  __m128i v263; // xmm6
  __m128i v264; // xmm14
  __m128i v265; // xmm8
  __m128i v266; // xmm4
  __m128i v267; // xmm14
  __m128i v268; // xmm9
  __m128i v269; // xmm7
  __m128i v270; // xmm14
  __m128i v271; // xmm9
  __m128i v272; // xmm5
  __m128i v273; // xmm9
  __m128i v274; // xmm8
  __m128i v275; // xmm3
  __m128i v276; // xmm8
  __m128i v277; // xmm4
  __m128i v278; // xmm6
  __m128i v279; // xmm4
  __m128i v280; // xmm14
  __m128i v281; // xmm2
  __m128i v282; // xmm14
  int v283; // edi
  unsigned int v284; // edx
  unsigned int *v285; // rax
  int v286; // ecx
  int *v287; // rsi
  __int64 v288; // rax
  int v289; // [rsp+0h] [rbp-208h]
  unsigned __int64 v290; // [rsp+8h] [rbp-200h]
  __int64 v291; // [rsp+8h] [rbp-200h]
  unsigned __int64 v292; // [rsp+8h] [rbp-200h]
  unsigned __int64 v293; // [rsp+8h] [rbp-200h]
  int *v294; // [rsp+8h] [rbp-200h]
  double v295; // [rsp+10h] [rbp-1F8h]
  int v296; // [rsp+10h] [rbp-1F8h]
  unsigned __int64 v297; // [rsp+10h] [rbp-1F8h]
  int v298; // [rsp+10h] [rbp-1F8h]
  __int64 v299; // [rsp+20h] [rbp-1E8h]
  __int64 v300; // [rsp+20h] [rbp-1E8h]
  _DWORD *v301; // [rsp+28h] [rbp-1E0h]
  __int64 v302; // [rsp+28h] [rbp-1E0h]
  unsigned __int64 v303; // [rsp+30h] [rbp-1D8h]
  int v304; // [rsp+30h] [rbp-1D8h]
  __int64 v305; // [rsp+38h] [rbp-1D0h]
  __int64 v306; // [rsp+38h] [rbp-1D0h]
  __int64 v307; // [rsp+40h] [rbp-1C8h]
  _DWORD *v308; // [rsp+40h] [rbp-1C8h]
  __m128i v309; // [rsp+40h] [rbp-1C8h]
  double *v310; // [rsp+40h] [rbp-1C8h]
  __int64 v311; // [rsp+50h] [rbp-1B8h]
  double v312; // [rsp+50h] [rbp-1B8h]
  int *v313; // [rsp+58h] [rbp-1B0h]
  unsigned int v314; // [rsp+58h] [rbp-1B0h]
  void *v315; // [rsp+60h] [rbp-1A8h]
  __int64 *v316; // [rsp+60h] [rbp-1A8h]
  _QWORD *v317; // [rsp+60h] [rbp-1A8h]
  void *v318; // [rsp+68h] [rbp-1A0h]
  double *v319; // [rsp+68h] [rbp-1A0h]
  int v320; // [rsp+68h] [rbp-1A0h]
  void *v321; // [rsp+70h] [rbp-198h]
  int *v322; // [rsp+70h] [rbp-198h]
  double v323; // [rsp+78h] [rbp-190h]
  _DWORD *v324; // [rsp+78h] [rbp-190h]
  int v325; // [rsp+78h] [rbp-190h]
  int *v326; // [rsp+80h] [rbp-188h]
  int v327; // [rsp+80h] [rbp-188h]
  int v328; // [rsp+88h] [rbp-180h]
  __int64 v329; // [rsp+88h] [rbp-180h]
  __int64 v330; // [rsp+88h] [rbp-180h]
  double *v331; // [rsp+90h] [rbp-178h]
  double *v332; // [rsp+90h] [rbp-178h]
  int v333; // [rsp+98h] [rbp-170h]
  __int64 v334; // [rsp+98h] [rbp-170h]
  int v335; // [rsp+98h] [rbp-170h]
  double v336; // [rsp+98h] [rbp-170h]
  __int64 v337; // [rsp+A0h] [rbp-168h]
  double v338; // [rsp+A0h] [rbp-168h]
  double v339; // [rsp+A0h] [rbp-168h]
  __int64 v340; // [rsp+A8h] [rbp-160h]
  double v341; // [rsp+B0h] [rbp-158h]
  int v342; // [rsp+B0h] [rbp-158h]
  int v343; // [rsp+C0h] [rbp-148h]
  __m128i v344; // [rsp+C0h] [rbp-148h]
  int v345; // [rsp+D4h] [rbp-134h]
  CoinPresolveAction *v346; // [rsp+D8h] [rbp-130h]
  CoinPresolveAction *v347; // [rsp+D8h] [rbp-130h]
  __int64 v348; // [rsp+E0h] [rbp-128h]
  __int64 v349; // [rsp+E0h] [rbp-128h]
  double v350; // [rsp+E8h] [rbp-120h]
  double v351; // [rsp+E8h] [rbp-120h]
  int *v352; // [rsp+E8h] [rbp-120h]
  __int64 v353; // [rsp+F0h] [rbp-118h]
  __m128i v354; // [rsp+F0h] [rbp-118h]
  __int64 v355; // [rsp+F0h] [rbp-118h]
  int v356; // [rsp+100h] [rbp-108h]
  int v357; // [rsp+100h] [rbp-108h]
  double v359; // [rsp+110h] [rbp-F8h]
  int *v360; // [rsp+120h] [rbp-E8h]
  CoinPresolveMatrix *v361; // [rsp+128h] [rbp-E0h]
  __int64 v362; // [rsp+140h] [rbp-C8h]
  int *v363; // [rsp+158h] [rbp-B0h]
  int v364; // [rsp+160h] [rbp-A8h]
  __int64 v365; // [rsp+170h] [rbp-98h]
  __int64 v366; // [rsp+178h] [rbp-90h]
  __m128i *v367; // [rsp+180h] [rbp-88h]
  __int64 v368; // [rsp+188h] [rbp-80h]
  int v369; // [rsp+190h] [rbp-78h]
  __int16 v370; // [rsp+194h] [rbp-74h]
  int v371; // [rsp+19Ch] [rbp-6Ch]
  _BYTE v374[88]; // [rsp+1B0h] [rbp-58h] BYREF

  v4 = *((_DWORD *)this + 109);
  v370 = v4;
  if ( *((int *)this + 87) > 15 && (v4 & 0x10000) != 0 )
  {
    *(_DWORD *)a3 = 2;
    return a2;
  }
  v5 = *(int *)this;
  v369 = *(_DWORD *)this;
  if ( v5 > 0x1FFFFFFFFFFFFFFLL
    || (v7 = *((_DWORD *)this + 1),
        v8 = *((_QWORD *)this + 7),
        v9 = *((_QWORD *)this + 8),
        v10 = *((_QWORD *)this + 39),
        v290 = *((_QWORD *)this + 42),
        v311 = *((_QWORD *)this + 35),
        v301 = *((_DWORD **)this + 36),
        v326 = *((int **)this + 38),
        v331 = *((double **)this + 37),
        v365 = *((_QWORD *)this + 33),
        v337 = *((_QWORD *)this + 5),
        v299 = *((_QWORD *)this + 6),
        v366 = *((_QWORD *)this + 32),
        v346 = *((CoinPresolveAction **)this + 11),
        v348 = *((_QWORD *)this + 12),
        v368 = *((_QWORD *)this + 13),
        v305 = *((_QWORD *)this + 14),
        v11 = *((_QWORD *)this + 9),
        v12 = v5 << 6,
        v13 = 4 * v5,
        v340 = v11,
        v367 = (__m128i *)operator new[](v12),
        v361 = *((CoinPresolveMatrix **)this + 58),
        v360 = (int *)((char *)v361 + v13),
        (unsigned __int64)v7 > 0x1FFFFFFFFFFFFFFELL) )
  {
LABEL_360:
    __cxa_throw_bad_array_new_length();
  }
  v295 = *(double *)&v290;
  v14 = 8LL * v7;
  v291 = 4LL * v7;
  v315 = (void *)operator new[](v291);
  v303 = operator new[](v291);
  v318 = (void *)operator new[](v14);
  v321 = (void *)operator new[](v14);
  v15 = v295;
  if ( v7 <= 0 )
  {
    if ( *((_BYTE *)this + 440) )
    {
LABEL_45:
      v46 = *(_DWORD *)a3;
      if ( *(int *)a3 >= 0 )
      {
        v47 = *((_DWORD *)this + 94);
        v48 = *((int **)this + 46);
        goto LABEL_50;
      }
      v48 = (int *)(v13 + *((_QWORD *)this + 58));
      if ( v369 > 0 )
      {
        v241 = *((_QWORD *)this + 45);
        v47 = 0;
        v242 = 0;
        do
        {
          if ( (*(_BYTE *)(v241 + v242) & 2) == 0 )
          {
            v243 = v47++;
            v48[v243] = v242;
          }
          ++v242;
        }
        while ( (unsigned int)(v369 - 1) + 1LL != v242 );
        v46 = *(_DWORD *)a3;
        goto LABEL_50;
      }
LABEL_300:
      v345 = -v46;
      goto LABEL_301;
    }
  }
  else
  {
    if ( ((unsigned __int64)v301 >= v303 + 16 || v303 >= (unsigned __int64)(v301 + 4)) && (unsigned int)v7 > 5 )
    {
      v16 = (unsigned int)(v7 - 1);
      v17 = 0;
      v18 = -(int)(v303 >> 2) & 3;
      if ( v18 + 3 > (unsigned int)v16 )
        goto LABEL_20;
      if ( v18 )
      {
        v17 = 1;
        *(_DWORD *)v303 = (*v301 > 1) - 2;
        if ( v18 != 1 )
        {
          *(_DWORD *)(v303 + 4) = (int)v301[1] <= 1 ? -2 : -1;
          v17 = 2;
          if ( v18 != 2 )
          {
            if ( (int)v301[2] <= 1 )
              *(_DWORD *)(v303 + 8) = -2;
            else
              *(_DWORD *)(v303 + 8) = -1;
            v17 = 3;
          }
        }
      }
      v19 = 0;
      v20 = v7 - v18;
      v21 = v18;
      si128 = _mm_load_si128((const __m128i *)&xmmword_289C00);
      v23 = (v7 - v18) >> 2;
      v24 = &v301[v21];
      v25 = v303 + v21 * 4;
      v26 = 0;
      v27 = _mm_load_si128((const __m128i *)&xmmword_297230);
      do
      {
        ++v19;
        *(__m128i *)(v25 + v26 * 4) = _mm_or_si128(
                                        _mm_cmpgt_epi32(_mm_loadu_si128((const __m128i *)&v24[v26]), si128),
                                        v27);
        v26 += 4;
      }
      while ( v19 < v23 );
      v17 += v20 & 0xFFFFFFFC;
      if ( (v20 & 0xFFFFFFFC) != v20 )
      {
LABEL_20:
        v28 = (_DWORD *)(v303 + 4LL * v17);
        if ( (int)v301[v17] <= 1 )
          *v28 = -2;
        else
          *v28 = -1;
        v29 = v17 + 1;
        if ( v7 > v17 + 1 )
        {
          v30 = (_DWORD *)(v303 + 4LL * v29);
          *v30 = (int)v301[v29] <= 1 ? -2 : -1;
          v31 = v17 + 2;
          if ( v7 > v17 + 2 )
          {
            v32 = (_DWORD *)(v303 + 4LL * v31);
            *v32 = (int)v301[v31] <= 1 ? -2 : -1;
            v33 = v17 + 3;
            if ( v7 > v17 + 3 )
            {
              v34 = (_DWORD *)(v303 + 4LL * v33);
              *v34 = (int)v301[v33] <= 1 ? -2 : -1;
              v35 = v17 + 4;
              if ( v7 > v17 + 4 )
              {
                v36 = (_DWORD *)(v303 + 4LL * v35);
                *v36 = (int)v301[v35] <= 1 ? -2 : -1;
                v37 = v17 + 5;
                if ( v7 > v37 )
                {
                  v38 = (_DWORD *)(v303 + 4LL * v37);
                  if ( (int)v301[v37] <= 1 )
                    *v38 = -2;
                  else
                    *v38 = -1;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v16 = (unsigned int)(v7 - 1);
      v244 = 0;
      do
      {
        if ( (int)v301[v244 / 4] > 1 )
          *(_DWORD *)(v303 + v244) = -1;
        else
          *(_DWORD *)(v303 + v244) = -2;
        v244 += 4LL;
      }
      while ( 4 * v16 + 4 != v244 );
    }
    if ( *((_BYTE *)this + 440) )
    {
      v39 = 4 * v16 + 4;
      v40 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v41 = *(_DWORD *)(v311 + v40);
          if ( v41 < v41 + v301[v40 / 4] )
            break;
LABEL_44:
          v40 += 4LL;
          if ( v39 == v40 )
            goto LABEL_45;
        }
        v42 = *((_QWORD *)this + 45);
        if ( (*(_BYTE *)(v42 + v326[v41]) & 2) == 0 )
        {
          v43 = &v326[v41 + 1];
          v44 = (__int64)&v326[(unsigned int)(v301[v40 / 4] - 1) + 1 + (__int64)v41];
          while ( (int *)v44 != v43 )
          {
            v45 = *v43++;
            if ( (*(_BYTE *)(v42 + v45) & 2) != 0 )
              goto LABEL_213;
          }
          goto LABEL_44;
        }
LABEL_213:
        *(_DWORD *)(v303 + v40) = -2;
        v40 += 4LL;
        if ( v39 == v40 )
          goto LABEL_45;
      }
    }
  }
  v46 = *(_DWORD *)a3;
  if ( *(int *)a3 >= 0 )
  {
    v47 = *((_DWORD *)this + 94);
    v48 = *((int **)this + 46);
    goto LABEL_50;
  }
  if ( !v369 )
    goto LABEL_300;
  v245 = v369;
  v246 = v369 + 7;
  v48 = (int *)(v13 + *((_QWORD *)this + 58));
  if ( v369 >= 0 )
    v246 = v369;
  v247 = v246 >> 3;
  if ( v246 >> 3 <= 0 )
  {
    v287 = (int *)(v13 + *((_QWORD *)this + 58));
    v286 = 0;
    goto LABEL_337;
  }
  if ( (int)(v247 - 1) <= 2 )
  {
    v285 = (unsigned int *)(v13 + *((_QWORD *)this + 58));
    v283 = v246 >> 3;
    v284 = 0;
    goto LABEL_333;
  }
  v248 = _mm_load_si128((const __m128i *)&xmmword_290820);
  v249 = v13 + *((_QWORD *)this + 58);
  v250 = 0;
  v251 = _mm_load_si128((const __m128i *)&xmmword_289C00);
  v252 = _mm_load_si128((const __m128i *)&xmmword_290830);
  v253 = _mm_load_si128((const __m128i *)&xmmword_28CCB0);
  v254 = _mm_load_si128((const __m128i *)&xmmword_290840);
  v255 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
  do
  {
    ++v250;
    v256 = _mm_add_epi32(v248, v255);
    v249 += 128;
    v257 = _mm_unpacklo_epi32(v248, v256);
    v258 = _mm_unpackhi_epi32(v248, v256);
    v259 = _mm_add_epi32(v248, v251);
    v260 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_290850), v248);
    v261 = _mm_add_epi32(v248, v253);
    v262 = _mm_unpackhi_epi32(v259, v260);
    v263 = _mm_unpacklo_epi32(v259, v260);
    v264 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_290860), v248);
    v265 = _mm_unpacklo_epi32(v261, v264);
    v266 = _mm_unpackhi_epi32(v261, v264);
    v267 = _mm_add_epi32(v248, v254);
    v268 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_290870), v248);
    v269 = _mm_unpackhi_epi32(v267, v268);
    v248 = _mm_add_epi32(v248, v252);
    v270 = _mm_unpacklo_epi32(v267, v268);
    v271 = v257;
    v272 = _mm_unpackhi_epi32(v257, v265);
    v273 = _mm_unpacklo_epi32(v271, v265);
    v274 = v258;
    v275 = _mm_unpackhi_epi32(v258, v266);
    v276 = _mm_unpacklo_epi32(v274, v266);
    v277 = v263;
    v278 = _mm_unpackhi_epi32(v263, v270);
    v279 = _mm_unpacklo_epi32(v277, v270);
    v280 = v262;
    v281 = _mm_unpackhi_epi32(v262, v269);
    v282 = _mm_unpacklo_epi32(v280, v269);
    *(__m128i *)(v249 - 128) = _mm_unpacklo_epi32(v273, v279);
    *(__m128i *)(v249 - 96) = _mm_unpacklo_epi32(v272, v278);
    *(__m128i *)(v249 - 112) = _mm_unpackhi_epi32(v273, v279);
    *(__m128i *)(v249 - 64) = _mm_unpacklo_epi32(v276, v282);
    *(__m128i *)(v249 - 80) = _mm_unpackhi_epi32(v272, v278);
    *(__m128i *)(v249 - 48) = _mm_unpackhi_epi32(v276, v282);
    *(__m128i *)(v249 - 32) = _mm_unpacklo_epi32(v275, v281);
    *(__m128i *)(v249 - 16) = _mm_unpackhi_epi32(v275, v281);
  }
  while ( v250 < v247 >> 2 );
  v283 = v247 - (v247 & 0xFFFFFFFC);
  v284 = 8 * (v247 & 0xFFFFFFFC);
  v285 = (unsigned int *)&v48[8 * (v247 & 0xFFFFFFFC)];
  if ( (v247 & 0xFFFFFFFC) != v247 )
  {
LABEL_333:
    *v285 = v284;
    v285[1] = v284 + 1;
    v285[2] = v284 + 2;
    v285[3] = v284 + 3;
    v285[4] = v284 + 4;
    v285[5] = v284 + 5;
    v285[6] = v284 + 6;
    v285[7] = v284 + 7;
    if ( v283 != 1 )
    {
      v285[8] = v284 + 8;
      v285[9] = v284 + 9;
      v285[10] = v284 + 10;
      v285[11] = v284 + 11;
      v285[12] = v284 + 12;
      v285[13] = v284 + 13;
      v285[14] = v284 + 14;
      v285[15] = v284 + 15;
      if ( v283 != 2 )
      {
        v285[16] = v284 + 16;
        v285[17] = v284 + 17;
        v285[18] = v284 + 18;
        v285[19] = v284 + 19;
        v285[20] = v284 + 20;
        v285[21] = v284 + 21;
        v285[23] = v284 + 23;
        v285[22] = v284 + 22;
      }
    }
  }
  v286 = 8 * v247;
  v245 = v369;
  v287 = &v48[8 * (v247 - 1) + 8];
LABEL_337:
  switch ( v245 % 8 )
  {
    case 1:
      goto LABEL_346;
    case 2:
      goto LABEL_345;
    case 3:
      goto LABEL_344;
    case 4:
      goto LABEL_343;
    case 5:
      goto LABEL_342;
    case 6:
      goto LABEL_341;
    case 7:
      v287[6] = v286 + 6;
LABEL_341:
      v287[5] = v286 + 5;
LABEL_342:
      v287[4] = v286 + 4;
LABEL_343:
      v287[3] = v286 + 3;
LABEL_344:
      v287[2] = v286 + 2;
LABEL_345:
      v287[1] = v286 + 1;
LABEL_346:
      *v287 = v286;
      break;
    default:
      break;
  }
  v47 = v369;
  v46 = *(_DWORD *)a3;
LABEL_50:
  v345 = abs32(v46);
  if ( v47 <= 0 )
  {
LABEL_301:
    operator delete[](v315);
    operator delete[]((void *)v303);
    operator delete[](v318);
    operator delete[](v321);
    goto LABEL_302;
  }
  v292 = (unsigned __int64)v48;
  v371 = 0;
  v49 = v8;
  v353 = (__int64)&v48[v47 - 1 + 1];
  v50 = v48;
  do
  {
    v51 = (int *)*v50;
    v52 = *(_DWORD *)(v299 + 4LL * (_QWORD)v51);
    v356 = *v50;
    v328 = v52;
    if ( v345 >= v52 && v52 > 0 )
    {
      v53 = *(_DWORD *)(v337 + 4LL * (_QWORD)v51);
      v54 = v52 + v53;
      v296 = v52 + v53;
      if ( v52 == 1 )
      {
        v55 = v53;
        if ( v301[*(int *)(v49 + 4LL * v53)] != 1 && fabs(*(double *)(v9 + 8LL * v53)) > 1.0e-10 )
        {
          v350 = *((double *)v346 + (_QWORD)v51);
          v359 = *(double *)(v348 + 8LL * (_QWORD)v51);
          if ( v53 < v296 )
          {
            v56 = 0.000000002;
            goto LABEL_58;
          }
          v333 = -1;
          v84 = -1.797693134862316e308;
          v323 = 1.797693134862316e308;
LABEL_90:
          if ( v84 >= v350 && v359 >= v323 && v333 >= 0 )
          {
            v85 = v371;
            *((_DWORD *)v361 + v371) = v333;
            *(_DWORD *)(v303 + 4LL * v333) = -4;
            ++v371;
            v360[v85] = v356;
          }
        }
      }
      else
      {
        v161 = v52 + v53;
        if ( v53 < v54 )
        {
          v55 = v53;
          v162 = *(int *)(v49 + 4LL * v53);
          v163 = v53;
          if ( v301[v162] != 1 )
          {
            v56 = 0.000000002;
            v164 = (unsigned int)(v161 - v53 - 1);
            v165 = 0;
            v166 = v55 + v164;
            while ( 1 )
            {
              v167 = fabs(*(double *)(v9 + 8 * v163));
              v56 = fmax(v56, v167);
              if ( v15 > fabs(*(double *)(v368 + 8 * v162) - *(double *)(v305 + 8 * v162)) && v167 > v56 * 0.1 )
                v165 = 1;
              if ( v163 == v166 )
                break;
              ++v163;
              v162 = *(int *)(v49 + 4 * v163);
              if ( v301[v162] == 1 )
                goto LABEL_94;
            }
            if ( v165 )
            {
              v350 = *((double *)v346 + (_QWORD)v51);
              v359 = *(double *)(v348 + 8LL * (_QWORD)v51);
LABEL_58:
              v341 = v56;
              v307 = v9;
              v57 = v49;
              v343 = v369;
              v333 = -1;
              v323 = 1.797693134862316e308;
              v313 = v51;
              v58 = -1.797693134862316e308;
LABEL_84:
              v74 = *(int *)(v57 + 4 * v55);
              v75 = (int *)(v303 + 4 * v74);
              v76 = *(_DWORD *)(v57 + 4 * v55);
              v77 = *v75;
              if ( *v75 < -1 )
                goto LABEL_83;
              v78 = *(double *)(v368 + 8 * v74);
              v79 = *(double *)(v307 + 8 * v55);
              v80 = v301[v74];
              v81 = *(double *)(v305 + 8 * v74);
              if ( v15 <= fabs(v78 - v81) || fabs(v79) <= v341 * 0.1 )
              {
                v59 = 0;
              }
              else
              {
                v59 = 1;
                if ( *((_BYTE *)v313 + v10) )
                {
                  v60.m128d_f64[0] = v78 / v79 + 0.5;
                  v61 = v60.m128d_f64[0];
                  if ( fabs(v60.m128d_f64[0]) < 4.503599627370496e15 )
                  {
                    v62 = 0;
                    v62.m128d_f64[0] = (double)(int)v60.m128d_f64[0];
                    *(_QWORD *)&v61 = COERCE_UNSIGNED_INT64(
                                        v62.m128d_f64[0]
                                      - COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v62, v60).m128d_f64[0] & 0x3FF0000000000000LL))
                                    | *(_QWORD *)&v60.m128d_f64[0] & 0x8000000000000000LL;
                  }
                  v59 = v15 > fabs(v78 / v79 - v61);
                }
              }
              v63 = *(_DWORD *)(v311 + 4 * v74);
              v64 = v80 + v63;
              if ( v77 != -1 )
              {
                v65 = *((_DWORD *)v315 + v74);
                v66 = *((double *)v321 + v74);
                v67 = *((double *)v318 + v74);
                goto LABEL_66;
              }
              if ( v63 >= v64 )
              {
                v65 = 0;
                v67 = 0.0;
                v77 = 0;
                v66 = 0.0;
                v159 = 0.0;
                v158 = 0.0;
                goto LABEL_186;
              }
              v363 = (int *)(v303 + 4 * v74);
              v364 = v301[v74];
              v152 = (unsigned int)(v80 - 1) + 1LL;
              v153 = 0;
              v67 = 0.0;
              v66 = 0.0;
              v65 = 0;
              v77 = 0;
              while ( 2 )
              {
                while ( 1 )
                {
                  v154 = v331[v63 + v153];
                  v155 = v326[v63 + v153];
                  v156 = *((double *)v346 + v155);
                  v157 = *(double *)(v348 + 8 * v155);
                  if ( v154 > 0.0 )
                    break;
                  if ( v154 >= 0.0 )
                    goto LABEL_178;
                  if ( v157 >= 1.0e20 )
                    ++v65;
                  else
                    v67 = v67 + v157 * v154;
                  if ( v156 <= -1.0e20 )
                  {
                    ++v77;
                    goto LABEL_178;
                  }
                  ++v153;
                  v66 = v66 + v154 * v156;
                  if ( v152 == v153 )
                  {
LABEL_185:
                    v74 = *(int *)(v57 + 4 * v55);
                    v75 = v363;
                    v80 = v364;
                    v158 = (double)v77 * 1.0e31 + v66;
                    v159 = v67 - (double)v65 * 1.0e31;
LABEL_186:
                    v160 = v78 - v15;
                    if ( v15 + v81 >= v158 && v159 >= v160 )
                    {
                      *v75 = -2;
                      goto LABEL_83;
                    }
                    if ( v160 > v158 )
                    {
                      if ( (v370 & 0x4000) != 0 )
                        goto LABEL_204;
LABEL_217:
                      *((_DWORD *)this + 86) |= 1u;
                      v169 = *((CoinMessageHandler **)this + 26);
                      CoinMessages::CoinMessages((CoinMessages *)v374, (implied_free_action *)((char *)this + 224));
                      v170 = (CoinMessageHandler *)CoinMessageHandler::message(v169, 16, (const CoinMessages *)v374);
                      v171 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v170);
                      v172 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v171);
                      v173 = CoinMessageHandler::operator<<(v172);
                      CoinMessageHandler::operator<<(v173, 0, v81);
                      CoinMessages::~CoinMessages((CoinMessages *)v374);
                      *v75 = -3;
                      operator delete[](v315);
                      operator delete[]((void *)v303);
                      operator delete[](v318);
                      operator delete[](v321);
                      return a2;
                    }
                    if ( (v370 & 0x4000) == 0 && v159 > v15 + v81 )
                      goto LABEL_217;
LABEL_204:
                    *v75 = v77;
                    *((_DWORD *)v315 + v74) = v65;
                    *((double *)v321 + v74) = v66;
                    *((double *)v318 + v74) = v67;
LABEL_66:
                    if ( v79 <= 0.0 )
                    {
                      if ( v78 > -1.0e20 )
                      {
                        if ( v77 )
                        {
                          v139 = 1.797693134862316e308;
                          if ( v77 == 1 && v350 < -1.0e20 )
                          {
                            v175 = v78 - v66;
                            v138 = fabs(v66);
                            v139 = v175 / v79;
                            if ( v138 > 100000000.0 && v328 != 1 )
LABEL_149:
                              v139 = v139 + v138 * 1.0e-12;
                          }
                        }
                        else
                        {
                          v137 = v78 - v66;
                          v138 = fabs(v66);
                          v139 = v137 / v79 + v350;
                          if ( v328 != 1 && v138 > 100000000.0 )
                            goto LABEL_149;
                        }
                        v323 = fmin(v323, v139);
                      }
                      if ( v81 >= 1.0e20 )
                        goto LABEL_79;
                      if ( v65 )
                      {
                        v142 = -1.797693134862316e308;
                        if ( v65 == 1 && v359 > 1.0e20 )
                        {
                          v174 = v81 - v67;
                          v141 = fabs(v67);
                          v142 = v174 / v79;
                          if ( v328 != 1 )
                            goto LABEL_154;
                        }
                      }
                      else
                      {
                        v140 = v81 - v67;
                        v141 = fabs(v67);
                        v142 = v140 / v79 + v359;
                        if ( v328 != 1 )
                        {
LABEL_154:
                          if ( v141 > 100000000.0 )
                            v142 = v142 - v141 * 1.0e-12;
                        }
                      }
                      v58 = fmax(v58, v142);
                      if ( !*((_BYTE *)v313 + v10) )
                        goto LABEL_80;
                      goto LABEL_157;
                    }
                    if ( v78 > -1.0e20 )
                    {
                      if ( v77 )
                      {
                        if ( v77 == 1 )
                        {
                          v70 = -1.797693134862316e308;
                          if ( v359 > 1.0e20 )
                          {
                            v176 = v78 - v66;
                            v69 = fabs(v66);
                            v70 = v176 / v79;
                            if ( v328 != 1 && v69 > 100000000.0 )
LABEL_71:
                              v70 = v70 - v69 * 1.0e-12;
                          }
                        }
                        else
                        {
                          v70 = -1.797693134862316e308;
                        }
                      }
                      else
                      {
                        v68 = v78 - v66;
                        v69 = fabs(v66);
                        v70 = v68 / v79 + v359;
                        if ( v69 > 100000000.0 && v328 != 1 )
                          goto LABEL_71;
                      }
                      v58 = fmax(v58, v70);
                    }
                    if ( v81 < 1.0e20 )
                    {
                      if ( v65 )
                      {
                        v73 = 1.797693134862316e308;
                        if ( v65 == 1 && v350 < -1.0e20 )
                        {
                          v168 = v81 - v67;
                          v72 = fabs(v67);
                          v73 = v168 / v79;
                          if ( v328 != 1 && v72 > 100000000.0 )
LABEL_77:
                            v73 = v73 + v72 * 1.0e-12;
                        }
                      }
                      else
                      {
                        v71 = v81 - v67;
                        v72 = fabs(v67);
                        v73 = v71 / v79 + v350;
                        if ( v72 > 100000000.0 && v328 != 1 )
                          goto LABEL_77;
                      }
                      v323 = fmin(v323, v73);
                    }
LABEL_79:
                    if ( !*((_BYTE *)v313 + v10) )
                    {
LABEL_80:
                      if ( v59 && (v333 < 0 || v80 < v343) )
                      {
                        v343 = v80;
                        v333 = v76;
                      }
                      goto LABEL_83;
                    }
LABEL_157:
                    if ( v63 >= v64 )
                    {
                      v145 = 1;
                    }
                    else
                    {
                      v143 = v64 - v63;
                      v144 = v63;
                      v145 = 1;
                      v146 = &v326[v144];
                      v147 = &v331[v144];
                      v148 = (__int64)&v326[(unsigned int)(v143 - 1) + 1 + v144];
                      while ( 1 )
                      {
                        v151 = *v147 / v79;
                        if ( fabs(v151) != 1.0 )
                          v145 = 0;
                        if ( !*(_BYTE *)(v10 + *v146) )
                          break;
                        v149.m128d_f64[0] = v151 + 0.5;
                        if ( fabs(v151 + 0.5) < 4.503599627370496e15 )
                        {
                          v150 = 0;
                          v150.m128d_f64[0] = (double)(int)v149.m128d_f64[0];
                          *(_QWORD *)&v149.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                                            v150.m128d_f64[0]
                                                          - COERCE_DOUBLE(
                                                              *(_QWORD *)&_mm_cmpgt_sd(v150, v149).m128d_f64[0]
                                                            & 0x3FF0000000000000LL))
                                                        | *(_QWORD *)&v149.m128d_f64[0] & 0x8000000000000000LL;
                        }
                        if ( fabs(v151 - v149.m128d_f64[0]) > v15 )
                          break;
                        ++v146;
                        ++v147;
                        if ( (int *)v148 == v146 )
                          goto LABEL_167;
                      }
                      v59 = 0;
                    }
LABEL_167:
                    if ( v78 != 1.0 || v80 <= 4 || (v370 & 4) == 0 || !v145 )
                      goto LABEL_80;
LABEL_83:
                    if ( v296 <= (int)++v55 )
                    {
                      v49 = v57;
                      v9 = v307;
                      v84 = v58;
                      goto LABEL_90;
                    }
                    goto LABEL_84;
                  }
                }
                if ( v157 >= 1.0e20 )
                  ++v77;
                else
                  v66 = v66 + v157 * v154;
                if ( v156 <= -1.0e20 )
                  ++v65;
                else
                  v67 = v67 + v154 * v156;
LABEL_178:
                if ( v152 == ++v153 )
                  goto LABEL_185;
                continue;
              }
            }
          }
        }
      }
    }
LABEL_94:
    v292 += 4LL;
    v50 = (int *)v292;
  }
  while ( v353 != v292 );
  v86 = v49;
  operator delete[](v315);
  operator delete[]((void *)v303);
  operator delete[](v318);
  operator delete[](v321);
  if ( !v371 )
  {
LABEL_302:
    operator delete[](v367);
    v82 = a2;
    goto LABEL_303;
  }
  v293 = 0;
  v87 = 0;
  v314 = 0;
  v88 = 0.0;
  v89 = _mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
  do
  {
    v91 = v360[v293 / 4];
    v92 = v360[v293 / 4];
    v308 = (_DWORD *)(v299 + 4 * v91);
    if ( *v308 == 1 )
    {
      v93 = *(int *)((char *)v361 + v293);
      v94 = *(_DWORD *)((char *)v361 + v293);
      v95 = (int)v301[v93];
      v324 = &v301[v93];
      v96 = *(double *)(v9 + 8LL * *(int *)(v337 + 4 * v91));
      v329 = 8 * v91;
      v97 = *(double *)(8 * v91 + v340);
      v98 = *(_DWORD *)(v311 + 4 * v93);
      if ( v97 == v88 || v98 >= (int)v95 + v98 )
        goto LABEL_108;
      v99 = 0.0;
      v100 = 0.0;
      v101 = 0;
      do
      {
        v102 = v326[v98 + v101];
        if ( v92 != (_DWORD)v102 )
        {
          v103 = *(double *)(v340 + 8 * v102);
          v100 = fmax(v100, COERCE_DOUBLE(*(_QWORD *)&v103 & v89.m128i_i64[0]));
          v99 = fmax(v99, COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v103 - v331[v98 + v101] * v97 / v96) & v89.m128i_i64[0]));
        }
        ++v101;
      }
      while ( (unsigned int)(v95 - 1) + 1LL != v101 );
      if ( v99 <= (v100 + 1.0) * 1000.0 || v100 == v88 )
      {
LABEL_108:
        v104 = v87 + 1;
        v105 = &v367[4 * v87];
        v351 = v88;
        v342 = v104;
        v354 = v89;
        v105->m128i_i32[1] = v92;
        v106 = *((_QWORD *)v346 + v91);
        v105->m128i_i32[0] = v94;
        v105->m128i_i64[1] = v106;
        v105[1].m128i_i64[0] = *(_QWORD *)(v348 + 8 * v91);
        v334 = 8 * v93;
        v316 = (__int64 *)(8 * v93 + v368);
        v105[1].m128i_i64[1] = *v316;
        v107 = *(_QWORD *)(8 * v93 + v305);
        v319 = (double *)(8 * v93 + v305);
        v105[3].m128i_i32[2] = v95;
        v105[2].m128i_i64[0] = v107;
        v105[2].m128i_i64[1] = presolve_dupmajor(v331, v326, v95, v98, -1);
        v88 = v351;
        v105[3].m128i_i64[0] = 0;
        v108 = v95 + v98;
        v89 = v354;
        if ( v97 != v351 )
        {
          v109 = *v319;
          v110 = *(double *)v316;
          if ( fabs(*(double *)v316 - *v319) > v15 )
          {
            if ( v110 > -1.797693134862316e308 && v109 < 1.797693134862316e308 )
            {
              v239.m128d_f64[0] = v96 * v97;
              v240 = _mm_cmpge_sd((__m128d)*(unsigned __int64 *)&v351, v239).m128d_f64[0];
              *(_QWORD *)&v109 = *(_QWORD *)&v109 & *(_QWORD *)&v240 | ~*(_QWORD *)&v240 & *(_QWORD *)&v110;
            }
            else if ( v109 >= 1.797693134862316e308 )
            {
              v109 = *(double *)v316;
            }
          }
          if ( v95 > 0xFFFFFFFFFFFFFFFLL )
            goto LABEL_360;
          v111 = operator new[](8 * v95);
          v108 = v95 + v98;
          v88 = v351;
          v89 = v354;
          if ( v98 < (int)v95 + v98 )
          {
            v112 = 0;
            do
            {
              v113 = (_QWORD *)(v340 + 8LL * v326[v98 + v112]);
              *(_QWORD *)(v111 + 8 * v112) = *v113;
              v114 = v331[v98 + v112++];
              *(double *)v113 = *(double *)v113 - v114 * v97 / v96;
            }
            while ( (unsigned int)(v95 - 1) + 1LL != v112 );
          }
          *((double *)this + 34) = v97 * v109 / v96 + *((double *)this + 34);
          *(_QWORD *)(8 * v91 + v340) = 0;
          v105[3].m128i_i64[0] = v111;
        }
        if ( v98 < v108 )
        {
          v115 = &v326[v98];
          v297 = (unsigned __int64)&v326[v98 + 1 + (unsigned __int64)(unsigned int)(v108 - v98 - 1)];
          do
          {
            v116 = *v115;
            v117 = (_DWORD *)(v299 + 4 * v116);
            v118 = *(int *)(v337 + 4 * v116);
            v119 = *v115;
            v120 = v118 + *v117;
            v121 = (_DWORD *)(v86 + 4 * v118);
            if ( (int)v118 >= v120 || *v121 == v94 )
            {
              v122 = *(int *)(v337 + 4 * v116);
            }
            else
            {
              v122 = v118 + 1;
              v123 = v86 + 4 * v118 + 4;
              while ( 1 )
              {
                v121 = (_DWORD *)v123;
                if ( v86 + 4 + 4 * ((unsigned int)(*v117 - 1) + v118) == v123 )
                  break;
                v123 += 4;
                if ( v94 == *v121 )
                  break;
                ++v122;
              }
            }
            v124 = *(_QWORD *)(v9 + 8LL * v120 - 8);
            *v121 = *(_DWORD *)(v86 + 4LL * v120 - 4);
            *(_QWORD *)(v9 + 8 * v122) = v124;
            if ( (*v117)-- == 1 )
            {
              v126 = *((_QWORD *)this + 32);
              v127 = (int *)(v126 + 8 * v116);
              v128 = *v127;
              v129 = v127[1];
              if ( *v127 >= 0 )
                *(_DWORD *)(v126 + 8LL * v128 + 4) = v129;
              if ( (int)v129 >= 0 )
                *(_DWORD *)(v126 + 8 * v129) = v128;
              *(_QWORD *)v127 = 0xFC06BF56FC06BF56LL;
            }
            else
            {
              v134 = (_BYTE *)(*((_QWORD *)this + 45) + v116);
              if ( (*v134 & 1) == 0 )
              {
                *v134 |= 1u;
                v135 = *((int *)this + 98);
                v136 = *((_QWORD *)this + 48);
                *((_DWORD *)this + 98) = v135 + 1;
                *(_DWORD *)(v136 + 4 * v135) = v119;
              }
            }
            ++v115;
          }
          while ( (int *)v297 != v115 );
        }
        v130 = *(_DWORD *)(v366 + v329);
        v131 = *(int *)(v366 + v329 + 4);
        if ( v130 >= 0 )
          *(_DWORD *)(v366 + 8LL * v130 + 4) = v131;
        if ( (int)v131 >= 0 )
          *(_DWORD *)(v366 + 8 * v131) = v130;
        *(_QWORD *)(v366 + v329) = 0xFC06BF56FC06BF56LL;
        *v308 = 0;
        v132 = *(_DWORD *)(v365 + v334);
        v133 = *(int *)(v365 + v334 + 4);
        if ( v132 >= 0 )
          *(_DWORD *)(v365 + 8LL * v132 + 4) = v133;
        if ( (int)v133 >= 0 )
          *(_DWORD *)(v365 + 8 * v133) = v132;
        v87 = v342;
        *(_QWORD *)(v365 + v334) = 0xFC06BF56FC06BF56LL;
        *v324 = 0;
        *v316 = 0;
        *v319 = 0.0;
      }
    }
    else
    {
      v90 = (int)v314;
      v360[v314++] = v92;
      *((_DWORD *)v361 + v90) = *(_DWORD *)((char *)v361 + v293);
    }
    v293 += 4LL;
  }
  while ( 4LL * (unsigned int)(v371 - 1) + 4 != v293 );
  v82 = a2;
  if ( (_DWORD)v87 )
  {
    v177 = (__m128i *)operator new[]((__int64)(int)v87 << 6);
    v178 = v367;
    v179 = v177;
    if ( v367 != v177 )
    {
      if ( (int)v87 >> 3 > 0 )
      {
        v180 = (unsigned int)(((int)v87 >> 3) - 1);
        v181 = &v177[32 * v180 + 32];
        do
        {
          v182 = _mm_loadu_si128(v178);
          v177 += 32;
          v178 += 32;
          v177[-32] = v182;
          v177[-31] = _mm_loadu_si128(v178 - 31);
          v177[-30] = _mm_loadu_si128(v178 - 30);
          v177[-29] = _mm_loadu_si128(v178 - 29);
          v177[-28] = _mm_loadu_si128(v178 - 28);
          v177[-27] = _mm_loadu_si128(v178 - 27);
          v177[-26] = _mm_loadu_si128(v178 - 26);
          v177[-25] = _mm_loadu_si128(v178 - 25);
          v177[-24] = _mm_loadu_si128(v178 - 24);
          v177[-23] = _mm_loadu_si128(v178 - 23);
          v177[-22] = _mm_loadu_si128(v178 - 22);
          v177[-21] = _mm_loadu_si128(v178 - 21);
          v177[-20] = _mm_loadu_si128(v178 - 20);
          v177[-19] = _mm_loadu_si128(v178 - 19);
          v177[-18] = _mm_loadu_si128(v178 - 18);
          v177[-17] = _mm_loadu_si128(v178 - 17);
          v177[-16] = _mm_loadu_si128(v178 - 16);
          v177[-15] = _mm_loadu_si128(v178 - 15);
          v177[-14] = _mm_loadu_si128(v178 - 14);
          v177[-13] = _mm_loadu_si128(v178 - 13);
          v177[-12] = _mm_loadu_si128(v178 - 12);
          v177[-11] = _mm_loadu_si128(v178 - 11);
          v177[-10] = _mm_loadu_si128(v178 - 10);
          v177[-9] = _mm_loadu_si128(v178 - 9);
          v177[-8] = _mm_loadu_si128(v178 - 8);
          v177[-7] = _mm_loadu_si128(v178 - 7);
          v177[-6] = _mm_loadu_si128(v178 - 6);
          v177[-5] = _mm_loadu_si128(v178 - 5);
          v177[-4] = _mm_loadu_si128(v178 - 4);
          v177[-3] = _mm_loadu_si128(v178 - 3);
          v177[-2] = _mm_loadu_si128(v178 - 2);
          v177[-1] = _mm_loadu_si128(v178 - 1);
        }
        while ( v177 != v181 );
        v183 = ((int)v180 + 1LL) << 9;
        v178 = (__m128i *)((char *)v367 + v183);
        v177 = (__m128i *)((char *)v179 + v183);
      }
      switch ( v87 & 7 )
      {
        case 0LL:
          break;
        case 1LL:
          goto LABEL_247;
        case 2LL:
          goto LABEL_246;
        case 3LL:
          goto LABEL_245;
        case 4LL:
          goto LABEL_244;
        case 5LL:
          goto LABEL_243;
        case 6LL:
          goto LABEL_242;
        case 7LL:
          v177[24] = _mm_loadu_si128(v178 + 24);
          v177[25] = _mm_loadu_si128(v178 + 25);
          v177[26] = _mm_loadu_si128(v178 + 26);
          v177[27] = _mm_loadu_si128(v178 + 27);
LABEL_242:
          v177[20] = _mm_loadu_si128(v178 + 20);
          v177[21] = _mm_loadu_si128(v178 + 21);
          v177[22] = _mm_loadu_si128(v178 + 22);
          v177[23] = _mm_loadu_si128(v178 + 23);
LABEL_243:
          v177[16] = _mm_loadu_si128(v178 + 16);
          v177[17] = _mm_loadu_si128(v178 + 17);
          v177[18] = _mm_loadu_si128(v178 + 18);
          v177[19] = _mm_loadu_si128(v178 + 19);
LABEL_244:
          v177[12] = _mm_loadu_si128(v178 + 12);
          v177[13] = _mm_loadu_si128(v178 + 13);
          v177[14] = _mm_loadu_si128(v178 + 14);
          v177[15] = _mm_loadu_si128(v178 + 15);
LABEL_245:
          v177[8] = _mm_loadu_si128(v178 + 8);
          v177[9] = _mm_loadu_si128(v178 + 9);
          v177[10] = _mm_loadu_si128(v178 + 10);
          v177[11] = _mm_loadu_si128(v178 + 11);
LABEL_246:
          v177[4] = _mm_loadu_si128(v178 + 4);
          v177[5] = _mm_loadu_si128(v178 + 5);
          v177[6] = _mm_loadu_si128(v178 + 6);
          v177[7] = _mm_loadu_si128(v178 + 7);
LABEL_247:
          *v177 = _mm_loadu_si128(v178);
          v177[1] = _mm_loadu_si128(v178 + 1);
          v177[2] = _mm_loadu_si128(v178 + 2);
          v177[3] = _mm_loadu_si128(v178 + 3);
          break;
      }
    }
    v82 = (CoinPresolveMatrix *)operator new(0x20u);
    *((_DWORD *)v82 + 4) = v87;
    *((_QWORD *)v82 + 3) = v179;
    *((_QWORD *)v82 + 1) = a2;
    *(_QWORD *)v82 = &off_4D1ED8;
  }
  operator delete[](v367);
  v184 = v314;
  if ( !v314 )
    goto LABEL_297;
  if ( *((_BYTE *)this + 320) )
    goto LABEL_296;
  v185 = 0;
  v186 = *((_QWORD *)this + 7);
  v187 = _mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
  v325 = 0;
  v314 = 0;
  v330 = *((_QWORD *)this + 35);
  v349 = *((_QWORD *)this + 5);
  v188 = v187;
  v357 = (int)v82;
  v300 = *((_QWORD *)this + 36);
  v302 = *((_QWORD *)this + 6);
  v355 = *((_QWORD *)this + 37);
  v189 = *((_QWORD *)this + 38);
  v317 = *((_QWORD **)this + 8);
  v352 = *((int **)this + 56);
  v306 = 4LL * (v184 - 1) + 4;
  do
  {
    v304 = *(int *)((char *)v360 + v185);
    v190 = 4LL * v304;
    v191 = *(_DWORD *)(v190 + v302);
    v294 = (int *)(v190 + v302);
    if ( v191 <= 1 || v191 > v345 )
      goto LABEL_252;
    v192 = (_DWORD *)(v349 + v190);
    v193 = *(_DWORD *)((char *)v361 + v185);
    LODWORD(v194) = *v192;
    v195 = *v192 + v191;
    if ( *v192 >= v195 )
    {
      v203 = 0.0;
LABEL_273:
      v210 = 4LL * v193;
      v347 = (CoinPresolveAction *)(v210 + v330);
      v211 = *(int *)(v210 + v330);
      v322 = (int *)(v300 + v210);
      v212 = v211 + *(_DWORD *)(v300 + v210);
      v213 = (*((int *)this + 109) >> 17) & 3;
      if ( v213 )
      {
        if ( v213 == 1 )
        {
          v312 = 9.999999999999999e-12;
        }
        else
        {
          v312 = 9.999999999999999e-10;
          if ( v213 == 2 )
            v312 = 9.999999999999999e-11;
        }
      }
      else
      {
        v312 = 1.0e-12;
      }
      v338 = v203;
      v309 = v188;
      CoinSort_2<int,double>(v189 + 4 * v211, v189 + 4LL * v212, v355 + 8 * v211);
      v214 = *v192;
      v215 = *v294;
      v188 = v309;
      v216 = *v294 + *v192;
      v335 = *v322;
      v217 = -*v322;
      v327 = v217;
      if ( *v192 >= v216 )
      {
LABEL_356:
        if ( 3 * v217 <= 2 * (v335 + v215) )
        {
          v288 = (int)v314;
          v360[v314++] = v304;
          *((_DWORD *)v361 + v288) = v193;
        }
        goto LABEL_252;
      }
      v320 = v193;
      v298 = 0;
      v218 = v338;
      v310 = (double *)&v317[v214];
      v362 = v185;
      v332 = (double *)(v186 + 4 * ((unsigned int)(v216 - v214 - 1) + (__int64)v214) + 4);
      v219 = (double *)(v186 + 4LL * v214);
      while ( 1 )
      {
        if ( v320 != *(_DWORD *)v219 )
        {
          v220 = 4LL * *(int *)v219;
          v344 = v188;
          v221 = (int *)(v330 + v220);
          v222 = (_DWORD *)(v300 + v220);
          v339 = v218;
          v336 = -*v310 / v218;
          CoinSort_2<int,double>(v189 + 4LL * *v221, v189 + 4LL * (*v222 + *v221), v355 + 8LL * *v221);
          v223 = v336;
          v224 = *(int *)v347;
          v218 = v339;
          v225 = *v221;
          v226 = v312 * v336;
          v335 = *v322;
          v227 = *v221 + *v222;
          v188 = v344;
          if ( (int)v224 < (int)v224 + *v322 )
            break;
        }
LABEL_353:
        v219 = (double *)((char *)v219 + 4);
        ++v310;
        if ( v332 == v219 )
        {
          v193 = v320;
          v185 = v362;
          if ( !v298 )
          {
            v217 = v327;
            v215 = *v294;
            goto LABEL_356;
          }
          goto LABEL_252;
        }
      }
      v228 = v224 + 1;
      v229 = 0;
      v230 = v224 + 1 + (unsigned int)(*v322 - 1);
      while ( 1 )
      {
        v231 = *(_DWORD *)(v189 + 4 * v224);
        v232 = *(double *)(v355 + 8 * v224) * v223;
        if ( v227 <= v225 )
          goto LABEL_288;
        v233 = v225;
        v234 = *(_DWORD *)(v189 + 4LL * v225);
        if ( v231 > v234 )
          break;
LABEL_350:
        if ( v231 != v234 )
          goto LABEL_288;
        v232 = v232 + *(double *)(v355 + 8 * v233);
LABEL_289:
        if ( v226 > COERCE_DOUBLE(*(_QWORD *)&v232 & v187.m128i_i64[0]) )
        {
          v298 += v232 > v226 * 0.1;
          --v229;
        }
        ++v225;
        v224 = v228;
        if ( v230 == v228 )
        {
          v327 += v229;
          goto LABEL_353;
        }
        ++v228;
      }
      v233 = v225 + 1;
      v235 = v233 + (unsigned int)(v227 - 1 - v225);
      v236 = v189 + 4LL * v225 - 4 * v233;
      while ( 1 )
      {
        v225 = v233;
        if ( v235 == v233 )
          break;
        v234 = *(_DWORD *)(v236 + 4 * (v233 + 1));
        if ( v231 <= v234 )
          goto LABEL_350;
        ++v233;
      }
LABEL_288:
      ++v229;
      goto LABEL_289;
    }
    v196 = (int)v194;
    v197 = (int *)(v186 + 4LL * (int)v194);
    v198 = *v197;
    v199 = *v197;
    if ( *(int *)(v300 + 4 * v198) > 1 )
    {
      v200 = *((_QWORD *)this + 50);
      v201 = *(_BYTE *)(v200 + v198);
      if ( (v201 & 4) == 0 )
      {
        v202 = v195 - v194;
        v203 = 0.0;
        v194 = (int)v194;
        v204 = (int)v194 + (unsigned __int64)(unsigned int)(v195 - v194 - 1);
        while ( 1 )
        {
          if ( COERCE_DOUBLE(v317[v194] & v188.m128i_i64[0]) <= 1.0e-10 )
            goto LABEL_252;
          if ( v193 == v199 )
            v203 = *(double *)&v317[v194];
          if ( v194 == v204 )
            break;
          ++v194;
          v205 = *(int *)(v186 + 4 * v194);
          v199 = *(_DWORD *)(v186 + 4 * v194);
          if ( *(int *)(v300 + 4 * v205) <= 1 || (*(_BYTE *)(v200 + v205) & 4) != 0 )
            goto LABEL_252;
        }
        v206 = 0;
        v207 = (double *)&v317[v196];
        do
        {
          if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v207 / v203) & v188.m128i_i64[0]) > 10.0 )
            v206 = 1;
          ++v207;
        }
        while ( &v317[v194 + 1] != (_QWORD *)v207 );
        if ( !v206 )
        {
          v208 = &v352[v325];
          while ( 1 )
          {
            v209 = *v197++;
            ++v208;
            *(_BYTE *)(v200 + v209) = v201 | 4;
            *(v208 - 1) = v209;
            if ( (int *)(v186 + 4 * v194 + 4) == v197 )
              break;
            v200 = *((_QWORD *)this + 50);
            v201 = *(_BYTE *)(v200 + *v197);
          }
          v325 += v202;
          goto LABEL_273;
        }
      }
    }
LABEL_252:
    v185 += 4;
  }
  while ( v306 != v185 );
  LODWORD(v82) = v357;
  if ( v325 )
  {
    v237 = v352;
    do
    {
      v238 = *v237++;
      *(_BYTE *)(*((_QWORD *)this + 50) + v238) &= ~4u;
    }
    while ( v237 != &v352[v325 - 1 + 1] );
  }
LABEL_296:
  v82 = (CoinPresolveMatrix *)subst_constraint_action::presolve(
                                this,
                                v361,
                                v360,
                                (const int *)v314,
                                (int)v82,
                                (const CoinPresolveAction *)(unsigned int)v345,
                                v289);
LABEL_297:
  if ( v371 > 29 )
  {
LABEL_298:
    *(_DWORD *)a3 = v345;
    return v82;
  }
LABEL_303:
  if ( *((_DWORD *)this + 88) <= v345 )
    goto LABEL_298;
  *(_DWORD *)a3 = ~v345;
  return v82;
}

