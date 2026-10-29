__int64 __fastcall ClpPackedMatrix::scale(
        ClpPackedMatrix *this,
        ClpModel *a2,
        ClpSimplex *a3,
        double a4,
        __m128 a5,
        double a6,
        double a7)
{
  __int64 v8; // rax
  int v9; // r13d
  ClpModel *v10; // rax
  void *v11; // rbx
  ClpPackedMatrix *v12; // rdi
  void (__fastcall *v13)(ClpPackedMatrix *); // rax
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rdi
  _BYTE *v17; // rbx
  __int64 v18; // r14
  _QWORD *v19; // rax
  __int64 v20; // r10
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // r12
  __int64 v24; // r14
  int v25; // r8d
  int v26; // edi
  __int64 v27; // rdx
  double *v28; // rax
  char v29; // si
  char v30; // bp
  __int64 v31; // rcx
  __int64 v32; // rax
  CoinMessageHandler *v33; // rax
  CoinMessageHandler *v34; // rax
  __int64 v35; // rax
  __int64 (__fastcall *v36)(const CoinPackedMatrix **); // rax
  CoinPackedMatrix *v37; // r15
  __int64 v38; // rax
  int v39; // edx
  ClpMatrixBase *v40; // rsi
  int v41; // eax
  __int64 v42; // rax
  __int64 (*v43)(void); // rdx
  __int64 v44; // r11
  __int64 (__fastcall *v45)(ClpPackedMatrix *); // rdx
  __int64 (__fastcall *v46)(ClpPackedMatrix *); // rax
  __int64 v47; // r8
  double v48; // xmm7_8
  double v49; // xmm0_8
  ClpModel *v50; // rax
  int v51; // esi
  int v52; // eax
  __int64 v53; // r15
  double v54; // xmm10_8
  double v55; // xmm6_8
  double *v56; // r11
  double v57; // xmm2_8
  _BOOL4 v58; // esi
  _BOOL4 v59; // edi
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rax
  __int64 v63; // r14
  __int64 v64; // r8
  unsigned __int64 v65; // rdx
  unsigned int v66; // eax
  signed int v67; // eax
  int v68; // edx
  int v69; // eax
  unsigned __int64 v70; // rdx
  unsigned int v71; // eax
  signed int v72; // eax
  int v73; // edx
  int v74; // eax
  __int64 v75; // rdi
  __int64 v76; // rax
  int v77; // edx
  double v78; // xmm1_8
  __int64 v79; // rsi
  __int64 v80; // r10
  __int64 v81; // rdx
  __int64 v82; // rax
  double v83; // xmm0_8
  double v84; // xmm4_8
  __int64 v85; // rax
  double v86; // xmm0_8
  double v87; // xmm1_8
  int v88; // r10d
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // rax
  int v92; // ecx
  __int64 v93; // r9
  __int64 v94; // rdi
  __int64 v95; // rax
  double v96; // xmm0_8
  double v97; // xmm0_8
  double *v98; // rax
  double v99; // xmm0_8
  int v100; // eax
  double v101; // xmm0_8
  __int64 v102; // rsi
  int v103; // r9d
  __int64 v104; // r8
  double v105; // xmm5_8
  double *v106; // rdi
  _DWORD *v107; // r10
  __int64 v108; // rax
  double v109; // xmm11_8
  __int64 v110; // rsi
  __int64 v111; // r11
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rdx
  double v115; // xmm0_8
  double v116; // xmm12_8
  double v117; // xmm0_8
  CoinMessageHandler *v118; // rax
  CoinMessageHandler *v119; // rax
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // r11
  __int64 v123; // rax
  int v124; // ecx
  double v125; // xmm4_8
  double v126; // xmm1_8
  __int64 v127; // rsi
  __int64 v128; // r10
  __int64 v129; // rdi
  __int64 v130; // rax
  double v131; // xmm0_8
  __int64 v132; // rcx
  double v133; // xmm0_8
  double v134; // xmm4_8
  double v135; // xmm0_8
  __int64 v136; // r9
  __int64 v137; // rax
  __int64 v138; // rcx
  double v139; // xmm1_8
  double v140; // xmm3_8
  __int64 v141; // rdx
  __int64 v142; // r8
  __int64 v143; // rdi
  __int64 v144; // rcx
  int v145; // esi
  double v146; // xmm0_8
  double v147; // xmm0_8
  double v148; // xmm0_8
  __int64 v149; // rax
  CoinMessageHandler *v150; // rax
  CoinMessageHandler *v151; // rax
  __int64 v152; // rax
  __int128 v153; // xmm0
  __int64 v154; // rax
  CoinFactorization *v155; // rdi
  double v156; // xmm4_8
  double v157; // xmm5_8
  const void *v158; // rdi
  _QWORD *v159; // rbx
  __int64 v160; // rax
  __int64 (__fastcall *v161)(ClpPackedMatrix *); // rdx
  __int64 (__fastcall *v162)(ClpPackedMatrix *); // rax
  __int64 v163; // rdx
  __int64 v164; // rax
  int v165; // ecx
  __int64 v166; // rax
  unsigned int v167; // edx
  signed int v168; // eax
  __int64 v169; // rdx
  int v170; // eax
  int v171; // ecx
  __int64 v172; // rax
  unsigned int v173; // edx
  signed int v174; // eax
  __int64 v175; // rdx
  int v176; // eax
  _QWORD *v177; // r15
  __int64 v178; // rax
  __int64 v179; // rdx
  __int64 (__fastcall *v180)(ClpPackedMatrix *); // rcx
  __int64 v181; // r14
  __int64 v182; // rbx
  __int64 (__fastcall *v183)(ClpPackedMatrix *); // rax
  __int64 v184; // rax
  __int64 v185; // r9
  __int64 v186; // rcx
  __int64 v187; // rsi
  __int64 v188; // rdi
  __int64 v189; // rcx
  __int64 v190; // rdx
  __int64 v191; // rdi
  CoinMessageHandler *v193; // rax
  CoinMessageHandler *v194; // rax
  __int64 v195; // rax
  unsigned __int64 v196; // rax
  unsigned __int64 v197; // rax
  CoinPackedMatrix *v198; // rbx
  ClpPackedMatrix *v199; // r13
  double v200; // xmm4_8
  double v201; // xmm5_8
  ClpModel *v202; // rax
  void *v203; // r14
  ClpPackedMatrix *v204; // rdi
  void (__fastcall *v205)(ClpPackedMatrix *); // rax
  __int64 v206; // r10
  __int64 v207; // r9
  __int64 v208; // r8
  double *v209; // rbx
  _DWORD *v210; // r10
  __int64 v211; // rcx
  double v212; // xmm1_8
  __int64 v213; // rdi
  __int64 v214; // rax
  __int64 v215; // rcx
  __int64 v216; // rdx
  __int64 v217; // rax
  int v218; // ecx
  __int64 v219; // rdx
  _QWORD *v220; // rsi
  int v221; // r10d
  int v222; // r8d
  unsigned int v223; // esi
  unsigned __int64 v224; // rdi
  __int64 v225; // rdx
  signed int v226; // edx
  __int64 v227; // xmm0_8
  int v228; // esi
  int v229; // edx
  __int64 v230; // rdx
  unsigned __int64 v231; // rdi
  int v232; // r10d
  int v233; // r8d
  unsigned int v234; // esi
  unsigned __int64 v235; // rdi
  __int64 v236; // rdx
  signed int v237; // edx
  int v238; // esi
  int v239; // edx
  __int64 (__fastcall *v240)(const CoinPackedMatrix **); // rax
  CoinPackedMatrix *v241; // r15
  __int64 v242; // rax
  int v243; // edx
  int v244; // eax
  void (__fastcall *v245)(ClpPackedMatrix *); // rax
  __int64 v246; // rax
  __int64 v247; // rax
  unsigned __int64 v248; // rax
  __int64 v249; // rax
  CoinOtherFactorization *v250; // rdi
  __int64 v251; // rax
  CoinMessageHandler *v252; // rax
  CoinMessageHandler *v253; // rax
  __int64 v254; // rax
  __int64 v255; // rdx
  unsigned __int64 v256; // rdx
  CoinMessageHandler *v257; // rax
  CoinMessageHandler *v258; // rax
  __int64 v259; // rax
  double v260; // [rsp+8h] [rbp-210h]
  int v262; // [rsp+1Ch] [rbp-1FCh]
  double v263; // [rsp+20h] [rbp-1F8h]
  int v264; // [rsp+20h] [rbp-1F8h]
  double v265; // [rsp+20h] [rbp-1F8h]
  double v266; // [rsp+20h] [rbp-1F8h]
  double v267; // [rsp+28h] [rbp-1F0h]
  unsigned int v268; // [rsp+28h] [rbp-1F0h]
  __int64 v269; // [rsp+30h] [rbp-1E8h]
  __int64 v270; // [rsp+38h] [rbp-1E0h]
  __int64 v271; // [rsp+40h] [rbp-1D8h]
  __int64 v272; // [rsp+48h] [rbp-1D0h]
  __int64 v273; // [rsp+50h] [rbp-1C8h]
  double *v274; // [rsp+50h] [rbp-1C8h]
  __int64 v275; // [rsp+50h] [rbp-1C8h]
  __int64 v276; // [rsp+50h] [rbp-1C8h]
  int v277; // [rsp+60h] [rbp-1B8h]
  double v278; // [rsp+60h] [rbp-1B8h]
  __int64 v279; // [rsp+70h] [rbp-1A8h]
  __int64 v280; // [rsp+70h] [rbp-1A8h]
  int v281; // [rsp+70h] [rbp-1A8h]
  double v282; // [rsp+70h] [rbp-1A8h]
  double *v283; // [rsp+78h] [rbp-1A0h]
  double *v284; // [rsp+78h] [rbp-1A0h]
  double *v285; // [rsp+78h] [rbp-1A0h]
  unsigned __int64 v286; // [rsp+80h] [rbp-198h]
  __int64 v287; // [rsp+90h] [rbp-188h]
  __int64 v288; // [rsp+A0h] [rbp-178h]
  _QWORD *v289; // [rsp+B0h] [rbp-168h]
  __int64 v290; // [rsp+B0h] [rbp-168h]
  __int64 v291; // [rsp+B0h] [rbp-168h]
  __int64 v292; // [rsp+C0h] [rbp-158h]
  int v293; // [rsp+D0h] [rbp-148h]
  __int64 v294; // [rsp+D0h] [rbp-148h]
  _DWORD *v295; // [rsp+E0h] [rbp-138h]
  ClpMatrixBase *v296; // [rsp+E8h] [rbp-130h]
  __int64 v297; // [rsp+F0h] [rbp-128h]
  int v298; // [rsp+F8h] [rbp-120h]
  double v299; // [rsp+100h] [rbp-118h]
  CoinMessages *v300; // [rsp+110h] [rbp-108h]
  unsigned int v301; // [rsp+118h] [rbp-100h]
  _BOOL4 v302; // [rsp+11Ch] [rbp-FCh]
  unsigned __int64 v303; // [rsp+120h] [rbp-F8h]
  unsigned __int64 v304; // [rsp+128h] [rbp-F0h]
  __int64 v305; // [rsp+130h] [rbp-E8h]
  _BOOL4 v306; // [rsp+138h] [rbp-E0h]
  unsigned int v307; // [rsp+13Ch] [rbp-DCh]
  unsigned int v308; // [rsp+140h] [rbp-D8h]
  int v309; // [rsp+144h] [rbp-D4h]
  unsigned int v310; // [rsp+148h] [rbp-D0h]
  unsigned int v311; // [rsp+14Ch] [rbp-CCh]
  __int64 v312; // [rsp+150h] [rbp-C8h]
  double *s; // [rsp+158h] [rbp-C0h]
  double *v315; // [rsp+168h] [rbp-B0h]
  __int64 v316; // [rsp+170h] [rbp-A8h]
  int v317; // [rsp+178h] [rbp-A0h]
  int v318; // [rsp+17Ch] [rbp-9Ch]
  unsigned int v319; // [rsp+180h] [rbp-98h]
  unsigned int v320; // [rsp+184h] [rbp-94h]
  double *v321; // [rsp+188h] [rbp-90h]
  __int64 v322; // [rsp+190h] [rbp-88h]
  __int64 v323; // [rsp+198h] [rbp-80h]
  __int64 v324; // [rsp+1A0h] [rbp-78h]
  __int64 v325; // [rsp+1A8h] [rbp-70h]
  double v326; // [rsp+1B8h] [rbp-60h]
  __int64 v327; // [rsp+1C0h] [rbp-58h]
  char v328; // [rsp+1D3h] [rbp-45h]
  int v329; // [rsp+1D4h] [rbp-44h]

  v8 = *((_QWORD *)this + 11);
  v9 = *((_DWORD *)a2 + 26);
  v262 = *(_DWORD *)(v8 + 64);
  if ( !*(_BYTE *)(v8 + 8) )
    v262 = *(_DWORD *)(v8 + 68);
  v10 = a2;
  v11 = *((void **)a2 + 26);
  if ( v11 )
  {
    v12 = *((ClpPackedMatrix **)a2 + 26);
    v13 = *(void (__fastcall **)(ClpPackedMatrix *))(*(_QWORD *)v11 + 480LL);
    if ( v13 == ClpPackedMatrix::~ClpPackedMatrix )
    {
      ClpPackedMatrix::~ClpPackedMatrix(v12);
      operator delete(v11);
    }
    else
    {
      v13(v12);
    }
    v10 = a2;
  }
  *((_QWORD *)v10 + 26) = 0;
  if ( v262 == 0 || v9 == 0 )
  {
    ClpModel::setRowScale(a2, nullptr);
    ClpModel::setColumnScale(a2, nullptr);
    return 1;
  }
  v14 = *((_QWORD *)a2 + 28);
  v296 = *((ClpMatrixBase **)a2 + 25);
  if ( v14 )
  {
    v15 = *((_QWORD *)a2 + 29);
    v16 = v262;
    v328 = 1;
    s = *((double **)a2 + 30);
    v321 = *((double **)a2 + 31);
  }
  else
  {
    v196 = 2 * v9;
    if ( v196 > 0xFFFFFFFFFFFFFFFLL || (v14 = operator new[](8 * v196), v197 = 2 * v262, v197 > 0xFFFFFFFFFFFFFFFLL) )
      __cxa_throw_bad_array_new_length();
    v16 = v262;
    v15 = operator new[](8 * v197);
    v328 = 0;
    s = (double *)(v14 + 8LL * v9);
    v321 = (double *)(v15 + 8LL * v262);
  }
  v17 = (_BYTE *)operator new[](v16);
  v18 = *((_QWORD *)a2 + 19);
  v305 = *((_QWORD *)a2 + 18);
  v324 = *((_QWORD *)a2 + 23);
  v297 = *((_QWORD *)a2 + 22);
  v19 = *((_QWORD **)this + 11);
  v20 = v19[7];
  v289 = v19;
  v269 = v19[6];
  v272 = v19[5];
  v270 = v20;
  v271 = v19[4];
  if ( v262 > 0 )
  {
    v286 = v15;
    v263 = 1.0e50;
    v21 = 0;
    a7 = NAN;
    v267 = 0.0;
    v22 = v19[4];
    v288 = *((_QWORD *)a2 + 19);
    v23 = v19[5];
    v277 = 0;
    v273 = v22 + 8;
    v24 = *((_QWORD *)a2 + 23);
    v283 = (double *)v14;
    while ( 1 )
    {
      a5.m128_u64[0] = *(_QWORD *)(v24 + 8 * v21);
      v25 = *(_DWORD *)(v269 + 4 * v21);
      v26 = v25 + *(_DWORD *)(v20 + 4 * v21);
      if ( *(double *)a5.m128_u64 > *(double *)(v297 + 8 * v21) + 1.0e-12
        || a3 && (*(_BYTE *)(*((_QWORD *)a3 + 33) + v21) & 7) == 1 )
      {
        if ( v25 < v26 )
        {
          v27 = v25;
          v98 = (double *)(v22 + 8LL * v25);
          v30 = 0;
          v29 = 0;
          do
          {
            v99 = fabs(*v98);
            if ( v99 > 9.999999999999999e-21 )
            {
              v30 = 1;
              v267 = fmax(v267, v99);
              *(double *)a5.m128_u64 = fmin(v263, v99);
              v263 = *(double *)a5.m128_u64;
            }
            else
            {
              v29 = 1;
            }
            ++v98;
          }
          while ( (double *)(v273 + 8 * (v25 + (unsigned __int64)(unsigned int)(*(_DWORD *)(v20 + 4 * v21) - 1))) != v98 );
LABEL_21:
          v17[v21] = v30;
          if ( v29 )
          {
            v100 = v25;
            do
            {
              v101 = *(double *)(v22 + 8 * v27);
              a5.m128_u64[0] = fabs(v101);
              if ( *(double *)a5.m128_u64 > 9.999999999999999e-21 )
              {
                v102 = v100++;
                *(_DWORD *)(v23 + 4 * v102) = *(_DWORD *)(v23 + 4 * v27);
                *(double *)(v22 + 8 * v102) = v101;
              }
              ++v27;
            }
            while ( v26 > (int)v27 );
            v277 += v26 - v100;
            *(_DWORD *)(v20 + 4 * v21) = v100 - v25;
          }
          goto LABEL_22;
        }
      }
      else if ( v25 < v26 )
      {
        v27 = v25;
        v28 = (double *)(v22 + 8LL * v25);
        v29 = 0;
        do
        {
          if ( fabs(*v28) <= 9.999999999999999e-21 )
            v29 = 1;
          ++v28;
        }
        while ( (double *)(v273 + 8 * (v25 + (unsigned __int64)(unsigned int)(*(_DWORD *)(v20 + 4 * v21) - 1))) != v28 );
        v30 = 0;
        goto LABEL_21;
      }
      v17[v21] = 0;
LABEL_22:
      if ( (unsigned int)(v262 - 1) + 1LL == ++v21 )
      {
        v14 = (unsigned __int64)v283;
        v15 = v286;
        v18 = v288;
        if ( (*((_BYTE *)a2 + 338) & 0x40) != 0 )
        {
          v31 = *((_QWORD *)a2 + 34);
          v32 = 0;
          if ( v31 )
          {
            do
            {
              if ( *(_BYTE *)(v31 + v32) )
                v17[v32] = 0;
              ++v32;
            }
            while ( (unsigned int)(v262 - 1) + 1LL != v32 );
          }
        }
        if ( v277 )
        {
          *((_DWORD *)v289 + 18) -= v277;
          *((_DWORD *)this + 25) |= 2u;
        }
LABEL_30:
        v300 = (ClpModel *)((char *)a2 + 416);
        v33 = (CoinMessageHandler *)CoinMessageHandler::message(
                                      *((CoinMessageHandler **)a2 + 43),
                                      35,
                                      (ClpModel *)((char *)a2 + 416));
        v34 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v33);
        v35 = CoinMessageHandler::operator<<(v34);
        CoinMessageHandler::operator<<(v35, 0, v267);
        if ( v267 > v263 * 1.0e12 && a3 )
        {
          a5.m128_u64[0] = 0x3EA0C6F7A0B5ED8DLL;
          *((double *)a3 + 109) = fmax(*((double *)a3 + 109), 0.0000005);
          *((double *)a3 + 110) = fmax(*((double *)a3 + 110), 0.0000005);
        }
        goto LABEL_33;
      }
    }
  }
  if ( (*((_BYTE *)a2 + 338) & 0x40) != 0 && *((_QWORD *)a2 + 34) )
  {
    v277 = 0;
    v267 = 0.0;
    v263 = 1.0e50;
    goto LABEL_30;
  }
  v300 = (ClpModel *)((char *)a2 + 416);
  v252 = (CoinMessageHandler *)CoinMessageHandler::message(
                                 *((CoinMessageHandler **)a2 + 43),
                                 35,
                                 (ClpModel *)((char *)a2 + 416));
  v253 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v252);
  v254 = CoinMessageHandler::operator<<(v253);
  CoinMessageHandler::operator<<(v254, 0, 0.0);
  v277 = 0;
  v267 = 0.0;
  v263 = 1.0e50;
LABEL_33:
  if ( v263 >= 0.5 && v267 <= 2.0 )
  {
    if ( !v277 )
    {
      v251 = CoinMessageHandler::message(*((CoinMessageHandler **)a2 + 43), 38, v300);
      CoinMessageHandler::operator<<(v251, 0, 2.0);
      if ( v328 )
      {
        ClpModel::setRowScale(a2, nullptr);
        ClpModel::setColumnScale(a2, nullptr);
      }
      else
      {
        operator delete[]((void *)v14);
        if ( v15 )
          operator delete[]((void *)v15);
      }
      operator delete[](v17);
      return 1;
    }
    if ( v296 )
      goto LABEL_37;
LABEL_291:
    v240 = *(__int64 (__fastcall **)(const CoinPackedMatrix **))(*(_QWORD *)this + 128LL);
    if ( v240 == ClpPackedMatrix::reverseOrderedCopy )
    {
      v296 = (ClpMatrixBase *)operator new(0x78u);
      ClpPackedMatrix::ClpPackedMatrix(v296);
      v241 = (CoinPackedMatrix *)operator new(0x58u);
      CoinPackedMatrix::CoinPackedMatrix(v241);
      *((_QWORD *)v296 + 11) = v241;
      CoinPackedMatrix::setExtraGap(v241, 0.0);
      CoinPackedMatrix::setExtraMajor(*((CoinPackedMatrix **)v296 + 11), 0.0);
      CoinPackedMatrix::reverseOrderedCopyOf(*((CoinPackedMatrix **)v296 + 11), *((const CoinPackedMatrix **)this + 11));
      v242 = *((_QWORD *)v296 + 11);
      v243 = *(_DWORD *)(v242 + 64);
      if ( !*(_BYTE *)(v242 + 8) )
        v243 = *(_DWORD *)(v242 + 68);
      v244 = *((_DWORD *)this + 25);
      *((_DWORD *)v296 + 24) = v243;
      *((_DWORD *)v296 + 25) = v244 & 0xFFFFFFFD;
    }
    else
    {
      v296 = (ClpMatrixBase *)v240((const CoinPackedMatrix **)this);
    }
    goto LABEL_44;
  }
  if ( !v296 )
    goto LABEL_291;
  if ( v277 )
  {
LABEL_37:
    v36 = *(__int64 (__fastcall **)(const CoinPackedMatrix **))(*(_QWORD *)this + 128LL);
    if ( v36 == ClpPackedMatrix::reverseOrderedCopy )
    {
      v296 = (ClpMatrixBase *)operator new(0x78u);
      ClpPackedMatrix::ClpPackedMatrix(v296);
      v37 = (CoinPackedMatrix *)operator new(0x58u);
      CoinPackedMatrix::CoinPackedMatrix(v37);
      *((_QWORD *)v296 + 11) = v37;
      CoinPackedMatrix::setExtraGap(v37, 0.0);
      CoinPackedMatrix::setExtraMajor(*((CoinPackedMatrix **)v296 + 11), 0.0);
      CoinPackedMatrix::reverseOrderedCopyOf(*((CoinPackedMatrix **)v296 + 11), *((const CoinPackedMatrix **)this + 11));
      v38 = *((_QWORD *)v296 + 11);
      v39 = *(_DWORD *)(v38 + 64);
      if ( !*(_BYTE *)(v38 + 8) )
        v39 = *(_DWORD *)(v38 + 68);
      v40 = v296;
      v41 = *((_DWORD *)this + 25);
      *((_DWORD *)v296 + 24) = v39;
      *((_DWORD *)v296 + 25) = v41 & 0xFFFFFFFD;
    }
    else
    {
      v296 = (ClpMatrixBase *)v36((const CoinPackedMatrix **)this);
      v40 = v296;
    }
    ClpModel::setNewRowCopy(a2, v40);
  }
LABEL_44:
  v42 = *(_QWORD *)v296;
  v43 = *(__int64 (**)(void))(*(_QWORD *)v296 + 48LL);
  if ( (char *)v43 == (char *)ClpPackedMatrix::getIndices )
  {
    v44 = *(_QWORD *)(*((_QWORD *)v296 + 11) + 40LL);
  }
  else
  {
    v44 = v43();
    v42 = *(_QWORD *)v296;
  }
  v45 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(v42 + 56);
  if ( v45 == ClpPackedMatrix::getVectorStarts )
  {
    v279 = *(_QWORD *)(*((_QWORD *)v296 + 11) + 48LL);
  }
  else
  {
    v276 = v44;
    v247 = v45(v296);
    v44 = v276;
    v279 = v247;
    v42 = *(_QWORD *)v296;
  }
  v46 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(v42 + 40);
  if ( v46 == ClpPackedMatrix::getElements )
  {
    v47 = *(_QWORD *)(*((_QWORD *)v296 + 11) + 32LL);
  }
  else
  {
    v275 = v44;
    v246 = v46(v296);
    v44 = v275;
    v47 = v246;
  }
  v48 = v263;
  if ( v267 > 1.0e13 * v263 )
  {
    v48 = v263 / v267;
    a5.m128_u64[0] = *((_QWORD *)a2 + 88);
    v49 = fmax(0.5 * (v263 / v267), 1.0e-18);
    if ( *(double *)a5.m128_u64 > v49 )
      *((double *)a2 + 88) = v49;
  }
  v50 = a2;
  v51 = *((_DWORD *)a2 + 64);
  if ( v51 == 4 )
  {
    v264 = 3;
  }
  else
  {
    v52 = 2;
    if ( v51 != 5 )
      v52 = *((_DWORD *)a2 + 64);
    v264 = v52;
    v50 = a2;
  }
  v53 = v44;
  v54 = 0.0;
  v55 = 5.0 * *((double *)v50 + 4);
  v56 = (double *)v279;
  v57 = 1.0;
  v301 = v9 - 1;
  v318 = *(_DWORD *)(*((_QWORD *)v50 + 43) + 104LL);
  v58 = (v14 & 8) != 0;
  v302 = v58;
  v309 = v9 - v58;
  v307 = (v9 - v58) & 0xFFFFFFFE;
  v308 = (unsigned int)(v9 - v58) >> 1;
  v319 = v307 + v58;
  v322 = 8LL * ((v14 & 8) != 0);
  v303 = v14 + v322;
  v59 = (v15 & 8) != 0;
  v268 = v262 - 1;
  v306 = v59;
  v317 = v262 - v59;
  v310 = (v262 - v59) & 0xFFFFFFFE;
  v311 = (unsigned int)(v262 - v59) >> 1;
  v320 = v310 + v59;
  v323 = 8LL * ((v15 & 8) != 0);
  v304 = v15 + v323;
  v60 = (unsigned int)(v9 - 1);
  v61 = v14 + 8 * v60 + 8;
  v325 = v60 + 1;
  v316 = 4 * (v60 + 1);
  v62 = v18;
  v315 = (double *)v61;
  v63 = v47;
  v64 = v62;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v9 <= 0 )
        goto LABEL_71;
      if ( v301 <= 4 )
      {
        v67 = 0;
        goto LABEL_66;
      }
      if ( (v14 & 8) != 0 )
        *(_QWORD *)v14 = 0x3FF0000000000000LL;
      v65 = v14 + v322;
      v66 = 0;
      do
      {
        ++v66;
        v65 += 16LL;
        *(_OWORD *)(v65 - 16) = xmmword_289DC0;
      }
      while ( v308 > v66 );
      if ( v307 != v309 )
      {
        v67 = v319;
LABEL_66:
        *(_QWORD *)(v14 + 8LL * v67) = 0x3FF0000000000000LL;
        if ( v67 + 1 < v9 )
        {
          *(_QWORD *)(v14 + 8LL * (v67 + 1)) = 0x3FF0000000000000LL;
          if ( v67 + 2 < v9 )
          {
            *(_QWORD *)(v14 + 8LL * (v67 + 2)) = 0x3FF0000000000000LL;
            v68 = v67 + 3;
            if ( v67 + 3 < v9 )
            {
              v69 = v67 + 4;
              *(_QWORD *)(v14 + 8LL * v68) = 0x3FF0000000000000LL;
              if ( v69 < v9 )
                *(_QWORD *)(v14 + 8LL * v69) = 0x3FF0000000000000LL;
            }
          }
        }
      }
LABEL_71:
      if ( v262 <= 0 )
        goto LABEL_84;
      if ( v268 <= 4 )
      {
        v72 = 0;
        goto LABEL_79;
      }
      if ( (v15 & 8) != 0 )
        *(_QWORD *)v15 = 0x3FF0000000000000LL;
      v70 = v15 + v323;
      v71 = 0;
      do
      {
        ++v71;
        v70 += 16LL;
        *(_OWORD *)(v70 - 16) = xmmword_289DC0;
      }
      while ( v71 < v311 );
      if ( v310 != v317 )
      {
        v72 = v320;
LABEL_79:
        *(_QWORD *)(v15 + 8LL * v72) = 0x3FF0000000000000LL;
        if ( v72 + 1 < v262 )
        {
          *(_QWORD *)(v15 + 8LL * (v72 + 1)) = 0x3FF0000000000000LL;
          if ( v72 + 2 < v262 )
          {
            *(_QWORD *)(v15 + 8LL * (v72 + 2)) = 0x3FF0000000000000LL;
            v73 = v72 + 3;
            if ( v262 > v72 + 3 )
            {
              v74 = v72 + 4;
              *(_QWORD *)(v15 + 8LL * v73) = 0x3FF0000000000000LL;
              if ( v262 > v74 )
                *(_QWORD *)(v15 + 8LL * v74) = 0x3FF0000000000000LL;
            }
          }
        }
      }
LABEL_84:
      if ( (v264 & 0xFFFFFFFD) == 1 )
      {
        if ( v9 <= 0 )
        {
          v84 = 1.0e20;
        }
        else
        {
          v75 = 0;
          do
          {
            v76 = *(int *)((char *)v56 + v75);
            v77 = *(_DWORD *)((char *)v56 + v75 + 4);
            if ( (int)v76 >= v77 )
            {
              v83 = 1.0e10;
            }
            else
            {
              v78 = 1.0e-10;
              v79 = v53 + 4 * v76;
              v80 = v63 + 8 * v76;
              v81 = (unsigned int)(v77 - 1 - v76) + 1LL;
              v82 = 0;
              do
              {
                if ( v17[*(int *)(v79 + 4 * v82)] )
                  v78 = fmax(v78, fabs(*(double *)(v80 + 8 * v82)));
                ++v82;
              }
              while ( v81 != v82 );
              v83 = 1.0 / v78;
            }
            *(double *)(v14 + 2 * v75) = v83;
            v75 += 4;
          }
          while ( v316 != v75 );
          v84 = 1.0e20;
LABEL_95:
          a7 = 0.0001;
          v85 = 0;
          v48 = 1.0e-10;
          do
          {
            a5.m128_u64[0] = *(_QWORD *)(v14 + 8 * v85);
            v86 = (*(double *)(v64 + 8 * v85) - *(double *)(v305 + 8 * v85)) * *(double *)a5.m128_u64;
            if ( v86 > v55 && v86 < 0.0001 )
            {
              v87 = *(double *)a5.m128_u64 * (0.0001 / v86);
              if ( v87 > 1.0e10 )
                a5.m128_u64[0] = 0x4202A05F20000000LL;
              else
                a5.m128_u64[0] = fmax(1.0e-10, v87);
              *(_QWORD *)(v14 + 8 * v85) = a5.m128_u64[0];
            }
            ++v85;
          }
          while ( v9 > (int)v85 );
        }
LABEL_102:
        v88 = *((_DWORD *)a2 + 64);
        if ( v88 != 5 )
        {
          if ( v262 <= 0 )
          {
            v84 = 1.0e50;
          }
          else
          {
            v280 = v64;
            v89 = 0;
            v84 = 1.0e50;
            v90 = v268 + 1LL;
            do
            {
              while ( 1 )
              {
                if ( v17[v89] )
                {
                  v91 = *(int *)(v269 + 4 * v89);
                  v92 = *(_DWORD *)(v270 + 4 * v89);
                  if ( (int)v91 >= (int)v91 + v92 )
                  {
                    a7 = 1.0e50;
                    a5.m128_u64[0] = 0x3BC79CA10C924223LL;
                  }
                  else
                  {
                    a7 = 1.0e50;
                    a5.m128_u64[0] = 0x3BC79CA10C924223LL;
                    v93 = v272 + 4 * v91;
                    v94 = v271 + 8 * v91;
                    v95 = 0;
                    do
                    {
                      v96 = *(double *)(v14 + 8LL * *(int *)(v93 + 4 * v95)) * *(double *)(v94 + 8 * v95);
                      ++v95;
                      v97 = fabs(v96);
                      *(double *)a5.m128_u64 = fmax(*(double *)a5.m128_u64, v97);
                      a7 = fmin(a7, v97);
                    }
                    while ( (unsigned int)(v92 - 1) + 1LL != v95 );
                  }
                  if ( v84 * *(double *)a5.m128_u64 > a7 )
                    break;
                }
                if ( v90 == ++v89 )
                  goto LABEL_112;
              }
              a7 = a7 / *(double *)a5.m128_u64;
              ++v89;
              v84 = a7;
            }
            while ( v90 != v89 );
LABEL_112:
            v64 = v280;
          }
        }
      }
      else
      {
        v103 = v9;
        v312 = v64;
        v281 = 2;
        v104 = v63;
        v274 = v56;
        v48 = 1.0e-50;
        a7 = NAN;
        if ( v9 > 0 )
        {
LABEL_131:
          v105 = 0.0;
          v84 = 1.0e50;
          v106 = (double *)v14;
          v107 = (_DWORD *)v274 + 1;
          do
          {
            v108 = (int)*(v107 - 1);
            if ( (int)v108 >= *v107 )
            {
              v117 = 1.0;
              v109 = 1.0e-50;
              a5.m128_u64[0] = 0x4A511B0EC57E649ALL;
            }
            else
            {
              a5.m128_u64[0] = 0x4A511B0EC57E649ALL;
              v109 = 1.0e-50;
              v110 = v53 + 4 * v108;
              v111 = v104 + 8 * v108;
              v112 = (unsigned int)(*v107 - 1 - v108) + 1LL;
              v113 = 0;
              do
              {
                v114 = *(int *)(v110 + 4 * v113);
                if ( v17[v114] )
                {
                  v115 = fabs(*(double *)(v111 + 8 * v113)) * *(double *)(v15 + 8 * v114);
                  v109 = fmax(v109, v115);
                  *(double *)a5.m128_u64 = fmin(*(double *)a5.m128_u64, v115);
                }
                ++v113;
              }
              while ( v112 != v113 );
              v116 = sqrt(v109 * *(double *)a5.m128_u64);
              if ( v109 * *(double *)a5.m128_u64 < 0.0 )
              {
                v329 = v103;
                v327 = v104;
                v295 = v107;
                v326 = v84;
                v299 = v105;
                sqrt(v109 * *(double *)a5.m128_u64);
                v107 = v295;
                v117 = 1.0 / v116;
                v104 = v327;
                v103 = v329;
                v105 = v299;
                v84 = v326;
              }
              else
              {
                v117 = 1.0 / v116;
              }
            }
            *v106 = v117;
            if ( v318 > 2 )
            {
              *(double *)a5.m128_u64 = fmin(*(double *)a5.m128_u64 * v117, v84);
              v105 = fmax(v109 * v117, v105);
              v84 = *(double *)a5.m128_u64;
            }
            ++v106;
            ++v107;
          }
          while ( v315 != v106 );
          goto LABEL_142;
        }
        while ( 1 )
        {
          v84 = 1.0e50;
          v105 = 0.0;
LABEL_142:
          v278 = v105;
          v88 = *((_DWORD *)a2 + 64);
          if ( v88 == 5 )
            break;
          v293 = v103;
          v290 = v104;
          *(double *)&v284 = v84;
          v118 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)a2 + 43), 36, v300);
          v119 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v118);
          v120 = CoinMessageHandler::operator<<(v119);
          CoinMessageHandler::operator<<(v120, 0, v278);
          v84 = *(double *)&v284;
          v104 = v290;
          v103 = v293;
          if ( v281 == 1 )
          {
            v63 = v290;
            v56 = v274;
            v9 = v293;
            v64 = v312;
            if ( v293 > 0 )
              goto LABEL_95;
            goto LABEL_102;
          }
          v121 = 0;
          v122 = v268 + 1LL;
          if ( v262 > 0 )
          {
            do
            {
              while ( !v17[v121] )
              {
                if ( v122 == ++v121 )
                  goto LABEL_154;
              }
              v123 = *(int *)(v269 + 4 * v121);
              v124 = *(_DWORD *)(v270 + 4 * v121);
              if ( (int)v123 >= (int)v123 + v124 )
              {
                v135 = 1.0;
              }
              else
              {
                v125 = 1.0e50;
                v126 = 1.0e-50;
                v127 = (unsigned int)(v124 - 1) + 1LL;
                v128 = v272 + 4 * v123;
                v129 = v271 + 8 * v123;
                v130 = 0;
                do
                {
                  v131 = *(double *)(v129 + 8 * v130);
                  v132 = *(int *)(v128 + 4 * v130++);
                  v133 = fabs(v131) * *(double *)(v14 + 8 * v132);
                  v126 = fmax(v126, v133);
                  v125 = fmin(v125, v133);
                }
                while ( v127 != v130 );
                *(double *)a5.m128_u64 = v126 * v125;
                v134 = sqrt(*(double *)a5.m128_u64);
                if ( *(double *)a5.m128_u64 < 0.0 )
                {
                  v298 = v103;
                  v294 = v104;
                  v292 = v121;
                  v291 = v122;
                  v282 = v134;
                  sqrt(*(double *)a5.m128_u64);
                  v122 = v291;
                  v135 = 1.0 / v282;
                  v121 = v292;
                  v104 = v294;
                  v103 = v298;
                }
                else
                {
                  v135 = 1.0 / v134;
                }
              }
              *(double *)(v15 + 8 * v121++) = v135;
            }
            while ( v122 != v121 );
          }
LABEL_154:
          v281 = 1;
          if ( v103 > 0 )
            goto LABEL_131;
        }
        v63 = v104;
        v56 = v274;
        v9 = v103;
        v64 = v312;
        if ( v103 > 0 )
          goto LABEL_95;
      }
      if ( (unsigned int)(v264 - 1) <= 1 )
        goto LABEL_162;
      v48 = 0.0;
      if ( v54 != 0.0 || v264 == 4 )
        break;
      v54 = v84;
      v264 = 4;
    }
    if ( v84 > v54 + v54 )
      break;
    v264 = 1;
    if ( v88 == 4 && (*((_BYTE *)a2 + 337) & 4) != 0 )
    {
      v287 = v64;
      v285 = v56;
      ClpModel::scaling(a2, 1);
      v56 = v285;
      v64 = v287;
    }
  }
  if ( v88 == 4 && (*((_BYTE *)a2 + 337) & 4) != 0 )
  {
    v266 = v84;
    ClpModel::scaling(a2, 2);
    v84 = v266;
  }
LABEL_162:
  if ( v84 < 0.1 )
  {
    v265 = sqrt(v84);
    if ( v84 < 0.0 )
      sqrt(v84);
    v48 = 1.0 / v265;
    v260 = fmin(100.0, 1.0 / v265);
  }
  else
  {
    v260 = 1.0;
  }
  memset(s, 0, v9);
  if ( *((_DWORD *)a2 + 64) == 5 )
  {
    v193 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)a2 + 43), 37, v300);
    v194 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v193);
    *(double *)&v153 = v260;
    v195 = CoinMessageHandler::operator<<(v194);
    CoinMessageHandler::operator<<(v195, 0, v260);
    goto LABEL_185;
  }
  if ( v262 <= 0 )
  {
    if ( v9 > 0 )
    {
      v55 = 1.0e50;
      goto LABEL_176;
    }
    v257 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)a2 + 43), 37, v300);
    v258 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v257);
    *(double *)&v153 = v260;
    v259 = CoinMessageHandler::operator<<(v258);
    CoinMessageHandler::operator<<(v259, 0, v260);
    operator delete[](v17);
    v158 = *((const void **)a2 + 20);
    if ( v158 )
      goto LABEL_186;
  }
  else
  {
    v55 = 1.0e50;
    v48 = 0.00001;
    v136 = 4LL * v268 + 4;
    v137 = 0;
    do
    {
      while ( 1 )
      {
        a5.m128_u64[0] = *(_QWORD *)(v324 + 2 * v137);
        if ( *(double *)a5.m128_u64 > *(double *)(v297 + 2 * v137) + 1.0e-12 )
          break;
        *(_QWORD *)(v15 + 2 * v137) = 0x3FF0000000000000LL;
        v137 += 4;
        if ( v136 == v137 )
          goto LABEL_175;
      }
      v138 = *(int *)(v269 + v137);
      if ( (int)v138 + *(_DWORD *)(v270 + v137) <= (int)v138 )
      {
        v139 = 1.0e50;
        v140 = 9.999999999999999e-21;
      }
      else
      {
        v139 = 1.0e50;
        v140 = 9.999999999999999e-21;
        v141 = (int)v138 + 1;
        v142 = v272 + -4 * v141 + 4 * v138;
        v143 = v271 + -8 * v141 + 8 * v138;
        do
        {
          v144 = *(int *)(v142 + 4 * v141);
          v145 = v141;
          *((_BYTE *)s + v144) = 1;
          v146 = *(double *)(v14 + 8 * v144) * *(double *)(v143 + 8 * v141++);
          v147 = fabs(v146);
          v140 = fmax(v140, v147);
          v139 = fmin(v139, v147);
        }
        while ( *(_DWORD *)(v270 + v137) + *(_DWORD *)(v269 + v137) > v145 );
      }
      v148 = v260 / v140;
      *(double *)(v15 + 2 * v137) = v260 / v140;
      a7 = *(double *)(v324 + 2 * v137) - *(double *)(v297 + 2 * v137);
      if ( v148 * 0.00001 > a7 )
      {
        a7 = a7 / 0.00001;
        v148 = a7;
        *(double *)(v15 + 2 * v137) = a7;
      }
      v137 += 4;
      *(double *)a5.m128_u64 = fmin(v139 * v148, v55);
      v55 = *(double *)a5.m128_u64;
    }
    while ( v136 != v137 );
LABEL_175:
    if ( v9 > 0 )
    {
LABEL_176:
      v149 = 0;
      do
      {
        if ( !*((_BYTE *)s + v149) )
          *(_QWORD *)(v14 + 8 * v149) = 0x3FF0000000000000LL;
        ++v149;
      }
      while ( v9 > (int)v149 );
    }
    v150 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)a2 + 43), 37, v300);
    v151 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v150);
    v152 = CoinMessageHandler::operator<<(v151);
    CoinMessageHandler::operator<<(v152, 0, v260);
    *(_QWORD *)&v153 = 0x3D3C25C268497682LL;
    if ( v55 < 1.0e-13 )
    {
      v154 = *((_QWORD *)a2 + 158);
      v48 = v55 / 1.0e-13;
      v155 = *(CoinFactorization **)(v154 + 8);
      *(double *)&v153 = fmax(1.0e-15 * (v55 / 1.0e-13), 1.0e-18);
      if ( v155 )
      {
        a5.m128_u64[0] = *((_QWORD *)v155 + 1);
        if ( *(double *)a5.m128_u64 > *(double *)&v153 )
          CoinFactorization::zeroTolerance(v155, *(double *)&v153);
      }
      else
      {
        v250 = *(CoinOtherFactorization **)(v154 + 16);
        a5.m128_u64[0] = *((_QWORD *)v250 + 2);
        if ( *(double *)a5.m128_u64 > *(double *)&v153 )
          CoinOtherFactorization::zeroTolerance(v250, *(double *)&v153);
      }
      v55 = fmax(v55 * 0.5, 1.0e-18);
      *((double *)a2 + 88) = v55;
    }
LABEL_185:
    operator delete[](v17);
    v158 = *((const void **)a2 + 20);
    if ( v158 )
    {
LABEL_186:
      v159 = __dynamic_cast(
               v158,
               (const struct __class_type_info *)&`typeinfo for'ClpObjective,
               (const struct __class_type_info *)&`typeinfo for'ClpQuadraticObjective,
               0);
      if ( !v159 )
        goto LABEL_193;
      v160 = *(_QWORD *)v296;
      v161 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*(_QWORD *)v296 + 48LL);
      if ( v161 != ClpPackedMatrix::getIndices )
      {
        ((void (__fastcall *)(ClpMatrixBase *, double, double, double, double, double, double, double, double))v161)(
          v296,
          *(double *)&v153,
          *(double *)a5.m128_u64,
          1.0,
          a7,
          v156,
          v157,
          v55,
          v48);
        v160 = *(_QWORD *)v296;
      }
      v162 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(v160 + 56);
      if ( v162 != ClpPackedMatrix::getVectorStarts )
        ((void (__fastcall *)(ClpMatrixBase *, double, double, double, double, double, double, double, double))v162)(
          v296,
          *(double *)&v153,
          *(double *)a5.m128_u64,
          1.0,
          a7,
          v156,
          v157,
          v55,
          v48);
      v163 = v159[3];
      LODWORD(v164) = *(_DWORD *)(v163 + 64);
      if ( *(_BYTE *)(v163 + 8) )
      {
        if ( v262 <= (int)v164 )
          goto LABEL_193;
LABEL_264:
        v218 = v9;
        if ( (int)v164 > 0 )
        {
          v218 = v9 - v164;
          v219 = 8LL * (v9 - (int)v164);
          v220 = (_QWORD *)(v14 + v219);
          if ( (v14 + v219 >= v15 + 16 || v15 >= v14 + v219 + 16) && (unsigned int)v164 > 0x18 )
          {
            v221 = 0;
            if ( (v15 & 8) != 0 )
            {
              v221 = 1;
              *v220 = *(_QWORD *)v15;
            }
            v222 = v164 - v306;
            v223 = 0;
            v224 = v14 + v323 + v219;
            v225 = 0;
            do
            {
              ++v223;
              *(_OWORD *)(v224 + v225) = *(_OWORD *)(v304 + v225);
              v225 += 16;
            }
            while ( v223 < (unsigned int)(v164 - v306) >> 1 );
            v226 = (v222 & 0xFFFFFFFE) + v221;
            if ( (v222 & 0xFFFFFFFE) != v222 )
            {
              v227 = *(_QWORD *)(v15 + 8LL * v226);
              v228 = v218 + v226;
              v229 = v226 + 1;
              *(_QWORD *)(v14 + 8LL * v228) = v227;
              if ( v229 < (int)v164 )
                *(_QWORD *)(v14 + 8LL * (v218 + v229)) = *(_QWORD *)(v15 + 8LL * v229);
            }
          }
          else
          {
            v256 = 0;
            do
            {
              v220[v256 / 8] = *(_QWORD *)(v15 + v256);
              v256 += 8LL;
            }
            while ( 8LL * (unsigned int)(v164 - 1) + 8 != v256 );
          }
        }
        if ( v218 <= 0 )
          goto LABEL_285;
        v230 = 8LL * (int)v164;
        v231 = v15 + v230;
        if ( (v14 >= v15 + v230 + 16 || v15 + v230 >= v14 + 16) && (unsigned int)v218 > 0x18 )
        {
          v232 = 0;
          if ( (v14 & 8) != 0 )
          {
            v232 = 1;
            *(_QWORD *)(v15 + 8LL * (int)v164) = *(_QWORD *)v14;
          }
          v233 = v218 - v302;
          v234 = 0;
          v235 = v15 + v322 + v230;
          v236 = 0;
          do
          {
            v153 = *(_OWORD *)(v303 + v236);
            ++v234;
            *(_OWORD *)(v235 + v236) = v153;
            v236 += 16;
          }
          while ( v234 < (unsigned int)(v218 - v302) >> 1 );
          v237 = (v233 & 0xFFFFFFFE) + v232;
          if ( (v233 & 0xFFFFFFFE) != v233 )
          {
            *(_QWORD *)&v153 = *(_QWORD *)(v14 + 8LL * v237);
            v238 = v164 + v237;
            v239 = v237 + 1;
            *(_QWORD *)(v15 + 8LL * v238) = v153;
            if ( v218 > v239 )
            {
              *(_QWORD *)&v153 = *(_QWORD *)(v14 + 8LL * v239);
              *(_QWORD *)(v15 + 8LL * ((int)v164 + v239)) = v153;
            }
          }
        }
        else
        {
          v255 = 0;
          do
          {
            *(_QWORD *)&v153 = *(_QWORD *)(v14 + v255);
            *(_QWORD *)(v231 + v255) = v153;
            v255 += 8;
          }
          while ( v255 != 8LL * (unsigned int)(v218 - 1) + 8 );
        }
        LODWORD(v164) = v218 + v164;
        if ( v262 > (int)v164 )
        {
LABEL_285:
          v164 = (int)v164;
          a5.m128_u64[0] = 0x7FFFFFFFFFFFFFFFLL;
          do
          {
            *(_QWORD *)&v153 = fabs(
                                 *(double *)(v14 + 8LL * *(int *)(v272 + 4LL * *(int *)(v269 + 4 * v164)))
                               * *(double *)(v271 + 8LL * *(int *)(v269 + 4 * v164)));
            v48 = 1.0 / *(double *)&v153;
            *(double *)(v15 + 8 * v164++) = 1.0 / *(double *)&v153;
          }
          while ( v262 > (int)v164 );
        }
      }
      else
      {
        LODWORD(v164) = *(_DWORD *)(v163 + 68);
        if ( v262 > (int)v164 )
          goto LABEL_264;
      }
    }
LABEL_193:
    if ( v9 > 0 )
    {
      if ( ((unsigned __int64)s >= v14 + 16 || v14 >= (unsigned __int64)(s + 2)) && (unsigned int)v9 > 0xE )
      {
        if ( v301 < v302 + 1 )
        {
          v168 = 0;
          goto LABEL_202;
        }
        v165 = 0;
        if ( (v14 & 8) != 0 )
        {
          v165 = 1;
          *s = 1.0 / *(double *)v14;
        }
        v166 = 0;
        v167 = 0;
        *(_QWORD *)&v153 = 0x3FF0000000000000LL;
        do
        {
          ++v167;
          a5 = (__m128)_mm_div_pd((__m128d)xmmword_289DC0, *(__m128d *)(v303 + v166 * 8));
          *(__m128 *)&s[(unsigned __int64)v322 / 8 + v166] = a5;
          v166 += 2;
        }
        while ( v167 < v308 );
        v168 = v307 + v165;
        if ( v307 != v309 )
        {
LABEL_202:
          v169 = v168;
          v170 = v168 + 1;
          *(double *)&v153 = 1.0 / *(double *)(v14 + 8 * v169);
          *(_QWORD *)&s[v169] = v153;
          if ( v9 > v170 )
          {
            *(double *)&v153 = 1.0 / *(double *)(v14 + 8LL * v170);
            *(_QWORD *)&s[v170] = v153;
          }
        }
      }
      else
      {
        v249 = 0;
        do
        {
          *(double *)&v153 = 1.0 / *(double *)(v14 + v249 * 8);
          *(_QWORD *)&s[v249++] = v153;
        }
        while ( v325 != v249 );
      }
    }
    if ( v262 > 0 )
    {
      if ( ((unsigned __int64)v321 >= v15 + 16 || v15 >= (unsigned __int64)(v321 + 2)) && (unsigned int)v262 > 0xE )
      {
        if ( v268 < v306 + 1 )
        {
          v174 = 0;
          goto LABEL_213;
        }
        v171 = 0;
        if ( (v15 & 8) != 0 )
        {
          v171 = 1;
          *v321 = 1.0 / *(double *)v15;
        }
        v172 = 0;
        v173 = 0;
        *(_QWORD *)&v153 = 0x3FF0000000000000LL;
        do
        {
          ++v173;
          a5 = (__m128)_mm_div_pd((__m128d)xmmword_289DC0, *(__m128d *)(v304 + v172 * 8));
          *(__m128 *)&v321[(unsigned __int64)v323 / 8 + v172] = a5;
          v172 += 2;
        }
        while ( v173 < v311 );
        v174 = v310 + v171;
        if ( v310 != v317 )
        {
LABEL_213:
          v175 = v174;
          v176 = v174 + 1;
          *(double *)&v153 = 1.0 / *(double *)(v15 + 8 * v175);
          *(_QWORD *)&v321[v175] = v153;
          if ( v262 > v176 )
          {
            v57 = 1.0 / *(double *)(v15 + 8LL * v176);
            v321[v176] = v57;
          }
        }
      }
      else
      {
        v248 = 0;
        do
        {
          *(double *)&v153 = 1.0 / *(double *)(v15 + v248);
          *(_QWORD *)&v321[v248 / 8] = v153;
          v248 += 8LL;
        }
        while ( 8LL * v268 + 8 != v248 );
      }
    }
  }
  if ( !v328 )
  {
    ClpModel::setRowScale(a2, (double *)v14);
    ClpModel::setColumnScale(a2, (double *)v15);
  }
  v177 = *((_QWORD **)a2 + 25);
  if ( v177 )
  {
    v178 = *v177;
    v179 = v177[11];
    v180 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*v177 + 48LL);
    v181 = *(_QWORD *)(v179 + 32);
    if ( v180 == ClpPackedMatrix::getIndices )
    {
      v182 = *(_QWORD *)(v179 + 40);
    }
    else
    {
      v182 = ((__int64 (__fastcall *)(_QWORD, double, double, double, double, double, double, double, double))v180)(
               *((_QWORD *)a2 + 25),
               *(double *)&v153,
               *(double *)a5.m128_u64,
               v57,
               a7,
               v156,
               v157,
               v55,
               v48);
      v178 = *v177;
    }
    v183 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(v178 + 56);
    if ( v183 == ClpPackedMatrix::getVectorStarts )
      v184 = *(_QWORD *)(v177[11] + 48LL);
    else
      v184 = ((__int64 (__fastcall *)(_QWORD *, double, double, double, double, double, double, double, double))v183)(
               v177,
               *(double *)&v153,
               *(double *)a5.m128_u64,
               v57,
               a7,
               v156,
               v157,
               v55,
               v48);
    if ( v9 > 0 )
    {
      v185 = 0;
      do
      {
        a5.m128_u64[0] = *(_QWORD *)(v14 + 2 * v185);
        v186 = *(int *)(v184 + v185);
        v187 = 4 * v186;
        if ( *(_DWORD *)(v184 + v185 + 4) - (int)v186 > 0 )
        {
          v188 = (unsigned int)(*(_DWORD *)(v184 + v185 + 4) - v186 - 1);
          v189 = v181 + 8 * v186;
          v190 = 0;
          v191 = v188 + 1;
          do
          {
            *(double *)&v153 = *(double *)(v15 + 8LL * *(int *)(v182 + v187 + 4 * v190))
                             * *(double *)a5.m128_u64
                             * *(double *)(v189 + 8 * v190);
            *(_QWORD *)(v189 + 8 * v190++) = v153;
          }
          while ( v190 != v191 );
        }
        v185 += 4;
      }
      while ( v316 != v185 );
    }
    if ( (*((_BYTE *)a2 + 338) & 4) != 0 )
    {
      v198 = (CoinPackedMatrix *)operator new(0x58u);
      CoinPackedMatrix::CoinPackedMatrix(v198, *((const CoinPackedMatrix **)this + 11), 0, 0, 0);
      v199 = (ClpPackedMatrix *)operator new(0x78u);
      ClpPackedMatrix::ClpPackedMatrix(v199, v198);
      v202 = a2;
      v203 = *((void **)a2 + 26);
      if ( v203 )
      {
        v204 = *((ClpPackedMatrix **)a2 + 26);
        v205 = *(void (__fastcall **)(ClpPackedMatrix *))(*(_QWORD *)v203 + 480LL);
        if ( v205 == ClpPackedMatrix::~ClpPackedMatrix )
        {
          ClpPackedMatrix::~ClpPackedMatrix(v204);
          operator delete(v203);
        }
        else
        {
          ((void (__fastcall *)(ClpPackedMatrix *, double, double, double, double, double, double, double, double))v205)(
            v204,
            *(double *)&v153,
            *(double *)a5.m128_u64,
            v57,
            a7,
            v200,
            v201,
            v55,
            v48);
        }
        v202 = a2;
      }
      *((_QWORD *)v202 + 26) = v199;
      if ( v262 > 0 )
      {
        v206 = *((_QWORD *)v198 + 6);
        v207 = *((_QWORD *)v198 + 5);
        v208 = *((_QWORD *)v198 + 4);
        v209 = (double *)v15;
        v210 = (_DWORD *)(v206 + 4);
        do
        {
          v211 = (int)*(v210 - 1);
          v212 = *v209;
          if ( (int)v211 < *v210 )
          {
            v213 = v207 + 4 * v211;
            v214 = (unsigned int)(*v210 - 1 - v211);
            v215 = v208 + 8 * v211;
            v216 = v214 + 1;
            v217 = 0;
            do
            {
              *(double *)(v215 + 8 * v217) = *(double *)(v14 + 8LL * *(int *)(v213 + 4 * v217))
                                           * v212
                                           * *(double *)(v215 + 8 * v217);
              ++v217;
            }
            while ( v216 != v217 );
          }
          ++v209;
          ++v210;
        }
        while ( (double *)(v15 + 8LL * v268 + 8) != v209 );
      }
    }
    return 0;
  }
  else
  {
    v245 = *(void (__fastcall **)(ClpPackedMatrix *))(*(_QWORD *)v296 + 480LL);
    if ( v245 == ClpPackedMatrix::~ClpPackedMatrix )
    {
      ClpPackedMatrix::~ClpPackedMatrix(v296);
      operator delete(v296);
      return 0;
    }
    ((void (__fastcall *)(ClpMatrixBase *, double, double, double, double, double, double, double, double))v245)(
      v296,
      *(double *)&v153,
      *(double *)a5.m128_u64,
      v57,
      a7,
      v156,
      v157,
      v55,
      v48);
    return 0;
  }
}

