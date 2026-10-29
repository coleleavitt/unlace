__int64 __fastcall CoinLpIO::readLp(CoinLpIO *this, double a2)
{
  __m128i v3; // xmm0
  int v4; // ebx
  int v5; // eax
  char *p_haystack; // rax
  int v7; // ecx
  unsigned int v8; // edx
  bool v9; // cf
  __int64 v10; // rdx
  __int64 v11; // rax
  char *v12; // r14
  int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // r14
  char *v16; // rax
  __int64 v17; // rsi
  int v18; // r14d
  __int64 v19; // rdx
  unsigned int v20; // edi
  __int64 v21; // rdx
  char *v22; // rdi
  char *v23; // rdx
  __int64 v24; // rdx
  char *v25; // rdi
  char *v26; // rdx
  char *v27; // r14
  char **v28; // rcx
  int v29; // edx
  unsigned int v30; // eax
  __int64 v31; // r14
  char *v32; // rax
  __int64 v33; // rsi
  int v34; // r14d
  __int64 v35; // rdx
  unsigned int v36; // edi
  __int64 v37; // rdx
  char *v38; // rdi
  char *v39; // rdx
  __int64 v40; // rdi
  char *v41; // r8
  char *v42; // rdi
  int v43; // eax
  double *v44; // rbx
  double *v45; // r14
  char *v46; // rax
  __int64 v47; // rdx
  double *v48; // rcx
  __int64 is_keyword; // kr00_8
  char *v50; // rax
  int v51; // edx
  __int64 v52; // rbx
  int v53; // eax
  unsigned __int64 v54; // rax
  _DWORD *v55; // rcx
  char *v56; // rax
  size_t v57; // r13
  char *v58; // rbx
  double **v59; // r14
  char ***v60; // rax
  int v61; // r12d
  int v62; // edx
  __int64 v63; // r13
  char *v64; // r12
  int v65; // ebx
  __int64 v66; // rcx
  char ***v67; // r13
  __int64 v68; // r14
  double **v69; // rcx
  double *v70; // rax
  double v71; // xmm0_8
  bool v72; // cc
  int v73; // eax
  char *v74; // rdx
  char *v75; // rbx
  bool v76; // r14
  int v77; // eax
  __int64 v78; // rbx
  CoinMessageHandler *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  unsigned __int64 v85; // rax
  void *v86; // rax
  __int64 v87; // rdx
  int v88; // eax
  CoinMessageHandler *v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rax
  char v95; // al
  int v96; // ebx
  char *v97; // rdx
  int v98; // ecx
  unsigned int v99; // eax
  char *v100; // r14
  int Hash; // eax
  __int64 v102; // rbx
  int v103; // r14d
  __int64 v104; // rax
  double *v105; // rax
  int v106; // eax
  CoinMessageHandler *v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rax
  int v113; // eax
  CoinMessageHandler *v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rax
  char *v120; // rax
  char *v121; // r12
  int v122; // r14d
  char *v123; // r12
  __int64 v124; // r8
  __int64 v125; // rcx
  void *v126; // r12
  CoinMessageHandler *v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rax
  char *v133; // rax
  int v134; // ecx
  int is_sense; // r14d
  CoinMessageHandler *v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 v141; // rax
  CoinMessageHandler *v142; // rdi
  CoinMessageHandler *v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rax
  int v149; // eax
  char *v150; // rdx
  int v151; // ecx
  unsigned int v152; // eax
  char *v153; // rcx
  CoinMessageHandler *v154; // rax
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // rax
  int v160; // eax
  char *v161; // rcx
  int v162; // edx
  unsigned int v163; // eax
  bool v164; // zf
  char *v165; // rdx
  __int64 v166; // rdx
  __int64 v167; // r12
  double v168; // xmm1_8
  double *v169; // rax
  void *v170; // rbx
  CoinSosSet *v171; // rbx
  __int64 v172; // rax
  _DWORD *v173; // rdx
  __int64 v174; // rax
  int v175; // ecx
  int v176; // edx
  _DWORD *v177; // rax
  int v178; // esi
  char *v179; // rcx
  char *v180; // r8
  int v181; // r9d
  int v182; // eax
  char *v183; // rdx
  unsigned __int64 v184; // r10
  int *v185; // rax
  char *v186; // r9
  __int64 v187; // r9
  CoinPackedMatrix *v188; // r14
  char *v189; // rax
  __int64 v190; // r12
  int v191; // ebx
  int v192; // edi
  char **v193; // r8
  __int64 v194; // r14
  char *v195; // r12
  char **v196; // rbx
  char *v197; // rax
  unsigned __int64 v198; // rcx
  unsigned int v199; // eax
  __int64 v200; // rdx
  unsigned int v201; // edi
  __int64 v202; // rdx
  char *v203; // r10
  char *v204; // rdx
  __int64 v205; // rax
  __int64 v206; // rdi
  _BYTE *v207; // rdi
  int v208; // r12d
  __int64 v209; // rbx
  void *v210; // rdi
  int v211; // r12d
  __int64 v212; // rbx
  char *v213; // rdi
  CoinMessageHandler *v215; // rax
  __int64 v216; // rdx
  __int64 v217; // rcx
  __int64 v218; // r8
  __int64 v219; // r9
  __int64 v220; // rax
  char *v221; // rdi
  unsigned __int64 v222; // rdx
  char v223; // r9
  __int64 v224; // rax
  CoinMessageHandler *v225; // rax
  __int64 v226; // rdx
  __int64 v227; // rcx
  __int64 v228; // r8
  __int64 v229; // r9
  __int64 v230; // rax
  void *v231; // r15
  double *v232; // rdi
  CoinMessageHandler *v233; // rax
  __int64 v234; // rdx
  __int64 v235; // rcx
  __int64 v236; // r8
  __int64 v237; // r9
  __int64 v238; // rax
  int v239; // eax
  CoinMessageHandler *v240; // rax
  __int64 v241; // rdx
  __int64 v242; // rcx
  __int64 v243; // r8
  __int64 v244; // r9
  __int64 v245; // rax
  int v246; // ebx
  int v247; // ebx
  char *v248; // rdi
  const char *v249; // rsi
  __int64 i; // rcx
  _QWORD *exception; // rax
  __int64 v252; // [rsp+0h] [rbp-2660h]
  __int64 v253; // [rsp+0h] [rbp-2660h]
  void *src; // [rsp+20h] [rbp-2640h]
  int v256; // [rsp+30h] [rbp-2630h]
  int v257; // [rsp+34h] [rbp-262Ch]
  double v259; // [rsp+40h] [rbp-2620h]
  double v260; // [rsp+48h] [rbp-2618h]
  int obj; // [rsp+50h] [rbp-2610h]
  int v262; // [rsp+54h] [rbp-260Ch]
  bool v263; // [rsp+70h] [rbp-25F0h]
  CoinMessages *v264; // [rsp+70h] [rbp-25F0h]
  void *v265; // [rsp+78h] [rbp-25E8h]
  int v266; // [rsp+78h] [rbp-25E8h]
  int v267; // [rsp+80h] [rbp-25E0h]
  int v268; // [rsp+84h] [rbp-25DCh]
  int v269; // [rsp+84h] [rbp-25DCh]
  int v270; // [rsp+84h] [rbp-25DCh]
  char *nptr; // [rsp+88h] [rbp-25D8h]
  char *nptra; // [rsp+88h] [rbp-25D8h]
  char *nptrb; // [rsp+88h] [rbp-25D8h]
  char *nptrc; // [rsp+88h] [rbp-25D8h]
  char *nptrd; // [rsp+88h] [rbp-25D8h]
  char ***v276; // [rsp+90h] [rbp-25D0h]
  char ***v277; // [rsp+90h] [rbp-25D0h]
  double *v278; // [rsp+90h] [rbp-25D0h]
  int v279; // [rsp+90h] [rbp-25D0h]
  int v280; // [rsp+90h] [rbp-25D0h]
  int v281; // [rsp+90h] [rbp-25D0h]
  int v282; // [rsp+90h] [rbp-25D0h]
  char ***v283; // [rsp+90h] [rbp-25D0h]
  int dest; // [rsp+98h] [rbp-25C8h]
  int desta; // [rsp+98h] [rbp-25C8h]
  int destb; // [rsp+98h] [rbp-25C8h]
  void *destc; // [rsp+98h] [rbp-25C8h]
  int v288; // [rsp+B4h] [rbp-25ACh] BYREF
  int v289; // [rsp+B8h] [rbp-25A8h] BYREF
  int v290; // [rsp+BCh] [rbp-25A4h] BYREF
  int v291; // [rsp+C0h] [rbp-25A0h] BYREF
  int v292; // [rsp+C4h] [rbp-259Ch] BYREF
  int v293; // [rsp+C8h] [rbp-2598h] BYREF
  int v294; // [rsp+CCh] [rbp-2594h] BYREF
  void *ptr; // [rsp+D0h] [rbp-2590h] BYREF
  double *v296; // [rsp+D8h] [rbp-2588h] BYREF
  char **v297; // [rsp+E0h] [rbp-2580h] BYREF
  void *v298; // [rsp+E8h] [rbp-2578h] BYREF
  double *v299; // [rsp+F0h] [rbp-2570h] BYREF
  double *v300; // [rsp+F8h] [rbp-2568h] BYREF
  double *v301; // [rsp+100h] [rbp-2560h] BYREF
  double *v302; // [rsp+108h] [rbp-2558h] BYREF
  double *v303; // [rsp+110h] [rbp-2550h] BYREF
  char *v304; // [rsp+118h] [rbp-2548h] BYREF
  __int64 v305; // [rsp+120h] [rbp-2540h]
  __int64 v306; // [rsp+128h] [rbp-2538h]
  __int64 v307; // [rsp+130h] [rbp-2530h]
  __int64 v308; // [rsp+138h] [rbp-2528h]
  int v309[3]; // [rsp+144h] [rbp-251Ch] BYREF
  void *v310[2]; // [rsp+150h] [rbp-2510h] BYREF
  double *v311[26]; // [rsp+160h] [rbp-2500h] BYREF
  char haystack; // [rsp+230h] [rbp-2430h] BYREF
  char v313; // [rsp+231h] [rbp-242Fh] BYREF
  _BYTE v314[6]; // [rsp+232h] [rbp-242Eh] BYREF
  char s[16]; // [rsp+630h] [rbp-2030h] BYREF
  __m128i si128; // [rsp+640h] [rbp-2020h]
  __m128i v317; // [rsp+650h] [rbp-2010h]
  __m128i v318; // [rsp+660h] [rbp-2000h]
  char v319[8176]; // [rsp+670h] [rbp-1FF0h] BYREF

  v288 = 1000;
  v289 = 40000;
  CoinLpIO::getEpsilon(this);
  CoinLpIO::getInfinity(this);
  v3.m128i_i64[0] = 0;
  *(_QWORD *)((char *)this + 1364) = 0;
  *((_BYTE *)this + 1384) = 0;
  v290 = 0;
  v291 = 0;
  v292 = 0;
  *(_OWORD *)v310 = 0;
  v293 = 0;
  ptr = malloc(0x4E208u);
  v296 = (double *)malloc(8LL * (v289 + 1));
  v297 = (char **)malloc(8LL * (v288 + 2));
  v298 = malloc(4LL * (v288 + 2));
  v299 = (double *)malloc(8LL * (v288 + 1));
  v300 = (double *)malloc(8LL * (v288 + 1));
  v301 = (double *)malloc(8LL * (v288 + 1));
  obj = CoinLpIO::find_obj(this);
  do
  {
    v4 = CoinLpIO::read_monom_obj(this, v296, (char **)ptr, &v292, (char **)v310, &v293, v309);
    if ( v292 == v289 )
      CoinLpIO::realloc_coeff(this, &v296, (char ***)&ptr, &v289);
  }
  while ( !v4 );
  v5 = v292;
  v309[v293] = v292;
  *(_DWORD *)v298 = v5;
  v290 = v292;
  if ( v4 == 2 )
  {
    if ( (int)CoinLpIO::fscanfLpIO(this, &haystack) <= 0 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = "bad fscanf";
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'char const*, nullptr);
    }
    if ( ~(strlen(&haystack) + 1) != -4
      || !haystack
      || (v246 = tolower(haystack), v246 != tolower(116))
      || !v313
      || (v247 = tolower(v313), v247 != tolower(111)) )
    {
      v248 = s;
      v249 = "### ERROR: Can not locate keyword 'Subject To'\n";
      for ( i = 12; i; --i )
      {
        *(_DWORD *)v248 = *(_DWORD *)v249;
        v249 += 4;
        v248 += 4;
      }
      v231 = __cxa_allocate_exception(0x30u);
      std::string::string();
      std::string::string();
      std::string::string();
      std::string::string();
      CoinError::CoinError();
LABEL_299:
      if ( (_UNKNOWN *)(v306 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C66A(v306 - 24);
      if ( (_UNKNOWN *)(v307 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C66A(v307 - 24);
      if ( (_UNKNOWN *)(v308 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C66A(v308 - 24);
      v232 = v311[0] - 3;
      if ( v311[0] - 3 != (double *)&std::string::_Rep::_S_empty_rep_storage )
LABEL_296:
        sub_5C66A((__int64)v232);
LABEL_297:
      __cxa_throw(v231, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
    }
  }
  CoinLpIO::fscanfLpIO(this, &haystack);
  while ( !(unsigned int)CoinLpIO::is_keyword(this, &haystack) )
  {
    p_haystack = &haystack;
    do
    {
      v7 = *(_DWORD *)p_haystack;
      p_haystack += 4;
      v8 = ~v7 & (v7 - 16843009) & 0x80808080;
    }
    while ( !v8 );
    if ( (~v7 & (v7 - 16843009) & 0x8080) == 0 )
    {
      v8 >>= 16;
      p_haystack += 2;
    }
    v9 = __CFADD__((_BYTE)v8, (_BYTE)v8);
    v10 = v291;
    v11 = &p_haystack[-v9 - 3] - &haystack - 1;
    if ( *(&haystack + v11) == 58 )
    {
      *(&haystack + v11) = 0;
      v27 = &haystack;
      v28 = &v297[v10];
      do
      {
        v29 = *(_DWORD *)v27;
        v27 += 4;
        v30 = ~v29 & (v29 - 16843009) & 0x80808080;
      }
      while ( !v30 );
      nptra = (char *)v28;
      if ( (~v29 & (v29 - 16843009) & 0x8080) == 0 )
      {
        LOBYTE(v30) = (~v29 & (v29 - 16843009) & 0x80808080) >> 16;
        v27 += 2;
      }
      v31 = &v27[-__CFADD__((_BYTE)v30, (_BYTE)v30) - 3] - &haystack;
      v32 = (char *)malloc((int)v31 + 1);
      v33 = (int)v31;
      if ( (_DWORD)v31 )
      {
        v34 = (int)v31 >> 3;
        if ( v34 <= 0 )
        {
          v42 = v32;
          v41 = &haystack;
        }
        else
        {
          if ( v34 == 1 )
          {
            v39 = v32;
            v38 = &haystack;
            goto LABEL_46;
          }
          v35 = 0;
          v36 = 0;
          do
          {
            ++v36;
            *(__m128i *)&v32[v35] = _mm_load_si128((const __m128i *)(&haystack + v35));
            v35 += 16;
          }
          while ( v36 < (unsigned int)v34 >> 1 );
          v37 = 8LL * (v34 & 0xFFFFFFFE);
          v38 = &haystack + v37;
          v39 = &v32[v37];
          if ( (v34 & 0xFFFFFFFE) != v34 )
          {
LABEL_46:
            *v39 = *v38;
            v39[1] = v38[1];
            v39[2] = v38[2];
            v39[3] = v38[3];
            v39[4] = v38[4];
            v39[5] = v38[5];
            v39[6] = v38[6];
            v39[7] = v38[7];
          }
          v40 = 8LL * (v34 - 1) + 8;
          v41 = &haystack + v40;
          v42 = &v32[v40];
        }
        switch ( (int)v33 % 8 )
        {
          case 1:
            goto LABEL_55;
          case 2:
            goto LABEL_54;
          case 3:
            goto LABEL_53;
          case 4:
            goto LABEL_52;
          case 5:
            goto LABEL_51;
          case 6:
            goto LABEL_50;
          case 7:
            v42[6] = v41[6];
LABEL_50:
            v42[5] = v41[5];
LABEL_51:
            v42[4] = v41[4];
LABEL_52:
            v42[3] = v41[3];
LABEL_53:
            v42[2] = v41[2];
LABEL_54:
            v42[1] = v41[1];
LABEL_55:
            *v42 = *v41;
            break;
          default:
            break;
        }
      }
      v32[v33] = 0;
      *(_QWORD *)nptra = v32;
      CoinLpIO::fscanfLpIO(this, &haystack);
      goto LABEL_34;
    }
    v12 = s;
    sprintf(s, "cons%d", v291);
    do
    {
      v13 = *(_DWORD *)v12;
      v12 += 4;
      v14 = ~v13 & (v13 - 16843009) & 0x80808080;
    }
    while ( !v14 );
    nptr = (char *)&v297[v291];
    if ( (~v13 & (v13 - 16843009) & 0x8080) == 0 )
    {
      LOBYTE(v14) = (~v13 & (v13 - 16843009) & 0x80808080) >> 16;
      v12 += 2;
    }
    v15 = &v12[-__CFADD__((_BYTE)v14, (_BYTE)v14) - 3] - s;
    v16 = (char *)malloc((int)v15 + 1);
    v17 = (int)v15;
    if ( (_DWORD)v15 )
    {
      v18 = (int)v15 >> 3;
      if ( v18 <= 0 )
      {
        v26 = v16;
        v25 = s;
      }
      else
      {
        if ( v18 == 1 )
        {
          v23 = v16;
          v22 = s;
          goto LABEL_23;
        }
        v19 = 0;
        v20 = 0;
        do
        {
          ++v20;
          *(__m128i *)&v16[v19] = _mm_load_si128((const __m128i *)&s[v19]);
          v19 += 16;
        }
        while ( v20 < (unsigned int)v18 >> 1 );
        v21 = 8LL * (v18 & 0xFFFFFFFE);
        v22 = &s[v21];
        v23 = &v16[v21];
        if ( (v18 & 0xFFFFFFFE) != v18 )
        {
LABEL_23:
          *v23 = *v22;
          v23[1] = v22[1];
          v23[2] = v22[2];
          v23[3] = v22[3];
          v23[4] = v22[4];
          v23[5] = v22[5];
          v23[6] = v22[6];
          v23[7] = v22[7];
        }
        v24 = 8LL * (v18 - 1) + 8;
        v25 = &s[v24];
        v26 = &v16[v24];
      }
      switch ( (int)v17 % 8 )
      {
        case 1:
          goto LABEL_32;
        case 2:
          goto LABEL_31;
        case 3:
          goto LABEL_30;
        case 4:
          goto LABEL_29;
        case 5:
          goto LABEL_28;
        case 6:
          goto LABEL_27;
        case 7:
          v26[6] = v25[6];
LABEL_27:
          v26[5] = v25[5];
LABEL_28:
          v26[4] = v25[4];
LABEL_29:
          v26[3] = v25[3];
LABEL_30:
          v26[2] = v25[2];
LABEL_31:
          v26[1] = v25[1];
LABEL_32:
          *v26 = *v25;
          break;
        default:
          break;
      }
    }
    v16[v17] = 0;
    *(_QWORD *)nptr = v16;
LABEL_34:
    *(double *)v3.m128i_i64 = a2;
    CoinLpIO::read_row(this, &haystack, &v296, (char ***)&ptr, &v290, &v289, a2, v299, v300, v301, &v291);
    CoinLpIO::fscanfLpIO(this, &haystack);
    *((_DWORD *)v298 + v291) = v290;
    if ( v291 == v288 )
      CoinLpIO::realloc_row(this, &v297, (int **)&v298, &v299, &v300, &v301, &v288);
  }
  *((_DWORD *)this + 14) = v291;
  CoinLpIO::stopHash(this, 1);
  CoinLpIO::startHash(this, (const char *const *)ptr, v290, 1);
  v43 = *((_DWORD *)this + 79);
  v294 = v43 + 100;
  v302 = (double *)malloc(8LL * (v43 + 101));
  v44 = v302;
  v303 = (double *)malloc(8LL * (v294 + 1));
  v45 = v303;
  v46 = (char *)malloc(v294 + 1);
  v47 = 0;
  v304 = v46;
  if ( v294 > 0 )
  {
    v48 = v45;
    while ( 1 )
    {
      v44[v47] = 0.0;
      v48[v47] = a2;
      v46[v47++] = 0;
      if ( v294 <= (int)v47 )
        break;
      v44 = v302;
      v48 = v303;
      v46 = v304;
    }
  }
  v257 = 0;
  v260 = 0.0;
LABEL_63:
  while ( 2 )
  {
    is_keyword = CoinLpIO::is_keyword(this, &haystack);
    switch ( is_keyword )
    {
      case 1LL:
        CoinLpIO::fscanfLpIO(this, &haystack);
LABEL_107:
        if ( (unsigned int)CoinLpIO::is_keyword(this, &haystack) )
          continue;
        v95 = haystack;
        if ( ((haystack - 43) & 0xFD) == 0 )
          goto LABEL_109;
LABEL_124:
        v100 = &haystack;
        v96 = is_keyword;
        if ( !(unsigned int)CoinLpIO::first_is_number(this, &haystack) )
        {
LABEL_125:
          if ( (unsigned int)CoinLpIO::is_inf(this, v100) )
          {
            *(double *)v3.m128i_i64 = (double)v96 * a2;
            v260 = *(double *)v3.m128i_i64;
            goto LABEL_118;
          }
          destb = -1;
          goto LABEL_120;
        }
        while ( 1 )
        {
          *(double *)v3.m128i_i64 = strtod(v100, nullptr);
          v260 = (double)v96 * *(double *)v3.m128i_i64;
LABEL_118:
          CoinLpIO::fscanfLpIO(this, &haystack);
          destb = CoinLpIO::is_sense(this, &haystack);
          if ( destb < 0 )
          {
            sprintf(s, "### ERROR: Bounds; expect a sense, get: %s\n", &haystack);
            v231 = __cxa_allocate_exception(0x30u);
            std::string::string();
            std::string::string();
            std::string::string();
            std::string::string();
            CoinError::CoinError();
            goto LABEL_299;
          }
          CoinLpIO::fscanfLpIO(this, &haystack);
LABEL_120:
          Hash = CoinLpIO::findHash(this, &haystack, 1);
          v102 = Hash;
          if ( Hash < 0 )
          {
            sprintf(
              s,
              "### CoinLpIO::readLp(): Variable %s does not appear in objective function or constraints",
              &haystack);
            v154 = (CoinMessageHandler *)CoinMessageHandler::message(
                                           *((CoinMessageHandler **)this + 1),
                                           30,
                                           (CoinLpIO *)((char *)this + 24));
            v159 = CoinMessageHandler::operator<<(v154, (__int64)s, v155, v156, v157, v158, v252);
            CoinMessageHandler::operator<<(v159, 0, *(double *)v3.m128i_i64);
            CoinLpIO::insertHash(this, &haystack, 1);
            v160 = CoinLpIO::findHash(this, &haystack, 1);
            v102 = v160;
            if ( v294 == v160 )
              CoinLpIO::realloc_col(this, &v302, &v303, &v304, &v294);
          }
          CoinLpIO::fscanfLpIO(this, &haystack);
          if ( !(unsigned int)CoinLpIO::is_free(this, &haystack) )
            break;
          v302[v102] = -a2;
          CoinLpIO::fscanfLpIO(this, &haystack);
          if ( (unsigned int)CoinLpIO::is_keyword(this, &haystack) )
            goto LABEL_63;
          v95 = haystack;
          if ( ((haystack - 43) & 0xFD) != 0 )
            goto LABEL_124;
LABEL_109:
          v96 = -1;
          v97 = &haystack;
          if ( v95 != 45 )
            v96 = is_keyword;
          do
          {
            v98 = *(_DWORD *)v97;
            v97 += 4;
            v99 = ~v98 & (v98 - 16843009) & 0x80808080;
          }
          while ( !v99 );
          if ( (~v98 & (v98 - 16843009) & 0x8080) == 0 )
          {
            LOBYTE(v99) = (~v98 & (v98 - 16843009) & 0x80808080) >> 16;
            v97 += 2;
          }
          v100 = &v313;
          if ( &v97[-__CFADD__((_BYTE)v99, (_BYTE)v99) - 3] - &haystack == 1 )
          {
            v100 = &haystack;
            CoinLpIO::fscanfLpIO(this, &haystack);
          }
          if ( !(unsigned int)CoinLpIO::first_is_number(this, v100) )
            goto LABEL_125;
        }
        is_sense = CoinLpIO::is_sense(this, &haystack);
        if ( is_sense < 0 )
        {
          if ( destb != -1 )
          {
            switch ( destb )
            {
              case 1:
                v302[(int)v102] = v260;
                v303[(int)v102] = v260;
                break;
              case 2:
                v303[(int)v102] = v260;
                break;
              case 0:
                v302[(int)v102] = v260;
                break;
            }
          }
          goto LABEL_107;
        }
        CoinLpIO::fscanfLpIO(this, &haystack);
        if ( ((haystack - 43) & 0xFD) != 0 )
        {
          v282 = is_keyword;
          v153 = &haystack;
        }
        else
        {
          v149 = -1;
          v150 = &haystack;
          if ( haystack != 45 )
            v149 = is_keyword;
          v282 = v149;
          do
          {
            v151 = *(_DWORD *)v150;
            v150 += 4;
            v152 = ~v151 & (v151 - 16843009) & 0x80808080;
          }
          while ( !v152 );
          if ( (~v151 & (v151 - 16843009) & 0x8080) == 0 )
          {
            LOBYTE(v152) = (~v151 & (v151 - 16843009) & 0x80808080) >> 16;
            v150 += 2;
          }
          v153 = &v313;
          if ( &v150[-__CFADD__((_BYTE)v152, (_BYTE)v152) - 3] - &haystack == 1 )
          {
            CoinLpIO::fscanfLpIO(this, &haystack);
            v153 = &haystack;
          }
        }
        nptrd = v153;
        if ( (unsigned int)CoinLpIO::first_is_number(this, v153) )
        {
          *(double *)v3.m128i_i64 = strtod(nptrd, nullptr);
          v259 = (double)v282 * *(double *)v3.m128i_i64;
          CoinLpIO::fscanfLpIO(this, &haystack);
          goto LABEL_181;
        }
        if ( (unsigned int)CoinLpIO::is_inf(this, nptrd) )
        {
          *(double *)v3.m128i_i64 = (double)v282 * a2;
          v259 = *(double *)v3.m128i_i64;
          CoinLpIO::fscanfLpIO(this, &haystack);
LABEL_181:
          if ( destb == -1 )
          {
            switch ( is_sense )
            {
              case 1:
                v302[v102] = v259;
                v303[v102] = v259;
                break;
              case 2:
                v302[v102] = v259;
                break;
              case 0:
                v303[v102] = v259;
                break;
            }
            goto LABEL_107;
          }
          if ( destb == is_sense )
          {
            if ( destb != 1 )
            {
              if ( destb )
              {
                if ( destb == 2 )
                {
                  v303[v102] = v260;
                  v302[v102] = v259;
                }
              }
              else
              {
                v302[v102] = v260;
                v303[v102] = v259;
              }
              goto LABEL_107;
            }
            v3.m128i_i64[0] = fabs(v260 - v259);
            if ( *(double *)v3.m128i_i64 <= a2 )
            {
              v302[v102] = v260;
              v303[v102] = v260;
              goto LABEL_107;
            }
            sprintf(
              s,
              "### ERROR: Bounds; variable: %s read_sense1: %d  read_sense2: %d  bnd1: %f  bnd2: %f\n",
              &haystack,
              1,
              1,
              v260,
              v259);
            v231 = __cxa_allocate_exception(0x30u);
            std::string::string();
            std::string::string();
            std::string::string();
            std::string::string();
            CoinError::CoinError();
          }
          else
          {
            sprintf(s, "### ERROR: Bounds; variable: %s read_sense1: %d  read_sense2: %d\n", &haystack, destb, is_sense);
            v231 = __cxa_allocate_exception(0x30u);
            std::string::string();
            std::string::string();
            std::string::string();
            std::string::string();
            CoinError::CoinError();
          }
        }
        else
        {
          sprintf(s, "### ERROR: Bounds; expect a number, get: %s\n", &haystack);
          v231 = __cxa_allocate_exception(0x30u);
          std::string::string();
          std::string::string();
          std::string::string();
          std::string::string();
          CoinError::CoinError();
        }
        goto LABEL_299;
      case 2LL:
        CoinLpIO::fscanfLpIO(this, &haystack);
        while ( !(unsigned int)CoinLpIO::is_keyword(this, &haystack) )
        {
          v113 = CoinLpIO::findHash(this, &haystack, 1);
          if ( v113 < 0 )
          {
            sprintf(
              s,
              "### CoinLpIO::readLp(): Integer variable %s does not appear in objective function or constraints",
              &haystack);
            v114 = (CoinMessageHandler *)CoinMessageHandler::message(
                                           *((CoinMessageHandler **)this + 1),
                                           30,
                                           (CoinLpIO *)((char *)this + 24));
            v119 = CoinMessageHandler::operator<<(v114, (__int64)s, v115, v116, v117, v118, v252);
            CoinMessageHandler::operator<<(v119, 0, *(double *)v3.m128i_i64);
            CoinLpIO::insertHash(this, &haystack, 1);
            v113 = CoinLpIO::findHash(this, &haystack, 1);
            if ( v294 == v113 )
            {
              v281 = v113;
              CoinLpIO::realloc_col(this, &v302, &v303, &v304, &v294);
              v113 = v281;
            }
          }
          v304[v113] = 3 * (v304[v113] == 3) + 1;
          CoinLpIO::fscanfLpIO(this, &haystack);
          v257 = 1;
        }
        continue;
      case 3LL:
        CoinLpIO::fscanfLpIO(this, &haystack);
        v103 = v257;
        while ( !(unsigned int)CoinLpIO::is_keyword(this, &haystack) )
        {
          v106 = CoinLpIO::findHash(this, &haystack, 1);
          if ( v106 < 0 )
          {
            sprintf(
              s,
              "### CoinLpIO::readLp(): Binary variable %s does not appear in objective function or constraints",
              &haystack);
            v107 = (CoinMessageHandler *)CoinMessageHandler::message(
                                           *((CoinMessageHandler **)this + 1),
                                           30,
                                           (CoinLpIO *)((char *)this + 24));
            v112 = CoinMessageHandler::operator<<(v107, (__int64)s, v108, v109, v110, v111, v252);
            CoinMessageHandler::operator<<(v112, 0, *(double *)v3.m128i_i64);
            CoinLpIO::insertHash(this, &haystack, 1);
            v106 = CoinLpIO::findHash(this, &haystack, 1);
            if ( v294 == v106 )
            {
              v280 = v106;
              CoinLpIO::realloc_col(this, &v302, &v303, &v304, &v294);
              v106 = v280;
            }
          }
          v304[v106] = 1;
          v104 = v106;
          if ( v302[v104] < 0.0 )
            v302[v104] = 0.0;
          v105 = &v303[v104];
          v3.m128i_i64[0] = *(__int64 *)v105;
          if ( *v105 > 1.0 )
            *v105 = 1.0;
          v103 = 1;
          CoinLpIO::fscanfLpIO(this, &haystack);
        }
        v257 = v103;
        continue;
      case 4LL:
        CoinLpIO::fscanfLpIO(this, &haystack);
        while ( !(unsigned int)CoinLpIO::is_keyword(this, &haystack) )
        {
          v88 = CoinLpIO::findHash(this, &haystack, 1);
          if ( v88 < 0 )
          {
            sprintf(
              s,
              "### CoinLpIO::readLp(): Semi-continuous variable %s does not appear in objective function or constraints",
              &haystack);
            v89 = (CoinMessageHandler *)CoinMessageHandler::message(
                                          *((CoinMessageHandler **)this + 1),
                                          30,
                                          (CoinLpIO *)((char *)this + 24));
            v94 = CoinMessageHandler::operator<<(v89, (__int64)s, v90, v91, v92, v93, v252);
            CoinMessageHandler::operator<<(v94, 0, *(double *)v3.m128i_i64);
            CoinLpIO::insertHash(this, &haystack, 1);
            v88 = CoinLpIO::findHash(this, &haystack, 1);
            if ( v294 == v88 )
            {
              v279 = v88;
              CoinLpIO::realloc_col(this, &v302, &v303, &v304, &v294);
              v88 = v279;
            }
          }
          v304[v88] = (v304[v88] == 1) + 3;
          CoinLpIO::fscanfLpIO(this, &haystack);
          v257 = 1;
        }
        continue;
      case 5LL:
        *((_DWORD *)this + 50) = 0;
        src = (void *)operator new[](0x50u);
        v278 = (double *)operator new[](0x320u);
        nptrc = (char *)operator new[](0x190u);
        CoinLpIO::fscanfLpIO(this, &haystack);
        v266 = 0;
        v269 = 100;
        v256 = 10;
        while ( !(unsigned int)CoinLpIO::is_keyword(this, &haystack) )
        {
          v75 = strstr(&haystack, "::");
          v262 = 2;
          if ( !v75 )
          {
            v161 = &haystack;
            do
            {
              v162 = *(_DWORD *)v161;
              v161 += 4;
              v163 = ~v162 & (v162 - 16843009) & 0x80808080;
            }
            while ( !v163 );
            v164 = (~v162 & (v162 - 16843009) & 0x8080) == 0;
            if ( (~v162 & (v162 - 16843009) & 0x8080) == 0 )
              v163 >>= 16;
            v165 = v161 + 2;
            if ( !v164 )
              v165 = v161;
            v76 = 0;
            v166 = &v165[-__CFADD__((_BYTE)v163, (_BYTE)v163) - 3] - &haystack;
            if ( *(&haystack + (int)v166 - 1) != 58 )
              goto LABEL_150;
            v167 = v166;
            memcpy(v311, &haystack, v166 + 1);
            CoinLpIO::fscanfLpIO(this, &haystack);
            strcpy((char *)v311 + v167, &haystack);
            strcpy(&haystack, (const char *)v311);
            if ( (unsigned int)CoinLpIO::is_keyword(this, &haystack) )
              break;
            v75 = strstr(&haystack, "::");
            if ( !v75 )
              goto LABEL_150;
            v262 = 1;
          }
          v76 = v75 > strchr(&haystack, 58) || v75 == v314;
          if ( !v76 )
            goto LABEL_150;
          if ( v75 - 2 < &haystack || memcmp(v75 - 2, "S1::", 4u) && memcmp(v75 - 2, "S2::", 4u) )
          {
LABEL_149:
            v76 = 0;
LABEL_150:
            sprintf(s, "### CoinLpIO::readLp(): bad SOS item %s", &haystack);
            v127 = (CoinMessageHandler *)CoinMessageHandler::message(
                                           *((CoinMessageHandler **)this + 1),
                                           30,
                                           (CoinLpIO *)((char *)this + 24));
            v132 = CoinMessageHandler::operator<<(v127, (__int64)s, v128, v129, v130, v131, v252);
            CoinMessageHandler::operator<<(v132, 0, *(double *)v3.m128i_i64);
            ++v266;
            goto LABEL_94;
          }
          v77 = *(v75 - 1);
          v263 = v76;
          v78 = 0;
          v267 = v77 - 48;
          while ( 1 )
          {
            desta = v78;
            CoinLpIO::fscanfLpIO(this, &haystack);
            if ( (unsigned int)CoinLpIO::is_keyword(this, &haystack) || strstr(&haystack, "::") )
            {
              v76 = 0;
              goto LABEL_89;
            }
            v120 = strchr(&haystack, 58);
            v121 = v120;
            if ( !v120 )
              goto LABEL_149;
            *v120 = 0;
            v122 = CoinLpIO::columnIndex(this, &haystack);
            *v121 = 58;
            if ( v122 < 0 )
              break;
            v123 = v121 + 1;
            if ( !(unsigned int)strlen(v123) )
            {
              CoinLpIO::fscanfLpIO(this, &haystack);
              if ( (unsigned int)CoinLpIO::is_keyword(this, &haystack) )
              {
                v262 = 0;
              }
              else
              {
                v133 = strstr(&haystack, "::");
                v134 = 0;
                if ( !v133 )
                {
                  v134 = v262;
                  v123 = &haystack;
                }
                v262 = v134;
              }
            }
            *(double *)v3.m128i_i64 = strtod(v123, nullptr);
            v124 = v78;
            v125 = 4 * v78;
            if ( v269 == (_DWORD)v78 )
            {
              v269 *= 2;
              destc = (void *)operator new[](8LL * v269);
              v126 = (void *)operator new[](4LL * v269);
              memcpy(destc, v278, 8 * v78);
              memcpy(v126, nptrc, 4 * v78);
              operator delete[](v278);
              operator delete[](nptrc);
              v124 = v78;
              v125 = 4 * v78;
              nptrc = (char *)v126;
              v278 = (double *)destc;
            }
            ++v78;
            v278[v124] = *(double *)v3.m128i_i64;
            *(_DWORD *)&nptrc[v125] = v122;
          }
          v76 = v263;
          if ( v266 )
          {
            v76 = 0;
          }
          else
          {
            sprintf(s, "### CoinLpIO::readLp(): Variable %s not found or no weight", &haystack);
            v136 = (CoinMessageHandler *)CoinMessageHandler::message(
                                           *((CoinMessageHandler **)this + 1),
                                           30,
                                           (CoinLpIO *)((char *)this + 24));
            v141 = CoinMessageHandler::operator<<(v136, (__int64)s, v137, v138, v139, v140, v252);
            CoinMessageHandler::operator<<(v141, 0, *(double *)v3.m128i_i64);
            v142 = *((CoinMessageHandler **)this + 1);
            *(__m128i *)s = _mm_load_si128((const __m128i *)&xmmword_296AE0);
            strcpy(v319, " (no spaces)");
            si128 = _mm_load_si128((const __m128i *)&xmmword_296AF0);
            v317 = _mm_load_si128((const __m128i *)&xmmword_296B00);
            v3 = _mm_load_si128((const __m128i *)&xmmword_296B10);
            v318 = v3;
            v143 = (CoinMessageHandler *)CoinMessageHandler::message(v142, 30, (CoinLpIO *)((char *)this + 24));
            v148 = CoinMessageHandler::operator<<(v143, (__int64)s, v144, v145, v146, v147, v253);
            CoinMessageHandler::operator<<(v148, 0, *(double *)v3.m128i_i64);
          }
          ++v266;
LABEL_89:
          if ( !v262 )
            goto LABEL_150;
          if ( (unsigned int)(v267 - 1) <= 1 )
          {
            if ( (_DWORD)v78 )
            {
              CoinSort_2<double,int>(v278, &v278[(int)v78], nptrc);
              v168 = *v278;
              if ( (_DWORD)v78 == 1 )
                goto LABEL_210;
              v3.m128i_i64[0] = fabs(v168 - v278[1]);
              if ( *(double *)v3.m128i_i64 >= 1.0e-12 )
              {
                v169 = v278 + 2;
                while ( &v278[(unsigned int)(v78 - 2) + 2] != v169 )
                {
                  v3.m128i_i64[0] = fabs(v168 - *v169++);
                  if ( *(double *)v3.m128i_i64 < 1.0e-12 )
                    goto LABEL_235;
                }
                desta = v78;
LABEL_210:
                if ( *((_DWORD *)this + 50) == v256 )
                {
                  v256 *= 2;
                  if ( (unsigned __int64)v256 > 0xFFFFFFFFFFFFFFFLL )
                    goto LABEL_318;
                  v170 = (void *)operator new[](8LL * v256);
                  memcpy(v170, src, 8LL * *((int *)this + 50));
                  operator delete[](src);
                  src = v170;
                }
                v171 = (CoinSosSet *)operator new(0x20u);
                CoinSosSet::CoinSosSet(v171, desta, (const int *)nptrc, v278, v267);
                v172 = *((int *)this + 50);
                *((_QWORD *)src + v172) = v171;
                *((_DWORD *)this + 50) = v172 + 1;
                goto LABEL_94;
              }
LABEL_235:
              sprintf(s, "### CoinLpIO::readLp(): set %d has duplicate weights", *((unsigned int *)this + 50));
            }
            else
            {
              sprintf(s, "### CoinLpIO::readLp(): set %d is empty", *((unsigned int *)this + 50));
            }
            v79 = (CoinMessageHandler *)CoinMessageHandler::message(
                                          *((CoinMessageHandler **)this + 1),
                                          30,
                                          (CoinLpIO *)((char *)this + 24));
            v84 = CoinMessageHandler::operator<<(v79, (__int64)s, v80, v81, v82, v83, v252);
            CoinMessageHandler::operator<<(v84, 0, *(double *)v3.m128i_i64);
          }
LABEL_94:
          if ( (unsigned int)CoinLpIO::is_keyword(this, &haystack) || v266 && !v76 )
          {
            operator delete[](v278);
            operator delete[](nptrc);
            v85 = *((int *)this + 50);
            if ( !(_DWORD)v85 )
              goto LABEL_63;
            if ( v85 <= 0xFFFFFFFFFFFFFFFLL )
            {
              v86 = (void *)operator new[](8 * v85);
              v87 = *((int *)this + 50);
              *((_QWORD *)this + 24) = v86;
              memcpy(v86, src, 8 * v87);
              operator delete[](src);
              goto LABEL_63;
            }
LABEL_318:
            __cxa_throw_bad_array_new_length();
          }
        }
        v76 = 0;
        goto LABEL_94;
      case 6LL:
        v50 = (char *)malloc(4LL * (v289 + 1));
        v51 = v290;
        nptrb = v50;
        if ( v290 <= 0 )
          goto LABEL_68;
        v52 = 0;
        do
        {
          v53 = CoinLpIO::findHash(this, *((const char **)ptr + v52), 1);
          *(_DWORD *)&nptrb[4 * v52] = v53;
          if ( v53 < 0 )
          {
            sprintf(s, "### ERROR: Hash table: %s not found\n", *((const char **)ptr + v52));
            v231 = __cxa_allocate_exception(0x30u);
            std::string::string();
            std::string::string();
            std::string::string();
            std::string::string();
            CoinError::CoinError();
            goto LABEL_299;
          }
          v51 = v290;
          ++v52;
        }
        while ( v290 > (int)v52 );
LABEL_68:
        v54 = *((int *)this + 79);
        v55 = v298;
        *((_DWORD *)this + 15) = v54;
        *((_DWORD *)this + 16) = v51 - *v55;
        if ( v54 > 0x1FFFFFFFFFFFFFFELL )
          goto LABEL_318;
        v265 = (void *)operator new[](4 * v54);
        v56 = (char *)operator new[](*((int *)this + 15));
        v57 = *((int *)this + 15);
        v58 = v56;
        memset(v56, 0, v57);
        if ( v293 <= 0 )
        {
          dest = 0;
          goto LABEL_220;
        }
        v268 = 0;
        dest = 0;
        v59 = v311;
        v276 = (char ***)v309;
        while ( 2 )
        {
          *v59 = (double *)calloc(8 * v57, 1u);
          v60 = v276;
          ++v268;
          v61 = *(_DWORD *)v276;
          if ( *(_DWORD *)v276 >= *((_DWORD *)v276 + 1) )
            goto LABEL_217;
          v62 = *(_DWORD *)v276;
          v277 = (char ***)v59;
          v63 = 8LL * v61;
          v64 = v58;
          v65 = v62;
          v66 = v63;
          v67 = v60;
          v68 = v66;
          while ( 2 )
          {
            v73 = CoinLpIO::findHash(this, *(const char **)((char *)ptr + v68), 1);
            if ( v73 < 0 )
            {
              sprintf(s, "### ERROR: Hash table: %s (obj) not found\n", *(const char **)((char *)ptr + v68));
              v231 = __cxa_allocate_exception(0x30u);
              std::string::string();
              std::string::string();
              std::string::string();
              std::string::string();
              CoinError::CoinError();
LABEL_289:
              if ( (_UNKNOWN *)(v305 - 24) != &std::string::_Rep::_S_empty_rep_storage )
                sub_5C66A(v305 - 24);
              if ( (_UNKNOWN *)(v306 - 24) != &std::string::_Rep::_S_empty_rep_storage )
                sub_5C66A(v306 - 24);
              if ( (_UNKNOWN *)(v307 - 24) != &std::string::_Rep::_S_empty_rep_storage )
                sub_5C66A(v307 - 24);
              v232 = (double *)(v308 - 24);
              if ( (_UNKNOWN *)(v308 - 24) != &std::string::_Rep::_S_empty_rep_storage )
                goto LABEL_296;
              goto LABEL_297;
            }
            v74 = &v64[v73];
            if ( *v74 )
              ++dest;
            else
              *v74 = 1;
            v69 = (double **)v277;
            ++v65;
            v70 = (double *)&(*v277)[v73];
            v71 = (double)obj * *(double *)((char *)v296 + v68);
            v68 += 8;
            v72 = *((_DWORD *)v67 + 1) <= v65;
            *(double *)v3.m128i_i64 = v71 + *v70;
            *v70 = *(double *)v3.m128i_i64;
            if ( !v72 )
              continue;
            break;
          }
          v276 = v67;
          v57 = *((int *)this + 15);
          v58 = v64;
          v59 = v69;
LABEL_217:
          memset(v58, 0, v57);
          ++v59;
          v276 = (char ***)((char *)v276 + 4);
          if ( v293 > v268 )
            continue;
          break;
        }
        if ( dest )
        {
          sprintf(s, "### ERROR: %d duplicates in objective\n", dest);
          v240 = (CoinMessageHandler *)CoinMessageHandler::message(
                                         *((CoinMessageHandler **)this + 1),
                                         28,
                                         (CoinLpIO *)((char *)this + 24));
          v245 = CoinMessageHandler::operator<<(v240, (__int64)s, v241, v242, v243, v244, v252);
          CoinMessageHandler::operator<<(v245, 0, *(double *)v3.m128i_i64);
        }
LABEL_220:
        if ( obj == -1 )
        {
          v233 = (CoinMessageHandler *)CoinMessageHandler::message(
                                         *((CoinMessageHandler **)this + 1),
                                         28,
                                         (CoinLpIO *)((char *)this + 24));
          v238 = CoinMessageHandler::operator<<(
                   v233,
                   (__int64)" CoinLpIO::readLp(): Maximization problem reformulated as minimization",
                   v234,
                   v235,
                   v236,
                   v237,
                   v252);
          CoinMessageHandler::operator<<(v238, 0, *(double *)v3.m128i_i64);
          v239 = *((_DWORD *)this + 40);
          if ( v239 > 0 )
          {
            *(double *)v3.m128i_i64 = -*((double *)this + 21);
            *((_QWORD *)this + 21) = v3.m128i_i64[0];
            if ( v239 != 1 )
            {
              *(double *)v3.m128i_i64 = -*((double *)this + 22);
              *((_QWORD *)this + 22) = v3.m128i_i64[0];
            }
          }
          *((_BYTE *)this + 256) = 1;
        }
        if ( v291 >= 0 )
        {
          v173 = v298;
          v174 = 1;
          do
          {
            v173[v174 - 1] -= v292;
            v175 = v174++;
          }
          while ( v291 >= v175 );
        }
        v176 = *((_DWORD *)this + 14);
        if ( v176 > 0 )
        {
          v177 = v298;
          v178 = v292;
          v179 = (char *)v298 + 4;
          v180 = (char *)v298 + 4 * (unsigned int)(v176 - 1) + 4;
          while ( 1 )
          {
            v181 = v178 + *v177;
            v182 = v178 + v177[1];
            if ( v181 < v182 )
            {
              v183 = &nptrb[4 * v181];
              v184 = (unsigned __int64)&nptrb[4 * v181 + 4 + 4 * (unsigned __int64)(unsigned int)(v182 - 1 - v181)];
              v185 = (int *)v183;
              do
              {
                while ( 1 )
                {
                  v186 = &v58[*v185];
                  if ( *v186 )
                    break;
                  ++v185;
                  *v186 = 1;
                  if ( v185 == (int *)v184 )
                    goto LABEL_231;
                }
                ++v185;
                ++dest;
              }
              while ( v185 != (int *)v184 );
              do
              {
LABEL_231:
                v187 = *(int *)v183;
                v183 += 4;
                v58[v187] = 0;
              }
              while ( v185 != (int *)v183 );
            }
            v177 = v179;
            if ( v180 == v179 )
              break;
            v179 += 4;
          }
        }
        operator delete[](v58);
        operator delete[](v265);
        if ( dest )
        {
          sprintf(s, "### ERROR: %d duplicates in objective and matrix\n", dest);
          v225 = (CoinMessageHandler *)CoinMessageHandler::message(
                                         *((CoinMessageHandler **)this + 1),
                                         28,
                                         (CoinLpIO *)((char *)this + 24));
          v230 = CoinMessageHandler::operator<<(v225, (__int64)s, v226, v227, v228, v229, v252);
          CoinMessageHandler::operator<<(v230, 0, *(double *)v3.m128i_i64);
          v231 = __cxa_allocate_exception(0x30u);
          std::string::string();
          std::string::string();
          std::string::string();
          std::string::string();
          CoinError::CoinError();
          goto LABEL_289;
        }
        v188 = (CoinPackedMatrix *)operator new(0x58u);
        CoinPackedMatrix::CoinPackedMatrix(
          v188,
          0,
          *((_DWORD *)this + 15),
          *((_DWORD *)this + 14),
          *((_DWORD *)this + 16),
          &v296[v292],
          (const int *)&nptrb[4 * v292],
          (const int *)v298,
          nullptr);
        v189 = nullptr;
        v190 = *((_QWORD *)this + 24);
        v191 = *((_DWORD *)this + 50);
        *((_QWORD *)this + 24) = 0;
        *((_DWORD *)this + 50) = 0;
        if ( v257 )
          v189 = v304;
        CoinLpIO::setLpDataWithoutRowAndColNames(this, v188, v302, v303, (const double **)v311, v293, v189, v300, v301);
        v192 = v293;
        *((_QWORD *)this + 24) = v190;
        *((_DWORD *)this + 50) = v191;
        if ( v192 > 0 )
        {
          v193 = v297;
          v283 = (char ***)v188;
          v194 = 0;
          do
          {
            v195 = (char *)v310[v194];
            v196 = &(&v193[(int)v194])[v291];
            if ( v195 )
            {
              v264 = (CoinMessages *)v193;
              v270 = strlen((const char *)v310[v194]);
              v197 = (char *)malloc(v270 + 1);
              v198 = (unsigned __int64)v197;
              v193 = (char **)v264;
              if ( v270 && v195 != v197 )
              {
                v199 = v270 >> 3;
                if ( v270 >> 3 <= 0 )
                {
                  v207 = (_BYTE *)v198;
                }
                else
                {
                  if ( (v198 >= (unsigned __int64)(v195 + 16) || (unsigned __int64)v195 >= v198 + 16) && v199 > 1 )
                  {
                    v200 = 0;
                    v201 = 0;
                    do
                    {
                      v3 = _mm_loadu_si128((const __m128i *)&v195[v200]);
                      ++v201;
                      *(__m128i *)(v198 + v200) = v3;
                      v200 += 16;
                    }
                    while ( v199 >> 1 > v201 );
                    v202 = 8LL * (v199 & 0xFFFFFFFE);
                    v203 = &v195[v202];
                    v204 = (char *)(v198 + v202);
                    if ( (v199 & 0xFFFFFFFE) != v199 )
                    {
                      *v204 = *v203;
                      v204[1] = v203[1];
                      v204[2] = v203[2];
                      v204[3] = v203[3];
                      v204[4] = v203[4];
                      v204[5] = v203[5];
                      v204[6] = v203[6];
                      v204[7] = v203[7];
                    }
                    LODWORD(v205) = v199 - 1;
                  }
                  else
                  {
                    v221 = v195;
                    v205 = v199 - 1;
                    v222 = v198;
                    do
                    {
                      v223 = *v221;
                      v222 += 8LL;
                      v221 += 8;
                      *(_BYTE *)(v222 - 8) = v223;
                      *(_BYTE *)(v222 - 7) = *(v221 - 7);
                      *(_BYTE *)(v222 - 6) = *(v221 - 6);
                      *(_BYTE *)(v222 - 5) = *(v221 - 5);
                      *(_BYTE *)(v222 - 4) = *(v221 - 4);
                      *(_BYTE *)(v222 - 3) = *(v221 - 3);
                      *(_BYTE *)(v222 - 2) = *(v221 - 2);
                      *(_BYTE *)(v222 - 1) = *(v221 - 1);
                    }
                    while ( v198 + 8 * v205 + 8 != v222 );
                  }
                  v206 = 8LL * (int)v205 + 8;
                  v195 += v206;
                  v207 = (_BYTE *)(v198 + v206);
                }
                switch ( v270 % 8 )
                {
                  case 1:
                    goto LABEL_265;
                  case 2:
                    goto LABEL_264;
                  case 3:
                    goto LABEL_263;
                  case 4:
                    goto LABEL_262;
                  case 5:
                    goto LABEL_261;
                  case 6:
                    goto LABEL_260;
                  case 7:
                    v207[6] = v195[6];
LABEL_260:
                    v207[5] = v195[5];
LABEL_261:
                    v207[4] = v195[4];
LABEL_262:
                    v207[3] = v195[3];
LABEL_263:
                    v207[2] = v195[2];
LABEL_264:
                    v207[1] = v195[1];
LABEL_265:
                    *v207 = *v195;
                    break;
                  default:
                    break;
                }
              }
              *(_BYTE *)(v198 + v270) = 0;
              *v196 = (char *)v198;
            }
            else
            {
              v224 = CoinStrdup("obj");
              v193 = v297;
              *v196 = (char *)v224;
            }
            ++v194;
          }
          while ( v293 > (int)v194 );
          v188 = (CoinPackedMatrix *)v283;
        }
        CoinLpIO::setLpDataRowAndColNames(this, (const char *const *)v297, nullptr);
        if ( (unsigned int)CoinLpIO::are_invalid_names(
                             this,
                             *((const char *const **)this + 37),
                             *((_DWORD *)this + 79),
                             0) )
        {
          CoinLpIO::setDefaultColNames(this);
          v215 = (CoinMessageHandler *)CoinMessageHandler::message(
                                         *((CoinMessageHandler **)this + 1),
                                         30,
                                         (CoinLpIO *)((char *)this + 24));
          v220 = CoinMessageHandler::operator<<(
                   v215,
                   (__int64)"### CoinLpIO::readLp(): Invalid column names\nNow using default column names.",
                   v216,
                   v217,
                   v218,
                   v219,
                   v252);
          CoinMessageHandler::operator<<(v220, 0, *(double *)v3.m128i_i64);
        }
        if ( v290 > 0 )
        {
          v208 = 0;
          v209 = 0;
          do
          {
            ++v208;
            v210 = *(void **)((char *)ptr + v209);
            v209 += 8;
            free(v210);
          }
          while ( v290 > v208 );
        }
        free(ptr);
        if ( v291 >= 0 )
        {
          v211 = 0;
          v212 = 0;
          do
          {
            ++v211;
            v213 = v297[v212++];
            free(v213);
          }
          while ( v291 >= v211 );
        }
        free(v297);
        if ( v293 > 0 )
        {
          free(v310[0]);
          if ( v293 > 1 )
            free(v310[1]);
        }
        free(v296);
        free(v298);
        free(nptrb);
        free(v303);
        free(v302);
        free(v299);
        free(v300);
        free(v301);
        free(v304);
        if ( v293 > 0 )
        {
          free(v311[0]);
          if ( v293 > 1 )
            free(v311[1]);
        }
        return (*(__int64 (__fastcall **)(CoinPackedMatrix *))(*(_QWORD *)v188 + 8LL))(v188);
      default:
        sprintf(s, "### ERROR: Lost while reading: (%s)\n", &haystack);
        v231 = __cxa_allocate_exception(0x30u);
        std::string::string();
        std::string::string();
        std::string::string();
        std::string::string();
        CoinError::CoinError();
        goto LABEL_299;
    }
  }
}

