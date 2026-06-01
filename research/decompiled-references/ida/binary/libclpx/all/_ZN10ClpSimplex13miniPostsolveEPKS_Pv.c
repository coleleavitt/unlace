void __fastcall ClpSimplex::miniPostsolve(
        ClpSimplex *this,
        const ClpSimplex *a2,
        _QWORD *a3,
        double a4,
        __m128i si128,
        __m128 a6,
        __m128i a7)
{
  unsigned __int64 v9; // r15
  char *v10; // rax
  size_t v11; // rdx
  char *v12; // r15
  __int64 v13; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // edi
  size_t v17; // rdx
  int v18; // r15d
  int v19; // r12d
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  int v22; // ecx
  int v23; // edi
  int *v24; // r15
  __int64 v25; // r8
  __int64 v26; // r11
  _DWORD *v27; // rdx
  int v28; // r9d
  signed int v29; // esi
  __int64 v30; // rax
  int *v31; // rdx
  unsigned int v32; // r10d
  unsigned int v33; // eax
  __m128i v34; // xmm0
  __m128i v35; // xmm2
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned int v38; // esi
  bool v39; // cf
  signed int v40; // esi
  unsigned int v41; // r9d
  int *v42; // rdx
  unsigned int v43; // eax
  __m128i v44; // xmm0
  __m128i v45; // xmm2
  int v46; // eax
  int v47; // edx
  int v48; // eax
  int v49; // edx
  int v50; // esi
  __int64 v51; // rdx
  void *v52; // rdi
  __m128 v53; // xmm0
  __int64 v54; // rdi
  __int64 (__fastcall *v55)(double, double, double, double); // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  char *v58; // rax
  unsigned int v59; // esi
  char *v60; // rdx
  __int64 v61; // kr00_8
  int v62; // esi
  __int64 v63; // rsi
  __int64 v64; // rdi
  __int64 v65; // rax
  int v66; // ecx
  __int64 v67; // rdx
  _QWORD *v68; // rdi
  __int64 (__fastcall *v69)(ClpPackedMatrix *); // rax
  __int64 v70; // rdi
  __int64 (__fastcall *v71)(ClpPackedMatrix *); // rax
  __int64 v72; // rax
  int v73; // esi
  __int64 v74; // rax
  int v75; // ecx
  int v76; // edi
  __int64 v77; // r9
  int v78; // edx
  int v79; // eax
  __int64 (__fastcall ***v80)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64, double, double, double, double); // rdi
  size_t v81; // rbx
  const void *v82; // rsi
  __int64 (__fastcall ***v83)(_QWORD, _QWORD, _QWORD, __m128i *, _QWORD, __int64); // rdi
  __int64 v84; // rax
  __int64 v85; // rsi
  int v86; // edi
  int v87; // eax
  __int64 v88; // r8
  int *v89; // r9
  int v90; // eax
  int v91; // ebx
  int v92; // eax
  int *v93; // rbx
  int *v94; // r8
  __int64 v95; // r10
  __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rdi
  __int64 v99; // rbx
  __int64 v100; // r11
  __int64 v101; // r10
  __int64 v102; // xmm0_8
  int v103; // ecx
  int v104; // edx
  unsigned __int64 v105; // rdi
  int *v106; // rax
  __int64 v107; // rsi
  __int64 v108; // rdx
  _BYTE *v109; // rdx
  __int64 v110; // rax
  __int64 v111; // r13
  double v112; // xmm6_8
  __int64 v113; // rbx
  int *v114; // r12
  int v115; // edx
  int v116; // ebx
  __int64 v117; // rax
  __int64 v118; // r8
  __int64 v119; // rdi
  unsigned __int64 v120; // rax
  __int64 v121; // rsi
  double v122; // xmm0_8
  int v123; // eax
  int v124; // ebx
  __int64 v125; // rax
  __int64 v126; // rbx
  int v127; // edx
  double v128; // xmm4_8
  __int64 v129; // rbx
  __int64 v130; // rdx
  double v131; // xmm7_8
  double v132; // xmm6_8
  double v133; // xmm1_8
  double v134; // xmm0_8
  __int64 v135; // rsi
  double *v136; // rdi
  double *v137; // rcx
  double v138; // xmm3_8
  double v139; // xmm1_8
  double v140; // xmm2_8
  __int64 v141; // rax
  int *v142; // rax
  int v143; // ebx
  __int64 v144; // rcx
  double *v145; // rdx
  double v146; // xmm0_8
  __int64 v147; // rdx
  __int64 v148; // rax
  __int64 v149; // r10
  double v150; // xmm0_8
  __int64 v151; // rdx
  __int64 v152; // r8
  double *v153; // r9
  double *v154; // rax
  double v155; // xmm0_8
  __int64 v156; // rax
  __int64 v157; // rdi
  __int64 v158; // rsi
  __int64 v159; // rax
  double v160; // xmm1_8
  double v161; // xmm3_8
  double v162; // xmm4_8
  double *v163; // r11
  double *v164; // r10
  int v165; // edx
  __int64 v166; // rax
  double v167; // xmm1_8
  __int64 v168; // rdi
  __int64 v169; // rsi
  __int64 v170; // rax
  double v171; // xmm2_8
  __int64 v172; // rsi
  double v173; // xmm5_8
  double v174; // xmm2_8
  double *v175; // rdx
  double *v176; // r8
  double v177; // xmm13_8
  double v178; // xmm11_8
  __m128d v179; // xmm12
  double v180; // xmm10_8
  double v181; // xmm9_8
  double v182; // xmm15_8
  double v183; // xmm7_8
  double v184; // xmm6_8
  double v185; // xmm13_8
  __int64 v186; // rax
  __int64 v187; // xmm0_8
  __int64 v188; // rsi
  double v189; // xmm2_8
  int v190; // edx
  __int64 v191; // rcx
  int v192; // edx
  __int64 v193; // rsi
  __int64 v194; // rdx
  __int64 v195; // rsi
  double v196; // xmm0_8
  __int64 v197; // rax
  double v198; // xmm1_8
  double *v199; // rax
  __int64 v200; // rbx
  int v201; // r11d
  __int64 v202; // r12
  __int64 v203; // rcx
  int *v204; // r13
  int v205; // eax
  int *v206; // r12
  double v207; // xmm2_8
  bool v208; // zf
  double *v209; // r10
  __int64 v210; // rax
  double v211; // xmm1_8
  int i; // esi
  double v213; // xmm0_8
  __int64 v214; // xmm0_8
  __int64 v215; // xmm3_8
  double v216; // rax
  _BYTE *v217; // rdx
  _BYTE *v218; // rdx
  bool v219; // cl
  double v220; // xmm4_8
  double v221; // xmm3_8
  __int64 v222; // rbx
  int v223; // r12d
  int *v224; // r13
  int v225; // esi
  int v226; // ecx
  double v227; // xmm6_8
  double v228; // xmm3_8
  __int64 v229; // rcx
  __int64 v230; // rdx
  double v231; // xmm1_8
  double v232; // xmm0_8
  double *v233; // rcx
  double *v234; // rdx
  double v235; // xmm0_8
  int v236; // edx
  _BYTE *v237; // rax
  __int64 v238; // rcx
  double v239; // xmm1_8
  double v240; // xmm0_8
  double *v241; // rcx
  double *v242; // rdx
  double v243; // xmm0_8
  __int64 v244; // rcx
  _BYTE *v245; // rax
  double v246; // xmm1_8
  __int64 v247; // rax
  __int64 v248; // rdi
  __int64 v249; // rsi
  __int64 v250; // rax
  double v251; // xmm0_8
  double v252; // xmm0_8
  double v253; // xmm2_8
  double v254; // rax
  double v255; // xmm1_8
  _BYTE *v256; // rdx
  __int64 v257; // rdx
  double v258; // xmm4_8
  bool v259; // al
  double v260; // xmm5_8
  double v261; // xmm2_8
  __int64 v262; // rsi
  __int64 v263; // rcx
  _BYTE *v264; // rax
  __int64 v265; // rbx
  double v266; // xmm0_8
  __int64 v267; // rax
  double *v268; // rax
  double v269; // xmm0_8
  int *v270; // rax
  __int64 v271; // rsi
  int v272; // edx
  int *v273; // r12
  int *v274; // rbx
  int v275; // r13d
  int v276; // eax
  int v277; // ecx
  _BYTE *v278; // r12
  __int64 v279; // rax
  _BYTE *v280; // rsi
  int v281; // r8d
  __int64 v282; // rax
  int v283; // esi
  unsigned int v284; // edx
  int v285; // r9d
  char *v286; // rcx
  unsigned int v287; // edi
  __int64 v288; // rax
  __int128 v289; // xmm0
  __int64 v290; // rax
  int v291; // esi
  __int64 v292; // rcx
  double v293; // xmm3_8
  __int64 v294; // rdx
  double v295; // xmm1_8
  double *v296; // rdx
  double v297; // xmm0_8
  double v298; // xmm0_8
  int v299; // eax
  double v300; // xmm6_8
  double v301; // xmm13_8
  double v302; // xmm6_8
  double v303; // xmm13_8
  double v304; // xmm13_8
  double v305; // xmm6_8
  double v306; // xmm7_8
  double v307; // xmm3_8
  double v308; // xmm4_8
  double v309; // xmm2_8
  double v310; // xmm2_8
  double v311; // xmm3_8
  __int64 v312; // rdx
  __int64 v313; // rdx
  _BYTE *v314; // rdx
  double v315; // xmm3_8
  double v316; // xmm0_8
  _BYTE *v317; // rsi
  __m128d v318; // xmm8
  __int64 v319; // rax
  _BYTE *v320; // rdx
  __m128d v321; // xmm4
  __int64 v322; // rax
  __int64 v323; // rax
  __int64 v324; // rax
  __int64 v325; // rax
  __int64 v326; // [rsp+0h] [rbp-270h]
  __int64 v327; // [rsp+8h] [rbp-268h]
  __int64 v328; // [rsp+18h] [rbp-258h]
  __int64 v329; // [rsp+20h] [rbp-250h]
  __int64 v330; // [rsp+28h] [rbp-248h]
  int v332; // [rsp+38h] [rbp-238h]
  __int64 v333; // [rsp+40h] [rbp-230h]
  double v334; // [rsp+40h] [rbp-230h]
  __int64 v335; // [rsp+48h] [rbp-228h]
  double v336; // [rsp+48h] [rbp-228h]
  __int64 v337; // [rsp+50h] [rbp-220h]
  double v338; // [rsp+50h] [rbp-220h]
  void *v339; // [rsp+58h] [rbp-218h]
  __int64 v340; // [rsp+60h] [rbp-210h]
  int *v341; // [rsp+60h] [rbp-210h]
  __int64 v342; // [rsp+68h] [rbp-208h]
  __int64 v343; // [rsp+68h] [rbp-208h]
  __int64 v344; // [rsp+70h] [rbp-200h]
  int *v345; // [rsp+70h] [rbp-200h]
  double v346; // [rsp+70h] [rbp-200h]
  __int64 v347; // [rsp+78h] [rbp-1F8h]
  int *v348; // [rsp+78h] [rbp-1F8h]
  double v349; // [rsp+78h] [rbp-1F8h]
  __int64 v350; // [rsp+78h] [rbp-1F8h]
  double *v351; // [rsp+80h] [rbp-1F0h]
  char *v352; // [rsp+88h] [rbp-1E8h]
  int *v353; // [rsp+98h] [rbp-1D8h]
  int v354; // [rsp+A4h] [rbp-1CCh]
  _DWORD *v355; // [rsp+A8h] [rbp-1C8h]
  __int64 v356; // [rsp+B0h] [rbp-1C0h]
  double v357; // [rsp+B0h] [rbp-1C0h]
  __int64 v358; // [rsp+B0h] [rbp-1C0h]
  __int64 v359; // [rsp+B8h] [rbp-1B8h]
  int v360; // [rsp+B8h] [rbp-1B8h]
  int v361; // [rsp+B8h] [rbp-1B8h]
  __int64 v362; // [rsp+C0h] [rbp-1B0h]
  int *v363; // [rsp+C0h] [rbp-1B0h]
  double *dest; // [rsp+C8h] [rbp-1A8h]
  char *v365; // [rsp+D0h] [rbp-1A0h]
  __int64 v366; // [rsp+D8h] [rbp-198h]
  char *v367; // [rsp+E0h] [rbp-190h]
  char *v368; // [rsp+E8h] [rbp-188h]
  char *v369; // [rsp+F0h] [rbp-180h]
  double *src; // [rsp+F8h] [rbp-178h]
  _QWORD *v371; // [rsp+100h] [rbp-170h]
  int v372; // [rsp+108h] [rbp-168h]
  __int64 v373; // [rsp+108h] [rbp-168h]
  int v374; // [rsp+108h] [rbp-168h]
  double v375; // [rsp+108h] [rbp-168h]
  int v376; // [rsp+110h] [rbp-160h]
  __int64 v377; // [rsp+110h] [rbp-160h]
  double v378; // [rsp+110h] [rbp-160h]
  int *v379; // [rsp+110h] [rbp-160h]
  double *v380; // [rsp+110h] [rbp-160h]
  char *v381; // [rsp+118h] [rbp-158h]
  int v382; // [rsp+120h] [rbp-150h]
  __int64 v383; // [rsp+120h] [rbp-150h]
  int v384; // [rsp+120h] [rbp-150h]
  double v385; // [rsp+120h] [rbp-150h]
  double v386; // [rsp+120h] [rbp-150h]
  _DWORD *v387; // [rsp+128h] [rbp-148h]
  int *v388; // [rsp+130h] [rbp-140h]
  __int64 v389; // [rsp+138h] [rbp-138h]
  __int64 v390; // [rsp+140h] [rbp-130h]
  __int64 v391; // [rsp+148h] [rbp-128h]
  int *v392; // [rsp+148h] [rbp-128h]
  __int64 v393; // [rsp+150h] [rbp-120h]
  int v394; // [rsp+150h] [rbp-120h]
  int v395; // [rsp+150h] [rbp-120h]
  __int64 v396; // [rsp+150h] [rbp-120h]
  double v397; // [rsp+150h] [rbp-120h]
  int v398; // [rsp+150h] [rbp-120h]
  int v399; // [rsp+150h] [rbp-120h]
  int *v400; // [rsp+150h] [rbp-120h]
  int *v401; // [rsp+158h] [rbp-118h] BYREF
  char v402[8]; // [rsp+168h] [rbp-108h] BYREF
  __m128 v403; // [rsp+170h] [rbp-100h] BYREF
  char *v404; // [rsp+180h] [rbp-F0h]
  __m128i v405; // [rsp+190h] [rbp-E0h] BYREF
  double v406; // [rsp+1A0h] [rbp-D0h]
  double v407; // [rsp+1A8h] [rbp-C8h]
  double v408; // [rsp+1B0h] [rbp-C0h]
  double v409; // [rsp+1B8h] [rbp-B8h]
  double v410; // [rsp+1C0h] [rbp-B0h]
  double v411; // [rsp+1C8h] [rbp-A8h]
  int v412; // [rsp+1D0h] [rbp-A0h]
  int v413; // [rsp+1D4h] [rbp-9Ch]
  int v414; // [rsp+1D8h] [rbp-98h]
  _BYTE v415[32]; // [rsp+1E0h] [rbp-90h] BYREF
  __int64 v416; // [rsp+200h] [rbp-70h]
  __int64 v417; // [rsp+208h] [rbp-68h]
  int *v418; // [rsp+210h] [rbp-60h]
  int *v419; // [rsp+218h] [rbp-58h]

  v372 = *(_DWORD *)a3;
  v352 = (char *)a3[2];
  v330 = 8LL * *(int *)a3;
  v347 = *((_QWORD *)a2 + 15);
  v359 = *((_QWORD *)a2 + 33);
  v393 = *((int *)a2 + 27);
  v362 = *((_QWORD *)this + 33);
  v391 = *((int *)this + 27);
  v9 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
  v10 = (char *)operator new[](v9);
  v11 = v9;
  v12 = v10;
  v381 = v10;
  memset(v10, 0, v11);
  v13 = *((int *)this + 26);
  v365 = &v12[v13];
  v14 = *((_DWORD *)this + 27);
  v15 = v13 + v14;
  if ( (int)v13 < v14 )
    LODWORD(v13) = *((_DWORD *)this + 27);
  v16 = v13 + 3 * v15;
  if ( (unsigned __int64)v16 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_368;
  v371 = (_QWORD *)operator new[](8LL * v16);
  v17 = *((int *)this + 26);
  v328 = *((int *)this + 26);
  v18 = *((_DWORD *)this + 26);
  LODWORD(v401) = v18;
  v369 = (char *)&v371[v17];
  v368 = (char *)&v371[v17 + v17];
  v19 = *((_DWORD *)this + 27);
  v367 = &v368[8 * v19];
  dest = (double *)&v367[8 * v19];
  if ( v18 < v19 )
    v18 = *((_DWORD *)this + 27);
  src = (double *)&v371[v17 + v17 + v19 + v19 + v19];
  v351 = &src[v18];
  memset(v351, 0, v17 * 8);
  v20 = (int)v401 + v18 + 2 * v19 + 4;
  if ( v20 > 0x1FFFFFFFFFFFFFFELL )
LABEL_368:
    __cxa_throw_bad_array_new_length();
  v21 = operator new[](4 * v20);
  v22 = *((_DWORD *)this + 27);
  v23 = *((_DWORD *)this + 26);
  v24 = (int *)v21;
  v25 = v23;
  if ( v22 >= v23 )
    v25 = *((int *)this + 27);
  v26 = 4LL * v22 + 8;
  v27 = (_DWORD *)(v21 + 4 * v25 + 4);
  v387 = v27;
  v355 = (_DWORD *)((char *)v27 + v26);
  v353 = (int *)(v21 + 4 * v25 + v26 + v26);
  if ( v22 < 0 )
  {
    v27[v22] = -1;
  }
  else
  {
    v28 = v22 + 1;
    v29 = -1;
    v30 = -(int)((unsigned __int64)(v21 + 4 * v25) >> 2) & 3;
    if ( v22 <= 5 )
      goto LABEL_18;
    if ( (_DWORD)v30 )
    {
      v29 = 0;
      *(v27 - 1) = 0;
      if ( (_DWORD)v30 != 1 )
      {
        *v27 = 1;
        v29 = 1;
        if ( (_DWORD)v30 != 2 )
        {
          v27[1] = 2;
          v29 = 2;
        }
      }
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
    LODWORD(v401) = v28 - v30;
    a7 = _mm_load_si128((const __m128i *)&xmmword_289C00);
    v31 = &v24[v25 + v30];
    v32 = (unsigned int)(v28 - v30) >> 2;
    v33 = 0;
    v34 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v29), 0), (__m128i)xmmword_289BB0);
    do
    {
      v35 = v34;
      ++v33;
      v34 = _mm_add_epi32(v34, si128);
      v31 += 4;
      a6 = (__m128)_mm_add_epi32(v35, a7);
      *((__m128 *)v31 - 1) = a6;
    }
    while ( v33 < v32 );
    v29 += (unsigned int)v401 & 0xFFFFFFFC;
    if ( ((unsigned int)v401 & 0xFFFFFFFC) != (_DWORD)v401 )
    {
LABEL_18:
      v387[v29] = v29 + 1;
      if ( v22 > v29 + 1 )
      {
        v387[v29 + 1] = v29 + 2;
        if ( v22 > v29 + 2 )
        {
          v387[v29 + 2] = v29 + 3;
          if ( v22 > v29 + 3 )
          {
            v387[v29 + 3] = v29 + 4;
            if ( v22 > v29 + 4 )
            {
              v387[v29 + 4] = v29 + 5;
              if ( v22 > v29 + 5 )
                v387[v29 + 5] = v29 + 6;
            }
          }
        }
      }
    }
    v36 = v25 + v22 + 3;
    v387[v22] = -1;
    v37 = -(int)((unsigned __int64)&v24[v36] >> 2) & 3;
    v38 = v37 + 3;
    if ( (unsigned int)(v37 + 3) < 5 )
      v38 = 5;
    v39 = v22 < v38;
    v40 = 0;
    if ( v39 )
      goto LABEL_34;
    if ( (_DWORD)v37 )
    {
      v40 = 1;
      *v355 = -1;
      if ( (_DWORD)v37 != 1 )
      {
        v355[1] = 0;
        v40 = 2;
        if ( (_DWORD)v37 != 2 )
        {
          v355[2] = 1;
          v40 = 3;
        }
      }
    }
    LODWORD(v401) = v40;
    v41 = v28 - v37;
    a7.m128i_i64[0] = -1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
    v42 = &v24[v36 + v37];
    v43 = 0;
    v44 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v40), 0), (__m128i)xmmword_289BB0);
    do
    {
      v45 = v44;
      ++v43;
      v44 = _mm_add_epi32(v44, si128);
      v42 += 4;
      a6 = (__m128)_mm_add_epi32(v45, (__m128i)-1LL);
      *((__m128 *)v42 - 1) = a6;
    }
    while ( v43 < v41 >> 2 );
    v40 += v41 & 0xFFFFFFFC;
    if ( (v41 & 0xFFFFFFFC) != v41 )
    {
LABEL_34:
      v355[v40] = v40 - 1;
      v46 = v40 + 1;
      if ( v22 >= v40 + 1 )
      {
        v355[v46] = v40;
        v47 = v40 + 2;
        if ( v22 >= v40 + 2 )
        {
          v355[v47] = v46;
          v48 = v40 + 3;
          if ( v22 >= v40 + 3 )
          {
            v355[v48] = v47;
            v49 = v40 + 4;
            if ( v22 >= v40 + 4 )
            {
              v50 = v40 + 5;
              v355[v49] = v48;
              if ( v22 >= v50 )
                v355[v50] = v49;
            }
          }
        }
      }
    }
  }
  v401 = v24;
  v51 = v23;
  v52 = *((void **)this + 14);
  v53 = _mm_loadh_ps((const double *)&v401);
  *(v355 - 1) = -1;
  v404 = &v352[v330];
  v403 = v53;
  memset(v52, 0, 8 * v51);
  memset(*((void **)this + 16), 0, 8LL * *((int *)this + 26));
  v54 = *((_QWORD *)this + 24);
  if ( !v54 )
    goto LABEL_50;
  v55 = **(__int64 (__fastcall ***)(double, double, double, double))v54;
  if ( (char *)v55 == (char *)ClpPackedMatrix::getPackedMatrix )
  {
    v326 = *(_QWORD *)(*(_QWORD *)(v54 + 88) + 40LL);
  }
  else
  {
    v319 = v55(*(double *)v53.m128_u64, *(double *)si128.m128i_i64, *(double *)a6.m128_u64, *(double *)a7.m128i_i64);
    v54 = *((_QWORD *)this + 24);
    v326 = *(_QWORD *)(v319 + 40);
    if ( !v54 )
      goto LABEL_367;
    v55 = **(__int64 (__fastcall ***)(double, double, double, double))v54;
  }
  if ( (char *)v55 == (char *)ClpPackedMatrix::getPackedMatrix )
  {
    v329 = *(_QWORD *)(*(_QWORD *)(v54 + 88) + 48LL);
  }
  else
  {
    v279 = v55(*(double *)v53.m128_u64, *(double *)si128.m128i_i64, *(double *)a6.m128_u64, *(double *)a7.m128i_i64);
    v54 = *((_QWORD *)this + 24);
    if ( !v54 )
      goto LABEL_231;
    v329 = *(_QWORD *)(v279 + 48);
    v55 = **(__int64 (__fastcall ***)(double, double, double, double))v54;
    if ( (char *)v55 != (char *)ClpPackedMatrix::getPackedMatrix )
    {
      v322 = ((__int64 (*)(void))v55)();
      v54 = *((_QWORD *)this + 24);
      v366 = *(_QWORD *)(v322 + 56);
      if ( !v54 )
        goto LABEL_353;
      v55 = **(__int64 (__fastcall ***)(double, double, double, double))v54;
      if ( (char *)v55 == (char *)ClpPackedMatrix::getPackedMatrix )
        goto LABEL_46;
      goto LABEL_352;
    }
  }
  v56 = *(_QWORD *)(*(_QWORD *)(v54 + 88) + 56LL);
  v366 = v56;
  if ( (char *)v55 == (char *)ClpPackedMatrix::getPackedMatrix )
  {
LABEL_46:
    v57 = *(_QWORD *)(v54 + 88);
    goto LABEL_47;
  }
LABEL_352:
  v57 = v55(*(double *)v53.m128_u64, *(double *)si128.m128i_i64, *(double *)a6.m128_u64, *(double *)a7.m128i_i64);
LABEL_47:
  v327 = *(_QWORD *)(v57 + 32);
  if ( v372 > 0 )
  {
    v58 = v352;
    do
    {
      v59 = *((_DWORD *)v58 + 1);
      v60 = &v352[v330 + *(int *)v58];
      v61 = v56;
      v56 = v59;
      switch ( v59 )
      {
        case 1u:
        case 4u:
        case 8u:
        case 9u:
          v381[*((int *)v60 + 4)] = v59;
          break;
        case 2u:
          v107 = *((int *)v60 + 16);
          v56 = *((int *)v60 + 17);
          v108 = *((int *)v60 + 18);
          if ( (int)v107 >= 0 )
            v381[v107] = 2;
          if ( (int)v56 >= 0 )
            v381[v56] = 2;
          v365[v108] = 2;
          break;
        case 0xBu:
          v365[*((int *)v60 + 6)] = 11;
          break;
        case 0xDu:
          v365[*((int *)v60 + 4)] = 13;
          break;
        case 0xEu:
          v56 = *((unsigned int *)v60 + 15);
          v62 = *((_DWORD *)v60 + 17);
          v365[*((int *)v60 + 16)] = 3;
          v365[v62] = 14;
          v381[(int)v56] = 3;
          break;
        default:
          v56 = v61;
          break;
      }
      v58 += 8;
    }
    while ( &v352[8 * (v372 - 1) + 8] != v58 );
  }
  v63 = *((_QWORD *)a2 + 18);
  v64 = *((_QWORD *)a2 + 19);
  if ( *((int *)this + 26) > 0 )
  {
    v65 = 0;
    v66 = 0;
    do
    {
      while ( !v381[v65] )
      {
        v67 = v66++;
        *(_BYTE *)(v362 + v391 + v65) = *(_BYTE *)(v359 + v393 + v67);
        *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v65) = *(_QWORD *)(*((_QWORD *)a2 + 14) + 8 * v67);
        *(_QWORD *)(*((_QWORD *)this + 16) + 8 * v65) = *(_QWORD *)(*((_QWORD *)a2 + 16) + 8 * v67);
        v371[v65] = *(_QWORD *)(v63 + 8 * v67);
        v53.m128_u64[0] = *(_QWORD *)(v64 + 8 * v67);
        v24[v67] = v65;
        *(_QWORD *)&v369[8 * v65++] = v53.m128_u64[0];
        if ( *((_DWORD *)this + 26) <= (int)v65 )
          goto LABEL_57;
      }
      v109 = (_BYTE *)(*((_QWORD *)this + 33) + (int)v65 + *((_DWORD *)this + 27));
      *v109 = *v109 & 0xF8 | 1;
      ++v65;
    }
    while ( *((_DWORD *)this + 26) > (int)v65 );
  }
LABEL_57:
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v415);
  v68 = *((_QWORD **)this + 24);
  v69 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*v68 + 16LL);
  if ( v69 == ClpPackedMatrix::getNumElements )
    v354 = *(_DWORD *)(v68[11] + 72LL);
  else
    v354 = ((__int64 (__fastcall *)(_QWORD *, __int64, double, double, double, double))v69)(
             v68,
             v63,
             *(double *)v53.m128_u64,
             *(double *)si128.m128i_i64,
             *(double *)a6.m128_u64,
             *(double *)a7.m128i_i64);
  v70 = *((_QWORD *)a2 + 24);
  if ( !v70 )
LABEL_50:
    BUG();
  v71 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v70;
  if ( v71 == ClpPackedMatrix::getPackedMatrix )
  {
    v333 = *(_QWORD *)(*(_QWORD *)(v70 + 88) + 40LL);
    goto LABEL_62;
  }
  v323 = ((__int64 (__fastcall *)(__int64, __int64, double, double, double, double))v71)(
           v70,
           v63,
           *(double *)v53.m128_u64,
           *(double *)si128.m128i_i64,
           *(double *)a6.m128_u64,
           *(double *)a7.m128i_i64);
  v70 = *((_QWORD *)a2 + 24);
  v333 = *(_QWORD *)(v323 + 40);
  if ( !v70 )
LABEL_367:
    BUG();
  v71 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v70;
  if ( v71 == ClpPackedMatrix::getPackedMatrix )
  {
LABEL_62:
    v335 = *(_QWORD *)(*(_QWORD *)(v70 + 88) + 48LL);
    if ( v71 == ClpPackedMatrix::getPackedMatrix )
      goto LABEL_63;
    goto LABEL_358;
  }
  v324 = ((__int64 (*)(void))v71)();
  v70 = *((_QWORD *)a2 + 24);
  if ( !v70 )
LABEL_231:
    BUG();
  v335 = *(_QWORD *)(v324 + 48);
  v71 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v70;
  if ( v71 != ClpPackedMatrix::getPackedMatrix )
  {
LABEL_358:
    v325 = ((__int64 (__fastcall *)(__int64, __int64, double, double, double, double))v71)(
             v70,
             v63,
             *(double *)v53.m128_u64,
             *(double *)si128.m128i_i64,
             *(double *)a6.m128_u64,
             *(double *)a7.m128i_i64);
    v70 = *((_QWORD *)a2 + 24);
    v356 = *(_QWORD *)(v325 + 56);
    if ( v70 )
    {
      v71 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v70;
      if ( v71 == ClpPackedMatrix::getPackedMatrix )
        goto LABEL_64;
      goto LABEL_360;
    }
LABEL_353:
    BUG();
  }
LABEL_63:
  v356 = *(_QWORD *)(*(_QWORD *)(v70 + 88) + 56LL);
  if ( v71 == ClpPackedMatrix::getPackedMatrix )
  {
LABEL_64:
    v72 = *(_QWORD *)(v70 + 88);
    goto LABEL_65;
  }
LABEL_360:
  v72 = ((__int64 (__fastcall *)(__int64, __int64, double, double, double, double))v71)(
          v70,
          v63,
          *(double *)v53.m128_u64,
          *(double *)si128.m128i_i64,
          *(double *)a6.m128_u64,
          *(double *)a7.m128i_i64);
LABEL_65:
  v73 = *((_DWORD *)this + 27);
  v337 = *(_QWORD *)(v72 + 32);
  if ( v73 <= 0 )
  {
    v79 = *((_DWORD *)this + 27);
    v75 = 0;
  }
  else
  {
    v74 = 0;
    v75 = 0;
    v76 = 0;
    v77 = (unsigned int)(v73 - 1) + 1LL;
    do
    {
      while ( 1 )
      {
        v78 = *(_DWORD *)(v366 + 4 * v74);
        if ( v365[v74] <= 10 )
          break;
        ++v74;
        v75 += v78;
        if ( v77 == v74 )
          goto LABEL_72;
      }
      if ( *(_DWORD *)(v356 + 4LL * v76) >= v78 )
        v78 = *(_DWORD *)(v356 + 4LL * v76);
      ++v74;
      ++v76;
      v75 += v78;
    }
    while ( v77 != v74 );
LABEL_72:
    v79 = v75 + v73;
  }
  v394 = (2 * v79 + 1000 - v75) / v73;
  v332 = 2 * v79 + 1000 + 2 * v354;
  CoinPackedMatrix::reserve((CoinPackedMatrix *)v415, v73, v332, 0);
  v80 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64, double, double, double, double))this
        + 20);
  v389 = v417;
  v392 = v418;
  v388 = v419;
  v390 = v416;
  v344 = *((_QWORD *)a2 + 22);
  v342 = *((_QWORD *)a2 + 23);
  v81 = 8LL * *((int *)this + 27);
  if ( v80 )
    v82 = (const void *)(**v80)(
                          v80,
                          0,
                          0,
                          v402,
                          0,
                          2,
                          *(double *)v53.m128_u64,
                          *(double *)si128.m128i_i64,
                          *(double *)a6.m128_u64,
                          *(double *)a7.m128i_i64);
  else
    v82 = nullptr;
  memcpy(dest, v82, v81);
  v83 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, __m128i *, _QWORD, __int64))a2 + 20);
  if ( v83 )
    v340 = (**v83)(v83, 0, 0, &v405, 0, 2);
  else
    v340 = 0;
  v84 = *((int *)this + 27);
  if ( (int)v84 > 0 )
  {
    v85 = 0;
    v86 = 0;
    v376 = 0;
    do
    {
      while ( 1 )
      {
        v392[v85] = v86;
        if ( v365[v85] > 10 )
          break;
        v88 = 4LL * v376;
        v401 = (int *)v376;
        v89 = (int *)(v356 + v88);
        v90 = *(_DWORD *)(v356 + v88);
        v91 = v90 + v86;
        v382 = v90 + v86;
        if ( v394 >= 0 )
        {
          v92 = *(_DWORD *)(v366 + 4 * v85) - v90;
          if ( v92 < 0 )
            v92 = 0;
          v382 = v394 + v92 + v91;
        }
        v93 = v401;
        v94 = (int *)(v335 + v88);
        *(_BYTE *)(v362 + v85) = *((_BYTE *)v401 + v359);
        *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v85) = *(_QWORD *)(v347 + 8LL * (_QWORD)v93);
        *(_QWORD *)&v368[8 * v85] = *(_QWORD *)(v344 + 8LL * (_QWORD)v93);
        *(_QWORD *)&v367[8 * v85] = *(_QWORD *)(v342 + 8LL * (_QWORD)v93);
        v388[v85] = *v89;
        v95 = *v94;
        dest[v85] = *(double *)(v340 + 8LL * (_QWORD)v93);
        if ( (int)v95 + *v89 > (int)v95 )
        {
          v96 = v86;
          v97 = (int)v95 + 1;
          v98 = v390 + -8 * v97 + 8LL * v86;
          v99 = v333 + -4 * v97 + 4 * v95;
          v100 = v389 + -4 * v97 + 4 * v96;
          v101 = v337 + -8 * v97 + 8 * v95;
          do
          {
            v102 = *(_QWORD *)(v101 + 8 * v97);
            v103 = v97;
            *(_DWORD *)(v100 + 4 * v97) = v24[*(int *)(v99 + 4 * v97)];
            v104 = *v89;
            *(_QWORD *)(v98 + 8 * v97++) = v102;
          }
          while ( *v94 + v104 > v103 );
          v93 = v401;
        }
        ++v376;
        v86 = v382;
        *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v85) = *(_QWORD *)(*((_QWORD *)a2 + 15) + 8LL * (_QWORD)v93);
        v84 = *((int *)this + 27);
        v365[v85++] = 0;
        if ( (int)v84 <= (int)v85 )
          goto LABEL_92;
      }
      v87 = *(_DWORD *)(v366 + 4 * v85) + v394;
      if ( v87 < 0 )
        v87 = 0;
      v86 += v87;
      *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v85) = 0;
      v365[v85] = 1;
      v388[v85] = 0;
      *(_BYTE *)(v85 + *((_QWORD *)this + 33)) = *(_BYTE *)(v85 + *((_QWORD *)this + 33)) & 0xF8 | 4;
      v84 = *((int *)this + 27);
      ++v85;
    }
    while ( (int)v84 > (int)v85 );
  }
LABEL_92:
  v392[v84] = v332 - v354;
  CoinPackedMatrix::times((CoinPackedMatrix *)v415, *((const double **)this + 15), *((double **)this + 14));
  if ( *(double *)this < 0.0 )
  {
    v281 = *((_DWORD *)this + 27);
    if ( v281 > 0 )
    {
      v282 = ((unsigned int)v371 >> 3) & 1;
      v283 = 0;
      if ( 2 - (unsigned int)((_DWORD)v282 == 0) > v281 - 1 )
        goto LABEL_246;
      if ( (_DWORD)v282 )
      {
        v283 = 1;
        *dest = -*dest;
      }
      v284 = 0;
      v285 = v281 - v282;
      v286 = (char *)&v371[2 * v328 + 2 * v19 + v282];
      v287 = (unsigned int)(v281 - v282) >> 1;
      v288 = 0;
      do
      {
        ++v284;
        *(double *)&v289 = -*(double *)&v286[v288];
        *((double *)&v289 + 1) = -*(double *)&v286[v288 + 8];
        *(_OWORD *)&v286[v288] = v289;
        v288 += 16;
      }
      while ( v284 < v287 );
      v283 += v285 & 0xFFFFFFFE;
      if ( (v285 & 0xFFFFFFFE) != v285 )
      {
LABEL_246:
        v290 = v283;
        v291 = v283 + 1;
        dest[v290] = -dest[v290];
        if ( v281 > v291 )
          *(_QWORD *)&dest[v291] ^= 0x8000000000000000LL;
      }
    }
  }
  v105 = *((int *)this + 26);
  if ( v105 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v339 = (void *)operator new[](8 * v105);
  if ( v372 > 0 )
  {
    v401 = (int *)&v352[v330 - 8];
    v106 = v401;
    v363 = &v401[-2 * (v372 - 1) - 2];
    while ( 2 )
    {
      switch ( v106[1] )
      {
        case 1:
        case 4:
        case 8:
        case 9:
          sub_14B4E0((__int64)&v403, v401, &v405);
          v265 = SLODWORD(v406);
          v266 = *(double *)(*((_QWORD *)this + 18) + 8LL * SLODWORD(v406));
          v361 = LODWORD(v406);
          v350 = SLODWORD(v406);
          v267 = 8LL * SLODWORD(v406);
          if ( v266 <= -1.0e30 )
            v371[SLODWORD(v406)] = v405.m128i_i64[0];
          else
            *(double *)&v371[SLODWORD(v406)] = v266 - *(double *)v405.m128i_i64;
          v268 = (double *)&v369[v267];
          v269 = *(double *)(*((_QWORD *)this + 19) + 8 * v265);
          if ( v269 >= 1.0e30 )
            *v268 = *(double *)&v405.m128i_i64[1];
          else
            *v268 = v269 - *(double *)&v405.m128i_i64[1];
          if ( SHIDWORD(v406) <= 0 )
          {
            v385 = 0.0;
          }
          else
          {
            v400 = v24;
            v385 = 0.0;
            v358 = (__int64)&v24[HIDWORD(v406) - 1 + 1];
            v380 = src;
            v270 = v24;
            do
            {
              v271 = *v270;
              v272 = *v270;
              v375 = *v380;
              v273 = &v388[v271];
              v274 = &v392[v271];
              v275 = *v273;
              v276 = *v273 + *v274;
              v277 = *v273 + 1;
              v385 = *(double *)(*((_QWORD *)this + 15) + 8 * v271) * *v380 + v385;
              if ( v276 == v392[v387[v271]] )
              {
                sub_14B660(
                  *((_DWORD *)this + 27),
                  v354,
                  v272,
                  v277,
                  v387,
                  (unsigned __int64)v355,
                  v392,
                  v388,
                  v389,
                  v390);
                v277 = *v273 + 1;
                v276 = v275 + *v274;
              }
              *v273 = v277;
              ++v400;
              ++v380;
              *(_DWORD *)(v389 + 4LL * v276) = v361;
              *(double *)(v390 + 8LL * v276) = v375;
              v270 = v400;
            }
            while ( v400 != (int *)v358 );
          }
          *(double *)(*((_QWORD *)this + 14) + 8 * v350) = v385;
          v381[v350] = 0;
          goto LABEL_159;
        case 2:
          v374 = v106[1];
          sub_14B4E0((__int64)&v403, v401, &v405);
          v222 = v414;
          v223 = v412;
          v365[v414] = 0;
          v399 = v413;
          v224 = &v388[v222];
          v225 = v392[v222];
          v379 = &v392[v222];
          v384 = *v224;
          v226 = v374;
          if ( v225 + *v224 == v392[v387[v222]] )
          {
            if ( v223 < 0 || v413 < 0 )
              v226 = 1;
            sub_14B660(
              *((_DWORD *)this + 27),
              v354,
              v222,
              v384 + v226,
              v387,
              (unsigned __int64)v355,
              v392,
              v388,
              v389,
              v390);
            v225 = *v379;
          }
          v227 = v408;
          v228 = v411;
          if ( v223 >= 0 )
          {
            v229 = *((_QWORD *)this + 18);
            v230 = 8LL * v223;
            v231 = *(double *)v405.m128i_i64;
            v381[v223] = 0;
            v232 = *(double *)(v229 + v230);
            v233 = (double *)&v371[(unsigned __int64)v230 / 8];
            if ( v232 <= -1.0e30 )
              *v233 = v231;
            else
              *v233 = v232 - v231;
            v234 = (double *)&v369[v230];
            v235 = *(double *)(*((_QWORD *)this + 19) + 8LL * v223);
            if ( v235 >= 1.0e30 )
              *v234 = *(double *)&v405.m128i_i64[1];
            else
              *v234 = v235 - *(double *)&v405.m128i_i64[1];
            ++*v224;
            v236 = v225 + v384++;
            *(_DWORD *)(v389 + 4LL * v236) = v223;
            *(double *)(v390 + 8LL * v236) = v227;
            *(double *)(*((_QWORD *)this + 14) + 8LL * v223) = *(double *)(*((_QWORD *)this + 15) + 8 * v222) * v227;
            v237 = (_BYTE *)(*((_QWORD *)this + 33) + v223 + *((_DWORD *)this + 27));
            *v237 = *v237 & 0xF8 | 1;
          }
          if ( v399 >= 0 )
          {
            v238 = *((_QWORD *)this + 18);
            v239 = v409;
            v381[v399] = 0;
            v240 = *(double *)(v238 + 8LL * v399);
            v241 = (double *)&v371[v399];
            if ( v240 <= -1.0e30 )
              *v241 = v239;
            else
              *v241 = v240 - v239;
            v242 = (double *)&v369[8 * v399];
            v243 = *(double *)(*((_QWORD *)this + 19) + 8LL * v399);
            if ( v243 >= 1.0e30 )
              *v242 = v410;
            else
              *v242 = v243 - v410;
            ++*v224;
            v244 = v384 + v225;
            *(_DWORD *)(v389 + 4 * v244) = v399;
            *(double *)(v390 + 8 * v244) = v228;
            *(double *)(*((_QWORD *)this + 14) + 8LL * v399) = *(double *)(*((_QWORD *)this + 15) + 8 * v222) * v228;
            v245 = (_BYTE *)(*((_QWORD *)this + 33) + v399 + *((_DWORD *)this + 27));
            *v245 = *v245 & 0xF8 | 1;
          }
          v246 = dest[v222];
          v247 = *v379;
          if ( (int)v247 < (int)v247 + *v224 )
          {
            v248 = v389 + 4 * v247;
            v249 = v390 + 8 * v247;
            v250 = 0;
            do
            {
              v251 = *(double *)(*((_QWORD *)this + 16) + 8LL * *(int *)(v248 + 4 * v250))
                   * *(double *)(v249 + 8 * v250);
              ++v250;
              v246 = v246 - v251;
            }
            while ( (unsigned int)(*v224 - 1) + 1LL != v250 );
          }
          v252 = v406;
          v253 = v407;
          v254 = 0.0;
          if ( v406 != v407 )
            v254 = v246;
          v255 = v254;
          v256 = (_BYTE *)(v222 + *((_QWORD *)this + 33));
          if ( (*v256 & 7) == 1 )
            goto LABEL_206;
          *v256 = *v256 & 0xF8 | 4;
          v257 = *((_QWORD *)this + 33);
          v258 = *(double *)(*((_QWORD *)this + 15) + 8 * v222);
          if ( (*(_BYTE *)(v257 + v222) & 7) != 0 )
          {
            v252 = v406;
            v259 = 0;
            v260 = *((double *)this + 110);
            v261 = v406 + v260;
            if ( v258 > v406 + v260 )
              v259 = v407 - v260 > v258;
          }
          else
          {
            v260 = *((double *)this + 110);
            v297 = fabs(v254);
            v39 = v297 < *((double *)this + 109);
            v208 = v297 == *((double *)this + 109);
            v252 = v406;
            v261 = v406 + v260;
            v259 = !v39 && !v208;
          }
          if ( v261 >= v258 && -*((double *)this + 109) > v255
            || (v253 = v407, v258 >= v407 - v260) && v255 > *((double *)this + 109) )
          {
            if ( v223 < 0 )
              goto LABEL_224;
          }
          else
          {
            if ( !v259 )
              goto LABEL_206;
            if ( v223 < 0 )
            {
LABEL_224:
              if ( v223 >= 0 )
              {
                v262 = 8LL * v223;
LABEL_227:
                v278 = (_BYTE *)(v257 + *((_DWORD *)this + 27) + v223);
                *v278 = *v278 & 0xF8 | 4;
                *(_BYTE *)(v222 + *((_QWORD *)this + 33)) = *(_BYTE *)(v222 + *((_QWORD *)this + 33)) & 0xF8 | 1;
                *(double *)(*((_QWORD *)this + 16) + v262) = v255 / v227;
                v252 = v406;
                v253 = v407;
                goto LABEL_206;
              }
              v263 = 8LL * v399;
              goto LABEL_205;
            }
          }
          if ( v399 < 0 )
            goto LABEL_224;
          v262 = 8LL * v223;
          v263 = 8LL * v399;
          if ( fmin(
                 *(double *)(*((_QWORD *)this + 14) + v262) - *(double *)&v371[(unsigned __int64)v262 / 8],
                 *(double *)&v369[v262] - *(double *)(*((_QWORD *)this + 14) + v262)) <= fmin(
                                                                                           *(double *)(*((_QWORD *)this + 14) + v263)
                                                                                         - *(double *)&v371[(unsigned __int64)v263 / 8],
                                                                                           *(double *)&v369[v263]
                                                                                         - *(double *)(*((_QWORD *)this + 14) + v263)) )
            goto LABEL_227;
LABEL_205:
          v264 = (_BYTE *)(v257 + *((_DWORD *)this + 27) + v399);
          *v264 = *v264 & 0xF8 | 4;
          *(_BYTE *)(v222 + *((_QWORD *)this + 33)) = *(_BYTE *)(v222 + *((_QWORD *)this + 33)) & 0xF8 | 1;
          *(double *)(*((_QWORD *)this + 16) + v263) = v255 / v228;
          v252 = v406;
          v253 = v407;
LABEL_206:
          *(double *)&v368[8 * v222] = v252;
          *(double *)&v367[8 * v222] = v253;
LABEL_159:
          v401 -= 2;
          v106 = v401;
          if ( v363 == v401 )
            break;
          continue;
        case 11:
          sub_14B4E0((__int64)&v403, v401, &v405);
          v200 = SLODWORD(v407);
          v201 = HIDWORD(v407);
          v202 = SLODWORD(v407);
          v203 = (int)v387[v202];
          v365[SLODWORD(v407)] = 0;
          v398 = v201;
          v204 = &v392[v200];
          v205 = *v204;
          if ( v201 + *v204 > v392[v203] )
          {
            sub_14B660(*((_DWORD *)this + 27), v354, v200, v201, v387, (unsigned __int64)v355, v392, v388, v389, v390);
            v205 = *v204;
          }
          v206 = &v388[v202];
          v383 = v205;
          *v206 = v398;
          memcpy((void *)(v389 + 4LL * v205), v24, 4LL * v398);
          memcpy((void *)(v390 + 8 * v383), src, 8LL * v398);
          v207 = v406;
          v208 = v406 == 0.0;
          *(double *)(*((_QWORD *)this + 15) + 8 * v200) = v406;
          v209 = &dest[v200];
          if ( v208 )
          {
            v210 = *v204;
            v211 = *v209;
            for ( i = v210 + *v206; i > (int)v210; v211 = v211 - v213 )
            {
LABEL_167:
              v213 = *(double *)(*((_QWORD *)this + 16) + 8LL * *(int *)(v389 + 4 * v210))
                   * *(double *)(v390 + 8 * v210);
              ++v210;
            }
          }
          else
          {
            v210 = *v204;
            i = v210 + *v206;
            if ( (int)v210 < i )
            {
              v292 = 0;
              do
              {
                v293 = *(double *)(v390 + 8 * v210 + 8 * v292) * v207;
                v294 = 8LL * *(int *)(v389 + 4 * v210 + 4 * v292);
                *(double *)(v294 + *((_QWORD *)this + 14)) = *(double *)(v294 + *((_QWORD *)this + 14)) + v293;
                v295 = *(double *)&v371[(unsigned __int64)v294 / 8];
                if ( v295 > -1.0e30 )
                  *(double *)&v371[(unsigned __int64)v294 / 8] = v295 + v293;
                v296 = (double *)&v369[v294];
                if ( *v296 < 1.0e30 )
                  *v296 = *v296 + v293;
                ++v292;
              }
              while ( (unsigned int)(i - v210 - 1) + 1LL != v292 );
              v211 = *v209;
              goto LABEL_167;
            }
            v211 = *v209;
          }
          v214 = v405.m128i_i64[0];
          v215 = v405.m128i_i64[1];
          v216 = 0.0;
          if ( *(double *)v405.m128i_i64 != *(double *)&v405.m128i_i64[1] )
            v216 = v211;
          v217 = (_BYTE *)(v200 + *((_QWORD *)this + 33));
          if ( (*v217 & 7) != 1 )
          {
            *v217 = *v217 & 0xF8 | 4;
            v218 = (_BYTE *)(v200 + *((_QWORD *)this + 33));
            if ( (*v218 & 7) != 0 )
            {
              v214 = v405.m128i_i64[0];
              v219 = 0;
              v220 = *((double *)this + 110);
              v221 = *(double *)v405.m128i_i64 + v220;
              if ( v207 > *(double *)v405.m128i_i64 + v220 )
                v219 = *(double *)&v405.m128i_i64[1] - v220 > v207;
            }
            else
            {
              v220 = *((double *)this + 110);
              v298 = fabs(v216);
              v39 = v298 < *((double *)this + 109);
              v208 = v298 == *((double *)this + 109);
              v214 = v405.m128i_i64[0];
              v221 = *(double *)v405.m128i_i64 + v220;
              v219 = !v39 && !v208;
            }
            if ( v221 >= v207 && -*((double *)this + 109) > v216
              || (v215 = v405.m128i_i64[1], v207 >= *(double *)&v405.m128i_i64[1] - v220)
              && v216 > *((double *)this + 109)
              || v219 )
            {
              *v218 = *v218 & 0xF8 | 1;
              v214 = v405.m128i_i64[0];
              v215 = v405.m128i_i64[1];
            }
          }
          *(_QWORD *)&v368[8 * v200] = v214;
          *(_QWORD *)&v367[8 * v200] = v215;
          goto LABEL_159;
        case 13:
          sub_14B4E0((__int64)&v403, v401, &v405);
          v186 = SLODWORD(v406);
          v187 = v405.m128i_i64[0];
          v188 = *((_QWORD *)this + 22);
          v365[SLODWORD(v406)] = 0;
          *(_QWORD *)&v368[8 * v186] = v187;
          *(_QWORD *)&v367[8 * v186] = v405.m128i_i64[1];
          v189 = *(double *)(v188 + 8 * v186);
          v190 = *(_DWORD *)(v366 + 4 * v186);
          v191 = *(int *)(v329 + 4 * v186);
          *(double *)(*((_QWORD *)this + 15) + 8 * v186) = v189;
          if ( v190 )
          {
            if ( v189 != 0.0 )
            {
              v192 = v191 + v190;
              if ( (int)v191 < v192 )
              {
                v193 = (unsigned int)(~(_DWORD)v191 + v192);
                v194 = 0;
                v195 = v193 + 1;
                do
                {
                  v196 = *(double *)(v327 + 8 * v191 + 8 * v194) * v189;
                  v197 = 8LL * *(int *)(v326 + 4 * v191 + 4 * v194);
                  *(double *)(v197 + *((_QWORD *)this + 14)) = *(double *)(v197 + *((_QWORD *)this + 14)) + v196;
                  v198 = *(double *)&v371[(unsigned __int64)v197 / 8];
                  if ( v198 > -1.0e20 )
                    *(double *)&v371[(unsigned __int64)v197 / 8] = v198 + v196;
                  v199 = (double *)&v369[v197];
                  if ( *v199 < 1.0e20 )
                    *v199 = v196 + *v199;
                  ++v194;
                }
                while ( v195 != v194 );
              }
            }
          }
          goto LABEL_159;
        case 14:
          sub_14B4E0((__int64)&v403, v401, &v405);
          v110 = SHIDWORD(v411);
          v111 = v412;
          v112 = v409;
          v381[SHIDWORD(v411)] = 0;
          v360 = v110;
          v357 = v112;
          v113 = v413;
          v343 = v110;
          v365[v413] = 0;
          v114 = &v392[v111];
          v115 = v113;
          v373 = v113;
          v116 = v388[v111];
          v348 = &v388[v111];
          v395 = v116;
          v117 = *v114;
          if ( v116 > 0 )
          {
            v118 = v389 + 4 * v117;
            v119 = v390 + 8 * v117;
            v120 = 0;
            do
            {
              v121 = *(int *)(v118 + v120);
              v122 = *(double *)(v119 + 2 * v120);
              v353[v120 / 4] = v121;
              v120 += 4LL;
              v351[v121] = v122;
            }
            while ( 4LL * (unsigned int)(v116 - 1) + 4 != v120 );
            v395 = v116;
          }
          v341 = &v392[v373];
          v123 = *v341;
          v345 = &v388[v373];
          v124 = v414;
          if ( v414 + *v341 > v392[v387[v373]] )
          {
            sub_14B660(*((_DWORD *)this + 27), v354, v115, v414, v387, (unsigned __int64)v355, v392, v388, v389, v390);
            v123 = *v341;
          }
          v377 = v123;
          *v345 = v124;
          memcpy((void *)(v389 + 4LL * v123), v24, 4LL * v124);
          memcpy((void *)(v390 + 8 * v377), src, 8LL * v124);
          if ( v124 <= 0 )
          {
            v378 = 0.0;
            v338 = v410;
            v334 = v410 / 0.0;
            v336 = v112 / 0.0;
          }
          else
          {
            v378 = *src;
            if ( v360 == *v24 )
            {
              v126 = (unsigned int)(v124 - 1);
              v128 = *src;
            }
            else
            {
              v125 = 1;
              v126 = (unsigned int)(v124 - 1);
              do
              {
                if ( v126 + 1 == v125 )
                {
                  v378 = 0.0;
                  v128 = 0.0;
                  goto LABEL_119;
                }
                v127 = v24[v125++];
              }
              while ( v360 != v127 );
              v378 = src[v125 - 1];
              v128 = v378;
            }
LABEL_119:
            v129 = v126 + 1;
            v130 = 0;
            v338 = v410;
            v131 = v410 / v128;
            v132 = v112 / v128;
            v334 = v410 / v128;
            v336 = v132;
            do
            {
              while ( 1 )
              {
                v133 = src[v130];
                v134 = v133 * v131;
                v135 = v24[v130];
                v136 = (double *)&v371[v135];
                v137 = &v351[v135];
                v138 = *v137;
                v139 = v133 * v132 + *v137;
                if ( *v136 > -1.0e30 )
                  *v136 = *v136 + v134;
                v140 = *(double *)&v369[8 * v135];
                if ( v140 < 1.0e30 )
                  *(double *)&v369[8 * v135] = v140 + v134;
                *(double *)(*((_QWORD *)this + 14) + 8 * v135) = v134 + *(double *)(*((_QWORD *)this + 14) + 8 * v135);
                if ( v138 != 0.0 )
                  break;
                ++v130;
                *v137 = v139;
                v353[v395++] = v135;
                if ( v129 == v130 )
                  goto LABEL_129;
              }
              v141 = *(_QWORD *)&v139;
              if ( v139 == 0.0 )
                v141 = 0x2B2BFF2EE48E0530LL;
              ++v130;
              *(_QWORD *)v137 = v141;
            }
            while ( v129 != v130 );
          }
LABEL_129:
          if ( v395 <= 0 )
          {
            v143 = 0;
          }
          else
          {
            v142 = v353;
            v143 = 0;
            do
            {
              v144 = *v142;
              v145 = &v351[v144];
              v146 = *v145;
              *v145 = 0.0;
              if ( fabs(v146) >= 1.0e-13 && v146 != 0.0 )
              {
                v147 = v143++;
                src[v147] = v146;
                v24[v147] = v144;
              }
              ++v142;
            }
            while ( &v353[v395 - 1 + 1] != v142 );
          }
          v148 = *v114;
          if ( (int)v148 + v143 > v392[v387[v111]] )
          {
            sub_14B660(*((_DWORD *)this + 27), v354, v111, v143, v387, (unsigned __int64)v355, v392, v388, v389, v390);
            v148 = *v114;
          }
          v396 = v148;
          *v348 = v143;
          memcpy((void *)(v389 + 4 * v148), v24, 4LL * v143);
          memcpy((void *)(v390 + 8 * v396), src, 8LL * v143);
          v149 = 8 * v111;
          v150 = v408;
          v151 = *((_QWORD *)this + 15);
          v152 = 8 * v373;
          v153 = &dest[v373];
          v154 = &dest[v111];
          *v153 = v408;
          *v154 = v150 * v336 + *v154;
          *(double *)(v151 + 8 * v373) = v334 - v336 * *(double *)(v151 + 8 * v111);
          v155 = *v154;
          v156 = *v114;
          if ( (int)v156 < (int)v156 + *v348 )
          {
            v157 = v389 + 4 * v156;
            v158 = v390 + 8 * v156;
            v159 = 0;
            do
            {
              v160 = *(double *)(*((_QWORD *)this + 16) + 8LL * *(int *)(v157 + 4 * v159))
                   * *(double *)(v158 + 8 * v159);
              ++v159;
              v155 = v155 - v160;
            }
            while ( (unsigned int)(*v348 - 1) + 1LL != v159 );
          }
          v161 = *(double *)v405.m128i_i64;
          v162 = *(double *)&v405.m128i_i64[1];
          v163 = (double *)&v368[v149];
          v164 = (double *)&v367[v149];
          v165 = *v345;
          *v163 = *(double *)v405.m128i_i64;
          v166 = *v341;
          *v164 = v162;
          v167 = *v153;
          if ( (int)v166 < (int)v166 + v165 )
          {
            v168 = v389 + 4 * v166;
            v169 = v390 + 8 * v166;
            v170 = 0;
            do
            {
              v171 = *(double *)(*((_QWORD *)this + 16) + 8LL * *(int *)(v168 + 4 * v170))
                   * *(double *)(v169 + 8 * v170);
              ++v170;
              v167 = v167 - v171;
            }
            while ( (unsigned int)(v165 - 1) + 1LL != v170 );
          }
          v172 = *((_QWORD *)this + 33);
          v173 = v406;
          v174 = v407;
          v175 = (double *)&v368[v152];
          v176 = (double *)&v367[v152];
          *v175 = v406;
          *v176 = v174;
          if ( (*(_BYTE *)(v172 + v111) & 7) == 1 )
          {
            if ( fabs(v155) <= 10.0 * *((double *)this + 109) )
            {
              v315 = *((double *)this + 110);
              v316 = *(double *)(*((_QWORD *)this + 15) + 8 * v373);
              if ( v316 > *v175 + v315 && v174 - v315 > v316 && (*(_BYTE *)(v172 + v373) & 7) != 0 )
              {
                v317 = (_BYTE *)(*((_DWORD *)this + 27) + v360 + v172);
                *v317 = *v317 & 0xF8 | 4;
                *(_BYTE *)(*((_QWORD *)this + 33) + v373) = *(_BYTE *)(*((_QWORD *)this + 33) + v373) & 0xF8 | 1;
                *(double *)(*((_QWORD *)this + 16) + 8 * v343) = v167 / v378;
              }
            }
            else
            {
              v280 = (_BYTE *)(*((_DWORD *)this + 27) + v360 + v172);
              *v280 = *v280 & 0xF8 | 4;
              *(_BYTE *)(*((_QWORD *)this + 33) + v373) = *(_BYTE *)(*((_QWORD *)this + 33) + v373) & 0xF8 | 1;
              *(double *)(*((_QWORD *)this + 16) + 8 * v343) = v167 / v378;
            }
            goto LABEL_234;
          }
          *(_BYTE *)(v172 + v111) = *(_BYTE *)(v172 + v111) & 0xF8 | 4;
          v177 = *v163;
          v349 = *v164;
          v178 = *(double *)(*((_QWORD *)this + 15) + 8 * v111);
          *(_BYTE *)(v373 + *((_QWORD *)this + 33)) = *(_BYTE *)(v373 + *((_QWORD *)this + 33)) & 0xF8 | 4;
          v179.m128d_f64[0] = *(double *)(*((_QWORD *)this + 15) + 8 * v373);
          v397 = *v175;
          v346 = *v176;
          if ( v161 == v162 )
          {
            v181 = *((double *)this + 110);
            v182 = v177 + v181;
          }
          else
          {
            v180 = *((double *)this + 109);
            v181 = *((double *)this + 110);
            v182 = v177 + v181;
            v183 = v155 - 0.0 * v357;
            v184 = -v180;
            if ( -v180 > v183 && v182 >= v178 )
            {
              v183 = -v183;
LABEL_148:
              if ( v173 == v174 )
              {
                if ( v183 <= 0.0 )
                {
                  v299 = 0;
                  v386 = v155 / v357;
                  v183 = 0.0;
                  v300 = v155 / v357;
                  goto LABEL_269;
                }
                goto LABEL_309;
              }
              v185 = v167 - 0.0 * v378;
LABEL_305:
              if ( v184 <= v185 || v397 + v181 < v179.m128d_f64[0] )
              {
                if ( v185 <= v180 || v179.m128d_f64[0] < v346 - v181 )
                {
                  if ( v183 <= 0.0 )
                  {
                    v183 = 0.0;
                    v299 = 0;
                    goto LABEL_311;
                  }
LABEL_309:
                  if ( v183 < 1.797693134862316e308 )
                  {
                    v299 = 0;
                  }
                  else
                  {
                    v183 = 1.797693134862316e308;
                    v299 = -1;
                  }
LABEL_311:
                  v300 = v155 / v357;
                  v386 = v155 / v357;
                  if ( v161 == v162 )
                    goto LABEL_312;
LABEL_269:
                  v301 = v155 - v300 * v357;
                  v302 = v301;
                  if ( -v180 <= v301 || v182 < v178 )
                  {
                    if ( v301 <= v180 || v178 < v349 - v181 )
                    {
LABEL_312:
                      if ( v173 != v174 )
                      {
                        v303 = v167 - v386 * v378;
                        v302 = 0.0;
                        if ( COERCE_DOUBLE(*(_QWORD *)&v180 ^ 0x8000000000000000LL) <= v303 )
                          goto LABEL_314;
                        goto LABEL_274;
                      }
LABEL_336:
                      v305 = 0.0;
LABEL_277:
                      if ( v183 > v305 )
                        v299 = 1;
                      else
                        v305 = v183;
                      v306 = v167 / v378;
                      if ( v161 != v162 )
                      {
                        v307 = v155 - v357 * v306;
                        v308 = *((double *)this + 109);
                        if ( -v308 > v307 && v182 >= v178 )
                        {
                          v307 = -v307;
                          goto LABEL_283;
                        }
                        if ( v307 > v308 && v178 >= v349 - v181 )
                        {
LABEL_283:
                          if ( v173 == v174 )
                            goto LABEL_347;
                          v309 = v167 - v378 * v306;
                          if ( -v308 > v309 )
                            goto LABEL_285;
                          goto LABEL_328;
                        }
                      }
                      v311 = 0.0;
                      if ( v173 == v174 )
                      {
LABEL_288:
                        if ( v305 > v311 )
                          v299 = 2;
                        if ( v178 <= v182 || v349 - v181 <= v178 )
                        {
                          if ( v179.m128d_f64[0] > v397 + v181 && v346 - v181 > v179.m128d_f64[0] )
                          {
                            v313 = *((_QWORD *)this + 33);
                            if ( (*(_BYTE *)(v313 + v373) & 7) != 0 || fabs(v167) > *((double *)this + 109) )
                              goto LABEL_297;
                          }
                        }
                        else
                        {
                          v312 = *((_QWORD *)this + 33);
                          if ( (*(_BYTE *)(v312 + v111) & 7) != 0 || fabs(v155) > *((double *)this + 109) )
                            goto LABEL_323;
                        }
                        if ( v299 != 1 )
                        {
                          if ( v299 != 2 )
                          {
LABEL_234:
                            *(double *)&v371[v343] = v338;
                            *(double *)&v369[8 * v343] = v338;
                            goto LABEL_159;
                          }
                          v313 = *((_QWORD *)this + 33);
LABEL_297:
                          v314 = (_BYTE *)(*((_DWORD *)this + 27) + v360 + v313);
                          *v314 = *v314 & 0xF8 | 4;
                          *(_BYTE *)(*((_QWORD *)this + 33) + v373) = *(_BYTE *)(*((_QWORD *)this + 33) + v373) & 0xF8
                                                                    | 1;
                          *(double *)(*((_QWORD *)this + 16) + 8 * v343) = v306;
                          goto LABEL_234;
                        }
                        v312 = *((_QWORD *)this + 33);
LABEL_323:
                        v320 = (_BYTE *)(*((_DWORD *)this + 27) + v360 + v312);
                        *v320 = *v320 & 0xF8 | 4;
                        *(_BYTE *)(v111 + *((_QWORD *)this + 33)) = *(_BYTE *)(v111 + *((_QWORD *)this + 33)) & 0xF8 | 1;
                        *(double *)(*((_QWORD *)this + 16) + 8 * v343) = v386;
                        goto LABEL_234;
                      }
                      v308 = *((double *)this + 109);
                      v307 = 0.0;
                      v309 = v167 - v378 * v306;
                      if ( -v308 > v309 )
                      {
LABEL_285:
                        if ( v397 + v181 >= v179.m128d_f64[0] )
                        {
                          v310 = -v309;
LABEL_287:
                          v311 = fmax(v307, v310);
                          goto LABEL_288;
                        }
                      }
LABEL_328:
                      if ( v309 > v308 )
                      {
                        v321 = (__m128d)*(unsigned __int64 *)&v346;
                        v321.m128d_f64[0] = v346 - v181;
                        *(_QWORD *)&v310 = *(_QWORD *)&v309 & *(_QWORD *)&_mm_cmple_sd(v321, v179).m128d_f64[0];
                        goto LABEL_287;
                      }
LABEL_347:
                      v310 = 0.0;
                      goto LABEL_287;
                    }
                  }
                  else
                  {
                    *(_QWORD *)&v302 = *(_QWORD *)&v301 ^ 0x8000000000000000LL;
                  }
                  if ( v173 == v174 )
                    goto LABEL_348;
                  v303 = v167 - v386 * v378;
                  if ( -v180 <= v303 )
                  {
LABEL_314:
                    if ( v303 > v180 )
                    {
                      v318 = (__m128d)*(unsigned __int64 *)&v346;
                      v318.m128d_f64[0] = v346 - v181;
                      *(_QWORD *)&v304 = *(_QWORD *)&v303 & *(_QWORD *)&_mm_cmple_sd(v318, v179).m128d_f64[0];
                      goto LABEL_276;
                    }
LABEL_348:
                    v304 = 0.0;
                    goto LABEL_276;
                  }
LABEL_274:
                  if ( v397 + v181 >= v179.m128d_f64[0] )
                  {
                    v304 = -v303;
LABEL_276:
                    v305 = fmax(v302, v304);
                    goto LABEL_277;
                  }
                  goto LABEL_314;
                }
              }
              else
              {
                v185 = -v185;
              }
              v183 = fmax(v183, v185);
              goto LABEL_309;
            }
            if ( v183 > v180 && v178 >= v349 - v181 )
              goto LABEL_148;
          }
          if ( v173 == v174 )
          {
            v299 = 0;
            v386 = v155 / v357;
            v183 = 0.0;
            if ( v161 == v162 )
              goto LABEL_336;
            v180 = *((double *)this + 109);
            v300 = v155 / v357;
            goto LABEL_269;
          }
          v180 = *((double *)this + 109);
          v183 = 0.0;
          v185 = v167 - 0.0 * v378;
          v184 = -v180;
          goto LABEL_305;
        default:
          goto LABEL_159;
      }
      break;
    }
  }
  operator delete[](v381);
  operator delete[](v24);
  operator delete[](v339);
  operator delete(a3);
  if ( v352 )
    operator delete[](v352);
  operator delete[](v371);
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v415);
}

