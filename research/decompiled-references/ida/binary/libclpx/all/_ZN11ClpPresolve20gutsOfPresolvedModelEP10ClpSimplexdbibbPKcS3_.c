__int64 __fastcall ClpPresolve::gutsOfPresolvedModel(
        ClpPresolve *this,
        ClpSimplex *a2,
        double a3,
        char a4,
        int a5,
        char a6,
        char a7,
        CoinPresolveMatrix *a8,
        const char *a9)
{
  _QWORD *v12; // rdi
  __int64 (*v13)(void); // rax
  int v14; // eax
  void *v15; // rdi
  double v16; // xmm7_8
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  void *v19; // rdi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  int v22; // r10d
  _DWORD *v23; // rcx
  int v24; // edx
  int v25; // esi
  __int64 v26; // rdx
  unsigned int v27; // r9d
  unsigned __int64 v28; // rcx
  unsigned int v29; // r8d
  unsigned int v30; // edx
  __m128i si128; // xmm1
  __m128i v32; // xmm0
  signed int v33; // edx
  int v34; // ecx
  int v35; // edx
  void *v36; // rdi
  unsigned __int64 v37; // rax
  void *v38; // rax
  __int64 v39; // rdx
  std::string *i; // rdi
  void *v41; // r12
  int v42; // r13d
  ClpSimplex *v43; // r12
  int v44; // eax
  double v45; // xmm2_8
  __m128d v46; // xmm0
  int v47; // edx
  __int64 v48; // rax
  _BYTE *v49; // rdx
  int v50; // edx
  __int64 v51; // rax
  _BYTE *v52; // rdx
  int v53; // eax
  __int64 v54; // r15
  __int64 v55; // r12
  __int64 v56; // r13
  double *v57; // r14
  char *v58; // rax
  double *v59; // rdx
  __int64 v60; // rcx
  char *v61; // r8
  unsigned __int64 v62; // r10
  __int64 v63; // rax
  double v64; // xmm1_8
  __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rdx
  double v69; // xmm0_8
  __int64 v70; // rax
  int v71; // r14d
  int v72; // r12d
  int v73; // r15d
  bool v74; // dl
  _QWORD *v75; // r10
  __int64 v76; // rcx
  double *v77; // r9
  double *v78; // r8
  bool v79; // r13
  double *v80; // rax
  double *v81; // rdx
  __int64 v82; // rdi
  __int64 v83; // xmm0_8
  __int64 v84; // rax
  int v85; // esi
  _QWORD *v86; // r8
  double *v87; // r9
  bool v88; // r11
  __int64 *v89; // rdx
  _QWORD *v90; // rax
  __int64 v91; // xmm0_8
  __int64 v92; // rax
  _BYTE *v93; // rdi
  _BYTE *v94; // r8
  unsigned int v95; // esi
  __int64 v96; // rax
  unsigned int v97; // edx
  __int64 v98; // rax
  _BYTE *v99; // rdx
  _BYTE *v100; // rax
  __int64 v101; // rsi
  __int64 v102; // rax
  _BYTE *v103; // r8
  _BYTE *v104; // r9
  unsigned int v105; // r10d
  __int64 v106; // rax
  unsigned int v107; // edx
  __int64 v108; // rax
  _BYTE *v109; // rdx
  _BYTE *v110; // rax
  __int64 v111; // r10
  __int64 v112; // rax
  __int64 v113; // r13
  __int64 v114; // r12
  __int64 v115; // rdi
  __int64 (__fastcall *v116)(ClpPackedMatrix *); // rax
  CoinPackedMatrix *v117; // rdi
  unsigned __int64 v118; // rax
  double v119; // xmm1_8
  double v120; // xmm2_8
  double v121; // xmm4_8
  __int64 v122; // rdi
  __int64 v123; // rsi
  int v124; // r9d
  bool v125; // r10
  __int64 v126; // r8
  __int64 v127; // rax
  double v128; // xmm1_8
  int v129; // eax
  __int64 v130; // rdi
  __int64 v131; // rsi
  int v132; // r10d
  bool v133; // r11
  __int64 v134; // r8
  __int64 v135; // rax
  double v136; // xmm1_8
  void *v137; // rbp
  __int64 v138; // rbp
  double v140; // xmm0_8
  __int64 v141; // rdi
  __int64 v142; // rsi
  int v143; // r9d
  bool v144; // r10
  __int64 v145; // r8
  __int64 v146; // rax
  double v147; // xmm1_8
  __int64 v148; // rax
  _DWORD *v149; // rcx
  char *v150; // r13
  int v151; // eax
  unsigned int v152; // esi
  __m128i *v153; // rax
  const __m128i *v154; // rdx
  __int64 v155; // rsi
  __m128i v156; // xmm1
  __int64 v157; // rax
  char *v158; // rdx
  const void *v159; // rdi
  const ClpQuadraticObjective *v160; // r12
  void *v161; // r15
  __int64 v162; // rax
  __int64 v163; // r13
  ClpModel *v164; // r8
  __int64 *v165; // r12
  __int64 (__fastcall ***v166)(_QWORD, _QWORD, _QWORD, std::string **, _QWORD, __int64); // rdi
  __int64 *v167; // rax
  __int64 *v168; // rdx
  __int64 *v169; // rcx
  __int64 v170; // rdi
  __int64 v171; // xmm0_8
  __int64 v172; // rdx
  __int64 v173; // rax
  _DWORD *v174; // rsi
  char *v175; // rdi
  int v176; // r12d
  unsigned int v177; // ecx
  __m128i *v178; // rax
  const __m128i *v179; // rdx
  __int64 v180; // rcx
  __m128i v181; // xmm1
  __int64 v182; // rax
  char *v183; // rdx
  __int64 v184; // rdx
  __int64 v185; // r8
  int v186; // esi
  __int64 v187; // rax
  _QWORD *v188; // rax
  __int64 v189; // r15
  __int64 v190; // rdx
  __int64 v191; // r13
  __int64 v192; // r12
  __m128d v193; // xmm0
  __int64 v194; // rax
  __m128d v195; // xmm7
  double *v196; // rcx
  double v197; // xmm5_8
  double *v198; // rax
  double v199; // xmm3_8
  double v200; // xmm2_8
  __m128d v201; // xmm0
  __m128d v202; // xmm6
  CoinMessageHandler *v203; // rax
  CoinMessageHandler *v204; // rax
  CoinMessageHandler *v205; // rax
  __int64 v206; // rax
  void *v207; // r12
  ClpSimplex *v208; // r12
  const void *v209; // rdi
  __int64 (__fastcall ***v210)(ClpPackedMatrix *); // rax
  __int64 (__fastcall *v211)(ClpPackedMatrix *); // rdx
  CoinPackedMatrix *v212; // rax
  void (*v213)(void); // rax
  double v214; // xmm2_8
  double v215; // xmm2_8
  __int64 v216; // rax
  __int64 v217; // rax
  int v218; // edx
  __int64 v219; // rcx
  __int64 v220; // rdx
  __int64 v221; // rax
  __int64 v222; // r12
  CoinMessageHandler *v223; // rax
  __int64 v224; // rax
  _QWORD *v225; // rdi
  _QWORD *v226; // r12
  __int64 v227; // r13
  __int64 v228; // r15
  std::string *v229; // rdi
  __int64 v230; // r13
  __int64 v231; // r15
  std::string *v232; // rdi
  std::string *v233; // rcx
  std::string *v234; // r15
  std::string *v235; // rcx
  std::string *v236; // r15
  __int64 v237; // rax
  __int64 v238; // rax
  _DWORD *v239; // rax
  int *v240; // rdx
  int v241; // r8d
  char *v242; // rdx
  _BYTE *v243; // rax
  char v244; // r9
  char *v245; // rdx
  _BYTE *v246; // rax
  char v247; // cl
  _DWORD *v248; // rax
  int *v249; // rdx
  int v250; // r9d
  int v251; // edx
  int v252; // edx
  int v254; // [rsp+8h] [rbp-320h]
  int v255; // [rsp+10h] [rbp-318h]
  double *v256; // [rsp+10h] [rbp-318h]
  bool v257; // [rsp+10h] [rbp-318h]
  double *v258; // [rsp+10h] [rbp-318h]
  int v259[2]; // [rsp+18h] [rbp-310h]
  int v260; // [rsp+18h] [rbp-310h]
  int v261; // [rsp+18h] [rbp-310h]
  double v262; // [rsp+18h] [rbp-310h]
  double v263; // [rsp+28h] [rbp-300h]
  ClpObjective *v267; // [rsp+38h] [rbp-2F0h]
  ClpObjective *v268; // [rsp+38h] [rbp-2F0h]
  ClpObjective *v269; // [rsp+38h] [rbp-2F0h]
  ClpObjective *v270; // [rsp+38h] [rbp-2F0h]
  ClpObjective *v271; // [rsp+38h] [rbp-2F0h]
  ClpObjective *v272; // [rsp+38h] [rbp-2F0h]
  int v273; // [rsp+40h] [rbp-2E8h]
  __int64 v274; // [rsp+40h] [rbp-2E8h]
  __int64 v275; // [rsp+50h] [rbp-2D8h]
  __int64 v276; // [rsp+58h] [rbp-2D0h]
  int v278; // [rsp+68h] [rbp-2C0h]
  int v279; // [rsp+6Ch] [rbp-2BCh]
  std::string *v280[2]; // [rsp+80h] [rbp-2A8h] BYREF
  std::string *v281; // [rsp+90h] [rbp-298h]
  std::string *v282[2]; // [rsp+A0h] [rbp-288h] BYREF
  std::string *v283; // [rsp+B0h] [rbp-278h]
  _BYTE v284[32]; // [rsp+C0h] [rbp-268h] BYREF
  int v285; // [rsp+E0h] [rbp-248h] BYREF
  int v286; // [rsp+E4h] [rbp-244h]
  __int64 v287; // [rsp+108h] [rbp-220h]
  __int64 v288; // [rsp+110h] [rbp-218h]
  __int64 v289; // [rsp+118h] [rbp-210h]
  __int64 v290; // [rsp+120h] [rbp-208h]
  __int64 v291; // [rsp+138h] [rbp-1F0h]
  __int64 v292; // [rsp+140h] [rbp-1E8h]
  __int64 v293; // [rsp+148h] [rbp-1E0h]
  __int64 v294; // [rsp+150h] [rbp-1D8h]
  void *v295; // [rsp+158h] [rbp-1D0h]
  void *v296; // [rsp+160h] [rbp-1C8h]
  double *v297; // [rsp+180h] [rbp-1A8h]
  void *s; // [rsp+190h] [rbp-198h]
  void *v299; // [rsp+1A0h] [rbp-188h]
  unsigned __int64 v300; // [rsp+1A8h] [rbp-180h]
  double v301; // [rsp+230h] [rbp-F8h]
  int v302; // [rsp+238h] [rbp-F0h]
  int v303; // [rsp+240h] [rbp-E8h]
  __int64 v304; // [rsp+248h] [rbp-E0h]
  __int64 v305; // [rsp+270h] [rbp-B8h]
  int v306; // [rsp+294h] [rbp-94h]
  char v307; // [rsp+298h] [rbp-90h]

  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 27);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 26);
  v12 = *((_QWORD **)a2 + 24);
  v13 = *(__int64 (**)(void))(*v12 + 16LL);
  if ( (char *)v13 == (char *)ClpPackedMatrix::getNumElements )
  {
    v14 = *(_DWORD *)(v12[11] + 72LL);
  }
  else
  {
    v254 = a5;
    v14 = v13();
    a5 = v254;
  }
  v15 = *((void **)this + 4);
  *((_DWORD *)this + 18) = v14;
  *((_DWORD *)this + 19) = a5;
  v16 = *(double *)a2;
  *((_QWORD *)this + 1) = a2;
  v263 = v16;
  if ( v15 )
    operator delete[](v15);
  v17 = *((int *)this + 16);
  if ( v17 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_393;
  v18 = operator new[](4 * v17);
  v19 = *((void **)this + 5);
  *((_QWORD *)this + 4) = v18;
  if ( v19 )
    operator delete[](v19);
  v20 = *((int *)this + 17);
  if ( v20 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_393;
  v21 = operator new[](4 * v20);
  v22 = *((_DWORD *)this + 16);
  *((_QWORD *)this + 5) = v21;
  if ( v22 > 0 )
  {
    v23 = *((_DWORD **)this + 4);
    v24 = 0;
    do
      *v23++ = v24++;
    while ( *((_DWORD *)this + 16) > v24 );
  }
  v25 = *((_DWORD *)this + 17);
  if ( v25 <= 0 )
    goto LABEL_27;
  v26 = -(int)(v21 >> 2) & 3;
  if ( (unsigned int)(v25 - 1) <= 5 )
  {
    v33 = 0;
LABEL_21:
    *(_DWORD *)(v21 + 4LL * v33) = v33;
    if ( v25 > v33 + 1 )
    {
      *(_DWORD *)(v21 + 4LL * (v33 + 1)) = v33 + 1;
      if ( v25 > v33 + 2 )
      {
        *(_DWORD *)(v21 + 4LL * (v33 + 2)) = v33 + 2;
        if ( v33 + 3 < v25 )
        {
          *(_DWORD *)(v21 + 4LL * (v33 + 3)) = v33 + 3;
          v34 = v33 + 4;
          if ( v33 + 4 < v25 )
          {
            v35 = v33 + 5;
            *(_DWORD *)(v21 + 4LL * v34) = v34;
            if ( v35 < v25 )
              *(_DWORD *)(v21 + 4LL * v35) = v35;
          }
        }
      }
    }
    goto LABEL_27;
  }
  v27 = 0;
  if ( (_DWORD)v26 )
  {
    *(_DWORD *)v21 = 0;
    v27 = 1;
    if ( (_DWORD)v26 != 1 )
    {
      *(_DWORD *)(v21 + 4) = 1;
      v27 = 2;
      if ( (_DWORD)v26 != 2 )
      {
        *(_DWORD *)(v21 + 8) = 2;
        v27 = 3;
      }
    }
  }
  v28 = v21 + 4 * v26;
  v29 = v25 - v26;
  v30 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
  v32 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v27), 0), (__m128i)xmmword_289BB0);
  do
  {
    ++v30;
    v28 += 16LL;
    *(__m128i *)(v28 - 16) = v32;
    v32 = _mm_add_epi32(v32, si128);
  }
  while ( v29 >> 2 > v30 );
  v33 = (v29 & 0xFFFFFFFC) + v27;
  if ( (v29 & 0xFFFFFFFC) != v29 )
    goto LABEL_21;
LABEL_27:
  v36 = *((void **)this + 6);
  if ( v36 )
    operator delete[](v36);
  if ( !a7 )
  {
    *((_QWORD *)this + 6) = 0;
    goto LABEL_32;
  }
  v37 = *((int *)this + 17);
  if ( v37 > 0xFFFFFFFFFFFFFFFLL )
LABEL_393:
    __cxa_throw_bad_array_new_length();
  v38 = (void *)operator new[](8 * v37);
  v39 = *((int *)this + 17);
  *((_QWORD *)this + 6) = v38;
  memset(v38, 0, 8 * v39);
LABEL_32:
  *((_QWORD *)this + 2) = 0;
  CoinMessages::CoinMessages((CoinMessages *)v284, (ClpSimplex *)((char *)a2 + 448));
  v279 = 100;
  for ( i = (ClpPresolve *)((char *)this + 88); ; i = (ClpPresolve *)((char *)this + 88) )
  {
    if ( !(unsigned int)std::string::compare(i, "") )
    {
      v41 = *((void **)this + 2);
      if ( v41 )
      {
        ClpSimplex::~ClpSimplex(*((ClpSimplex **)this + 2));
        operator delete(v41);
      }
      v42 = *((_DWORD *)a2 + 82);
      *((_DWORD *)a2 + 82) = 0;
      v43 = (ClpSimplex *)operator new(0x6F0u);
      ClpSimplex::ClpSimplex(v43, a2, -1);
      *((_QWORD *)this + 2) = v43;
      *((_DWORD *)a2 + 82) = v42;
      ClpModel::dropNames(v43);
LABEL_37:
      if ( a4 )
        goto LABEL_38;
      goto LABEL_180;
    }
    *((_QWORD *)this + 2) = a2;
    if ( !a6 )
      goto LABEL_37;
    ClpModel::dropNames(a2);
    if ( a4 )
    {
LABEL_38:
      v44 = *((_DWORD *)this + 20);
      if ( v44 <= 3 )
        goto LABEL_39;
      goto LABEL_181;
    }
LABEL_180:
    ClpModel::deleteIntegerInformation(*((ClpModel **)this + 2));
    v44 = *((_DWORD *)this + 20);
    if ( v44 <= 3 )
    {
LABEL_39:
      if ( v44 == 2 )
        v45 = 1.5;
      else
        v45 = 2.0;
      goto LABEL_41;
    }
LABEL_181:
    v140 = (double)(v44 - 3) + 5.0;
    v45 = sqrt(v140);
    if ( v140 < 0.0 )
      sqrt(v140);
LABEL_41:
    v46.m128d_f64[0] = v263;
    CoinPresolveMatrix::CoinPresolveMatrix(
      (CoinPresolveMatrix *)&v285,
      *((_DWORD *)this + 16),
      v263,
      *((ClpSimplex **)this + 2),
      *((_DWORD *)this + 17),
      *((_DWORD *)this + 18),
      1,
      *((double *)this + 3),
      v45);
    if ( a8 )
    {
      v47 = *((_DWORD *)this + 17);
      v307 = 1;
      if ( v47 > 0 )
      {
        v48 = 0;
        do
        {
          while ( *((_BYTE *)a8 + v48) )
          {
            v49 = (_BYTE *)(v48 + v305);
            ++v48;
            *v49 |= 2u;
            v47 = *((_DWORD *)this + 17);
            if ( (int)v48 >= v47 )
              goto LABEL_46;
          }
          ++v48;
        }
        while ( v47 > (int)v48 );
      }
    }
LABEL_46:
    if ( a9 )
    {
      v50 = *((_DWORD *)this + 16);
      v307 = 1;
      if ( v50 > 0 )
      {
        v51 = 0;
        do
        {
          while ( a9[v51] )
          {
            v52 = (_BYTE *)(v51 + v304);
            ++v51;
            *v52 |= 2u;
            v50 = *((_DWORD *)this + 16);
            if ( (int)v51 >= v50 )
              goto LABEL_51;
          }
          ++v51;
        }
        while ( v50 > (int)v51 );
      }
    }
LABEL_51:
    v303 = *((_DWORD *)this + 20);
    if ( a7 )
    {
      memset(*((void **)this + 6), 0, 8LL * *((int *)this + 17));
      v53 = *((_DWORD *)this + 24);
      if ( v53 >= 0 )
        goto LABEL_53;
    }
    else
    {
      v53 = *((_DWORD *)this + 24);
      if ( v53 >= 0 )
        goto LABEL_53;
    }
    CoinPresolveMatrix::statistics((CoinPresolveMatrix *)&v285);
    v53 = *((_DWORD *)this + 24);
LABEL_53:
    if ( (v53 & 0x10000) != 0 )
      transferCosts((CoinPresolveMatrix *)&v285);
    v54 = v290;
    v55 = v287;
    v56 = v288;
    v57 = v297;
    *(_QWORD *)v259 = v289;
    v255 = v285;
    v58 = (char *)memset(s, 0, 8LL * v286);
    v60 = (unsigned int)v255;
    v61 = v58;
    if ( v255 > 0 )
    {
      v62 = 0;
      do
      {
        v63 = *(int *)(v55 + v62);
        v59 = (double *)*(unsigned int *)(v56 + v62);
        v64 = v57[v62 / 4];
        v60 = (unsigned int)(v63 + (_DWORD)v59);
        if ( (int)v63 < (int)v60 )
        {
          v65 = *(_QWORD *)v259 + 4 * v63;
          v66 = v54 + 8 * v63;
          v67 = 0;
          v60 = (unsigned int)((_DWORD)v59 - 1) + 1LL;
          do
          {
            v68 = *(int *)(v65 + 4 * v67);
            v69 = *(double *)(v66 + 8 * v67++);
            v59 = (double *)&v61[8 * v68];
            v46.m128d_f64[0] = v69 * v64 + *v59;
            *v59 = v46.m128d_f64[0];
          }
          while ( v67 != v60 );
        }
        v62 += 4LL;
      }
      while ( v62 != 4LL * (unsigned int)(v255 - 1) + 4 );
    }
    v70 = *(_QWORD *)this;
    v301 = a3;
    *((_QWORD *)this + 7) = (*(__int64 (__fastcall **)(ClpPresolve *, int *, double *, __int64, char *, int *))(v70 + 24))(
                              this,
                              &v285,
                              v59,
                              v60,
                              v61,
                              *(int **)v259);
    CoinPresolveMatrix::deleteStuff((CoinPresolveMatrix *)&v285);
    v71 = v302;
    if ( v302 )
      goto LABEL_172;
    v72 = v306 & 0x8000;
    v73 = v306 & 0x4000;
    if ( !*((_QWORD *)this + 7) )
      break;
    v74 = v73 == 0;
    if ( (v306 & 0x8000) != 0 && (v306 & 0x4000) != 0 )
      goto LABEL_65;
    v122 = v291;
    v123 = v292;
    if ( v285 > 0 )
    {
      v124 = 0;
      v125 = 0;
      v126 = 8LL * (unsigned int)(v285 - 1) + 8;
      v127 = 0;
      do
      {
        v128 = *(double *)(v123 + v127);
        v46.m128d_f64[0] = *(double *)(v122 + v127);
        if ( v46.m128d_f64[0] > v128 )
        {
          if ( v74 && v46.m128d_f64[0] - a3 > v128 )
          {
            v125 = v74 && v46.m128d_f64[0] - a3 > v128;
            v124 = 1;
          }
          else
          {
            *(double *)(v123 + v127) = v46.m128d_f64[0];
          }
        }
        v127 += 8;
      }
      while ( v127 != v126 );
      if ( v125 )
      {
        v129 = v286;
        v302 = v124;
        v130 = v293;
        v131 = v294;
        if ( v286 <= 0 )
          goto LABEL_170;
        goto LABEL_163;
      }
    }
    v129 = v286;
    v130 = v293;
    v131 = v294;
    if ( v286 > 0 )
    {
      v124 = 0;
LABEL_163:
      v132 = v124;
      v133 = 0;
      v134 = 8LL * (unsigned int)(v129 - 1) + 8;
      v135 = 0;
      do
      {
        v136 = *(double *)(v131 + v135);
        v46.m128d_f64[0] = *(double *)(v130 + v135);
        if ( v46.m128d_f64[0] > v136 )
        {
          if ( v74 && v46.m128d_f64[0] - a3 > v136 )
          {
            v133 = v74 && v46.m128d_f64[0] - a3 > v136;
            v132 = 1;
          }
          else
          {
            *(double *)(v131 + v135) = v46.m128d_f64[0];
          }
        }
        v135 += 8;
      }
      while ( v135 != v134 );
      if ( v133 )
      {
        v302 = v132;
        v124 = v132;
      }
LABEL_170:
      if ( v124 )
      {
        v71 = v124;
LABEL_172:
        *((_DWORD *)this + 18) = -v71;
        *((_DWORD *)a2 + 80) = v71;
        CoinPresolveMatrix::~CoinPresolveMatrix((CoinPresolveMatrix *)&v285);
        goto LABEL_173;
      }
    }
LABEL_65:
    CoinPresolveMatrix::update_model(
      (CoinPresolveMatrix *)&v285,
      *((ClpSimplex **)this + 2),
      *((_DWORD *)this + 17),
      *((_DWORD *)this + 16),
      *((_DWORD *)this + 18));
    v75 = *((_QWORD **)this + 2);
    v76 = v285;
    v77 = v297;
    v78 = (double *)v75[15];
    v79 = v285 == 0;
    if ( v297 != v78 && v285 )
    {
      if ( v285 >> 3 > 0 )
      {
        v80 = (double *)v75[15];
        v81 = v297;
        v82 = (unsigned int)((v285 >> 3) - 1);
        do
        {
          v83 = *(_QWORD *)v81;
          v80 += 8;
          v81 += 8;
          *((_QWORD *)v80 - 8) = v83;
          *(v80 - 7) = *(v81 - 7);
          *(v80 - 6) = *(v81 - 6);
          *(v80 - 5) = *(v81 - 5);
          *(v80 - 4) = *(v81 - 4);
          *(v80 - 3) = *(v81 - 3);
          *(v80 - 2) = *(v81 - 2);
          v46.m128d_f64[0] = *(v81 - 1);
          *(v80 - 1) = v46.m128d_f64[0];
        }
        while ( &v78[8 * v82 + 8] != v80 );
        v84 = ((int)v82 + 1LL) << 6;
        v77 = (double *)((char *)v77 + v84);
        v78 = (double *)((char *)v78 + v84);
      }
      switch ( (int)v76 % 8 )
      {
        case 1:
          goto LABEL_78;
        case 2:
          goto LABEL_77;
        case 3:
          goto LABEL_76;
        case 4:
          goto LABEL_75;
        case 5:
          goto LABEL_74;
        case 6:
          goto LABEL_73;
        case 7:
          v78[6] = v77[6];
LABEL_73:
          v78[5] = v77[5];
LABEL_74:
          v78[4] = v77[4];
LABEL_75:
          v78[3] = v77[3];
LABEL_76:
          v78[2] = v77[2];
LABEL_77:
          v78[1] = v77[1];
LABEL_78:
          v46.m128d_f64[0] = *v77;
          *v78 = *v77;
          break;
        default:
          break;
      }
    }
    v85 = v286;
    v86 = (_QWORD *)v75[14];
    v87 = (double *)s;
    v88 = v286 == 0;
    if ( s != v86 && v286 )
    {
      if ( v286 >> 3 > 0 )
      {
        v89 = (__int64 *)s;
        v90 = (_QWORD *)v75[14];
        do
        {
          v91 = *v89;
          v90 += 8;
          v89 += 8;
          *(v90 - 8) = v91;
          *(v90 - 7) = *(v89 - 7);
          *(v90 - 6) = *(v89 - 6);
          *(v90 - 5) = *(v89 - 5);
          *(v90 - 4) = *(v89 - 4);
          *(v90 - 3) = *(v89 - 3);
          *(v90 - 2) = *(v89 - 2);
          *(_QWORD *)&v46.m128d_f64[0] = *(v89 - 1);
          *(v90 - 1) = *(_QWORD *)&v46.m128d_f64[0];
        }
        while ( &v86[8 * (unsigned int)((v85 >> 3) - 1) + 8] != v90 );
        v92 = ((v85 >> 3) - 1 + 1LL) << 6;
        v87 = (double *)((char *)v87 + v92);
        v86 = (_QWORD *)((char *)v86 + v92);
      }
      switch ( v85 % 8 )
      {
        case 1:
          goto LABEL_92;
        case 2:
          goto LABEL_91;
        case 3:
          goto LABEL_90;
        case 4:
          goto LABEL_89;
        case 5:
          goto LABEL_88;
        case 6:
          goto LABEL_87;
        case 7:
          v86[6] = *((_QWORD *)v87 + 6);
LABEL_87:
          v86[5] = *((_QWORD *)v87 + 5);
LABEL_88:
          v86[4] = *((_QWORD *)v87 + 4);
LABEL_89:
          v86[3] = *((_QWORD *)v87 + 3);
LABEL_90:
          v86[2] = *((_QWORD *)v87 + 2);
LABEL_91:
          v86[1] = *((_QWORD *)v87 + 1);
LABEL_92:
          v46.m128d_f64[0] = *v87;
          *v86 = *(_QWORD *)v87;
          break;
        default:
          break;
      }
    }
    v93 = (_BYTE *)v75[33];
    v94 = v299;
    if ( v299 != v93 && !v79 )
    {
      v95 = (int)v76 >> 3;
      if ( (int)v76 >> 3 > 0 )
      {
        if ( (v93 >= (char *)v299 + 16 || v299 >= v93 + 16) && v95 > 1 )
        {
          v96 = 0;
          v97 = 0;
          do
          {
            v46 = (__m128d)_mm_loadu_si128((const __m128i *)&v94[v96]);
            ++v97;
            *(__m128d *)&v93[v96] = v46;
            v96 += 16;
          }
          while ( v97 < v95 >> 1 );
          v98 = 8LL * (v95 & 0xFFFFFFFE);
          v99 = &v94[v98];
          v100 = &v93[v98];
          if ( (v95 & 0xFFFFFFFE) != v95 )
          {
            *v100 = *v99;
            v100[1] = v99[1];
            v100[2] = v99[2];
            v100[3] = v99[3];
            v100[4] = v99[4];
            v100[5] = v99[5];
            v100[6] = v99[6];
            v100[7] = v99[7];
          }
          LODWORD(v101) = v95 - 1;
        }
        else
        {
          v242 = (char *)v299;
          v101 = v95 - 1;
          v243 = (_BYTE *)v75[33];
          do
          {
            v244 = *v242;
            v243 += 8;
            v242 += 8;
            *(v243 - 8) = v244;
            *(v243 - 7) = *(v242 - 7);
            *(v243 - 6) = *(v242 - 6);
            *(v243 - 5) = *(v242 - 5);
            *(v243 - 4) = *(v242 - 4);
            *(v243 - 3) = *(v242 - 3);
            *(v243 - 2) = *(v242 - 2);
            *(v243 - 1) = *(v242 - 1);
          }
          while ( v243 != &v93[8 * v101 + 8] );
        }
        v102 = 8LL * (int)v101 + 8;
        v94 += v102;
        v93 += v102;
      }
      switch ( (int)v76 % 8 )
      {
        case 1:
          goto LABEL_111;
        case 2:
          goto LABEL_110;
        case 3:
          goto LABEL_109;
        case 4:
          goto LABEL_108;
        case 5:
          goto LABEL_107;
        case 6:
          goto LABEL_106;
        case 7:
          v93[6] = v94[6];
LABEL_106:
          v93[5] = v94[5];
LABEL_107:
          v93[4] = v94[4];
LABEL_108:
          v93[3] = v94[3];
LABEL_109:
          v93[2] = v94[2];
LABEL_110:
          v93[1] = v94[1];
LABEL_111:
          *v93 = *v94;
          break;
        default:
          break;
      }
      v85 = v286;
      v76 = v285;
      v93 = *(_BYTE **)(*((_QWORD *)this + 2) + 264LL);
      v88 = v286 == 0;
    }
    v103 = (_BYTE *)v300;
    v104 = &v93[v76];
    if ( &v93[v76] != (_BYTE *)v300 && !v88 )
    {
      v105 = v85 >> 3;
      if ( v85 >> 3 > 0 )
      {
        if ( ((unsigned __int64)v104 >= v300 + 16 || v300 >= (unsigned __int64)&v93[v76 + 16]) && v105 > 1 )
        {
          v106 = 0;
          v107 = 0;
          do
          {
            v46 = (__m128d)_mm_loadu_si128((const __m128i *)&v103[v106]);
            ++v107;
            *(__m128d *)&v104[v106] = v46;
            v106 += 16;
          }
          while ( v107 < v105 >> 1 );
          v108 = 8LL * (v105 & 0xFFFFFFFE);
          v109 = &v103[v108];
          v110 = &v104[v108];
          if ( (v105 & 0xFFFFFFFE) != v105 )
          {
            *v110 = *v109;
            v110[1] = v109[1];
            v110[2] = v109[2];
            v110[3] = v109[3];
            v110[4] = v109[4];
            v110[5] = v109[5];
            v110[6] = v109[6];
            v110[7] = v109[7];
          }
          LODWORD(v111) = v105 - 1;
        }
        else
        {
          v245 = (char *)v300;
          v111 = v105 - 1;
          v246 = &v93[v76];
          do
          {
            v247 = *v245;
            v246 += 8;
            v245 += 8;
            *(v246 - 8) = v247;
            *(v246 - 7) = *(v245 - 7);
            *(v246 - 6) = *(v245 - 6);
            *(v246 - 5) = *(v245 - 5);
            *(v246 - 4) = *(v245 - 4);
            *(v246 - 3) = *(v245 - 3);
            *(v246 - 2) = *(v245 - 2);
            *(v246 - 1) = *(v245 - 1);
          }
          while ( v246 != &v104[8 * v111 + 8] );
        }
        v112 = 8LL * (int)v111 + 8;
        v103 += v112;
        v104 += v112;
      }
      switch ( v85 % 8 )
      {
        case 1:
          goto LABEL_131;
        case 2:
          goto LABEL_130;
        case 3:
          goto LABEL_129;
        case 4:
          goto LABEL_128;
        case 5:
          goto LABEL_127;
        case 6:
          goto LABEL_126;
        case 7:
          v104[6] = v103[6];
LABEL_126:
          v104[5] = v103[5];
LABEL_127:
          v104[4] = v103[4];
LABEL_128:
          v104[3] = v103[3];
LABEL_129:
          v104[2] = v103[2];
LABEL_130:
          v104[1] = v103[1];
LABEL_131:
          *v104 = *v103;
          break;
        default:
          break;
      }
    }
    if ( v73 && v72 )
    {
      v113 = v291;
      v114 = v292;
      v260 = v285;
      v256 = (double *)s;
      v115 = *(_QWORD *)(*((_QWORD *)this + 2) + 192LL);
      if ( v115 )
      {
        v116 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v115;
        v117 = v116 == ClpPackedMatrix::getPackedMatrix
             ? *(CoinPackedMatrix **)(v115 + 88)
             : (CoinPackedMatrix *)((__int64 (*)(void))v116)();
      }
      else
      {
        v117 = nullptr;
      }
      CoinPackedMatrix::times(v117, v297, v256);
      if ( v260 > 0 )
      {
        v118 = 0;
        do
        {
          v46.m128d_f64[0] = *(double *)(v113 + v118);
          v120 = v256[v118 / 8];
          v119 = *(double *)(v114 + v118);
          v121 = v119 - v46.m128d_f64[0];
          if ( v46.m128d_f64[0] - a3 <= v120 || fabs(v120 - v46.m128d_f64[0]) >= 0.001 )
          {
            if ( v120 > a3 + v119 && fabs(v120 - v119) < 0.001 )
            {
              *(double *)(v114 + v118) = v120;
              if ( v121 < 100000.0 )
              {
                v215 = v120 - v121;
                *(double *)(v113 + v118) = v215;
                v46.m128d_f64[0] = v215;
                v119 = *(double *)(v114 + v118);
              }
              else
              {
                v46.m128d_f64[0] = *(double *)(v113 + v118);
                v119 = v120;
              }
            }
          }
          else
          {
            *(double *)(v113 + v118) = v120;
            if ( v121 < 100000.0 )
            {
              v214 = v120 + v121;
              *(double *)(v114 + v118) = v214;
              v119 = v214;
              v46.m128d_f64[0] = *(double *)(v113 + v118);
            }
            else
            {
              v119 = *(double *)(v114 + v118);
              v46.m128d_f64[0] = v120;
            }
          }
          if ( v46.m128d_f64[0] > v119 )
            *(double *)(v114 + v118) = v46.m128d_f64[0];
          v118 += 8LL;
        }
        while ( 8LL * (unsigned int)(v260 - 1) + 8 != v118 );
      }
    }
    v141 = v293;
    v142 = v294;
    if ( v286 > 0 )
    {
      v143 = v302;
      v144 = 0;
      v145 = 8LL * (unsigned int)(v286 - 1) + 8;
      v146 = 0;
      do
      {
        v147 = *(double *)(v142 + v146);
        v46.m128d_f64[0] = *(double *)(v141 + v146);
        if ( v46.m128d_f64[0] > v147 )
        {
          if ( v73 == 0 && v46.m128d_f64[0] - a3 > v147 )
          {
            v144 = v73 == 0 && v46.m128d_f64[0] - a3 > v147;
            v143 = 1;
          }
          else
          {
            *(double *)(v142 + v146) = v46.m128d_f64[0];
          }
        }
        v146 += 8;
      }
      while ( v145 != v146 );
      if ( v144 )
        v302 = v143;
    }
    if ( v297 )
      operator delete[](v297);
    if ( s )
      operator delete[](s);
    if ( v299 )
      operator delete[](v299);
    v148 = *((_QWORD *)this + 2);
    v297 = nullptr;
    s = nullptr;
    v299 = nullptr;
    v149 = *((_DWORD **)this + 4);
    v150 = (char *)v295;
    v151 = *(_DWORD *)(v148 + 108);
    v261 = v151;
    v257 = v151 == 0;
    if ( v149 != v295 && v151 )
    {
      v152 = v151 >> 3;
      if ( v151 >> 3 <= 0 )
      {
        v158 = (char *)v295;
      }
      else
      {
        if ( (v295 >= v149 + 8 || v149 >= (_DWORD *)((char *)v295 + 32)) && v152 > 1 )
        {
          v153 = *((__m128i **)this + 4);
          v154 = (const __m128i *)v295;
          v155 = v152 - 1;
          do
          {
            v156 = _mm_loadu_si128(v154);
            v153 += 2;
            v154 += 2;
            v46 = (__m128d)_mm_loadu_si128(v154 - 1);
            v153[-2] = v156;
            v153[-1] = (__m128i)v46;
          }
          while ( &v149[8 * v155 + 8] != (_DWORD *)v153 );
        }
        else
        {
          v239 = *((_DWORD **)this + 4);
          v240 = (int *)v295;
          v155 = v152 - 1;
          do
          {
            v241 = *v240;
            v239 += 8;
            v240 += 8;
            *(v239 - 8) = v241;
            *(v239 - 7) = *(v240 - 7);
            *(v239 - 6) = *(v240 - 6);
            *(v239 - 5) = *(v240 - 5);
            *(v239 - 4) = *(v240 - 4);
            *(v239 - 3) = *(v240 - 3);
            *(v239 - 2) = *(v240 - 2);
            *(v239 - 1) = *(v240 - 1);
          }
          while ( v239 != &v149[8 * v155 + 8] );
        }
        v157 = 32 * ((int)v155 + 1LL);
        v158 = &v150[v157];
        v149 = (_DWORD *)((char *)v149 + v157);
      }
      switch ( v261 % 8 )
      {
        case 1:
          goto LABEL_214;
        case 2:
          goto LABEL_213;
        case 3:
          goto LABEL_212;
        case 4:
          goto LABEL_211;
        case 5:
          goto LABEL_210;
        case 6:
          goto LABEL_209;
        case 7:
          v149[6] = *((_DWORD *)v158 + 6);
LABEL_209:
          v149[5] = *((_DWORD *)v158 + 5);
LABEL_210:
          v149[4] = *((_DWORD *)v158 + 4);
LABEL_211:
          v149[3] = *((_DWORD *)v158 + 3);
LABEL_212:
          v149[2] = *((_DWORD *)v158 + 2);
LABEL_213:
          v149[1] = *((_DWORD *)v158 + 1);
LABEL_214:
          *v149 = *(_DWORD *)v158;
          break;
        default:
          break;
      }
    }
    v159 = *((const void **)a2 + 20);
    if ( v159 )
    {
      v160 = (const ClpQuadraticObjective *)__dynamic_cast(
                                              v159,
                                              (const struct __class_type_info *)&`typeinfo for'ClpObjective,
                                              (const struct __class_type_info *)&`typeinfo for'ClpQuadraticObjective,
                                              0);
      if ( v160 )
      {
        v161 = (void *)operator new[](*((int *)this + 16));
        memset(v161, 0, *((int *)this + 16));
        v162 = *((_QWORD *)v160 + 3);
        v163 = *(_QWORD *)(v162 + 56);
        v273 = *(_DWORD *)(v162 + 64);
        if ( !*(_BYTE *)(v162 + 8) )
          v273 = *(_DWORD *)(v162 + 68);
        v267 = (ClpObjective *)operator new(0x40u);
        ClpQuadraticObjective::ClpQuadraticObjective(v267, v160, v261, *((const int **)this + 4));
        v164 = *((ClpModel **)this + 2);
        v165 = *((__int64 **)v267 + 4);
        v166 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, std::string **, _QWORD, __int64))v164 + 20);
        if ( v166 )
        {
          v167 = (__int64 *)(**v166)(v166, 0, 0, v282, 0, 2);
          v164 = *((ClpModel **)this + 2);
        }
        else
        {
          v167 = nullptr;
        }
        if ( v165 != v167 && !v257 )
        {
          if ( v261 >> 3 > 0 )
          {
            v168 = v165;
            v169 = v167;
            v170 = (unsigned int)((v261 >> 3) - 1);
            do
            {
              v171 = *v169;
              v168 += 8;
              v169 += 8;
              *(v168 - 8) = v171;
              *(v168 - 7) = *(v169 - 7);
              *(v168 - 6) = *(v169 - 6);
              *(v168 - 5) = *(v169 - 5);
              *(v168 - 4) = *(v169 - 4);
              *(v168 - 3) = *(v169 - 3);
              *(v168 - 2) = *(v169 - 2);
              *(_QWORD *)&v46.m128d_f64[0] = *(v169 - 1);
              *(v168 - 1) = *(_QWORD *)&v46.m128d_f64[0];
            }
            while ( v168 != &v165[8 * v170 + 8] );
            v172 = ((int)v170 + 1LL) << 6;
            v167 = (__int64 *)((char *)v167 + v172);
            v165 = (__int64 *)((char *)v165 + v172);
          }
          switch ( v261 % 8 )
          {
            case 1:
              goto LABEL_304;
            case 2:
              goto LABEL_303;
            case 3:
              goto LABEL_302;
            case 4:
              goto LABEL_301;
            case 5:
              goto LABEL_300;
            case 6:
              goto LABEL_299;
            case 7:
              v165[6] = v167[6];
LABEL_299:
              v165[5] = v167[5];
LABEL_300:
              v165[4] = v167[4];
LABEL_301:
              v165[3] = v167[3];
LABEL_302:
              v165[2] = v167[2];
LABEL_303:
              v165[1] = v167[1];
LABEL_304:
              *(_QWORD *)&v46.m128d_f64[0] = *v167;
              *v165 = *v167;
              break;
            default:
              break;
          }
        }
        if ( v273 > 0 )
        {
          v216 = 0;
          do
          {
            if ( *(_DWORD *)(v163 + 4 * v216) )
              *((_BYTE *)v161 + v216) = 1;
            ++v216;
          }
          while ( (unsigned int)(v273 - 1) + 1LL != v216 );
        }
        v217 = *((_QWORD *)v267 + 3);
        v218 = *(_DWORD *)(v217 + 64);
        if ( !*(_BYTE *)(v217 + 8) )
          v218 = *(_DWORD *)(v217 + 68);
        if ( v218 > 0 )
        {
          v219 = *(_QWORD *)(v217 + 56);
          v220 = 4LL * (unsigned int)(v218 - 1) + 4;
          v221 = 0;
          do
          {
            if ( *(_DWORD *)(v219 + v221) )
              *((_BYTE *)v161 + *(int *)(*((_QWORD *)this + 4) + v221)) = 0;
            v221 += 4;
          }
          while ( v221 != v220 );
        }
        ClpModel::setObjective(v164, v267);
        (*(void (__fastcall **)(ClpObjective *))(*(_QWORD *)v267 + 80LL))(v267);
        if ( v273 > 0 )
        {
          v222 = 0;
          do
          {
            if ( *((_BYTE *)v161 + v222) )
              printf("Quadratic column %d modified - may be okay\n", v222);
            ++v222;
          }
          while ( v222 != (unsigned int)(v273 - 1) + 1LL );
        }
        operator delete[](v161);
        v150 = (char *)v295;
      }
    }
    if ( v150 )
      operator delete[](v150);
    v173 = *((_QWORD *)this + 2);
    v295 = nullptr;
    v174 = *((_DWORD **)this + 5);
    v175 = (char *)v296;
    v176 = *(_DWORD *)(v173 + 104);
    if ( v176 && v174 != v296 )
    {
      v177 = v176 >> 3;
      if ( v176 >> 3 <= 0 )
      {
        v183 = (char *)v296;
      }
      else
      {
        if ( (v296 >= v174 + 8 || v174 >= (_DWORD *)((char *)v296 + 32)) && v177 > 1 )
        {
          v178 = *((__m128i **)this + 5);
          v179 = (const __m128i *)v296;
          v180 = v177 - 1;
          do
          {
            v181 = _mm_loadu_si128(v179);
            v178 += 2;
            v179 += 2;
            v46 = (__m128d)_mm_loadu_si128(v179 - 1);
            v178[-2] = v181;
            v178[-1] = (__m128i)v46;
          }
          while ( v178 != (__m128i *)&v174[8 * v180 + 8] );
        }
        else
        {
          v248 = *((_DWORD **)this + 5);
          v249 = (int *)v296;
          v180 = v177 - 1;
          do
          {
            v250 = *v249;
            v248 += 8;
            v249 += 8;
            *(v248 - 8) = v250;
            *(v248 - 7) = *(v249 - 7);
            *(v248 - 6) = *(v249 - 6);
            *(v248 - 5) = *(v249 - 5);
            *(v248 - 4) = *(v249 - 4);
            *(v248 - 3) = *(v249 - 3);
            *(v248 - 2) = *(v249 - 2);
            *(v248 - 1) = *(v249 - 1);
          }
          while ( &v174[8 * v180 + 8] != v248 );
        }
        v182 = 32 * ((int)v180 + 1LL);
        v183 = &v175[v182];
        v174 = (_DWORD *)((char *)v174 + v182);
      }
      switch ( v176 % 8 )
      {
        case 1:
          goto LABEL_246;
        case 2:
          goto LABEL_245;
        case 3:
          goto LABEL_244;
        case 4:
          goto LABEL_243;
        case 5:
          goto LABEL_242;
        case 6:
          goto LABEL_241;
        case 7:
          v174[6] = *((_DWORD *)v183 + 6);
LABEL_241:
          v174[5] = *((_DWORD *)v183 + 5);
LABEL_242:
          v174[4] = *((_DWORD *)v183 + 4);
LABEL_243:
          v174[3] = *((_DWORD *)v183 + 3);
LABEL_244:
          v174[2] = *((_DWORD *)v183 + 2);
LABEL_245:
          v174[1] = *((_DWORD *)v183 + 1);
LABEL_246:
          *v174 = *(_DWORD *)v183;
          break;
        default:
          break;
      }
    }
    if ( v175 )
      operator delete[](v175);
    v296 = nullptr;
    if ( !a6 && *((_DWORD *)a2 + 82) )
    {
      v281 = nullptr;
      *(_OWORD *)v280 = 0;
      std::vector<std::string>::reserve(v280, v176);
      if ( v176 > 0 )
      {
        v227 = 0;
        v228 = 4LL * (unsigned int)(v176 - 1) + 4;
        do
        {
          while ( 1 )
          {
            v229 = v280[1];
            if ( v280[1] != v281 )
              break;
            std::vector<std::string>::_M_realloc_insert<std::string const&>();
            v227 += 4;
            if ( v228 == v227 )
              goto LABEL_339;
          }
          if ( v280[1] )
          {
            std::string::string(
              v280[1],
              (const std::string *)(*((_QWORD *)a2 + 46) + 8LL * *(int *)(*((_QWORD *)this + 5) + v227)));
            v229 = v280[1];
          }
          v227 += 4;
          v280[1] = (std::string *)((char *)v229 + 8);
        }
        while ( v228 != v227 );
      }
LABEL_339:
      v46.m128d_f64[0] = 0.0;
      v283 = nullptr;
      *(_OWORD *)v282 = 0;
      std::vector<std::string>::reserve(v282, v261);
      if ( v261 > 0 )
      {
        v230 = 0;
        v231 = 4LL * (unsigned int)(v261 - 1) + 4;
        do
        {
          while ( 1 )
          {
            v232 = v282[1];
            if ( v282[1] != v283 )
              break;
            std::vector<std::string>::_M_realloc_insert<std::string const&>();
            v230 += 4;
            if ( v230 == v231 )
              goto LABEL_346;
          }
          if ( v282[1] )
          {
            std::string::string(
              v282[1],
              (const std::string *)(*((_QWORD *)a2 + 49) + 8LL * *(int *)(*((_QWORD *)this + 4) + v230)));
            v232 = v282[1];
          }
          v230 += 4;
          v282[1] = (std::string *)((char *)v232 + 8);
        }
        while ( v230 != v231 );
      }
LABEL_346:
      ClpModel::copyNames(*((_QWORD *)this + 2), v280, v282);
      v233 = v282[1];
      v234 = v282[0];
      if ( v282[1] != v282[0] )
      {
        if ( &_pthread_key_create )
        {
          do
          {
            if ( (_UNKNOWN *)(*(_QWORD *)v234 - 24LL) != &std::string::_Rep::_S_empty_rep_storage
              && _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)v234 - 8LL), 0xFFFFFFFF) <= 0 )
            {
              v271 = v233;
              std::string::_Rep::_M_destroy();
              v233 = v271;
            }
            v234 = (std::string *)((char *)v234 + 8);
          }
          while ( v233 != v234 );
        }
        else
        {
          do
          {
            v237 = *(_QWORD *)v234;
            if ( (_UNKNOWN *)(*(_QWORD *)v234 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
            {
              v252 = *(_DWORD *)(v237 - 8);
              *(_DWORD *)(v237 - 8) = v252 - 1;
              if ( v252 <= 0 )
              {
                v272 = v233;
                std::string::_Rep::_M_destroy();
                v233 = v272;
              }
            }
            v234 = (std::string *)((char *)v234 + 8);
          }
          while ( v233 != v234 );
        }
        v234 = v282[0];
      }
      if ( v234 )
        operator delete(v234);
      v235 = v280[1];
      v236 = v280[0];
      if ( v280[1] != v280[0] )
      {
        if ( &_pthread_key_create )
        {
          do
          {
            if ( (_UNKNOWN *)(*(_QWORD *)v236 - 24LL) != &std::string::_Rep::_S_empty_rep_storage
              && _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)v236 - 8LL), 0xFFFFFFFF) <= 0 )
            {
              v269 = v235;
              std::string::_Rep::_M_destroy();
              v235 = v269;
            }
            v236 = (std::string *)((char *)v236 + 8);
          }
          while ( v235 != v236 );
        }
        else
        {
          do
          {
            v238 = *(_QWORD *)v236;
            if ( (_UNKNOWN *)(*(_QWORD *)v236 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
            {
              v251 = *(_DWORD *)(v238 - 8);
              *(_DWORD *)(v238 - 8) = v251 - 1;
              if ( v251 <= 0 )
              {
                v270 = v235;
                std::string::_Rep::_M_destroy();
                v235 = v270;
              }
            }
            v236 = (std::string *)((char *)v236 + 8);
          }
          while ( v235 != v236 );
        }
        v236 = v280[0];
      }
      if ( v236 )
        operator delete(v236);
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)this + 2) + 328LL) = 0;
    }
    v184 = *((_QWORD *)this + 6);
    if ( v184 && v176 > 0 )
    {
      v185 = *((_QWORD *)this + 5);
      v186 = 0;
      v187 = 0;
      do
      {
        v46.m128d_f64[0] = *(double *)(v184 + 8LL * *(int *)(v185 + 4 * v187));
        *(double *)(v184 + 8 * v187) = v46.m128d_f64[0];
        if ( v46.m128d_f64[0] != 0.0 )
          ++v186;
        ++v187;
      }
      while ( (unsigned int)(v176 - 1) + 1LL != v187 );
      if ( v186 )
      {
        printf("%d costed slacks\n", v186);
        ClpModel::setRowObjective(*((ClpModel **)this + 2), *((const double **)this + 6));
      }
    }
    if ( v306 < 0 )
      goto LABEL_289;
    v188 = *((_QWORD **)this + 2);
    v189 = v188[34];
    if ( !v189 )
      goto LABEL_289;
    v190 = *((_QWORD *)this + 1);
    v191 = v188[22];
    v268 = (ClpObjective *)v188[23];
    v275 = *(_QWORD *)(v190 + 176);
    v276 = *(_QWORD *)(v190 + 184);
    if ( v261 <= 0 )
      goto LABEL_289;
    v278 = 0;
    v192 = 0;
    v274 = (unsigned int)(v261 - 1) + 1LL;
    do
    {
      while ( !*(_BYTE *)(v189 + v192) )
      {
LABEL_268:
        if ( ++v192 == v274 )
          goto LABEL_276;
      }
      v193 = (__m128d)*(unsigned __int64 *)(v191 + 8 * v192);
      v193.m128d_f64[0] = v193.m128d_f64[0] - 0.00001;
      v194 = 8LL * *(int *)(*((_QWORD *)this + 4) + 4 * v192);
      v195 = v193;
      v258 = *(double **)&v193.m128d_f64[0];
      v196 = (double *)(v275 + v194);
      v197 = v193.m128d_f64[0];
      v198 = (double *)(v276 + v194);
      v199 = *v196;
      v200 = *v198;
      if ( fabs(v193.m128d_f64[0]) < 4.503599627370496e15 )
      {
        v201.m128d_f64[0] = (double)(int)v193.m128d_f64[0];
        v258 = (double *)(COERCE_UNSIGNED_INT64(
                            (double)(int)v195.m128d_f64[0]
                          + COERCE_DOUBLE(
                              COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v195, v201).m128d_f64[0]))
                            & 0x3FF0000000000000LL))
                        | *(_QWORD *)&v197 & 0x8000000000000000LL);
      }
      v262 = *((double *)v268 + v192) + 0.00001;
      v202.m128d_f64[0] = v262;
      v46.m128d_f64[0] = fabs(v262);
      if ( v46.m128d_f64[0] < 4.503599627370496e15 )
      {
        v46 = 0;
        v46.m128d_f64[0] = (double)(int)v262;
        v46.m128d_f64[0] = v46.m128d_f64[0]
                         - COERCE_DOUBLE(
                             COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v46, v202).m128d_f64[0]))
                           & 0x3FF0000000000000LL);
        *(_QWORD *)&v262 = *(_QWORD *)&v46.m128d_f64[0] | *(_QWORD *)&v262 & 0x8000000000000000LL;
      }
      *(double *)(v191 + 8 * v192) = *(double *)&v258;
      *((double *)v268 + v192) = v262;
      if ( *(double *)&v258 <= v262 )
      {
        if ( *(double *)&v258 > v199 + 0.00000001 )
        {
          *v196 = *(double *)&v258;
          ++v71;
        }
        if ( v200 - 0.00000001 > v262 )
        {
          *v198 = v262;
          ++v71;
        }
        goto LABEL_268;
      }
      ++v71;
      v203 = (CoinMessageHandler *)CoinMessageHandler::message(
                                     *(CoinMessageHandler **)(*((_QWORD *)this + 2) + 344LL),
                                     15,
                                     (const CoinMessages *)v284);
      v204 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v203);
      v205 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v204);
      v46.m128d_f64[0] = v262;
      v206 = CoinMessageHandler::operator<<(v205);
      CoinMessageHandler::operator<<(v206, 0, v262);
      ++v192;
      v278 = 1;
    }
    while ( v192 != v274 );
LABEL_276:
    if ( !v71
      || (v223 = (CoinMessageHandler *)CoinMessageHandler::message(
                                         *(CoinMessageHandler **)(*((_QWORD *)this + 2) + 344LL),
                                         24,
                                         (const CoinMessages *)v284),
          v224 = CoinMessageHandler::operator<<(v223),
          CoinMessageHandler::operator<<(v224, 0, v46.m128d_f64[0]),
          --v279,
          v278)
      || v279 <= 0 )
    {
      CoinPresolveMatrix::~CoinPresolveMatrix((CoinPresolveMatrix *)&v285);
      if ( !v278 )
        goto LABEL_290;
LABEL_173:
      ClpPresolve::destroyPresolve(this);
      v137 = *((void **)this + 2);
      if ( *((void **)this + 1) != v137 && v137 )
      {
        ClpSimplex::~ClpSimplex(*((ClpSimplex **)this + 2));
        operator delete(v137);
      }
      *((_QWORD *)this + 2) = 0;
      v138 = 0;
      goto LABEL_177;
    }
    v225 = *((_QWORD **)this + 7);
    if ( v225 )
    {
      do
      {
        v226 = (_QWORD *)v225[1];
        (*(void (__fastcall **)(_QWORD *))(*v225 + 24LL))(v225);
        v225 = v226;
      }
      while ( v226 );
    }
    *((_QWORD *)this + 7) = 0;
    CoinPresolveMatrix::~CoinPresolveMatrix((CoinPresolveMatrix *)&v285);
  }
  if ( !(unsigned int)std::string::compare((ClpPresolve *)((char *)this + 88), "") )
  {
    v207 = *((void **)this + 2);
    if ( v207 )
    {
      ClpSimplex::~ClpSimplex(*((ClpSimplex **)this + 2));
      operator delete(v207);
    }
    v208 = (ClpSimplex *)operator new(0x6F0u);
    ClpSimplex::ClpSimplex(v208, a2, -1);
    v209 = *((const void **)v208 + 24);
    *((_QWORD *)this + 2) = v208;
    if ( v209 )
    {
      v210 = (__int64 (__fastcall ***)(ClpPackedMatrix *))__dynamic_cast(
                                                            v209,
                                                            (const struct __class_type_info *)&`typeinfo for'ClpMatrixBase,
                                                            (const struct __class_type_info *)&`typeinfo for'ClpPackedMatrix,
                                                            0);
      if ( v210 )
      {
        v211 = **v210;
        if ( v211 == ClpPackedMatrix::getPackedMatrix )
          v212 = (CoinPackedMatrix *)v210[11];
        else
          v212 = (CoinPackedMatrix *)v211((ClpPackedMatrix *)v210);
        CoinPackedMatrix::removeGaps(v212, -1.0);
        v208 = *((ClpSimplex **)this + 2);
      }
    }
  }
  else
  {
    *((_QWORD *)this + 2) = a2;
    v208 = a2;
  }
  ClpModel::dropNames(v208);
  if ( !a4 )
    ClpModel::deleteIntegerInformation(*((ClpModel **)this + 2));
LABEL_289:
  CoinPresolveMatrix::~CoinPresolveMatrix((CoinPresolveMatrix *)&v285);
LABEL_290:
  v138 = *((_QWORD *)this + 2);
  v213 = *(void (**)(void))(**(_QWORD **)(v138 + 192) + 16LL);
  if ( (char *)v213 != (char *)ClpPackedMatrix::getNumElements )
  {
    v213();
    v138 = *((_QWORD *)this + 2);
  }
LABEL_177:
  CoinMessages::~CoinMessages((CoinMessages *)v284);
  return v138;
}

