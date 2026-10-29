__int64 __fastcall ClpSimplexOther::expandKnapsack(
        ClpSimplexOther *this,
        int a2,
        int *a3,
        double *a4,
        int *a5,
        int *a6,
        double *a7,
        int a8)
{
  const CoinPackedMatrix *v9; // rbx
  __int64 v11; // rdi
  __int64 (*v12)(void); // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // r15
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  char *v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rdi
  int v22; // ebx
  __int64 v23; // rdx
  unsigned int v24; // esi
  int v25; // edi
  unsigned int v26; // ecx
  __m128i si128; // xmm1
  __m128i *v28; // rdx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  __m128i v31; // xmm0
  signed int v32; // eax
  int v33; // edx
  int v34; // eax
  __int64 v35; // rsi
  int v36; // eax
  __int64 v37; // r14
  int *v38; // rsi
  int *v39; // r14
  int v40; // ecx
  int v41; // eax
  __int64 v42; // r8
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // r9
  int v47; // r9d
  __int64 v48; // rax
  int v49; // r8d
  __int64 v50; // rdx
  __int64 (*v51)(void); // rax
  const CoinPackedMatrix *v52; // rsi
  __int64 v53; // r11
  __int64 v54; // rbx
  int v55; // eax
  void *v56; // rcx
  __int64 v57; // r12
  double v58; // xmm6_8
  __int64 v59; // rax
  int v60; // r9d
  int v61; // r10d
  double v62; // xmm2_8
  char *v63; // r8
  __int64 v64; // rsi
  double v65; // xmm4_8
  __int64 v66; // rdi
  __int64 v67; // rax
  double v68; // xmm1_8
  double v69; // xmm1_8
  double v70; // xmm0_8
  __int64 v71; // rdx
  double v72; // xmm1_8
  double v73; // xmm1_8
  double v74; // xmm4_8
  double v75; // xmm0_8
  int v76; // eax
  unsigned __int64 v77; // rdi
  unsigned __int64 v78; // rax
  int v79; // esi
  _DWORD *v80; // rbx
  __int64 v81; // rax
  unsigned int v82; // edx
  int v83; // edi
  __m128i v84; // xmm0
  unsigned int v85; // r8d
  __m128i *v86; // rdx
  unsigned int v87; // eax
  signed int v88; // eax
  int v89; // edx
  int v90; // eax
  int v91; // ecx
  int v92; // eax
  __int64 v93; // r10
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // r8
  int v97; // edi
  __int64 v98; // r11
  int v99; // r11d
  __int64 v100; // rdi
  __int64 v101; // rax
  int v102; // ecx
  int *v103; // rdx
  __int64 v104; // r11
  int v105; // eax
  unsigned __int64 v107; // rdi
  unsigned __int64 v108; // rdi
  int *v109; // rbx
  unsigned __int64 v110; // rdi
  unsigned __int64 v111; // rdi
  unsigned __int64 v112; // rdi
  __int64 v113; // rax
  unsigned __int64 v114; // rdi
  __int64 v115; // rax
  unsigned __int64 v116; // rdi
  __int64 v117; // rax
  int v118; // edx
  __int64 v119; // rdi
  __int64 v120; // rsi
  int v121; // ecx
  __int64 v122; // r11
  double v123; // xmm0_8
  double v124; // xmm2_8
  int v125; // r11d
  __int64 v126; // rdx
  double v127; // xmm1_8
  _DWORD *v128; // r8
  double *v129; // r11
  double *v130; // rdx
  int v131; // r9d
  double v132; // xmm2_8
  int v133; // r11d
  int v134; // edx
  __int64 v135; // rcx
  unsigned int v136; // edi
  int v137; // r8d
  unsigned int v138; // esi
  __m128i v139; // xmm1
  __m128i *v140; // rcx
  unsigned int v141; // esi
  unsigned int v142; // eax
  __m128i v143; // xmm0
  signed int v144; // eax
  int v145; // ecx
  int v146; // eax
  __int64 (*v147)(void); // rax
  _QWORD *v148; // rax
  __int64 v149; // rax
  int v150; // edx
  _QWORD *v151; // r14
  double v152; // xmm6_8
  double v153; // xmm4_8
  double v154; // xmm5_8
  double v155; // xmm3_8
  double v156; // xmm3_8
  int v157; // r10d
  __int64 v158; // rax
  __int64 v159; // rdx
  int v160; // ecx
  int v161; // edx
  int v162; // eax
  __int64 v163; // rdx
  double v164; // xmm11_8
  int v165; // r8d
  double v166; // xmm2_8
  int v167; // edi
  int v168; // r9d
  __int64 v169; // rax
  __int64 v170; // r11
  __int64 v171; // r10
  double v172; // xmm0_8
  int v173; // ecx
  double v174; // xmm1_8
  __int64 v175; // rsi
  double *v176; // rcx
  __int64 v177; // rdi
  double v178; // xmm0_8
  __int64 v179; // rax
  double v180; // xmm0_8
  int *v181; // rcx
  int *v182; // rax
  __int64 v183; // rdx
  double v184; // xmm0_8
  __int64 v185; // rax
  __int64 v186; // rdx
  _QWORD *v187; // rax
  __int64 v188; // rcx
  _QWORD *v189; // rax
  __int64 v190; // rdx
  int *v191; // rsi
  int v193; // esi
  _QWORD *v194; // rax
  __int64 v195; // rcx
  _QWORD *v196; // rax
  __int64 v197; // rdx
  signed int v198; // r9d
  __int64 v199; // rdx
  int v200; // esi
  double v201; // xmm0_8
  __int64 v202; // rdx
  int v203; // esi
  _QWORD *v204; // rax
  _QWORD *v205; // rax
  unsigned __int64 v206; // rcx
  signed int v207; // r8d
  size_t v208; // rdx
  double v209; // xmm0_8
  __int64 v210; // rax
  unsigned int v211; // r9d
  int *v212; // rax
  __int64 v213; // rcx
  _QWORD *v217; // [rsp+28h] [rbp-FA8h]
  char v218; // [rsp+33h] [rbp-F9Dh]
  int v219; // [rsp+34h] [rbp-F9Ch]
  __int64 v220; // [rsp+40h] [rbp-F90h]
  __int64 v221; // [rsp+48h] [rbp-F88h]
  int v222; // [rsp+50h] [rbp-F80h]
  unsigned int v223; // [rsp+54h] [rbp-F7Ch]
  double *v224; // [rsp+58h] [rbp-F78h]
  double *v225; // [rsp+60h] [rbp-F70h]
  _DWORD *v226; // [rsp+68h] [rbp-F68h]
  int v227; // [rsp+78h] [rbp-F58h]
  char *v228; // [rsp+80h] [rbp-F50h]
  __int64 v229; // [rsp+88h] [rbp-F48h]
  double v230; // [rsp+88h] [rbp-F48h]
  double v231; // [rsp+88h] [rbp-F48h]
  __int64 v232; // [rsp+90h] [rbp-F40h]
  double v233; // [rsp+90h] [rbp-F40h]
  double v234; // [rsp+90h] [rbp-F40h]
  __int64 v236; // [rsp+A0h] [rbp-F30h]
  __int64 v237; // [rsp+A0h] [rbp-F30h]
  __int64 v238; // [rsp+A8h] [rbp-F28h]
  __int64 v239; // [rsp+A8h] [rbp-F28h]
  ClpSimplex *v240; // [rsp+B0h] [rbp-F20h]
  unsigned __int64 v241; // [rsp+B8h] [rbp-F18h]
  CoinPackedMatrix *v242; // [rsp+C0h] [rbp-F10h]
  __int64 v243; // [rsp+C8h] [rbp-F08h]
  double v244; // [rsp+C8h] [rbp-F08h]
  int v245; // [rsp+C8h] [rbp-F08h]
  char *v246; // [rsp+D0h] [rbp-F00h]
  double *v247; // [rsp+D0h] [rbp-F00h]
  char *v248; // [rsp+D8h] [rbp-EF8h]
  double *v249; // [rsp+D8h] [rbp-EF8h]
  int *v250; // [rsp+E0h] [rbp-EF0h]
  int v251; // [rsp+E0h] [rbp-EF0h]
  char *v252; // [rsp+E8h] [rbp-EE8h]
  int *v253; // [rsp+E8h] [rbp-EE8h]
  void *s; // [rsp+F0h] [rbp-EE0h]
  int *sa; // [rsp+F0h] [rbp-EE0h]
  int v256; // [rsp+F8h] [rbp-ED8h]
  __int64 v257; // [rsp+F8h] [rbp-ED8h]
  _BYTE v258[32]; // [rsp+100h] [rbp-ED0h] BYREF
  __int64 v259; // [rsp+120h] [rbp-EB0h]
  __int64 v260; // [rsp+128h] [rbp-EA8h]
  __int64 v261; // [rsp+130h] [rbp-EA0h]
  __int64 v262; // [rsp+138h] [rbp-E98h]
  _BYTE v263[32]; // [rsp+160h] [rbp-E70h] BYREF
  char *v264; // [rsp+180h] [rbp-E50h]
  __int64 v265; // [rsp+188h] [rbp-E48h]
  char *v266; // [rsp+190h] [rbp-E40h]
  char *v267; // [rsp+198h] [rbp-E38h]
  _BYTE v268[1776]; // [rsp+1C0h] [rbp-E10h] BYREF
  _BYTE v269[112]; // [rsp+8B0h] [rbp-720h] BYREF
  _QWORD *v270; // [rsp+920h] [rbp-6B0h]
  __int64 (__fastcall ***v271)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // [rsp+950h] [rbp-680h]
  __int64 v272; // [rsp+960h] [rbp-670h]
  __int64 v273; // [rsp+968h] [rbp-668h]
  __int64 v274; // [rsp+970h] [rbp-660h]

  v9 = nullptr;
  v11 = *((_QWORD *)this + 24);
  if ( v11 )
  {
    v12 = **(__int64 (***)(void))v11;
    if ( (char *)v12 == (char *)ClpPackedMatrix::getPackedMatrix )
      v9 = *(const CoinPackedMatrix **)(v11 + 88);
    else
      v9 = (const CoinPackedMatrix *)v12();
  }
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v258);
  CoinPackedMatrix::reverseOrderedCopyOf((CoinPackedMatrix *)v258, v9);
  v13 = *((int *)this + 27);
  v14 = v259;
  v238 = v260;
  v236 = v261;
  v232 = v262;
  if ( v13 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v15 = operator new[](4 * v13);
  v16 = *((int *)this + 26);
  v17 = (char *)v15;
  if ( v16 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v18 = operator new[](4 * v16);
  v19 = *((int *)this + 26);
  v241 = v18;
  if ( v19 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v20 = operator new[](8 * v19);
  v21 = *((int *)this + 26);
  v224 = (double *)v20;
  if ( v21 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v225 = (double *)operator new[](8 * v21);
  ClpSimplex::ClpSimplex((ClpSimplex *)v268, this, -1);
  ClpSimplex::tightenPrimalBounds((ClpSimplex *)v268, 0.0, 0, 1);
  v22 = *((_DWORD *)this + 26);
  if ( v22 > 0 )
  {
    v23 = -(int)(v241 >> 2) & 3;
    if ( (unsigned int)(v22 - 1) <= 5 )
    {
      v32 = 0;
LABEL_17:
      *(_DWORD *)(v241 + 4LL * v32) = v32;
      if ( v22 > v32 + 1 )
      {
        *(_DWORD *)(v241 + 4LL * (v32 + 1)) = v32 + 1;
        if ( v22 > v32 + 2 )
        {
          *(_DWORD *)(v241 + 4LL * (v32 + 2)) = v32 + 2;
          if ( v22 > v32 + 3 )
          {
            *(_DWORD *)(v241 + 4LL * (v32 + 3)) = v32 + 3;
            v33 = v32 + 4;
            if ( v22 > v32 + 4 )
            {
              v34 = v32 + 5;
              *(_DWORD *)(v241 + 4LL * v33) = v33;
              if ( v22 > v34 )
                *(_DWORD *)(v241 + 4LL * v34) = v34;
            }
          }
        }
      }
      goto LABEL_23;
    }
    v24 = 0;
    if ( (_DWORD)v23 )
    {
      *(_DWORD *)v241 = 0;
      v24 = 1;
      if ( (_DWORD)v23 != 1 )
      {
        *(_DWORD *)(v241 + 4) = 1;
        v24 = 2;
        if ( (_DWORD)v23 != 2 )
        {
          *(_DWORD *)(v241 + 8) = 2;
          v24 = 3;
        }
      }
    }
    v25 = v22 - v23;
    v26 = v22 - v23;
    si128 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
    v28 = (__m128i *)(v241 + 4 * v23);
    v29 = v26 >> 2;
    v30 = 0;
    v31 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v24), 0), (__m128i)xmmword_289BB0);
    do
    {
      ++v30;
      ++v28;
      v28[-1] = v31;
      v31 = _mm_add_epi32(v31, si128);
    }
    while ( v30 < v29 );
    v32 = (v25 & 0xFFFFFFFC) + v24;
    if ( (v25 & 0xFFFFFFFC) != v25 )
      goto LABEL_17;
  }
LABEL_23:
  v35 = a2;
  v36 = *((_DWORD *)this + 27);
  v37 = 4LL * a2;
  v229 = v35;
  v38 = (int *)(v236 + v37);
  v39 = (int *)(v232 + v37);
  v256 = v36;
  v250 = v38;
  if ( v36 <= 0 )
  {
    v41 = *v38;
    v40 = *v39;
    if ( *v38 >= *v38 + *v39 )
      goto LABEL_277;
  }
  else
  {
    memset(v17, 255, 4LL * (unsigned int)(v36 - 1) + 4);
    v40 = *v39;
    v41 = *v38;
    if ( *v38 + *v39 <= *v38 )
    {
LABEL_29:
      v48 = 0;
      v49 = 0;
      do
      {
        if ( *(int *)&v17[4 * v48] < 0 )
        {
          v50 = v49++;
          *(_DWORD *)&v17[4 * v50] = v48;
        }
        ++v48;
      }
      while ( v256 > (int)v48 );
      goto LABEL_33;
    }
  }
  v42 = *((_QWORD *)this + 23);
  v43 = *((_QWORD *)this + 22);
  v44 = v41 + 1;
  v45 = v238 + 4 * (v41 - v44);
  do
  {
    while ( 1 )
    {
      v46 = *(int *)(v45 + 4 * v44);
      if ( *(double *)(v42 + 8 * v46) <= *(double *)(v43 + 8 * v46) )
        break;
      *(_DWORD *)&v17[4 * v46] = 0;
      v47 = v44;
      v40 = *v39;
      ++v44;
      v41 = *v250;
      if ( *v250 + *v39 <= v47 )
        goto LABEL_28;
    }
    v131 = v44++;
  }
  while ( v41 + v40 > v131 );
LABEL_28:
  if ( v256 > 0 )
    goto LABEL_29;
LABEL_277:
  v49 = 0;
LABEL_33:
  ClpSimplex::ClpSimplex(
    (ClpSimplex *)v269,
    (const ClpSimplex *)v268,
    v22,
    (const int *)v241,
    v49,
    (const int *)v17,
    0,
    0,
    0);
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v263);
  if ( v274 )
  {
    v51 = **(__int64 (***)(void))v274;
    if ( (char *)v51 == (char *)ClpPackedMatrix::getPackedMatrix )
      v52 = *(const CoinPackedMatrix **)(v274 + 88);
    else
      v52 = (const CoinPackedMatrix *)v51();
  }
  else
  {
    v52 = nullptr;
  }
  CoinPackedMatrix::reverseOrderedCopyOf((CoinPackedMatrix *)v263, v52);
  v53 = v272;
  v54 = v273;
  v246 = v264;
  v243 = v265;
  v252 = v266;
  v248 = v267;
  v55 = *((_DWORD *)this + 26);
  if ( v55 <= 0 )
    goto LABEL_60;
  v228 = v17;
  v56 = nullptr;
  s = (void *)(4LL * (unsigned int)(v55 - 1) + 4);
  v57 = *((_QWORD *)this + 18);
  while ( 1 )
  {
LABEL_40:
    *(double *)((char *)v224 + 2 * (_QWORD)v56) = -1.797693134862316e308;
    *(double *)((char *)v225 + 2 * (_QWORD)v56) = 1.797693134862316e308;
    v257 = 2LL * (_QWORD)v56;
    v58 = *(double *)(v57 + 2LL * (_QWORD)v56);
    if ( v58 <= -1.0e20 && *(double *)(*((_QWORD *)this + 19) + 2LL * (_QWORD)v56) >= 1.0e20 )
      goto LABEL_39;
    v59 = *(int *)((char *)v56 + (_QWORD)v252);
    if ( (int)v59 < (int)v59 + *(_DWORD *)((char *)v56 + (_QWORD)v248) )
      break;
    if ( v58 == -1.797693134862316e308 )
    {
      v74 = -0.0000001;
    }
    else
    {
      v74 = -0.0000001;
      v132 = 0.0000001;
LABEL_126:
      *(double *)((char *)v224 + 2 * (_QWORD)v56) = v58 - v132;
LABEL_56:
      if ( v74 == -1.797693134862316e308 )
        goto LABEL_39;
    }
    v75 = *(double *)(*((_QWORD *)this + 19) + v257);
    if ( v75 == 1.797693134862316e308 )
      goto LABEL_39;
    *(double *)((char *)v225 + 2 * (_QWORD)v56) = v75 - v74;
    v56 = (char *)v56 + 4;
    if ( s == v56 )
      goto LABEL_59;
  }
  v60 = 0;
  v61 = 0;
  v62 = 0.0;
  v63 = &v246[8 * v59];
  v64 = (unsigned int)(*(_DWORD *)((char *)v56 + (_QWORD)v248) - 1) + 1LL;
  v65 = 0.0;
  v257 = 2LL * (_QWORD)v56;
  v66 = v243 + 4 * v59;
  v67 = 0;
  do
  {
    while ( 1 )
    {
      v70 = *(double *)&v63[8 * v67];
      v71 = *(int *)(v66 + 4 * v67);
      if ( v70 > 0.0 )
      {
        v68 = *(double *)(v54 + 8 * v71);
        if ( v68 < 1.0e20 )
          v62 = v62 + v68 * v70;
        else
          ++v61;
        v69 = *(double *)(v53 + 8 * v71);
        if ( v69 > -1.0e20 )
          v65 = v65 + v70 * v69;
        else
          ++v60;
        goto LABEL_47;
      }
      if ( v70 < 0.0 )
        break;
LABEL_47:
      if ( v64 == ++v67 )
        goto LABEL_54;
    }
    v72 = *(double *)(v54 + 8 * v71);
    if ( v72 < 1.0e20 )
      v65 = v65 + v72 * v70;
    else
      ++v60;
    v73 = *(double *)(v53 + 8 * v71);
    if ( v73 > -1.0e20 )
    {
      v62 = v62 + v70 * v73;
      goto LABEL_47;
    }
    ++v67;
    ++v61;
  }
  while ( v64 != v67 );
LABEL_54:
  v74 = v65 - (fabs(v65) * 0.00000001 + 0.0000001);
  if ( !v61 )
  {
    v132 = v62 + fabs(v62) * 0.00000001 + 0.0000001;
    if ( v60 )
    {
      if ( v132 == 1.797693134862316e308 || v58 == -1.797693134862316e308 )
        goto LABEL_39;
      v74 = -1.797693134862316e308;
    }
    else if ( v132 == 1.797693134862316e308 || v58 == -1.797693134862316e308 )
    {
      goto LABEL_56;
    }
    goto LABEL_126;
  }
  if ( !v60 )
    goto LABEL_56;
LABEL_39:
  v56 = (char *)v56 + 4;
  if ( s != v56 )
    goto LABEL_40;
LABEL_59:
  v17 = v228;
LABEL_60:
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v263);
  ClpSimplex::~ClpSimplex((ClpSimplex *)v269);
  ClpSimplex::~ClpSimplex((ClpSimplex *)v268);
  v76 = *((_DWORD *)this + 27);
  if ( v76 > 0 )
    memset(v17, 255, 4LL * (unsigned int)(v76 - 1) + 4);
  v77 = *((int *)this + 26);
  if ( v77 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v78 = operator new[](4 * v77);
  v79 = *((_DWORD *)this + 26);
  v226 = (_DWORD *)v78;
  if ( v79 > 0 )
  {
    v80 = (_DWORD *)v78;
    v81 = -(int)(v78 >> 2) & 3;
    v82 = v81 + 3;
    if ( (unsigned int)(v81 + 3) < 5 )
      v82 = 5;
    if ( v82 > v79 - 1 )
    {
      v88 = 0;
      goto LABEL_74;
    }
    v83 = 0;
    if ( (_DWORD)v81 )
    {
      *v80 = 1;
      v83 = 1;
      if ( (_DWORD)v81 != 1 )
      {
        v80[1] = 1;
        v83 = 2;
        if ( (_DWORD)v81 != 2 )
        {
          v80[2] = 1;
          v83 = 3;
        }
      }
    }
    v84 = _mm_load_si128((const __m128i *)&xmmword_289C00);
    v85 = v79 - v81;
    v86 = (__m128i *)&v80[v81];
    v87 = 0;
    do
    {
      ++v87;
      ++v86;
      v86[-1] = v84;
    }
    while ( v87 < v85 >> 2 );
    v88 = (v85 & 0xFFFFFFFC) + v83;
    if ( (v85 & 0xFFFFFFFC) != v85 )
    {
LABEL_74:
      v226[v88] = 1;
      if ( v79 > v88 + 1 )
      {
        v226[v88 + 1] = 1;
        if ( v79 > v88 + 2 )
        {
          v226[v88 + 2] = 1;
          if ( v79 > v88 + 3 )
          {
            v226[v88 + 3] = 1;
            v89 = v88 + 4;
            if ( v79 > v88 + 4 )
            {
              v90 = v88 + 5;
              v226[v89] = 1;
              if ( v79 > v90 )
                v226[v90] = 1;
            }
          }
        }
      }
    }
    v91 = *v39;
    v92 = *v250;
    if ( *v250 < *v250 + *v39 )
    {
LABEL_81:
      v93 = *((_QWORD *)this + 23);
      v94 = *((_QWORD *)this + 22);
      v95 = v92 + 1;
      v96 = v238 + 4 * (v92 - v95);
      v97 = 0;
      do
      {
        while ( 1 )
        {
          v98 = *(int *)(v96 + 4 * v95);
          if ( *(double *)(v93 + 8 * v98) <= *(double *)(v94 + 8 * v98) )
            break;
          *(_DWORD *)&v17[4 * v98] = v97;
          v99 = v95;
          v91 = *v39;
          ++v97;
          ++v95;
          v92 = *v250;
          if ( *v39 + *v250 <= v99 )
            goto LABEL_84;
        }
        v133 = v95++;
      }
      while ( v92 + v91 > v133 );
LABEL_84:
      if ( v79 <= 0 )
        goto LABEL_99;
    }
    v100 = 0;
LABEL_86:
    while ( 1 )
    {
      v101 = *(int *)(v236 + 4 * v100);
      v102 = *(_DWORD *)(v232 + 4 * v100);
      if ( (int)v101 < (int)v101 + v102 )
        break;
      v226[v100++] = 1;
      if ( v79 <= (int)v100 )
        goto LABEL_99;
    }
    v103 = (int *)(v238 + 4 * v101);
    v104 = v238 + 4 + 4 * ((unsigned int)(v102 - 1) + v101);
    v105 = 1;
    while ( 2 )
    {
      while ( *(int *)&v17[4 * *v103] < 0 )
      {
        if ( v105 == 1 )
        {
          v105 = 1001;
          goto LABEL_91;
        }
        if ( v105 < 0 )
        {
          --v105;
          goto LABEL_91;
        }
        if ( v105++ == 0 )
          v105 = -1;
        if ( (int *)v104 == ++v103 )
        {
LABEL_98:
          v226[v100++] = v105;
          if ( v79 <= (int)v100 )
            goto LABEL_99;
          goto LABEL_86;
        }
      }
      if ( v105 == 1 )
      {
        v105 = 0;
      }
      else if ( v105 > 0 )
      {
        v105 = 1000 - v105;
      }
LABEL_91:
      if ( (int *)v104 == ++v103 )
        goto LABEL_98;
      continue;
    }
  }
  v91 = *v39;
  v92 = *v250;
  if ( *v250 < *v250 + *v39 )
    goto LABEL_81;
LABEL_99:
  v107 = *((_DWORD *)this + 27) + 1;
  if ( v107 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  sa = (int *)operator new[](4 * v107);
  v108 = *((_DWORD *)this + 27) + 1;
  if ( v108 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v109 = (int *)operator new[](4 * v108);
  v110 = *((_DWORD *)this + 27) + 1;
  if ( v110 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v242 = (CoinPackedMatrix *)operator new[](4 * v110);
  v111 = *((_DWORD *)this + 27) + 1;
  if ( v111 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v249 = (double *)operator new[](8 * v111);
  v112 = *((_DWORD *)this + 27) + 1;
  if ( v112 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v113 = operator new[](8 * v112);
  v114 = *((int *)this + 26);
  v247 = (double *)v113;
  if ( v114 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v115 = operator new[](8 * v114);
  v116 = *((int *)this + 27);
  v217 = (_QWORD *)v115;
  if ( v116 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v253 = (int *)operator new[](4 * v116);
  v222 = *a3;
  v233 = *(double *)(*((_QWORD *)this + 18) + 8 * v229);
  v230 = *(double *)(*((_QWORD *)this + 19) + 8 * v229);
  v117 = *v250;
  v118 = v117 + *v39;
  if ( (int)v117 >= v118 )
  {
    v251 = 0;
    v244 = 0.0;
  }
  else
  {
    v119 = *((_QWORD *)this + 22);
    v120 = *((_QWORD *)this + 23);
    v121 = 0;
    v244 = 0.0;
    do
    {
      v122 = *(int *)(v238 + 4 * v117);
      v123 = *(double *)(v119 + 8 * v122);
      v124 = *(double *)(v120 + 8 * v122);
      if ( v123 != v124 )
      {
        v125 = 100000000;
        if ( v124 - v123 <= 100000000.0 )
          v125 = (int)(v124 - v123);
        v126 = v121;
        v127 = *(double *)(v14 + 8 * v117);
        *(_DWORD *)&v17[4 * v121++] = *(_DWORD *)(v238 + 4 * v117);
        sa[v126] = v125;
        v128 = (_DWORD *)((char *)v242 + 4 * v126);
        v126 *= 8;
        v129 = (double *)((char *)v249 + v126);
        v130 = (double *)((char *)v247 + v126);
        if ( v127 > 0.0 )
        {
          *v129 = v123;
          *v128 = 1;
          *v130 = *(double *)(v14 + 8 * v117);
        }
        else
        {
          *v129 = v124;
          *v128 = -1;
          *v130 = -*(double *)(v14 + 8 * v117);
          v123 = v124;
        }
        v118 = *v250 + *v39;
        v244 = v123 * *(double *)(v14 + 8 * v117) + v244;
      }
      ++v117;
    }
    while ( v118 > (int)v117 );
    v251 = v121;
  }
  v134 = *((_DWORD *)this + 26);
  if ( v134 > 0 )
  {
    v135 = -(int)(v241 >> 2) & 3;
    if ( (unsigned int)(v134 - 1) <= 5 )
    {
      v144 = 0;
      goto LABEL_144;
    }
    v136 = 0;
    if ( (_DWORD)v135 )
    {
      *(_DWORD *)v241 = 0;
      v136 = 1;
      if ( (_DWORD)v135 != 1 )
      {
        *(_DWORD *)(v241 + 4) = 1;
        v136 = 2;
        if ( (_DWORD)v135 != 2 )
        {
          *(_DWORD *)(v241 + 8) = 2;
          v136 = 3;
        }
      }
    }
    v137 = v134 - v135;
    v138 = v134 - v135;
    v139 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
    v140 = (__m128i *)(v241 + 4 * v135);
    v141 = v138 >> 2;
    v142 = 0;
    v143 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v136), 0), (__m128i)xmmword_289BB0);
    do
    {
      ++v142;
      ++v140;
      v140[-1] = v143;
      v143 = _mm_add_epi32(v143, v139);
    }
    while ( v142 < v141 );
    v144 = (v137 & 0xFFFFFFFC) + v136;
    if ( (v137 & 0xFFFFFFFC) != v137 )
    {
LABEL_144:
      *(_DWORD *)(v241 + 4LL * v144) = v144;
      if ( v134 > v144 + 1 )
      {
        *(_DWORD *)(v241 + 4LL * (v144 + 1)) = v144 + 1;
        if ( v134 > v144 + 2 )
        {
          *(_DWORD *)(v241 + 4LL * (v144 + 2)) = v144 + 2;
          if ( v144 + 3 < v134 )
          {
            *(_DWORD *)(v241 + 4LL * (v144 + 3)) = v144 + 3;
            v145 = v144 + 4;
            if ( v134 > v144 + 4 )
            {
              v146 = v144 + 5;
              *(_DWORD *)(v241 + 4LL * v145) = v145;
              if ( v146 < v134 )
                *(_DWORD *)(v241 + 4LL * v146) = v146;
            }
          }
        }
      }
    }
  }
  ClpSimplex::ClpSimplex((ClpSimplex *)v269, this, v134, (const int *)v241, v251, (const int *)v17, 1, 1, 1);
  if ( !v274 )
    BUG();
  v147 = **(__int64 (***)(void))v274;
  if ( (char *)v147 == (char *)ClpPackedMatrix::getPackedMatrix )
    v148 = *(_QWORD **)(v274 + 88);
  else
    v148 = (_QWORD *)v147();
  v239 = v148[4];
  v237 = v148[5];
  v221 = v148[6];
  v220 = v148[7];
  if ( v271 )
  {
    v149 = (**v271)(v271, 0, 0, v268, 0, 2);
    v150 = *((_DWORD *)this + 26);
    v240 = (ClpSimplex *)v149;
    v151 = v270;
    if ( !v150 )
      goto LABEL_155;
LABEL_222:
    v193 = v150 / 8;
    if ( v150 / 8 > 0 )
    {
      v194 = v217;
      v195 = (unsigned int)(v193 - 1);
      do
      {
        *v194 = 0;
        v194[1] = 0;
        v194 += 8;
        *(v194 - 6) = 0;
        *(v194 - 5) = 0;
        *(v194 - 4) = 0;
        *(v194 - 3) = 0;
        *(v194 - 2) = 0;
        *(v194 - 1) = 0;
      }
      while ( v194 != &v217[8 * v195 + 8] );
      v196 = &v217[8 * (int)v195 + 8];
      v197 = (unsigned int)(v150 % 8);
      switch ( (int)v197 )
      {
        case 1:
          goto LABEL_240;
        case 2:
          goto LABEL_254;
        case 3:
          goto LABEL_256;
        case 4:
          goto LABEL_268;
        case 5:
          goto LABEL_271;
        case 6:
          goto LABEL_273;
        case 7:
          goto LABEL_289;
        default:
          goto LABEL_242;
      }
    }
    v197 = (unsigned int)(v150 % 8);
    switch ( (int)v197 )
    {
      case 1:
        v196 = v217;
        goto LABEL_240;
      case 2:
        v196 = v217;
LABEL_254:
        v196[1] = 0;
        goto LABEL_240;
      case 3:
        v196 = v217;
LABEL_256:
        v196[2] = 0;
        goto LABEL_257;
      case 4:
        v196 = v217;
LABEL_268:
        v196[3] = 0;
        goto LABEL_269;
      case 5:
        v196 = v217;
        goto LABEL_271;
      case 6:
        v196 = v217;
        goto LABEL_273;
      case 7:
        v196 = v217;
LABEL_289:
        v196[6] = 0;
        v197 = 7;
LABEL_273:
        v196[5] = 0;
LABEL_271:
        v196[4] = 0;
        v196[3] = 0;
LABEL_269:
        v196[2] = 0;
LABEL_257:
        v196[1] = 0;
LABEL_240:
        *v196 = 0;
        if ( v193 <= 0 )
        {
          v205 = v151;
        }
        else
        {
          LODWORD(v195) = v193 - 1;
LABEL_242:
          v204 = v151;
          do
          {
            *v204 = 0;
            v204[1] = 0;
            v204 += 8;
            *(v204 - 6) = 0;
            *(v204 - 5) = 0;
            *(v204 - 4) = 0;
            *(v204 - 3) = 0;
            *(v204 - 2) = 0;
            *(v204 - 1) = 0;
          }
          while ( v204 != &v151[8 * (unsigned int)v195 + 8] );
          v205 = &v151[8 * (unsigned int)v195 + 8];
        }
        switch ( v197 )
        {
          case 1LL:
            goto LABEL_252;
          case 2LL:
            goto LABEL_251;
          case 3LL:
            goto LABEL_250;
          case 4LL:
            goto LABEL_249;
          case 5LL:
            goto LABEL_248;
          case 6LL:
            goto LABEL_247;
          case 7LL:
            v205[6] = 0;
LABEL_247:
            v205[5] = 0;
LABEL_248:
            v205[4] = 0;
LABEL_249:
            v205[3] = 0;
LABEL_250:
            v205[2] = 0;
LABEL_251:
            v205[1] = 0;
LABEL_252:
            *v205 = 0;
            break;
          default:
            goto LABEL_155;
        }
        break;
      default:
        break;
    }
  }
  else
  {
    v150 = *((_DWORD *)this + 26);
    v240 = nullptr;
    v151 = v270;
    if ( v150 )
      goto LABEL_222;
  }
LABEL_155:
  v152 = v244;
  v245 = -1;
  v153 = v230 - v152;
  v154 = v233 - v152;
  if ( v251 )
  {
    v231 = v233 - v152;
    v245 = v251 - 1;
    v234 = v153;
    memset(v109, 0, 4LL * (unsigned int)(v251 - 1) + 4);
    v154 = v231;
    v153 = v234;
  }
  v218 = 0;
  v109[v251] = 1;
  sa[v251] = 0;
  v109[v251 - 1] = -1;
  v155 = 10.0 * v153 + 10000.0;
  v247[v251] = v155;
  v156 = v155 - v247[v251 - 1];
  *a3 = 0;
  if ( a4 )
  {
    v219 = 2;
    if ( a8 < 0 )
    {
      v218 = 1;
      v219 = 1;
      *a5 = 0;
    }
  }
  else
  {
    v219 = ~(unsigned __int8)(a8 >> 31) & 2;
  }
  v157 = v251;
  v223 = 0;
LABEL_161:
  if ( v156 >= v154 && v153 >= v156 )
    goto LABEL_168;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        do
        {
          v158 = v157;
          v159 = v157;
          v160 = v109[v159];
          if ( v156 > v153 || sa[v157] < v160 )
          {
            --v157;
            v109[v159] = 0;
            v178 = v247[v158];
            if ( v157 == -1 )
              goto LABEL_218;
            ++v109[v159 - 1];
            v156 = v156 - v178 * (double)v160 + v247[v158 - 1];
            goto LABEL_161;
          }
          v156 = v156 + v247[v245];
          ++v109[v245];
          if ( v245 == -1 )
            goto LABEL_218;
          v157 = v245;
        }
        while ( v156 < v154 || v153 < v156 );
LABEL_168:
        v161 = *((_DWORD *)this + 26);
        if ( v161 )
        {
          if ( v161 / 8 <= 0 )
          {
            v189 = v151;
          }
          else
          {
            v187 = v151;
            v188 = (unsigned int)(v161 / 8 - 1);
            do
            {
              *v187 = 0;
              v187[1] = 0;
              v187 += 8;
              *(v187 - 6) = 0;
              *(v187 - 5) = 0;
              *(v187 - 4) = 0;
              *(v187 - 3) = 0;
              *(v187 - 2) = 0;
              *(v187 - 1) = 0;
            }
            while ( v187 != &v151[8 * v188 + 8] );
            v189 = &v151[8 * (int)v188 + 8];
          }
          switch ( v161 % 8 )
          {
            case 1:
              goto LABEL_210;
            case 2:
              goto LABEL_209;
            case 3:
              goto LABEL_208;
            case 4:
              goto LABEL_207;
            case 5:
              goto LABEL_206;
            case 6:
              goto LABEL_205;
            case 7:
              v189[6] = 0;
LABEL_205:
              v189[5] = 0;
LABEL_206:
              v189[4] = 0;
LABEL_207:
              v189[3] = 0;
LABEL_208:
              v189[2] = 0;
LABEL_209:
              v189[1] = 0;
LABEL_210:
              *v189 = 0;
              if ( !v251 )
                goto LABEL_211;
              goto LABEL_170;
            default:
              break;
          }
        }
        if ( !v251 )
        {
LABEL_211:
          v190 = *a3;
          if ( v219 == 1 )
          {
            v164 = 0.0;
LABEL_285:
            v165 = 0;
            v203 = v223;
            a4[v190] = v164;
LABEL_233:
            a5[v190 + 1] = v203;
            LODWORD(v190) = *a3;
            v191 = a3;
          }
          else
          {
            v165 = 0;
            if ( v219 )
              goto LABEL_213;
            v191 = a3;
          }
LABEL_234:
          *v191 = v190 + 1;
          if ( (int)v190 + 1 > v222 )
          {
LABEL_216:
            *v191 = -1;
            v223 = ~(_DWORD)v190;
            if ( !v251 )
              goto LABEL_218;
LABEL_217:
            memset(sa, 0, 4LL * (unsigned int)v245 + 4);
            goto LABEL_218;
          }
          if ( (_DWORD)v190 + 1 == v222 && v218 )
          {
            if ( !v251 )
              goto LABEL_218;
            goto LABEL_217;
          }
          goto LABEL_197;
        }
LABEL_170:
        v162 = *v109;
      }
      while ( *sa < *v109 );
      v163 = 1;
      v164 = 0.0;
      v165 = 0;
      v227 = v157;
      while ( 1 )
      {
        v166 = (double)(*((_DWORD *)v242 + v163 - 1) * v162) + v249[v163 - 1];
        if ( v166 != 0.0 )
        {
          v167 = *(_DWORD *)(v221 + 4 * v163 - 4);
          v168 = *(_DWORD *)(v220 + 4 * v163 - 4);
          v164 = v164 + *((double *)v240 + v163 - 1) * v166;
          if ( v167 < v167 + v168 )
          {
            v169 = v167 + 1;
            v170 = v239 + -8 * v169 + 8LL * v167;
            v171 = v237 + -4 * v169 + 4LL * v167;
            do
            {
              v174 = *(double *)(v170 + 8 * v169) * v166;
              v175 = *(int *)(v171 + 4 * v169);
              v176 = (double *)&v151[v175];
              if ( *v176 == 0.0 )
              {
                v177 = v165++;
                v253[v177] = v175;
                *v176 = v174;
                v167 = *(_DWORD *)(v221 + 4 * v163 - 4);
                v168 = *(_DWORD *)(v220 + 4 * v163 - 4);
              }
              else
              {
                v172 = *v176 + v174;
                if ( v172 == 0.0 )
                  *v176 = 1.0e-100;
                else
                  *v176 = v172;
              }
              v173 = v169++;
            }
            while ( v167 + v168 > v173 );
          }
        }
        if ( v251 <= (int)v163 )
          break;
        v162 = v109[v163++];
        if ( sa[v163 - 1] < v162 )
        {
          v157 = v227;
          goto LABEL_197;
        }
      }
      v157 = v227;
      if ( !v165 )
      {
        v190 = *a3;
        if ( v219 == 1 )
          goto LABEL_285;
        if ( !v219 )
        {
          v165 = 0;
          v191 = a3;
          goto LABEL_234;
        }
        goto LABEL_213;
      }
      v179 = *v253;
      v180 = *(double *)&v151[v179];
      if ( v180 <= v225[v179] && v224[v179] <= v180 )
        break;
LABEL_193:
      v185 = 0;
      do
      {
        v186 = v253[v185++];
        v151[v186] = 0;
      }
      while ( v165 > (int)v185 );
    }
    v181 = v253;
    v182 = v253 + 1;
    while ( &v253[v165 - 1 + 1] != v182 )
    {
      v183 = *v182;
      v184 = *(double *)&v151[v183];
      if ( v184 <= v225[v183] )
      {
        ++v182;
        if ( v224[v183] <= v184 )
          continue;
      }
      goto LABEL_193;
    }
    v190 = *a3;
    if ( v219 == 1 )
    {
      v198 = v223;
      a4[v190] = v164;
      do
      {
        while ( 1 )
        {
          v199 = *v181;
          v200 = *v181;
          if ( (int)v226[v199] < 0 )
          {
            v201 = *(double *)&v151[v199];
            if ( fabs(v201) > 1.0e-13 )
              break;
          }
          if ( v182 == ++v181 )
            goto LABEL_232;
        }
        ++v181;
        v202 = v198++;
        a7[v202] = v201;
        a6[v202] = v200;
      }
      while ( v182 != v181 );
LABEL_232:
      v223 = v198;
      v203 = v198;
      v190 = *a3;
      goto LABEL_233;
    }
    if ( !v219 )
    {
      v211 = v223;
      v212 = v253;
      do
      {
        v213 = *v212;
        if ( (int)v226[v213] < 0 )
          v211 += fabs(*(double *)&v151[v213]) > 1.0e-13;
        ++v212;
      }
      while ( &v253[v165 - 1 + 1] != v212 );
      v223 = v211;
      v191 = a3;
      goto LABEL_234;
    }
LABEL_213:
    if ( v219 == 2 && a8 == (_DWORD)v190 )
      break;
    v191 = a3;
    *a3 = v190 + 1;
    if ( v222 < (int)v190 + 1 )
      goto LABEL_216;
LABEL_197:
    if ( v165 )
      goto LABEL_193;
  }
  if ( v251 )
  {
    v206 = 0;
    v207 = 0;
    v208 = 4LL * (unsigned int)v245 + 4;
    do
    {
      v209 = (double)(v109[v206 / 4] * *(_DWORD *)((char *)v242 + v206)) + v249[v206 / 4];
      if ( v209 != 0.0 )
      {
        v210 = v207++;
        a6[v210] = *(_DWORD *)&v17[v206];
        a7[v210] = v209;
      }
      v206 += 4LL;
    }
    while ( v208 != v206 );
    v223 = v207;
    *a3 = 1;
    memset(sa, 0, v208);
  }
  else
  {
    v223 = 0;
    *a3 = 1;
  }
LABEL_218:
  operator delete[](v17);
  operator delete[]((void *)v241);
  operator delete[](sa);
  operator delete[](v109);
  operator delete[](v242);
  operator delete[](v247);
  operator delete[](v249);
  operator delete[](v217);
  operator delete[](v253);
  operator delete[](v226);
  operator delete[](v224);
  operator delete[](v225);
  ClpSimplex::~ClpSimplex((ClpSimplex *)v269);
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v258);
  return v223;
}

