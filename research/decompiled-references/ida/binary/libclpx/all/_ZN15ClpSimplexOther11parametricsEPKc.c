__int64 __fastcall ClpSimplexOther::parametrics(CoinMessageHandler **this, const char *a2, double a3)
{
  CoinMessageHandler **v3; // r15
  FILE *v4; // rax
  int v5; // edi
  char *v6; // rbx
  char *v7; // r14
  char *v8; // rax
  char *v9; // rax
  char *v10; // rbx
  CoinMessageHandler *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  const char *v18; // rbx
  char *v19; // rax
  char *v20; // r14
  double v21; // xmm0_8
  const char *v22; // r14
  char *v23; // rax
  char *v24; // rbx
  double v25; // xmm0_8
  const char *v26; // rbx
  char *v27; // rax
  char *v28; // r14
  const char *v29; // r14
  char *v30; // rax
  char *v31; // rbx
  int v32; // eax
  __int64 *v33; // r12
  int v34; // edi
  __m128i v35; // xmm0
  char *v36; // rbx
  char *v37; // r14
  char *v38; // rax
  bool v39; // r14
  char *v40; // r13
  char *v41; // rax
  char *v42; // rbx
  __int64 v43; // r15
  bool v44; // al
  CoinMessageHandler *v45; // rdi
  __m128i v46; // xmm0
  CoinMessageHandler *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  void *v53; // rdi
  int v54; // edi
  __m128i v55; // xmm0
  char *v56; // rbx
  char *v57; // r14
  char *v58; // rax
  bool v59; // r12
  char *v60; // r13
  char *v61; // rax
  char *v62; // rbx
  __int64 v63; // r15
  CoinMessageHandler *v64; // rdi
  __m128i v65; // xmm0
  CoinMessageHandler *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  void *v72; // rdi
  int v73; // edx
  unsigned __int64 v74; // rax
  const char **v75; // rax
  const char **v76; // r13
  const char **v77; // r12
  __int64 v78; // r14
  const char *v79; // rbx
  const char *v80; // rax
  unsigned int v81; // esi
  __int64 v82; // rdx
  unsigned int v83; // ecx
  __int64 v84; // rdx
  const char *v85; // rcx
  char *v86; // rdx
  __int64 v87; // rsi
  int v88; // edx
  __int64 v89; // rcx
  char *v90; // rcx
  bool v91; // dl
  int v92; // edx
  CoinMessageHandler *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rax
  double *v99; // rax
  unsigned __int64 v100; // rbx
  char v101; // al
  char *v102; // rcx
  char *v103; // rdx
  char *v104; // r13
  __int64 v105; // rbx
  char *v106; // rax
  char *v107; // r15
  double **v108; // rdx
  double **v109; // rax
  int v110; // eax
  int v111; // edx
  bool v112; // cc
  int v113; // eax
  int v114; // r14d
  const char **v115; // r12
  CoinMessageHandler *v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rax
  __int64 v122; // rbx
  int v123; // eax
  unsigned __int64 v124; // rax
  const char **v125; // rax
  const char **v126; // r13
  const char **v127; // r12
  __int64 v128; // r14
  const char *v129; // rbx
  const char *v130; // rax
  unsigned int v131; // esi
  __int64 v132; // rdx
  unsigned int v133; // ecx
  __int64 v134; // rdx
  const char *v135; // rcx
  char *v136; // rdx
  __int64 v137; // rsi
  int v138; // edx
  __int64 v139; // rcx
  char *v140; // rcx
  CoinMessageHandler *v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rax
  int v147; // edx
  double *v148; // rax
  unsigned __int64 v149; // r14
  double *v150; // rax
  unsigned __int64 v151; // r14
  char v152; // al
  char *v153; // rcx
  char *v154; // rdx
  char *v155; // r13
  __int64 v156; // rbx
  int v157; // r14d
  char *v158; // rax
  char *v159; // r15
  double *v160; // rdx
  double *v161; // rax
  int v162; // eax
  int v163; // edx
  int v164; // eax
  const char **v165; // r14
  int v166; // ebx
  CoinMessageHandler *v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // rax
  __int64 v173; // rbx
  int v174; // eax
  int v175; // edx
  const char *v176; // rcx
  const char *v177; // rdx
  char v178; // di
  int v179; // edx
  double *v180; // rax
  __int64 v181; // rax
  int v182; // esi
  int v183; // edx
  double *v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  CoinMessageHandler *v187; // rdi
  int v188; // r13d
  int v189; // r14d
  unsigned int v190; // eax
  CoinMessageHandler *v191; // rdi
  int v192; // edx
  int v193; // edx
  const char *v194; // rcx
  const char *v195; // rdx
  char v196; // di
  CoinMessageHandler *v197; // rax
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 v202; // rax
  int v203; // edx
  CoinMessageHandler *v204; // rax
  __int64 v205; // rdx
  __int64 v206; // rcx
  __int64 v207; // r8
  __int64 v208; // r9
  __int64 v209; // rax
  int v210; // edx
  int v211; // edx
  int v212; // edx
  __int64 v213; // [rsp+0h] [rbp-3E0h]
  __int64 v214; // [rsp+0h] [rbp-3E0h]
  __int64 v215; // [rsp+0h] [rbp-3E0h]
  const char **v216; // [rsp+10h] [rbp-3D0h]
  int v217; // [rsp+18h] [rbp-3C8h]
  __int64 v218; // [rsp+18h] [rbp-3C8h]
  int v219; // [rsp+20h] [rbp-3C0h]
  __int64 v220; // [rsp+20h] [rbp-3C0h]
  __int64 *v221; // [rsp+28h] [rbp-3B8h]
  int v222; // [rsp+30h] [rbp-3B0h]
  int v223; // [rsp+34h] [rbp-3ACh]
  const char **v224; // [rsp+38h] [rbp-3A8h]
  void *v225; // [rsp+38h] [rbp-3A8h]
  double v226; // [rsp+40h] [rbp-3A0h]
  double v227; // [rsp+48h] [rbp-398h]
  bool v228; // [rsp+50h] [rbp-390h]
  CoinMessageHandler **v229; // [rsp+50h] [rbp-390h]
  void *v230; // [rsp+58h] [rbp-388h]
  __int64 v231; // [rsp+60h] [rbp-380h]
  double *v232; // [rsp+68h] [rbp-378h]
  double *v233; // [rsp+68h] [rbp-378h]
  double *v234; // [rsp+70h] [rbp-370h]
  double *v235; // [rsp+70h] [rbp-370h]
  ClpSimplexOther *v237; // [rsp+78h] [rbp-368h]
  double *v238; // [rsp+78h] [rbp-368h]
  int v239; // [rsp+78h] [rbp-368h]
  double *v240; // [rsp+80h] [rbp-360h]
  double *v241; // [rsp+88h] [rbp-358h]
  double *v242; // [rsp+88h] [rbp-358h]
  int v243; // [rsp+88h] [rbp-358h]
  bool v244; // [rsp+9Bh] [rbp-345h]
  int v245; // [rsp+9Ch] [rbp-344h]
  int v246; // [rsp+9Ch] [rbp-344h]
  FILE *stream; // [rsp+A0h] [rbp-340h]
  unsigned int v248; // [rsp+B8h] [rbp-328h]
  int v249; // [rsp+B8h] [rbp-328h]
  int v250; // [rsp+B8h] [rbp-328h]
  int v251; // [rsp+B8h] [rbp-328h]
  int v252; // [rsp+B8h] [rbp-328h]
  double v253; // [rsp+C8h] [rbp-318h] BYREF
  __int128 v254; // [rsp+D0h] [rbp-310h]
  int v255; // [rsp+E0h] [rbp-300h]
  _DWORD v256[8]; // [rsp+F0h] [rbp-2F0h]
  __int128 v257; // [rsp+110h] [rbp-2D0h]
  int v258; // [rsp+120h] [rbp-2C0h]
  _DWORD v259[8]; // [rsp+130h] [rbp-2B0h]
  __int64 v260; // [rsp+150h] [rbp-290h] BYREF
  __int64 v261; // [rsp+158h] [rbp-288h]
  __int64 v262; // [rsp+160h] [rbp-280h]
  __int64 v263; // [rsp+168h] [rbp-278h]
  __int64 v264; // [rsp+170h] [rbp-270h]
  __int64 v265; // [rsp+180h] [rbp-260h] BYREF
  __int64 v266; // [rsp+188h] [rbp-258h]
  __int64 v267; // [rsp+190h] [rbp-250h]
  __int64 v268; // [rsp+198h] [rbp-248h]
  __int64 v269; // [rsp+1A0h] [rbp-240h]
  char s[16]; // [rsp+1B0h] [rbp-230h] BYREF
  __m128i si128; // [rsp+1C0h] [rbp-220h]
  __m128i v272; // [rsp+1D0h] [rbp-210h]
  char v273[160]; // [rsp+1E0h] [rbp-200h] BYREF
  char dest[352]; // [rsp+280h] [rbp-160h] BYREF

  v3 = this;
  v4 = fopen(a2, "r");
  stream = v4;
  if ( !v4 )
  {
    v204 = (CoinMessageHandler *)CoinMessageHandler::message(*(this + 43), 40, (const CoinMessages *)(this + 52));
    v209 = CoinMessageHandler::operator<<(v204, (__int64)a2, v205, v206, v207, v208, v213);
    CoinMessageHandler::operator<<(v209, 0, a3);
    return (unsigned int)-2;
  }
  if ( !fgets(s, 200, v4) )
  {
    v10 = s;
    sprintf(s, "Empty parametrics file %s?", a2);
    goto LABEL_11;
  }
  v5 = s[0];
  if ( s[0] <= 31 )
  {
    v8 = s;
  }
  else
  {
    v6 = s;
    v7 = s;
    do
    {
      while ( (_BYTE)v5 != 32 )
      {
        ++v6;
        *v7 = tolower(v5);
        v5 = *v6;
        ++v7;
        if ( *v6 <= 31 )
          goto LABEL_7;
      }
      v5 = *++v6;
    }
    while ( *v6 > 31 );
LABEL_7:
    v8 = v7;
  }
  *v8 = 0;
  v253 = 0.0;
  v9 = strchr(s, 44);
  if ( !v9 )
    goto LABEL_10;
  *v9 = 0;
  if ( strcmp(s, "rows") )
    goto LABEL_10;
  v18 = v9 + 1;
  *v9 = 44;
  v19 = strchr(v9 + 1, 44);
  v20 = v19;
  if ( !v19 )
    goto LABEL_10;
  *v19 = 0;
  v21 = strtod(v18, nullptr);
  v22 = v20 + 1;
  *((_BYTE *)v22 - 1) = 44;
  v226 = v21;
  v23 = strchr(v22, 44);
  v24 = v23;
  if ( v23 )
  {
    *v23 = 0;
    v25 = strtod(v22, nullptr);
    v26 = v24 + 1;
    *((_BYTE *)v26 - 1) = 44;
    v253 = v25;
    v27 = strchr(v26, 44);
    v28 = v27;
    if ( v27 )
    {
      *v27 = 0;
      a3 = strtod(v26, nullptr);
      v29 = v28 + 1;
      *((_BYTE *)v29 - 1) = 44;
      v227 = a3;
      v30 = strchr(v29, 44);
      v31 = v30;
      if ( v30 )
      {
        *v30 = 0;
        v32 = strtol(v29, nullptr, 10);
        *v31 = 44;
        v223 = v32;
      }
      else
      {
        v223 = strtol(v29, nullptr, 10);
      }
      v244 = 0;
      if ( v226 >= 0.0 && v226 <= v253 )
        v244 = a3 >= 0.0;
      if ( (unsigned int)v223 > 1 )
        goto LABEL_10;
      goto LABEL_24;
    }
    v227 = strtod(v26, nullptr);
    a3 = v253;
  }
  else
  {
    a3 = strtod(v22, nullptr);
    v253 = a3;
    v227 = 1.797693134862316e308;
  }
  if ( v226 < 0.0 || v226 > a3 )
  {
LABEL_10:
    v10 = dest;
    sprintf(dest, "Odd first line %s on file %s?", s, a2);
LABEL_11:
    v11 = (CoinMessageHandler *)CoinMessageHandler::message(v3[43], 92, (const CoinMessages *)(v3 + 52));
    v16 = CoinMessageHandler::operator<<(v11, (__int64)v10, v12, v13, v14, v15, v213);
    CoinMessageHandler::operator<<(v16, 0, a3);
    fclose(stream);
    return (unsigned int)-2;
  }
  v223 = 0;
  v244 = v227 >= 0.0;
LABEL_24:
  if ( v227 >= v253 )
    v227 = 0.0;
  if ( !v244 )
    goto LABEL_10;
  if ( !fgets(s, 200, stream) )
  {
    v10 = s;
    sprintf(s, "Not enough records on parametrics file %s?", a2);
    goto LABEL_11;
  }
  v33 = &v260;
  dest[0] = 0;
  std::string::string();
  std::string::string();
  std::string::string();
  std::string::string();
  std::string::string();
  v34 = s[0];
  v35.m128i_i64[0] = -1;
  v255 = -1;
  v254 = -1;
  if ( s[0] <= 31 )
  {
    v38 = s;
  }
  else
  {
    v36 = s;
    v37 = s;
    do
    {
      while ( (_BYTE)v34 != 32 )
      {
        ++v36;
        *v37 = tolower(v34);
        v34 = *v36;
        ++v37;
        if ( *v36 <= 31 )
          goto LABEL_32;
      }
      v34 = *++v36;
    }
    while ( *v36 > 31 );
LABEL_32:
    v38 = v37;
  }
  *v38 = 0;
  if ( !memcmp(s, "column", 6u) )
  {
    v240 = nullptr;
    v242 = nullptr;
    goto LABEL_66;
  }
  v39 = v244;
  v245 = 0;
  v241 = (double *)v3;
  v40 = s;
  do
  {
    v41 = strchr(v40, 44);
    v42 = v41;
    if ( v41 )
      *v41 = 0;
    v43 = 0;
    while ( (unsigned int)std::string::compare((std::string *)(&v260 + v43), v40) )
    {
      if ( ++v43 == 5 )
        goto LABEL_40;
    }
    if ( *((int *)&v254 + (int)v43) >= 0 )
    {
LABEL_40:
      v39 = 0;
      goto LABEL_41;
    }
    v256[v245] = v43;
    *((_DWORD *)&v254 + (int)v43) = v245++;
LABEL_41:
    if ( !v42 )
      break;
    *v42 = 44;
    v40 = v42 + 1;
  }
  while ( v42 != (char *)-1LL );
  v3 = (CoinMessageHandler **)v241;
  if ( (int)v254 < 0 )
  {
    v91 = v39;
    if ( SDWORD1(v254) < 0 )
      v91 = 0;
    v228 = v91;
  }
  else
  {
    v44 = v39;
    if ( (SDWORD1(v254) & 0x80000000) == 0 )
      v44 = 0;
    if ( !*((_DWORD *)v241 + 82) )
      v44 = 0;
    v228 = v44;
  }
  if ( v255 < 0 )
  {
    if ( SDWORD2(v254) < 0 )
    {
      if ( v254 >= 0 )
        goto LABEL_51;
    }
    else if ( v254 < 0 )
    {
LABEL_51:
      v45 = *((CoinMessageHandler **)v241 + 43);
      strcpy(v273, "elds wrong");
      *(__m128i *)s = _mm_load_si128((const __m128i *)&xmmword_292450);
      si128 = _mm_load_si128((const __m128i *)&xmmword_292460);
      v46 = _mm_load_si128((const __m128i *)&xmmword_292470);
      v272 = v46;
      v47 = (CoinMessageHandler *)CoinMessageHandler::message(v45, 92, (const CoinMessages *)(v241 + 52));
      v52 = CoinMessageHandler::operator<<(v47, (__int64)s, v48, v49, v50, v51, v213);
      CoinMessageHandler::operator<<(v52, 0, *(double *)v46.m128i_i64);
      v248 = -1;
LABEL_52:
      fclose(stream);
      goto LABEL_53;
    }
  }
  else if ( (SDWORD2(v254) & 0x80000000) == 0 || v254 >= 0 )
  {
    goto LABEL_51;
  }
  if ( !v228 )
    goto LABEL_51;
  v74 = *((int *)v241 + 26);
  if ( v74 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v224 = (const char **)operator new[](8 * v74);
  v243 = *((_DWORD *)v241 + 26);
  if ( v243 > 0 )
  {
    v75 = (const char **)v3[46];
    v76 = v75 + 1;
    v77 = v224;
    v78 = (__int64)&v75[(unsigned int)(v243 - 1) + 1];
    while ( 1 )
    {
      v79 = *v75;
      if ( *v75 )
      {
        v249 = strlen(*v75);
        v80 = (const char *)malloc(v249 + 1);
        if ( v249 && v79 != v80 )
        {
          v81 = v249 >> 3;
          if ( v249 >> 3 <= 0 )
          {
            v90 = (char *)v80;
            v88 = v249;
          }
          else
          {
            if ( (v80 >= v79 + 16 || v79 >= v80 + 16) && v81 > 1 )
            {
              v82 = 0;
              v83 = 0;
              do
              {
                v35 = _mm_loadu_si128((const __m128i *)&v79[v82]);
                ++v83;
                *(__m128i *)&v80[v82] = v35;
                v82 += 16;
              }
              while ( v81 >> 1 > v83 );
              v84 = 8LL * (v81 & 0xFFFFFFFE);
              v85 = &v79[v84];
              v86 = (char *)&v80[v84];
              if ( (v81 & 0xFFFFFFFE) != v81 )
              {
                *v86 = *v85;
                v86[1] = v85[1];
                v86[2] = v85[2];
                v86[3] = v85[3];
                v86[4] = v85[4];
                v86[5] = v85[5];
                v86[6] = v85[6];
                v86[7] = v85[7];
              }
              LODWORD(v87) = v81 - 1;
            }
            else
            {
              v176 = v79;
              v87 = v81 - 1;
              v177 = v80;
              do
              {
                v178 = *v176;
                v177 += 8;
                v176 += 8;
                *((_BYTE *)v177 - 8) = v178;
                *((_BYTE *)v177 - 7) = *(v176 - 7);
                *((_BYTE *)v177 - 6) = *(v176 - 6);
                *((_BYTE *)v177 - 5) = *(v176 - 5);
                *((_BYTE *)v177 - 4) = *(v176 - 4);
                *((_BYTE *)v177 - 3) = *(v176 - 3);
                *((_BYTE *)v177 - 2) = *(v176 - 2);
                *((_BYTE *)v177 - 1) = *(v176 - 1);
              }
              while ( v177 != &v80[8 * v87 + 8] );
            }
            v88 = v249;
            v89 = 8LL * (int)v87 + 8;
            v79 += v89;
            v90 = (char *)&v80[v89];
          }
          switch ( v88 % 8 )
          {
            case 1:
              goto LABEL_138;
            case 2:
              goto LABEL_137;
            case 3:
              goto LABEL_136;
            case 4:
              goto LABEL_135;
            case 5:
              goto LABEL_134;
            case 6:
              goto LABEL_133;
            case 7:
              v90[6] = v79[6];
LABEL_133:
              v90[5] = v79[5];
LABEL_134:
              v90[4] = v79[4];
LABEL_135:
              v90[3] = v79[3];
LABEL_136:
              v90[2] = v79[2];
LABEL_137:
              v90[1] = v79[1];
LABEL_138:
              *v90 = *v79;
              break;
            default:
              break;
          }
        }
        v80[v249] = 0;
      }
      else
      {
        v80 = nullptr;
      }
      *v77++ = v80;
      v75 = v76;
      if ( v76 == (const char **)v78 )
        break;
      ++v76;
    }
    v33 = &v260;
  }
  if ( (unsigned __int64)v243 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v99 = (double *)operator new[](8LL * v243);
  v100 = *((int *)v3 + 26);
  v242 = v99;
  memset(v99, 0, 8 * v100);
  if ( v100 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v240 = (double *)operator new[](8 * v100);
  memset(v240, 0, 8LL * *((int *)v3 + 26));
  v217 = 0;
  v219 = 0;
  while ( fgets(s, 200, stream) && memcmp(s, "ENDATA", 6u) && memcmp(s, "COLUMN", 6u) )
  {
    v101 = s[0];
    ++v219;
    if ( s[0] <= 31 )
    {
      v102 = s;
    }
    else
    {
      v102 = s;
      v103 = s;
      do
      {
        while ( v101 != 32 )
        {
          ++v103;
          *v102++ = v101;
          v101 = *v103;
          if ( *v103 <= 31 )
            goto LABEL_169;
        }
        v101 = *++v103;
      }
      while ( *v103 > 31 );
    }
LABEL_169:
    *v102 = 0;
    if ( !v245 )
      goto LABEL_198;
    v104 = s;
    v105 = 0;
    v250 = -1;
    v235 = nullptr;
    v233 = (double *)v3;
    v231 = 0;
    v221 = v33;
    do
    {
      v106 = strchr(v104, 44);
      v107 = v106;
      if ( v106 )
      {
        *v106 = 0;
        switch ( v256[v105] )
        {
          case 0:
            goto LABEL_187;
          case 1:
            goto LABEL_183;
          case 2:
            goto LABEL_182;
          case 3:
            goto LABEL_173;
          case 4:
            goto LABEL_193;
          default:
            goto LABEL_175;
        }
      }
      if ( v245 - 1 > (int)v105 )
        break;
      switch ( v256[v105] )
      {
        case 0:
LABEL_187:
          v114 = *((_DWORD *)v233 + 26);
          if ( v114 <= 0 )
          {
            v250 = 0;
          }
          else
          {
            v115 = v224;
            v250 = 0;
            while ( strcmp(*v115, v104) )
            {
              ++v250;
              ++v115;
              if ( v250 == v114 )
                goto LABEL_192;
            }
          }
          if ( v114 != v250 )
            goto LABEL_174;
          goto LABEL_192;
        case 1:
LABEL_183:
          v110 = strtol(v104, nullptr, 10);
          v111 = v110;
          if ( v110 < 0 )
          {
LABEL_192:
            v250 = -1;
          }
          else
          {
            v112 = *((_DWORD *)v233 + 26) <= v110;
            v113 = -1;
            if ( !v112 )
              v113 = v111;
            v250 = v113;
          }
          goto LABEL_174;
        case 2:
LABEL_182:
          *(double *)v35.m128i_i64 = strtod(v104, nullptr);
          v231 = v35.m128i_i64[0];
          goto LABEL_174;
        case 3:
LABEL_173:
          *(double *)v35.m128i_i64 = strtod(v104, nullptr);
          v235 = (double *)v35.m128i_i64[0];
          goto LABEL_174;
        case 4:
LABEL_193:
          *(double *)v35.m128i_i64 = strtod(v104, nullptr);
          v231 = v35.m128i_i64[0];
          v235 = (double *)v35.m128i_i64[0];
LABEL_174:
          if ( v107 )
          {
LABEL_175:
            v104 = v107 + 1;
            *v107 = 44;
          }
          break;
        default:
          break;
      }
      ++v105;
    }
    while ( v245 > (int)v105 );
    v3 = (CoinMessageHandler **)v233;
    v33 = v221;
    if ( v250 >= 0 )
    {
      v108 = (double **)&v242[v250];
      if ( *(double *)(*((_QWORD *)v233 + 18) + 8LL * v250) <= -1.0e20 )
        *v108 = nullptr;
      else
        *v108 = v235;
      v35.m128i_i64[0] = 0x4415AF1D78B58C40LL;
      v109 = (double **)&v240[v250];
      if ( *(double *)(*((_QWORD *)v233 + 19) + 8LL * v250) >= 1.0e20 )
        *v109 = v235;
      else
        *v109 = (double *)v231;
    }
    else
    {
LABEL_198:
      ++v217;
      if ( !dest[0] )
        strcpy(dest, s);
    }
  }
  sprintf(s, "%d Row fields and %d records", v245, v219);
  v116 = (CoinMessageHandler *)CoinMessageHandler::message(v3[43], 92, (const CoinMessages *)(v3 + 52));
  v121 = CoinMessageHandler::operator<<(v116, (__int64)s, v117, v118, v119, v120, v213);
  CoinMessageHandler::operator<<(v121, 0, *(double *)v35.m128i_i64);
  if ( v217 )
  {
    sprintf(s, " ** %d records did not match on name/sequence, first bad %s", v217, dest);
    v141 = (CoinMessageHandler *)CoinMessageHandler::message(v3[43], 92, (const CoinMessages *)(v3 + 52));
    v146 = CoinMessageHandler::operator<<(v141, (__int64)s, v142, v143, v144, v145, v213);
    CoinMessageHandler::operator<<(v146, 0, *(double *)v35.m128i_i64);
    v228 = 0;
    if ( *((int *)v3 + 26) <= 0 )
    {
      operator delete[](v224);
LABEL_207:
      v234 = nullptr;
      v238 = nullptr;
      v232 = nullptr;
      v248 = -1;
      goto LABEL_93;
    }
  }
  else if ( *((int *)v3 + 26) <= 0 )
  {
    operator delete[](v224);
    goto LABEL_394;
  }
  v122 = 1;
  do
  {
    free((void *)v224[v122 - 1]);
    v123 = v122++;
  }
  while ( *((_DWORD *)v3 + 26) > v123 );
  operator delete[](v224);
  if ( !v228 )
    goto LABEL_207;
LABEL_394:
  if ( strncmp(s, "COLUMN", 6u) && memcmp(s, "column", 6u) )
  {
    v234 = nullptr;
    v238 = nullptr;
    v232 = nullptr;
LABEL_318:
    v179 = *((_DWORD *)v3 + 26);
    if ( v179 > 0 )
    {
      if ( *v242 != 0.0 )
      {
LABEL_357:
        if ( !v240 )
        {
LABEL_331:
          if ( v232 )
          {
            v182 = *((_DWORD *)v3 + 27);
            v183 = v182;
            if ( v182 > 0 )
            {
              if ( *v232 != 0.0 )
              {
LABEL_359:
                if ( !v238 )
                {
                  v183 = *((_DWORD *)v3 + 27);
                  if ( v234 )
                    goto LABEL_347;
                  v238 = nullptr;
                  goto LABEL_352;
                }
LABEL_340:
                if ( *v238 == 0.0 )
                {
                  v185 = 1;
                  while ( v183 > (int)v185 )
                  {
                    if ( v238[v185++] != 0.0 )
                      goto LABEL_362;
                  }
                  goto LABEL_344;
                }
LABEL_362:
                if ( v234 )
                  goto LABEL_347;
LABEL_352:
                v187 = v3[43];
                v188 = *((_DWORD *)v3 + 64);
                *((_DWORD *)v3 + 64) = 0;
                v189 = *((_DWORD *)v187 + 26);
                if ( v223 > 0 && v227 == 0.0 )
                  CoinMessageHandler::setLogLevel(v187, 3);
                else
                  CoinMessageHandler::setLogLevel(v187, 1);
                v190 = ClpSimplexOther::parametrics(
                         (ClpSimplexOther *)v3,
                         v226,
                         &v253,
                         v227,
                         v232,
                         v238,
                         v242,
                         v240,
                         v234);
                v191 = v3[43];
                *((_DWORD *)v3 + 64) = v188;
                v248 = v190;
                CoinMessageHandler::setLogLevel(v191, v189);
LABEL_92:
                if ( !v242 )
                {
LABEL_94:
                  if ( v240 )
                    operator delete[](v240);
                  if ( v232 )
                    operator delete[](v232);
                  if ( v238 )
                    operator delete[](v238);
                  if ( v234 )
                    operator delete[](v234);
                  goto LABEL_52;
                }
LABEL_93:
                operator delete[](v242);
                goto LABEL_94;
              }
              v184 = v232 + 1;
              while ( v184 != &v232[(unsigned int)(v182 - 1) + 1] )
              {
                if ( *v184++ != 0.0 )
                  goto LABEL_359;
              }
            }
            operator delete[](v232);
          }
          if ( !v238 )
          {
            v232 = nullptr;
LABEL_345:
            v238 = nullptr;
            if ( !v234 )
              goto LABEL_352;
            v183 = *((_DWORD *)v3 + 27);
            if ( v183 <= 0 )
            {
LABEL_351:
              operator delete[](v234);
              v234 = nullptr;
              goto LABEL_352;
            }
LABEL_347:
            if ( *v234 != 0.0 )
              goto LABEL_352;
            v186 = 1;
            while ( v183 > (int)v186 )
            {
              if ( v234[v186++] != 0.0 )
                goto LABEL_352;
            }
            goto LABEL_351;
          }
          v183 = *((_DWORD *)v3 + 27);
          v232 = nullptr;
          if ( v183 <= 0 )
          {
LABEL_344:
            operator delete[](v238);
            goto LABEL_345;
          }
          goto LABEL_340;
        }
        goto LABEL_326;
      }
      v180 = v242 + 1;
      while ( v180 != &v242[(unsigned int)(v179 - 1) + 1] )
      {
        if ( *v180++ != 0.0 )
          goto LABEL_357;
      }
    }
    operator delete[](v242);
LABEL_324:
    v242 = nullptr;
    if ( !v240 )
      goto LABEL_331;
    v179 = *((_DWORD *)v3 + 26);
    if ( v179 <= 0 )
    {
LABEL_330:
      operator delete[](v240);
      v240 = nullptr;
      goto LABEL_331;
    }
LABEL_326:
    if ( *v240 != 0.0 )
      goto LABEL_331;
    v181 = 1;
    while ( v179 > (int)v181 )
    {
      if ( v240[v181++] != 0.0 )
        goto LABEL_331;
    }
    goto LABEL_330;
  }
LABEL_66:
  if ( fgets(s, 200, stream) )
  {
    std::string::string();
    std::string::string();
    std::string::string();
    std::string::string();
    std::string::string();
    v54 = s[0];
    v55.m128i_i64[0] = -1;
    dest[0] = 0;
    v258 = -1;
    v257 = -1;
    if ( s[0] <= 31 )
    {
      v58 = s;
    }
    else
    {
      v56 = s;
      v57 = s;
      do
      {
        while ( (_BYTE)v54 != 32 )
        {
          ++v56;
          *v57 = tolower(v54);
          v54 = *v56;
          ++v57;
          if ( *v56 <= 31 )
            goto LABEL_71;
        }
        v54 = *++v56;
      }
      while ( *v56 > 31 );
LABEL_71:
      v58 = v57;
    }
    *v58 = 0;
    if ( !memcmp(s, "endata", 6u) )
    {
      v234 = nullptr;
      v238 = nullptr;
      v232 = nullptr;
      goto LABEL_85;
    }
    v59 = v244;
    v246 = 0;
    v237 = (ClpSimplexOther *)v3;
    v60 = s;
    do
    {
      v61 = strchr(v60, 44);
      v62 = v61;
      if ( v61 )
        *v61 = 0;
      v63 = 0;
      while ( (unsigned int)std::string::compare((std::string *)(&v265 + v63), v60) )
      {
        if ( ++v63 == 5 )
          goto LABEL_79;
      }
      if ( *((int *)&v257 + (int)v63) >= 0 )
      {
LABEL_79:
        v59 = 0;
        goto LABEL_80;
      }
      v259[v246] = v63;
      *((_DWORD *)&v257 + (int)v63) = v246++;
LABEL_80:
      if ( !v62 )
        break;
      *v62 = 44;
      v60 = v62 + 1;
    }
    while ( v62 != (char *)-1LL );
    v244 = v59;
    v3 = (CoinMessageHandler **)v237;
    if ( (int)v257 < 0 )
    {
      if ( SDWORD1(v257) < 0 )
        goto LABEL_84;
    }
    else if ( (SDWORD1(v257) & 0x80000000) == 0 || !*((_DWORD *)v237 + 82) )
    {
      goto LABEL_84;
    }
    if ( v59 )
    {
      v124 = *((int *)v237 + 27);
      if ( v124 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v216 = (const char **)operator new[](8 * v124);
      v239 = *((_DWORD *)v237 + 27);
      if ( v239 > 0 )
      {
        v125 = (const char **)v3[49];
        v126 = v125 + 1;
        v127 = v216;
        v128 = (__int64)&v125[(unsigned int)(v239 - 1) + 1];
        while ( 1 )
        {
          v129 = *v125;
          if ( *v125 )
          {
            v251 = strlen(*v125);
            v130 = (const char *)malloc(v251 + 1);
            if ( v251 && v129 != v130 )
            {
              v131 = v251 >> 3;
              if ( v251 >> 3 <= 0 )
              {
                v140 = (char *)v130;
                v138 = v251;
              }
              else
              {
                if ( (v130 >= v129 + 16 || v129 >= v130 + 16) && v131 > 1 )
                {
                  v132 = 0;
                  v133 = 0;
                  do
                  {
                    v55 = _mm_loadu_si128((const __m128i *)&v129[v132]);
                    ++v133;
                    *(__m128i *)&v130[v132] = v55;
                    v132 += 16;
                  }
                  while ( v131 >> 1 > v133 );
                  v134 = 8LL * (v131 & 0xFFFFFFFE);
                  v135 = &v129[v134];
                  v136 = (char *)&v130[v134];
                  if ( v131 != (v131 & 0xFFFFFFFE) )
                  {
                    *v136 = *v135;
                    v136[1] = v135[1];
                    v136[2] = v135[2];
                    v136[3] = v135[3];
                    v136[4] = v135[4];
                    v136[5] = v135[5];
                    v136[6] = v135[6];
                    v136[7] = v135[7];
                  }
                  LODWORD(v137) = v131 - 1;
                }
                else
                {
                  v194 = v129;
                  v137 = v131 - 1;
                  v195 = v130;
                  do
                  {
                    v196 = *v194;
                    v195 += 8;
                    v194 += 8;
                    *((_BYTE *)v195 - 8) = v196;
                    *((_BYTE *)v195 - 7) = *(v194 - 7);
                    *((_BYTE *)v195 - 6) = *(v194 - 6);
                    *((_BYTE *)v195 - 5) = *(v194 - 5);
                    *((_BYTE *)v195 - 4) = *(v194 - 4);
                    *((_BYTE *)v195 - 3) = *(v194 - 3);
                    *((_BYTE *)v195 - 2) = *(v194 - 2);
                    *((_BYTE *)v195 - 1) = *(v194 - 1);
                  }
                  while ( v195 != &v130[8 * v137 + 8] );
                }
                v138 = v251;
                v139 = 8LL * (int)v137 + 8;
                v129 += v139;
                v140 = (char *)&v130[v139];
              }
              switch ( v138 % 8 )
              {
                case 1:
                  goto LABEL_244;
                case 2:
                  goto LABEL_243;
                case 3:
                  goto LABEL_242;
                case 4:
                  goto LABEL_241;
                case 5:
                  goto LABEL_240;
                case 6:
                  goto LABEL_239;
                case 7:
                  v140[6] = v129[6];
LABEL_239:
                  v140[5] = v129[5];
LABEL_240:
                  v140[4] = v129[4];
LABEL_241:
                  v140[3] = v129[3];
LABEL_242:
                  v140[2] = v129[2];
LABEL_243:
                  v140[1] = v129[1];
LABEL_244:
                  *v140 = *v129;
                  break;
                default:
                  break;
              }
            }
            v130[v251] = 0;
          }
          else
          {
            v130 = nullptr;
          }
          *v127++ = v130;
          v125 = v126;
          if ( v126 == (const char **)v128 )
            break;
          ++v126;
        }
      }
      if ( (unsigned __int64)v239 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v148 = (double *)operator new[](8LL * v239);
      v149 = *((int *)v3 + 27);
      v232 = v148;
      memset(v148, 0, 8 * v149);
      if ( v149 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v150 = (double *)operator new[](8 * v149);
      v151 = *((int *)v3 + 27);
      v238 = v150;
      memset(v150, 0, 8 * v151);
      if ( v151 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v234 = (double *)operator new[](8 * v151);
      memset(v234, 0, 8LL * *((int *)v3 + 27));
      v214 = 0;
      while ( fgets(s, 200, stream) && memcmp(s, "ENDATA", 6u) )
      {
        v152 = s[0];
        ++HIDWORD(v214);
        if ( s[0] <= 31 )
        {
          v153 = s;
        }
        else
        {
          v153 = s;
          v154 = s;
          do
          {
            while ( v152 != 32 )
            {
              ++v154;
              *v153++ = v152;
              v152 = *v154;
              if ( *v154 <= 31 )
                goto LABEL_265;
            }
            v152 = *++v154;
          }
          while ( *v154 > 31 );
        }
LABEL_265:
        *v153 = 0;
        if ( !v246 )
          goto LABEL_297;
        v155 = s;
        v220 = 0;
        v156 = 0;
        v230 = nullptr;
        v157 = -1;
        v229 = v3;
        v225 = nullptr;
        do
        {
          v158 = strchr(v155, 44);
          v159 = v158;
          if ( v158 )
          {
            *v158 = 0;
            switch ( v259[v156] )
            {
              case 0:
                goto LABEL_285;
              case 1:
                goto LABEL_280;
              case 2:
                goto LABEL_279;
              case 3:
                goto LABEL_269;
              case 4:
                goto LABEL_284;
              default:
                goto LABEL_271;
            }
          }
          if ( v246 - 1 > (int)v156 )
            break;
          switch ( v259[v156] )
          {
            case 0:
LABEL_285:
              v222 = *((_DWORD *)v229 + 27);
              if ( v222 <= 0 )
              {
                v157 = 0;
              }
              else
              {
                v218 = v156;
                v165 = v216;
                v166 = 0;
                v252 = *((_DWORD *)v229 + 27);
                while ( strcmp(*v165, v155) )
                {
                  ++v166;
                  ++v165;
                  if ( v166 == v252 )
                  {
                    v156 = v218;
                    v157 = -1;
                    goto LABEL_270;
                  }
                }
                v157 = v166;
                v156 = v218;
              }
              if ( v222 != v157 )
                goto LABEL_270;
              goto LABEL_291;
            case 1:
LABEL_280:
              v162 = strtol(v155, nullptr, 10);
              v163 = v162;
              if ( v162 < 0 )
              {
LABEL_291:
                v157 = -1;
              }
              else
              {
                v112 = *((_DWORD *)v229 + 27) <= v162;
                v164 = -1;
                if ( !v112 )
                  v164 = v163;
                v157 = v164;
              }
              goto LABEL_270;
            case 2:
LABEL_279:
              *(double *)v55.m128i_i64 = strtod(v155, nullptr);
              v225 = (void *)v55.m128i_i64[0];
              goto LABEL_270;
            case 3:
LABEL_269:
              *(double *)v55.m128i_i64 = strtod(v155, nullptr);
              v230 = (void *)v55.m128i_i64[0];
              goto LABEL_270;
            case 4:
LABEL_284:
              *(double *)v55.m128i_i64 = strtod(v155, nullptr);
              v220 = v55.m128i_i64[0];
              v225 = v230;
LABEL_270:
              if ( v159 )
              {
LABEL_271:
                v155 = v159 + 1;
                *v159 = 44;
              }
              break;
            default:
              break;
          }
          ++v156;
        }
        while ( v246 > (int)v156 );
        v3 = v229;
        if ( v157 >= 0 )
        {
          v160 = &v232[v157];
          if ( *((double *)v229[22] + v157) <= -1.0e20 )
            *v160 = 0.0;
          else
            *(_QWORD *)v160 = v230;
          v55.m128i_i64[0] = 0x4415AF1D78B58C40LL;
          v161 = &v238[v157];
          if ( *((double *)v229[23] + v157) >= 1.0e20 )
            *(_QWORD *)v161 = v230;
          else
            *(_QWORD *)v161 = v225;
          *(_QWORD *)&v234[v157] = v220;
        }
        else
        {
LABEL_297:
          LODWORD(v214) = v214 + 1;
          if ( !dest[0] )
            strcpy(dest, s);
        }
      }
      sprintf(s, "%d Column fields and %d records", v246, HIDWORD(v214));
      v167 = (CoinMessageHandler *)CoinMessageHandler::message(v3[43], 92, (const CoinMessages *)(v3 + 52));
      v172 = CoinMessageHandler::operator<<(v167, (__int64)s, v168, v169, v170, v171, v214);
      CoinMessageHandler::operator<<(v172, 0, *(double *)v55.m128i_i64);
      if ( (_DWORD)v215 )
      {
        sprintf(s, " ** %d records did not match on name/sequence, first bad %s", v215, dest);
        v197 = (CoinMessageHandler *)CoinMessageHandler::message(v3[43], 92, (const CoinMessages *)(v3 + 52));
        v202 = CoinMessageHandler::operator<<(v197, (__int64)s, v198, v199, v200, v201, v215);
        CoinMessageHandler::operator<<(v202, 0, *(double *)v55.m128i_i64);
        v244 = 0;
      }
      if ( *((int *)v3 + 27) > 0 )
      {
        v173 = 1;
        do
        {
          free((void *)v216[v173 - 1]);
          v174 = v173++;
        }
        while ( *((_DWORD *)v3 + 27) > v174 );
      }
      operator delete[](v216);
LABEL_85:
      v72 = (void *)(v269 - 24);
      if ( &_pthread_key_create )
      {
        if ( v72 != &std::string::_Rep::_S_empty_rep_storage
          && _InterlockedExchangeAdd((volatile signed __int32 *)(v269 - 8), 0xFFFFFFFF) <= 0 )
        {
          std::string::_Rep::_M_destroy();
        }
        if ( (_UNKNOWN *)(v268 - 24) != &std::string::_Rep::_S_empty_rep_storage
          && _InterlockedExchangeAdd((volatile signed __int32 *)(v268 - 8), 0xFFFFFFFF) <= 0 )
        {
          std::string::_Rep::_M_destroy();
        }
        if ( (_UNKNOWN *)(v267 - 24) != &std::string::_Rep::_S_empty_rep_storage
          && _InterlockedExchangeAdd((volatile signed __int32 *)(v267 - 8), 0xFFFFFFFF) <= 0 )
        {
          std::string::_Rep::_M_destroy();
        }
        if ( (_UNKNOWN *)(v266 - 24) != &std::string::_Rep::_S_empty_rep_storage
          && _InterlockedExchangeAdd((volatile signed __int32 *)(v266 - 8), 0xFFFFFFFF) <= 0 )
        {
          std::string::_Rep::_M_destroy();
        }
        if ( (_UNKNOWN *)(v265 - 24) != &std::string::_Rep::_S_empty_rep_storage
          && _InterlockedExchangeAdd((volatile signed __int32 *)(v265 - 8), 0xFFFFFFFF) <= 0 )
        {
LABEL_156:
          std::string::_Rep::_M_destroy();
        }
      }
      else
      {
        if ( v72 != &std::string::_Rep::_S_empty_rep_storage )
        {
          v203 = *(_DWORD *)(v269 - 8);
          *(_DWORD *)(v269 - 8) = v203 - 1;
          if ( v203 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        if ( (_UNKNOWN *)(v268 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          v210 = *(_DWORD *)(v268 - 8);
          *(_DWORD *)(v268 - 8) = v210 - 1;
          if ( v210 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        if ( (_UNKNOWN *)(v267 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          v211 = *(_DWORD *)(v267 - 8);
          *(_DWORD *)(v267 - 8) = v211 - 1;
          if ( v211 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        if ( (_UNKNOWN *)(v266 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          v212 = *(_DWORD *)(v266 - 8);
          *(_DWORD *)(v266 - 8) = v212 - 1;
          if ( v212 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        if ( (_UNKNOWN *)(v265 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          v92 = *(_DWORD *)(v265 - 8);
          *(_DWORD *)(v265 - 8) = v92 - 1;
          if ( v92 <= 0 )
            goto LABEL_156;
        }
      }
      v248 = -1;
      if ( !v244 )
        goto LABEL_92;
      if ( !v242 )
        goto LABEL_324;
      goto LABEL_318;
    }
LABEL_84:
    v64 = *((CoinMessageHandler **)v237 + 43);
    *(__m128i *)s = _mm_load_si128((const __m128i *)&xmmword_292450);
    strcpy(v273, "elds wrong");
    si128 = _mm_load_si128((const __m128i *)&xmmword_292460);
    v65 = _mm_load_si128((const __m128i *)&xmmword_292470);
    v272 = v65;
    v66 = (CoinMessageHandler *)CoinMessageHandler::message(v64, 92, (ClpSimplexOther *)((char *)v237 + 416));
    v71 = CoinMessageHandler::operator<<(v66, (__int64)s, v67, v68, v69, v70, v213);
    CoinMessageHandler::operator<<(v71, 0, *(double *)v65.m128i_i64);
    v234 = nullptr;
    v238 = nullptr;
    v232 = nullptr;
    v244 = 0;
    goto LABEL_85;
  }
  sprintf(s, "Not enough records on parametrics file %s after COLUMNS?", a2);
  v93 = (CoinMessageHandler *)CoinMessageHandler::message(v3[43], 92, (const CoinMessages *)(v3 + 52));
  v98 = CoinMessageHandler::operator<<(v93, (__int64)s, v94, v95, v96, v97, v213);
  CoinMessageHandler::operator<<(v98, 0, *(double *)v35.m128i_i64);
  fclose(stream);
  v248 = -2;
LABEL_53:
  v53 = (void *)(v264 - 24);
  if ( &_pthread_key_create )
  {
    if ( v53 != &std::string::_Rep::_S_empty_rep_storage
      && _InterlockedExchangeAdd((volatile signed __int32 *)(v264 - 8), 0xFFFFFFFF) <= 0 )
    {
      std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v263 - 24) != &std::string::_Rep::_S_empty_rep_storage
      && _InterlockedExchangeAdd((volatile signed __int32 *)(v263 - 8), 0xFFFFFFFF) <= 0 )
    {
      std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v262 - 24) != &std::string::_Rep::_S_empty_rep_storage
      && _InterlockedExchangeAdd((volatile signed __int32 *)(v262 - 8), 0xFFFFFFFF) <= 0 )
    {
      std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v261 - 24) != &std::string::_Rep::_S_empty_rep_storage
      && _InterlockedExchangeAdd((volatile signed __int32 *)(v261 - 8), 0xFFFFFFFF) <= 0 )
    {
      std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v260 - 24) != &std::string::_Rep::_S_empty_rep_storage
      && _InterlockedExchangeAdd((volatile signed __int32 *)(v260 - 8), 0xFFFFFFFF) <= 0 )
    {
LABEL_60:
      std::string::_Rep::_M_destroy();
    }
  }
  else
  {
    if ( v53 != &std::string::_Rep::_S_empty_rep_storage )
    {
      v147 = *(_DWORD *)(v264 - 8);
      *(_DWORD *)(v264 - 8) = v147 - 1;
      if ( v147 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v263 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      v175 = *(_DWORD *)(v263 - 8);
      *(_DWORD *)(v263 - 8) = v175 - 1;
      if ( v175 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v262 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      v192 = *(_DWORD *)(v262 - 8);
      *(_DWORD *)(v262 - 8) = v192 - 1;
      if ( v192 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v261 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      v193 = *(_DWORD *)(v261 - 8);
      *(_DWORD *)(v261 - 8) = v193 - 1;
      if ( v193 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v260 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      v73 = *(_DWORD *)(v260 - 8);
      *(_DWORD *)(v260 - 8) = v73 - 1;
      if ( v73 <= 0 )
        goto LABEL_60;
    }
  }
  return v248;
}

