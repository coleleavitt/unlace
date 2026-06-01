__int64 __fastcall CoinMpsIO::writeMps(
        CoinMpsIO *this,
        const char *a2,
        int a3,
        int a4,
        int a5,
        CoinPackedMatrix *a6,
        double a7,
        __m128 a8,
        double a9,
        double a10,
        int a11,
        const CoinSet *a12)
{
  int v12; // eax
  int v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rax
  CoinMessageHandler *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  CoinMessageHandler *v24; // rax
  __int64 v25; // rax
  int v26; // eax
  const char **v27; // r14
  __int64 v28; // r13
  size_t v29; // rax
  unsigned int v30; // edi
  int v31; // eax
  int v32; // ecx
  bool v33; // cc
  int v34; // eax
  const char *v35; // r14
  size_t v36; // rax
  size_t v37; // rax
  int v38; // eax
  const char *v39; // rdi
  size_t v40; // rax
  size_t v41; // r13
  const void *RowSense; // rax
  const char *v43; // r14
  size_t v44; // rax
  int v45; // eax
  const char **v46; // r13
  __int64 v47; // r14
  size_t v48; // rax
  _QWORD *MatrixByCol; // rax
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  _BYTE *v54; // rax
  unsigned __int64 v55; // rbx
  unsigned __int64 v56; // r13
  unsigned __int64 v57; // rax
  int v58; // r14d
  __int64 v59; // r12
  __int64 v60; // rax
  int v61; // eax
  double v62; // xmm0_8
  _BYTE *v63; // rbx
  const char *v64; // r14
  int v65; // r14d
  int v66; // esi
  __int64 v67; // rcx
  __int64 v68; // r11
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 *v71; // r9
  _DWORD *v72; // r10
  int v73; // edi
  __int64 v74; // xmm0_8
  __int64 v75; // xmm0_8
  int v76; // ecx
  unsigned __int64 v77; // rcx
  unsigned int v78; // r8d
  __int64 v79; // rdx
  __int64 v80; // rax
  int v81; // r10d
  __int128 v82; // xmm0
  signed int v83; // edi
  __int64 v84; // rax
  int v85; // ecx
  __int64 v86; // xmm0_8
  int v87; // eax
  __int64 v88; // rdx
  int v89; // ecx
  int v90; // eax
  __int64 v91; // rdx
  int v92; // ecx
  int v93; // eax
  __int64 v94; // rdx
  int v95; // ecx
  int v96; // eax
  int v97; // edi
  __int64 v98; // rdx
  int v99; // ecx
  __int64 v100; // rax
  int v101; // edx
  int v102; // eax
  std::string *v103; // rbx
  __int64 v104; // rax
  __int64 v105; // rax
  char isInteger; // al
  char v107; // di
  __int64 v108; // rax
  CoinMpsIO *v109; // rax
  int v110; // edx
  __int64 v111; // rbx
  char v112; // al
  double v113; // xmm0_8
  double v114; // xmm4_8
  __int64 v115; // rbx
  int v116; // eax
  double v117; // xmm0_8
  int v118; // edx
  CoinMpsIO *v119; // rbx
  int v120; // ebx
  __int64 v121; // r12
  int v122; // ebx
  std::string *v123; // rdi
  int v124; // edx
  _DWORD *v125; // r13
  int *v126; // r14
  __int64 v127; // rax
  __int64 v128; // rbx
  int v129; // edx
  char *v130; // rax
  char *v131; // rcx
  double v132; // xmm0_8
  char *v133; // rdi
  __int64 v134; // r11
  __int64 v135; // r10
  int v136; // r9d
  __int64 v137; // r8
  int v138; // eax
  __int64 v139; // rdx
  __int64 v140; // rsi
  const char *v141; // r12
  const char *v142; // rsi
  __int64 v143; // r13
  __int64 v144; // rbx
  double v145; // xmm0_8
  int v147; // edx
  const char *v148; // rbx
  unsigned __int64 v149; // rax
  int v150; // edx
  int v151; // edx
  int v152; // edx
  __int64 v153; // rax
  unsigned __int64 v154; // rbx
  __int64 v155; // r13
  CoinMessageHandler *v156; // rax
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  CoinMessageHandler *v160; // rax
  __int64 v161; // rax
  int v162; // edx
  int v163; // edx
  int locale; // [rsp+0h] [rbp-2B0h]
  char *localea; // [rsp+0h] [rbp-2B0h]
  int v166; // [rsp+8h] [rbp-2A8h]
  _QWORD *v167; // [rsp+8h] [rbp-2A8h]
  int v168; // [rsp+10h] [rbp-2A0h]
  __int64 v169; // [rsp+10h] [rbp-2A0h]
  __int64 v170; // [rsp+18h] [rbp-298h]
  unsigned __int64 v171; // [rsp+18h] [rbp-298h]
  __int64 v172; // [rsp+20h] [rbp-290h]
  __int64 v173; // [rsp+20h] [rbp-290h]
  __int64 v174; // [rsp+28h] [rbp-288h]
  _QWORD *v175; // [rsp+28h] [rbp-288h]
  __int64 v176; // [rsp+30h] [rbp-280h]
  char *s; // [rsp+38h] [rbp-278h]
  __int64 ColUpper; // [rsp+48h] [rbp-268h]
  __int64 v179; // [rsp+50h] [rbp-260h]
  __int64 RowUpper; // [rsp+58h] [rbp-258h]
  int v181; // [rsp+60h] [rbp-250h]
  char v182; // [rsp+67h] [rbp-249h]
  __int64 v183; // [rsp+68h] [rbp-248h]
  __int64 RowLower; // [rsp+70h] [rbp-240h]
  __int64 ColLower; // [rsp+88h] [rbp-228h]
  __int64 v186; // [rsp+88h] [rbp-228h]
  double v187; // [rsp+90h] [rbp-220h]
  __int64 v188; // [rsp+90h] [rbp-220h]
  __int64 ObjCoefficients; // [rsp+98h] [rbp-218h]
  char **v190; // [rsp+A0h] [rbp-210h]
  char **v191; // [rsp+A0h] [rbp-210h]
  int v192; // [rsp+A8h] [rbp-208h]
  __int64 v193; // [rsp+B0h] [rbp-200h]
  int v194; // [rsp+B0h] [rbp-200h]
  __int64 v195; // [rsp+B8h] [rbp-1F8h]
  char *dest; // [rsp+C0h] [rbp-1F0h]
  const char **v197; // [rsp+C8h] [rbp-1E8h]
  __int64 v198; // [rsp+C8h] [rbp-1E8h]
  std::string *v199; // [rsp+D8h] [rbp-1D8h]
  double v200; // [rsp+D8h] [rbp-1D8h]
  int *v201; // [rsp+D8h] [rbp-1D8h]
  char *v202; // [rsp+D8h] [rbp-1D8h]
  int v203; // [rsp+E0h] [rbp-1D0h]
  int v204[2]; // [rsp+E0h] [rbp-1D0h]
  int v205; // [rsp+E0h] [rbp-1D0h]
  _BYTE *v206; // [rsp+E8h] [rbp-1C8h]
  char v207; // [rsp+E8h] [rbp-1C8h]
  double v208; // [rsp+E8h] [rbp-1C8h]
  const char *v209; // [rsp+E8h] [rbp-1C8h]
  int v211; // [rsp+F0h] [rbp-1C0h]
  __int64 v212; // [rsp+F0h] [rbp-1C0h]
  bool v213; // [rsp+F8h] [rbp-1B8h]
  std::string *v214; // [rsp+F8h] [rbp-1B8h]
  int v215; // [rsp+F8h] [rbp-1B8h]
  std::string *v216; // [rsp+F8h] [rbp-1B8h]
  int v217; // [rsp+F8h] [rbp-1B8h]
  CoinMpsIO *v219; // [rsp+100h] [rbp-1B0h]
  const char **v220; // [rsp+108h] [rbp-1A8h]
  __int64 v221; // [rsp+110h] [rbp-1A0h]
  int v222[2]; // [rsp+128h] [rbp-188h]
  int v223; // [rsp+128h] [rbp-188h]
  int v224; // [rsp+128h] [rbp-188h]
  int *v225; // [rsp+128h] [rbp-188h]
  const char *v226; // [rsp+128h] [rbp-188h]
  const char *v227; // [rsp+128h] [rbp-188h]
  int v228; // [rsp+128h] [rbp-188h]
  int v229; // [rsp+128h] [rbp-188h]
  int v230; // [rsp+128h] [rbp-188h]
  int v231[2]; // [rsp+128h] [rbp-188h]
  int v232; // [rsp+128h] [rbp-188h]
  const char *v233; // [rsp+128h] [rbp-188h]
  int v234; // [rsp+128h] [rbp-188h]
  double v235; // [rsp+128h] [rbp-188h]
  int v236; // [rsp+140h] [rbp-170h] BYREF
  int v237; // [rsp+144h] [rbp-16Ch] BYREF
  __int64 v238; // [rsp+148h] [rbp-168h] BYREF
  char *src; // [rsp+150h] [rbp-160h] BYREF
  int v240[2]; // [rsp+158h] [rbp-158h] BYREF
  volatile signed __int32 *v241; // [rsp+160h] [rbp-150h] BYREF
  volatile signed __int32 *v242; // [rsp+168h] [rbp-148h] BYREF
  unsigned __int64 v243; // [rsp+170h] [rbp-140h] BYREF
  __int64 v244; // [rsp+178h] [rbp-138h]
  char s2; // [rsp+180h] [rbp-130h] BYREF
  char v246[47]; // [rsp+181h] [rbp-12Fh] BYREF
  char v247[256]; // [rsp+1B0h] [rbp-100h] BYREF

  v12 = 2;
  if ( a4 <= 2 )
    v12 = a4;
  v14 = v12;
  if ( v12 < 0 )
    v14 = 0;
  v166 = (int)a6;
  std::string::string();
  v221 = CoinFileOutput::create((std::string *)&v238, 0, v15, v16, v17, v18, locale, v166, v168, v170, v172, v174, v176);
  v19 = setlocale(6, nullptr);
  localea = strdup(v19);
  setlocale(6, "C");
  v213 = a4 == 1;
  v220 = *((const char ***)this + 20);
  v197 = *((const char ***)this + 19);
  if ( (unsigned int)sub_1FA6A0(v197, *((_DWORD *)this + 10), 82) )
  {
    v20 = (CoinMessageHandler *)CoinMessageHandler::message(
                                  *((CoinMessageHandler **)this + 28),
                                  13,
                                  (CoinMpsIO *)((char *)this + 240));
    v24 = (CoinMessageHandler *)CoinMessageHandler::operator<<(
                                  v20,
                                  (__int64)"row",
                                  (__int64)&std::string::_Rep::_S_empty_rep_storage,
                                  v21,
                                  v22,
                                  v23,
                                  (__int64)localea);
    v25 = CoinMessageHandler::operator<<(v24);
    CoinMessageHandler::operator<<(v25, 0, a7);
  }
  if ( (unsigned int)sub_1FA6A0(*((const char ***)this + 20), *((_DWORD *)this + 11), 67) )
  {
    v156 = (CoinMessageHandler *)CoinMessageHandler::message(
                                   *((CoinMessageHandler **)this + 28),
                                   13,
                                   (CoinMpsIO *)((char *)this + 240));
    v160 = (CoinMessageHandler *)CoinMessageHandler::operator<<(
                                   v156,
                                   (__int64)"column",
                                   (__int64)&std::string::_Rep::_S_empty_rep_storage,
                                   v157,
                                   v158,
                                   v159,
                                   (__int64)localea);
    v161 = CoinMessageHandler::operator<<(v160);
    CoinMessageHandler::operator<<(v161, 0, a7);
  }
  v26 = *((_DWORD *)this + 10);
  if ( v26 <= 0 )
  {
LABEL_42:
    v30 = 8;
  }
  else
  {
    v27 = v197;
    v28 = (__int64)&v197[(unsigned int)(v26 - 1) + 1];
    while ( 1 )
    {
      v29 = strlen(*v27);
      if ( v29 > 8 )
        break;
      if ( (const char **)v28 == ++v27 )
        goto LABEL_42;
    }
    v30 = v29;
    if ( (unsigned int)v29 > 8 )
      goto LABEL_14;
  }
  v45 = *((_DWORD *)this + 11);
  if ( v45 <= 0 )
    goto LABEL_16;
  v46 = v220;
  v47 = (__int64)&v220[(unsigned int)(v45 - 1) + 1];
  while ( 1 )
  {
    v48 = strlen(*v46);
    if ( v48 > v30 )
      break;
    if ( (const char **)v47 == ++v46 )
      goto LABEL_16;
  }
  v30 = v48;
LABEL_14:
  if ( a4 != 1 && v30 > 8 )
  {
    v14 += 8;
    v213 = a4 != 1 && v30 > 8;
  }
LABEL_16:
  if ( *((_DWORD *)this + 73) )
  {
    v213 = 1;
    v211 = 1;
  }
  else
  {
    v31 = 2;
    if ( a5 <= 2 )
      v31 = a5;
    v32 = v31;
    v33 = v31 <= 0;
    v34 = 1;
    if ( !v33 )
      v34 = v32;
    v211 = v34;
  }
  std::string::assign((std::string *)&v238, "NAME          ", 0xEu);
  v35 = *(const char **)this;
  if ( !**(_BYTE **)this )
  {
    std::string::append((std::string *)&v238, "BLANK   ", 8u);
LABEL_25:
    v38 = v14 & 7;
    if ( v213 )
      goto LABEL_26;
    goto LABEL_50;
  }
  v36 = strlen(*(const char **)this);
  if ( v36 <= 7 )
  {
    std::string::append((std::string *)&v238, v35, v36);
    v37 = strlen(*(const char **)this);
    std::string::append((std::string *)&v238, 8 - v37, 32);
    goto LABEL_25;
  }
  std::string::append((std::string *)&v238, v35, 8u);
  v38 = v14 & 7;
  if ( v213 )
  {
LABEL_26:
    if ( v38 == 2 )
      std::string::append((std::string *)&v238, "  FREEIEEE", 0xAu);
    else
      std::string::append((std::string *)&v238, "  FREE", 6u);
    goto LABEL_28;
  }
LABEL_50:
  if ( v38 == 2 )
    std::string::append((std::string *)&v238, "  IEEE", 6u);
LABEL_28:
  v39 = *((const char **)this + 1);
  if ( !*v39 )
    v39 = "OBJROW";
  s = (char *)CoinStrdup(v39);
  std::string::append((std::string *)&v238, "\nROWS\n N  ", 0xAu);
  v40 = strlen(s);
  std::string::append((std::string *)&v238, s, v40);
  std::string::append((std::string *)&v238, "\n", 1u);
  if ( v221 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v221 + 24LL))(v221, v238);
  dest = (char *)operator new[](*((int *)this + 10));
  v41 = *((int *)this + 10);
  RowSense = (const void *)CoinMpsIO::getRowSense(this);
  memcpy(dest, RowSense, v41);
  RowLower = CoinMpsIO::getRowLower(this);
  RowUpper = CoinMpsIO::getRowUpper(this);
  if ( *((int *)this + 10) > 0 )
  {
    *(_QWORD *)v222 = 1;
    do
    {
      std::string::assign((std::string *)&v238, " ", 1u);
      if ( dest[*(_QWORD *)v222 - 1] == 82 )
      {
        if ( *(double *)(RowLower + 8LL * *(_QWORD *)v222 - 8) <= -1.0e30 )
        {
          dest[*(_QWORD *)v222 - 1] = 76;
          std::string::append((std::string *)&v238, 1u, 76);
        }
        else if ( *(double *)(RowUpper + 8LL * *(_QWORD *)v222 - 8) >= 1.0e30 )
        {
          dest[*(_QWORD *)v222 - 1] = 71;
          std::string::append((std::string *)&v238, 1u, 71);
        }
        else
        {
          std::string::append((std::string *)&v238, "L", 1u);
        }
      }
      else
      {
        std::string::append((std::string *)&v238, 1u, dest[*(_QWORD *)v222 - 1]);
      }
      std::string::append((std::string *)&v238, "  ", 2u);
      v43 = v197[*(_QWORD *)v222 - 1];
      v44 = strlen(v43);
      std::string::append((std::string *)&v238, v43, v44);
      std::string::append((std::string *)&v238, "\n", 1u);
      if ( v221 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v221 + 24LL))(v221, v238);
      v33 = *((_DWORD *)this + 10) <= v222[0];
      ++*(_QWORD *)v222;
    }
    while ( !v33 );
  }
  if ( v221 )
    (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v221 + 24LL))(v221, "COLUMNS\n");
  ColLower = CoinMpsIO::getColLower(this);
  ColUpper = CoinMpsIO::getColUpper(this);
  ObjCoefficients = CoinMpsIO::getObjCoefficients(this);
  MatrixByCol = (_QWORD *)CoinMpsIO::getMatrixByCol(this);
  v50 = MatrixByCol[4];
  v51 = MatrixByCol[5];
  v52 = MatrixByCol[6];
  v53 = MatrixByCol[7];
  src = nullptr;
  v195 = v50;
  v183 = v53;
  LODWORD(v53) = *((_DWORD *)this + 10);
  v193 = v51;
  v179 = v52;
  v223 = *((_DWORD *)this + 11);
  v236 = v53 + 10;
  v237 = v223 + 10;
  v54 = (_BYTE *)operator new[]((int)v53 + 1);
  v55 = *((int *)this + 10);
  v206 = v54;
  memset(v54, 0, (int)v55 + 1);
  if ( *((_DWORD *)this + 73) )
  {
    CoinMpsIO::decodeString(this, 0, &v236, &v237, (const char **)&src);
    v55 = *((int *)this + 10);
  }
  if ( v55 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v56 = operator new[](4 * v55);
  v57 = *((int *)this + 10);
  if ( v57 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v199 = (std::string *)operator new[](8 * v57);
  if ( *((int *)this + 11) > 0 )
  {
    v58 = v237;
    v59 = 0;
    v203 = 0;
    v182 = 0;
    v60 = -(int)(v56 >> 2) & 3;
    v181 = -(int)(v56 >> 2) & 3;
    v173 = 8 * v60;
    v169 = 4 * v60;
    v175 = (_QWORD *)((char *)v199 + 8 * v60);
    v171 = v56 + 4 * v60;
    while ( 1 )
    {
      if ( (_DWORD)v59 == v58 )
      {
        v108 = v236;
        v240[0] = v59;
        v228 = v203;
        LODWORD(v241) = v236;
        while ( 1 )
        {
          ++v228;
          v206[v108] = 1;
          CoinMpsIO::decodeString(this, v228, (int *)&v241, v240, (const char **)&v243);
          v58 = v237;
          if ( v240[0] != v237 )
            break;
          v108 = (int)v241;
        }
      }
      a10 = 0.0;
      v62 = *(double *)(ObjCoefficients + 8 * v59);
      if ( v62 != 0.0 )
        break;
      v61 = *(_DWORD *)(v183 + 4 * v59);
      v224 = v61;
      if ( v61 )
      {
        if ( *(double *)(ColLower + 8 * v59) == 0.0 )
          goto LABEL_109;
        v182 = 1;
        v65 = 0;
        goto LABEL_74;
      }
      if ( (_DWORD)v59 == v58 )
      {
        if ( *(double *)(ColLower + 8 * v59) != 0.0 )
        {
          v182 = 1;
          v65 = 0;
LABEL_90:
          CoinSort_2<int,double>(v56, v56 + 4LL * v224, v199);
          v102 = v224;
          if ( v224 > 0 )
          {
            v225 = (int *)v56;
            v103 = v199;
            v214 = (std::string *)((char *)v199 + 8 * (unsigned int)(v102 - 1) + 8);
            do
            {
              a9 = 0.0;
              if ( *(double *)v103 != 0.0 )
              {
                v104 = *v225;
                if ( !v206[v104] )
                {
                  v187 = *(double *)v103;
                  sub_1F9A40(v14, v197[v104], &v247[100 * v65]);
                  CoinConvertDouble(0, v14 & 3, v187, &v246[24 * v65++ - 1]);
                  if ( v211 == v65 )
                  {
                    v190 = (char **)v220[v59];
                    std::string::string();
                    sub_1FA200(v14, v65, v221, (const std::string *)&v243, (const char *)v190, &s2, v247);
                    if ( (_UNKNOWN *)(v243 - 24) != &std::string::_Rep::_S_empty_rep_storage )
                      sub_1F9DC0(v243 - 24);
                    v65 = 0;
                  }
                }
              }
              v103 = (std::string *)((char *)v103 + 8);
              ++v225;
            }
            while ( v214 != v103 );
          }
          if ( v65 )
          {
            v227 = v220[v59];
            std::string::string();
            sub_1FA200(v14, v65, v221, (const std::string *)&v243, v227, &s2, v247);
            if ( (_UNKNOWN *)(v243 - 24) != &std::string::_Rep::_S_empty_rep_storage )
              sub_1F9DC0(v243 - 24);
          }
          v58 = v237;
          if ( v237 == (_DWORD)v59 )
          {
            v105 = v236;
            v215 = v236;
            while ( 1 )
            {
              sub_1F9A40(v14, v197[v105], v247);
              CoinConvertDouble(0, v14 & 3, 1.0, &s2);
              s2 = 61;
              strcpy(v246, src);
              v226 = v220[v59];
              std::string::string();
              sub_1F9E00(v14, v221, (const std::string *)&v243, v226, &s2, v247);
              if ( (_UNKNOWN *)(v243 - 24) != &std::string::_Rep::_S_empty_rep_storage )
              {
                if ( &_pthread_key_create )
                {
                  v151 = _InterlockedExchangeAdd((volatile signed __int32 *)(v243 - 8), 0xFFFFFFFF);
                }
                else
                {
                  v151 = *(_DWORD *)(v243 - 8);
                  *(_DWORD *)(v243 - 8) = v151 - 1;
                }
                if ( v151 <= 0 )
                  std::string::_Rep::_M_destroy();
              }
              ++v203;
              v206[v215] = 0;
              CoinMpsIO::decodeString(this, v203, &v236, &v237, (const char **)&src);
              if ( v58 != v237 )
                break;
              v105 = v236;
            }
            v58 = v237;
          }
          goto LABEL_62;
        }
LABEL_109:
        if ( *(double *)(ColUpper + 8 * v59) < 1.0e30 )
        {
          v182 = 1;
LABEL_73:
          v224 = v61;
          v65 = 0;
LABEL_74:
          v66 = *(_DWORD *)(v179 + 4 * v59);
          if ( v224 > 0 )
          {
            v67 = v66 + 4LL;
            v68 = 8 * v67;
            v69 = 4 * v67;
            v70 = v69 - 16;
            v71 = (__int64 *)(v195 + v68 - 32);
            v72 = (_DWORD *)(v193 + v69 - 16);
            if ( (v56 >= v69 + v193 || (unsigned __int64)v72 >= v56 + 16)
              && ((unsigned __int64)v199 >= v68 + v195 || v71 >= (__int64 *)v199 + 4)
              && (unsigned int)v224 > 0xD )
            {
              v73 = 0;
              if ( v181 )
              {
                v74 = *v71;
                *(_DWORD *)v56 = *v72;
                *(_QWORD *)v199 = v74;
                v73 = 1;
                if ( v181 != 1 )
                {
                  v75 = *(_QWORD *)(v195 + v68 - 24);
                  *(_DWORD *)(v56 + 4) = *(_DWORD *)(v193 + v69 - 12);
                  *((_QWORD *)v199 + 1) = v75;
                  v73 = 2;
                  if ( v181 != 2 )
                  {
                    v76 = *(_DWORD *)(v193 + v69 - 8);
                    v73 = 3;
                    *((_QWORD *)v199 + 2) = *(_QWORD *)(v195 + v68 - 16);
                    *(_DWORD *)(v56 + 8) = v76;
                  }
                }
              }
              v77 = 0;
              v78 = 0;
              v79 = v193 + v169 + v70;
              v80 = v195 + v173 + v68 - 32;
              v81 = v224 - v181;
              do
              {
                ++v78;
                a8 = *(__m128 *)(v80 + 2 * v77);
                *(__m128i *)(v171 + v77) = _mm_loadu_si128((const __m128i *)(v79 + v77));
                v82 = *(_OWORD *)(v80 + 2 * v77 + 16);
                *(__m128 *)&v175[v77 / 4] = a8;
                *(_OWORD *)&v175[v77 / 4 + 2] = v82;
                v77 += 16LL;
              }
              while ( v78 < (unsigned int)(v224 - v181) >> 2 );
              v83 = (v81 & 0xFFFFFFFC) + v73;
              if ( (v81 & 0xFFFFFFFC) != v81 )
              {
                v84 = v66 + v83;
                v85 = *(_DWORD *)(v193 + 4 * v84);
                v86 = *(_QWORD *)(v195 + 8 * v84);
                v87 = v83 + 1;
                *((_QWORD *)v199 + v83) = v86;
                *(_DWORD *)(v56 + 4LL * v83) = v85;
                if ( v224 > v83 + 1 )
                {
                  v88 = v66 + v87;
                  v89 = *(_DWORD *)(v193 + 4 * v88);
                  *((_QWORD *)v199 + v87) = *(_QWORD *)(v195 + 8 * v88);
                  *(_DWORD *)(v56 + 4LL * v87) = v89;
                  v90 = v83 + 2;
                  if ( v83 + 2 < v224 )
                  {
                    v91 = v66 + v90;
                    v92 = *(_DWORD *)(v193 + 4 * v91);
                    *((_QWORD *)v199 + v90) = *(_QWORD *)(v195 + 8 * v91);
                    *(_DWORD *)(v56 + 4LL * v90) = v92;
                    v93 = v83 + 3;
                    if ( v83 + 3 < v224 )
                    {
                      v94 = v66 + v93;
                      v95 = *(_DWORD *)(v193 + 4 * v94);
                      *((_QWORD *)v199 + v93) = *(_QWORD *)(v195 + 8 * v94);
                      *(_DWORD *)(v56 + 4LL * v93) = v95;
                      v96 = v83 + 4;
                      if ( v83 + 4 < v224 )
                      {
                        v97 = v83 + 5;
                        v98 = v66 + v96;
                        v99 = *(_DWORD *)(v193 + 4 * v98);
                        *((_QWORD *)v199 + v96) = *(_QWORD *)(v195 + 8 * v98);
                        *(_DWORD *)(v56 + 4LL * v96) = v99;
                        if ( v97 < v224 )
                        {
                          v100 = v66 + v97;
                          v101 = *(_DWORD *)(v193 + 4 * v100);
                          *((_QWORD *)v199 + v97) = *(_QWORD *)(v195 + 8 * v100);
                          *(_DWORD *)(v56 + 4LL * v97) = v101;
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
              v149 = 0;
              do
              {
                v150 = v72[v149 / 4];
                *(_QWORD *)((char *)v199 + 2 * v149) = v71[v149 / 4];
                *(_DWORD *)(v56 + v149) = v150;
                v149 += 4LL;
              }
              while ( 4LL * (unsigned int)(v224 - 1) + 4 != v149 );
            }
          }
          goto LABEL_90;
        }
LABEL_112:
        isInteger = CoinMpsIO::isInteger(this, v59);
        v107 = v182;
        v62 = *(double *)(ObjCoefficients + 8 * v59);
        if ( isInteger )
          v107 = isInteger;
        v182 = v107;
        if ( v62 != 0.0 )
        {
LABEL_67:
          sub_1F9A40(v14, s, v247);
          CoinConvertDouble(0, v14 & 3, v62, &s2);
          v63 = &v206[*((int *)this + 10)];
          if ( *v63 )
          {
            s2 = 61;
            strcpy(v246, src);
            ++v203;
            *v63 = 0;
            CoinMpsIO::decodeString(this, v203, &v236, &v237, (const char **)&src);
          }
          if ( v211 != 1 )
          {
            v65 = 1;
            v224 = *(_DWORD *)(v183 + 4 * v59);
            goto LABEL_74;
          }
          v64 = v220[v59];
          std::string::string();
          sub_1FA200(v14, 1, v221, (const std::string *)&v243, v64, &s2, v247);
          if ( (_UNKNOWN *)(v243 - 24) != &std::string::_Rep::_S_empty_rep_storage )
            sub_1F9DC0(v243 - 24);
        }
        v61 = *(_DWORD *)(v183 + 4 * v59);
        goto LABEL_73;
      }
LABEL_62:
      if ( *((_DWORD *)this + 11) <= (int)++v59 )
        goto LABEL_121;
    }
    if ( *(double *)(ColLower + 8 * v59) == 0.0 )
    {
      a10 = 1.0e30;
      if ( *(double *)(ColUpper + 8 * v59) >= 1.0e30 )
        goto LABEL_112;
    }
    v182 = 1;
    goto LABEL_67;
  }
  v203 = 0;
  v182 = 0;
LABEL_121:
  operator delete[]((void *)v56);
  operator delete[](v199);
  operator delete[](v206);
  if ( v221 )
    (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v221 + 24LL))(v221, "RHS\n");
  v109 = this;
  if ( *((double *)this + 17) == 0.0 )
  {
LABEL_124:
    v110 = *((_DWORD *)v109 + 10);
    if ( v110 > 0 )
    {
      v229 = 0;
LABEL_126:
      v111 = 0;
      v207 = 0;
      while ( 1 )
      {
        v112 = dest[v111];
        if ( v112 == 71 )
          goto LABEL_149;
        if ( v112 <= 71 )
          break;
        if ( v112 == 76 )
        {
          v113 = *(double *)(RowUpper + 8 * v111);
          goto LABEL_133;
        }
        if ( v112 != 82 )
        {
LABEL_151:
          v113 = 0.0;
          goto LABEL_133;
        }
        v207 = 1;
        v113 = *(double *)(RowUpper + 8 * v111);
LABEL_133:
        v114 = 0.0;
        if ( v113 == 0.0 )
        {
LABEL_127:
          if ( (int)++v111 >= v110 )
            goto LABEL_137;
        }
        else
        {
          sub_1F9A40(v14, v197[v111], &v247[100 * v229]);
          CoinConvertDouble(1, v14 & 3, v113, &v246[24 * v229 - 1]);
          if ( v236 == (_DWORD)v111 && *((_DWORD *)this + 11) <= v237 )
          {
            s2 = 61;
            strcpy(v246, src);
            CoinMpsIO::decodeString(this, ++v203, &v236, &v237, (const char **)&src);
          }
          if ( v211 == ++v229 )
          {
            std::string::string();
            sub_1FA200(v14, v229, v221, (const std::string *)&v243, "RHS", &s2, v247);
            if ( (_UNKNOWN *)(v243 - 24) != &std::string::_Rep::_S_empty_rep_storage )
              sub_1F9DC0(v243 - 24);
            v229 = 0;
            v110 = *((_DWORD *)this + 10);
            goto LABEL_127;
          }
          v110 = *((_DWORD *)this + 10);
          if ( (int)++v111 >= v110 )
          {
LABEL_137:
            if ( !v229 )
              goto LABEL_138;
            goto LABEL_300;
          }
        }
      }
      if ( v112 != 69 )
        goto LABEL_151;
LABEL_149:
      v113 = *(double *)(RowLower + 8 * v111);
      goto LABEL_133;
    }
    goto LABEL_158;
  }
  v235 = *((double *)this + 17);
  sub_1F9A40(v14, s, v247);
  v113 = v235;
  CoinConvertDouble(1, v14 & 3, v235, &s2);
  if ( v211 == 1 )
  {
    std::string::string();
    sub_1F9E00(v14, v221, (const std::string *)&v243, "RHS", &s2, v247);
    if ( (_UNKNOWN *)(v243 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1F9DC0(v243 - 24);
    v109 = this;
    goto LABEL_124;
  }
  v229 = 1;
  v110 = *((_DWORD *)this + 10);
  if ( v110 > 0 )
    goto LABEL_126;
  v207 = 0;
LABEL_300:
  std::string::string();
  sub_1FA200(v14, v229, v221, (const std::string *)&v243, "RHS", &s2, v247);
  if ( (_UNKNOWN *)(v243 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    sub_1F9DC0(v243 - 24);
LABEL_138:
  if ( !v207 )
  {
LABEL_158:
    operator delete[](dest);
    if ( !v182 )
      goto LABEL_191;
    if ( !v221 )
    {
LABEL_161:
      v118 = *((_DWORD *)this + 11);
      if ( v118 > 0 )
      {
        *(_QWORD *)v231 = 0;
        while ( 1 )
        {
          v120 = v237;
          if ( v237 != v231[0] )
            break;
          if ( *(double *)(ColLower + 8LL * *(_QWORD *)v231) == -1.234567e-101 )
          {
            sub_1F9A40(v14, v220[*(_QWORD *)v231], v247);
            CoinConvertDouble(2, v14 & 3, 1.0, &s2);
            s2 = 61;
            strcpy(v246, src);
            CoinMpsIO::decodeString(this, v203 + 1, &v236, &v237, (const char **)&src);
            if ( v120 != v237 )
            {
              std::string::string();
              sub_1F9E00(v14, v221, (const std::string *)&v243, "BOUND", &s2, v247);
              if ( (_UNKNOWN *)(v243 - 24) != &std::string::_Rep::_S_empty_rep_storage )
                sub_1F9DC0(v243 - 24);
              v118 = *((_DWORD *)this + 11);
              ++v203;
              goto LABEL_169;
            }
            if ( !strcmp(src, &s2) )
            {
              std::string::string();
              sub_1F9E00(v14, v221, (const std::string *)&v243, "BOUND", &s2, v247);
            }
            else
            {
              std::string::string();
              sub_1F9E00(v14, v221, (const std::string *)&v243, "BOUND", &s2, v247);
              if ( (_UNKNOWN *)(v243 - 24) != &std::string::_Rep::_S_empty_rep_storage )
                sub_1F9DC0(v243 - 24);
              s2 = 61;
              strcpy(v246, src);
              std::string::string();
              sub_1F9E00(v14, v221, (const std::string *)&v243, "BOUND", &s2, v247);
            }
            if ( (_UNKNOWN *)(v243 - 24) != &std::string::_Rep::_S_empty_rep_storage )
              sub_1F9DC0(v243 - 24);
            v203 += 2;
            CoinMpsIO::decodeString(this, v203, &v236, &v237, (const char **)&src);
            goto LABEL_291;
          }
          if ( *(double *)(ColUpper + 8LL * *(_QWORD *)v231) == -1.234567e-101 )
          {
            sub_1F9A40(v14, v220[*(_QWORD *)v231], v247);
            CoinConvertDouble(2, v14 & 3, 1.0, &s2);
            s2 = 61;
            strcpy(v246, src);
            std::string::string();
            sub_1F9E00(v14, v221, (const std::string *)&v243, "BOUND", &s2, v247);
            if ( (_UNKNOWN *)(v243 - 24) != &std::string::_Rep::_S_empty_rep_storage )
              sub_1F9DC0(v243 - 24);
            ++v203;
            v119 = this;
            CoinMpsIO::decodeString(this, v203, &v236, &v237, (const char **)&src);
LABEL_168:
            v118 = *((_DWORD *)v119 + 11);
          }
LABEL_169:
          ++*(_QWORD *)v231;
          if ( v231[0] >= v118 )
            goto LABEL_191;
        }
        if ( *(double *)(ObjCoefficients + 8LL * *(_QWORD *)v231) == 0.0 && !*(_DWORD *)(v183 + 4LL * *(_QWORD *)v231) )
          goto LABEL_169;
        v200 = *(double *)(ColLower + 8LL * *(_QWORD *)v231);
        v208 = *(double *)(ColUpper + 8LL * *(_QWORD *)v231);
        if ( v200 != 0.0 || *(double *)(ColUpper + 8LL * *(_QWORD *)v231) < 1.0e30 )
          goto LABEL_177;
        v119 = this;
        if ( (unsigned __int8)CoinMpsIO::isInteger(this, v231[0]) )
        {
          v200 = *(double *)(ColLower + 8LL * *(_QWORD *)v231);
          v208 = *(double *)(ColUpper + 8LL * *(_QWORD *)v231);
LABEL_177:
          if ( !(unsigned __int8)CoinMpsIO::isInteger(this, v231[0]) )
            goto LABEL_292;
          if ( v200 <= -1.797693134862316e308 )
          {
            if ( v208 >= 1.797693134862316e308 )
            {
              v241 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
              v242 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
              v208 = 1.797693134862316e308;
              goto LABEL_319;
            }
            v241 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
            v242 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
            goto LABEL_281;
          }
          if ( v208 >= 1.797693134862316e308 )
          {
            v208 = 1.797693134862316e308;
            v241 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
            v242 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
            if ( v200 > -1.0e30 )
              goto LABEL_181;
LABEL_319:
            if ( !(unsigned __int8)CoinMpsIO::isInteger(this, v231[0]) )
            {
              std::string::assign((std::string *)&v241, " FR ", 4u);
              goto LABEL_321;
            }
LABEL_282:
            std::string::assign((std::string *)&v241, " MI ", 4u);
            v243 = 0xC6293E5939A08CEALL;
            if ( (unsigned __int8)CoinMpsIO::isInteger(this, v231[0]) )
              std::string::assign((std::string *)&v242, " UI ", 4u);
            else
              std::string::assign((std::string *)&v242, " UP ", 4u);
            if ( v208 < 1.0e30 )
            {
              v122 = 2;
              v244 = *(_QWORD *)&v208;
              goto LABEL_286;
            }
LABEL_323:
            v244 = 0x46293E5939A08CEALL;
            v122 = 2;
            goto LABEL_286;
          }
LABEL_292:
          v241 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
          v242 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
          if ( v200 <= -1.0e30 )
          {
LABEL_281:
            if ( v208 >= 1.0e30 )
              goto LABEL_319;
            goto LABEL_282;
          }
LABEL_181:
          if ( fabs(v208 - v200) < 0.00000001 )
          {
            std::string::assign((std::string *)&v241, " FX ", 4u);
            v122 = 1;
            v243 = *(_QWORD *)&v200;
            goto LABEL_286;
          }
          if ( v200 != 0.0 || (int)CoinMpsIO::isIntegerOrSemiContinuous(this, v231[0]) > 2 )
          {
            std::string::assign((std::string *)&v241, " LO ", 4u);
            v243 = *(_QWORD *)&v200;
            if ( (int)CoinMpsIO::isIntegerOrSemiContinuous(this, v231[0]) > 2 )
            {
              if ( v200 == 0.0 )
              {
                v123 = (std::string *)&v241;
                v121 = 0;
                v122 = 1;
              }
              else
              {
                if ( (unsigned int)CoinMpsIO::isIntegerOrSemiContinuous(this, v231[0]) == 4 )
                  std::string::assign((std::string *)&v241, " LI ", 4u);
                v121 = 1;
                v122 = 2;
                v123 = (std::string *)&v242;
              }
              std::string::assign(v123, " SC ", 4u);
              if ( v208 >= 1.0e30 )
                *(&v243 + v121) = 0x46293E5939A08CEALL;
              else
                *((double *)&v243 + v121) = v208;
              goto LABEL_286;
            }
            if ( !(unsigned __int8)CoinMpsIO::isInteger(this, v231[0]) )
            {
              v122 = 1;
              if ( v208 < 1.0e30 )
              {
                std::string::assign((std::string *)&v242, " UP ", 4u);
                v122 = 2;
                v244 = *(_QWORD *)&v208;
              }
              goto LABEL_286;
            }
            std::string::assign((std::string *)&v242, " UI ", 4u);
            if ( v208 < 1.0e30 )
            {
              v244 = *(_QWORD *)&v208;
              v122 = 2;
              goto LABEL_286;
            }
            goto LABEL_323;
          }
          if ( (unsigned __int8)CoinMpsIO::isInteger(this, v231[0]) )
          {
            if ( fabs(v208 - 1.0) < 0.00000001 )
            {
              std::string::assign((std::string *)&v241, " BV ", 4u);
              v122 = 1;
              v243 = 0x3FF0000000000000LL;
            }
            else
            {
              std::string::assign((std::string *)&v241, " UI ", 4u);
              if ( v208 >= 1.0e30 )
              {
LABEL_321:
                v243 = 0x46293E5939A08CEALL;
                v122 = 1;
              }
              else
              {
                v243 = *(_QWORD *)&v208;
                v122 = 1;
              }
            }
          }
          else
          {
            std::string::assign((std::string *)&v241, " UP ", 4u);
            v122 = 1;
            v243 = *(_QWORD *)&v208;
          }
LABEL_286:
          v153 = (unsigned int)(v122 - 1);
          v154 = 0;
          v155 = 8 * v153 + 8;
          do
          {
            while ( 1 )
            {
              v209 = *(const char **)((char *)&v243 + v154);
              sub_1F9A40(v14, v220[*(_QWORD *)v231], v247);
              CoinConvertDouble(2, v14 & 3, *(double *)&v209, &s2);
              std::string::string((std::string *)v240, (const std::string *)&(&v241)[v154 / 8]);
              sub_1F9E00(v14, v221, (const std::string *)v240, "BOUND", &s2, v247);
              if ( (_UNKNOWN *)(*(_QWORD *)v240 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
                break;
              v154 += 8LL;
              if ( v155 == v154 )
                goto LABEL_289;
            }
            v154 += 8LL;
            sub_1F9DC0(*(_QWORD *)v240 - 24LL);
          }
          while ( v154 != v155 );
LABEL_289:
          if ( v242 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
          {
            if ( &_pthread_key_create )
            {
              v163 = _InterlockedExchangeAdd(v242 - 2, 0xFFFFFFFF);
            }
            else
            {
              v163 = *((_DWORD *)v242 - 2);
              *((_DWORD *)v242 - 2) = v163 - 1;
            }
            if ( v163 <= 0 )
              std::string::_Rep::_M_destroy();
          }
          if ( v241 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
          {
            if ( &_pthread_key_create )
            {
              v162 = _InterlockedExchangeAdd(v241 - 2, 0xFFFFFFFF);
            }
            else
            {
              v162 = *((_DWORD *)v241 - 2);
              *((_DWORD *)v241 - 2) = v162 - 1;
            }
            if ( v162 <= 0 )
              std::string::_Rep::_M_destroy();
          }
LABEL_291:
          v118 = *((_DWORD *)this + 11);
          goto LABEL_169;
        }
        goto LABEL_168;
      }
LABEL_191:
      if ( !v167 )
        goto LABEL_224;
      if ( !v221 )
        goto LABEL_194;
      goto LABEL_193;
    }
LABEL_160:
    (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v221 + 24LL))(v221, "BOUNDS\n");
    goto LABEL_161;
  }
  if ( !v221 )
  {
    if ( *((int *)this + 10) <= 0 )
    {
      operator delete[](dest);
      if ( !v182 )
      {
        if ( !v167 )
          goto LABEL_224;
        goto LABEL_194;
      }
      goto LABEL_161;
    }
    goto LABEL_141;
  }
  (*(void (__fastcall **)(__int64, const char *, double, double, double, double, double))(*(_QWORD *)v221 + 24LL))(
    v221,
    "RANGES\n",
    v113,
    *(double *)a8.m128_u64,
    a9,
    a10,
    v114);
  if ( *((int *)this + 10) > 0 )
  {
LABEL_141:
    v115 = 1;
    v230 = 0;
    do
    {
      if ( dest[v115 - 1] == 82 )
      {
        v117 = *(double *)(RowUpper + 8 * v115 - 8) - *(double *)(RowLower + 8 * v115 - 8);
        if ( v117 < 1.0e30 )
        {
          sub_1F9A40(v14, v197[v115 - 1], &v247[100 * v230]);
          CoinConvertDouble(1, v14 & 3, v117, &v246[24 * v230++ - 1]);
          if ( v211 == v230 )
          {
            std::string::string();
            sub_1FA200(v14, v230, v221, (const std::string *)&v243, "RANGE", &s2, v247);
            if ( (_UNKNOWN *)(v243 - 24) != &std::string::_Rep::_S_empty_rep_storage )
              sub_1F9DC0(v243 - 24);
            v230 = 0;
          }
        }
      }
      v116 = v115++;
    }
    while ( *((_DWORD *)this + 10) > v116 );
    if ( v230 )
    {
      std::string::string();
      sub_1FA200(v14, v230, v221, (const std::string *)&v243, "RANGE", &s2, v247);
      if ( (_UNKNOWN *)(v243 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_1F9DC0(v243 - 24);
    }
    goto LABEL_158;
  }
  operator delete[](dest);
  if ( v182 )
    goto LABEL_160;
  if ( !v167 )
    goto LABEL_224;
LABEL_193:
  (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v221 + 24LL))(v221, "QUADOBJ\n");
LABEL_194:
  v124 = *((_DWORD *)this + 11);
  v125 = (_DWORD *)v167[7];
  v186 = v167[5];
  v188 = v167[4];
  if ( v124 <= 0 )
    goto LABEL_224;
  v126 = (int *)v167[6];
  v198 = 1;
  do
  {
    v127 = *v126;
    if ( (int)v127 >= (int)v127 + *v125 )
      goto LABEL_223;
    v232 = 0;
    v128 = (int)v127 + 1;
    v201 = (int *)(v186 + 4 * v127 - 4 * v128);
    *(_QWORD *)v204 = v188 + -8 * v128 + 8 * v127;
    do
    {
      v216 = *(std::string **)(*(_QWORD *)v204 + 8 * v128);
      v130 = strcpy(&v247[100 * v232], v220[v201[v128]]);
      v131 = v130;
      v132 = *(double *)&v216;
      if ( !v14 )
      {
        if ( !*v130 )
        {
          v133 = v130;
          v192 = 0;
          v191 = (char **)&byte_6;
          v194 = 6;
          v134 = 5;
          v217 = 5;
          v135 = 4;
          v136 = 4;
          v137 = 3;
          v138 = 3;
          v139 = 2;
          v140 = 1;
          goto LABEL_213;
        }
        goto LABEL_199;
      }
      if ( (unsigned int)(v14 - 2) <= 5 )
      {
        if ( !*v130 )
        {
          v133 = v130;
          v191 = (char **)&byte_6;
          v194 = 6;
          v134 = 5;
          v217 = 5;
          v135 = 4;
          v136 = 4;
          v137 = 3;
          v138 = 3;
          v139 = 2;
          v140 = 1;
          v192 = 0;
          goto LABEL_213;
        }
LABEL_199:
        if ( v130[1] )
        {
          if ( v130[2] )
          {
            if ( v130[3] )
            {
              if ( v130[4] )
              {
                if ( v130[5] )
                {
                  if ( !v130[6] )
                  {
                    *((_WORD *)v130 + 3) = 8224;
                    goto LABEL_206;
                  }
                  if ( v130[7] )
                  {
LABEL_206:
                    v131[8] = 0;
                    goto LABEL_207;
                  }
LABEL_218:
                  v131[7] = 32;
                  goto LABEL_206;
                }
                v133 = v130 + 5;
                v191 = (char **)(byte_9 + 2);
                v194 = 11;
                v134 = 10;
                v217 = 10;
                v135 = 9;
                v136 = 9;
                v137 = 8;
                v138 = 8;
                v139 = 7;
                v140 = 6;
                v192 = 5;
              }
              else
              {
                v133 = v130 + 4;
                v191 = (char **)(byte_9 + 1);
                v194 = 10;
                v134 = 9;
                v217 = 9;
                v135 = 8;
                v136 = 8;
                v137 = 7;
                v138 = 7;
                v139 = 6;
                v140 = 5;
                v192 = 4;
              }
            }
            else
            {
              v133 = v130 + 3;
              v191 = (char **)byte_9;
              v194 = 9;
              v134 = 8;
              v217 = 8;
              v135 = 7;
              v136 = 7;
              v137 = 6;
              v138 = 6;
              v139 = 5;
              v140 = 4;
              v192 = 3;
            }
          }
          else
          {
            v133 = v130 + 2;
            v191 = (char **)&byte_8;
            v194 = 8;
            v134 = 7;
            v217 = 7;
            v135 = 6;
            v136 = 6;
            v137 = 5;
            v138 = 5;
            v139 = 4;
            v140 = 3;
            v192 = 2;
          }
        }
        else
        {
          v133 = v130 + 1;
          v191 = (char **)&byte_7;
          v194 = 7;
          v134 = 6;
          v217 = 6;
          v135 = 5;
          v136 = 5;
          v137 = 4;
          v138 = 4;
          v139 = 3;
          v140 = 2;
          v192 = 1;
        }
LABEL_213:
        *v133 = 32;
        v131[v140] = 32;
        v131[v139] = 32;
        if ( v138 == 8 )
          goto LABEL_206;
        v131[v137] = 32;
        if ( v136 > 7 )
          goto LABEL_206;
        v131[v135] = 32;
        if ( v217 > 7 )
          goto LABEL_206;
        v131[v134] = 32;
        if ( v194 > 7 )
          goto LABEL_206;
        *((_BYTE *)v191 + (_QWORD)v131) = 32;
        if ( v192 )
          goto LABEL_206;
        goto LABEL_218;
      }
LABEL_207:
      CoinConvertDouble(0, v14 & 3, v132, &v246[24 * v232++ - 1]);
      if ( v211 == v232 )
      {
        v141 = v220[v198 - 1];
        std::string::string();
        sub_1FA200(v14, v232, v221, (const std::string *)&v243, v141, &s2, v247);
        if ( (_UNKNOWN *)(v243 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create )
          {
            v152 = _InterlockedExchangeAdd((volatile signed __int32 *)(v243 - 8), 0xFFFFFFFF);
          }
          else
          {
            v152 = *(_DWORD *)(v243 - 8);
            *(_DWORD *)(v243 - 8) = v152 - 1;
          }
          if ( v152 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        v232 = 0;
      }
      v129 = v128++;
    }
    while ( *v126 + *v125 > v129 );
    if ( v232 )
    {
      v148 = v220[v198 - 1];
      std::string::string();
      sub_1FA200(v14, v232, v221, (const std::string *)&v243, v148, &s2, v247);
      if ( (_UNKNOWN *)(v243 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_1F9DC0(v243 - 24);
    }
    v124 = *((_DWORD *)this + 11);
LABEL_223:
    ++v126;
    ++v125;
    v33 = (int)v198++ < v124;
  }
  while ( v33 );
LABEL_224:
  if ( !a11 )
    goto LABEL_243;
  if ( v221 )
  {
    (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v221 + 24LL))(v221, "SOS\n");
    if ( a11 <= 0 )
      goto LABEL_244;
LABEL_227:
    v205 = 0;
    v202 = (char *)a12 + 8;
    do
    {
      v142 = " S1\n";
      if ( *((_DWORD *)v202 + 1) != 1 )
        v142 = " S2\n";
      if ( v221 )
        (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v221 + 24LL))(v221, v142);
      v143 = *((_QWORD *)v202 + 2);
      v219 = *((CoinMpsIO **)v202 + 1);
      if ( *(int *)v202 > 0 )
      {
        v212 = (unsigned int)(*(_DWORD *)v202 - 1) + 1LL;
        v144 = 0;
        do
        {
          v145 = 1.797693134862316e308;
          v234 = *((_DWORD *)v219 + v144);
          if ( v143 )
            v145 = *(double *)(v143 + 8 * v144);
          if ( v14 && (unsigned int)(v14 - 2) > 5 )
            v247[0] = 0;
          else
            strcpy(v247, "        ");
          CoinConvertDouble(2, v14 & 3, v145, &s2);
          v233 = v220[v234];
          std::string::string();
          sub_1F9E00(v14, v221, (const std::string *)&v243, v233, &s2, v247);
          if ( (_UNKNOWN *)(v243 - 24) != &std::string::_Rep::_S_empty_rep_storage )
          {
            if ( &_pthread_key_create )
            {
              v147 = _InterlockedExchangeAdd((volatile signed __int32 *)(v243 - 8), 0xFFFFFFFF);
            }
            else
            {
              v147 = *(_DWORD *)(v243 - 8);
              *(_DWORD *)(v243 - 8) = v147 - 1;
            }
            if ( v147 <= 0 )
              std::string::_Rep::_M_destroy();
          }
          ++v144;
        }
        while ( v144 != v212 );
      }
      ++v205;
      v202 += 32;
    }
    while ( a11 > v205 );
LABEL_243:
    if ( v221 )
    {
LABEL_244:
      (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v221 + 24LL))(v221, "ENDATA\n");
      free(s);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v221 + 8LL))(v221);
      goto LABEL_245;
    }
  }
  else if ( a11 > 0 )
  {
    goto LABEL_227;
  }
  free(s);
LABEL_245:
  setlocale(6, localea);
  free(localea);
  if ( (_UNKNOWN *)(v238 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    sub_1F9DC0(v238 - 24);
  return 0;
}

