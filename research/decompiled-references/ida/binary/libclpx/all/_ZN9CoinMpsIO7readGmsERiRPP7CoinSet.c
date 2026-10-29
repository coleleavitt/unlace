__int64 __fastcall CoinMpsIO::readGms(char **this, int *a2, CoinSet ***a3, double a4)
{
  CoinMpsIO *v4; // rbx
  char *v5; // r15
  char v6; // dl
  const char *v7; // rax
  CoinMessageHandler *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  int v15; // eax
  bool v16; // cf
  bool v17; // zf
  __int64 v18; // rcx
  char *v19; // rsi
  const char *v20; // rdi
  const char *BlankOr; // rbp
  char v22; // al
  char *v23; // rdx
  void *v24; // rdi
  char *v25; // rbp
  char *v26; // rax
  char *v27; // rax
  size_t v28; // r13
  int v29; // r14d
  void *v30; // rax
  __int64 v31; // r12
  size_t v32; // r14
  int *v33; // rax
  __int64 v34; // r15
  char *v35; // r13
  char **v36; // rax
  char **v37; // rbp
  int v38; // edx
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // r14
  char *v42; // rax
  int v43; // r13d
  char *v44; // rax
  int v45; // ebp
  __int64 v46; // r12
  char *v47; // rax
  char v48; // r12
  int Hash; // eax
  __int64 v50; // rdx
  char *v51; // rdx
  __int64 v52; // rcx
  int v53; // edx
  __int64 v54; // rbp
  CoinMpsCardReader *i; // rdi
  __int64 v56; // rax
  __int64 v57; // r15
  char *v58; // rax
  char **v59; // r15
  CoinMpsIO *v60; // r12
  __int64 v61; // rbx
  CoinMpsIO *v62; // r15
  char *v63; // r12
  int GmsField; // ebp
  int v65; // eax
  __int64 v66; // rcx
  double v67; // xmm2_8
  double v68; // xmm1_8
  char *v69; // rax
  int v70; // eax
  char *v71; // r9
  double *v72; // rax
  double v73; // xmm0_8
  char *v74; // rbx
  char **v75; // r15
  char *v76; // rax
  char *v77; // rdx
  CoinMpsCardReader *v78; // rdi
  int v79; // eax
  CoinMpsCardReader *v80; // rdi
  char *v81; // rbp
  char *v82; // rax
  int v83; // eax
  int v84; // r14d
  unsigned __int64 v85; // xmm0_8
  int v86; // ecx
  __int64 v87; // rax
  double *v88; // rcx
  double *v89; // rdx
  int v90; // eax
  char *v91; // rbp
  int v92; // r13d
  int v93; // r15d
  char *v94; // rax
  char *v95; // rax
  __int64 v96; // r12
  char *v97; // r12
  CoinPackedMatrix *v98; // rbp
  CoinMessageHandler *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  CoinMessageHandler *v104; // rax
  CoinMessageHandler *v105; // rax
  CoinMessageHandler *v106; // rax
  __int64 v107; // rax
  char *v108; // r14
  int v109; // eax
  __int64 v110; // rbp
  const char *v111; // r14
  char *v112; // rax
  char *v113; // r15
  const char *v114; // r14
  char v115; // al
  char *v116; // rax
  const void *v117; // r14
  char *v118; // rax
  double v119; // xmm0_8
  char *v120; // rax
  double v121; // xmm0_8
  __int64 v122; // rbp
  int v123; // ecx
  int v124; // edx
  __int64 v125; // rax
  __int64 v126; // rbp
  double v127; // xmm1_8
  int v128; // r15d
  int v129; // edi
  __int64 v130; // rbp
  int v131; // r11d
  __int64 v132; // rsi
  int *v133; // r13
  int v134; // edx
  __int64 v135; // rax
  __int64 v136; // r10
  int *v137; // rsi
  double *v138; // rcx
  int *v139; // r9
  double *v140; // r8
  double v141; // xmm0_8
  __int64 v142; // rax
  int v143; // edx
  __int64 v144; // rcx
  int v145; // eax
  void *ptr; // [rsp+0h] [rbp-438h]
  char *ptra; // [rsp+0h] [rbp-438h]
  int v148; // [rsp+8h] [rbp-430h]
  char *v149; // [rsp+10h] [rbp-428h]
  int v150; // [rsp+10h] [rbp-428h]
  int v151; // [rsp+18h] [rbp-420h]
  int *v152; // [rsp+20h] [rbp-418h]
  char **v153; // [rsp+28h] [rbp-410h]
  char **v154; // [rsp+28h] [rbp-410h]
  int v155; // [rsp+28h] [rbp-410h]
  int v156; // [rsp+30h] [rbp-408h]
  int v157; // [rsp+3Ch] [rbp-3FCh]
  _DWORD *v158; // [rsp+48h] [rbp-3F0h]
  int *v159; // [rsp+50h] [rbp-3E8h]
  char *v160; // [rsp+58h] [rbp-3E0h]
  int v161; // [rsp+58h] [rbp-3E0h]
  double *v162; // [rsp+60h] [rbp-3D8h]
  char *v163; // [rsp+68h] [rbp-3D0h]
  unsigned int v164; // [rsp+70h] [rbp-3C8h]
  char src[4]; // [rsp+80h] [rbp-3B8h] BYREF
  char v166[4]; // [rsp+F0h] [rbp-348h] BYREF
  char dest[160]; // [rsp+160h] [rbp-2D8h] BYREF
  char v168[568]; // [rsp+200h] [rbp-238h] BYREF

  v4 = (CoinMpsIO *)this;
  v5 = *(this + 34);
  *(this + 5) = nullptr;
  *((_DWORD *)this + 12) = 0;
  v148 = -1;
  do
  {
LABEL_2:
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          if ( (int)CoinMpsCardReader::nextGmsField((CoinMpsCardReader *)v5, nullptr) < 0 )
            goto LABEL_11;
          while ( 1 )
          {
            v5 = *((char **)v4 + 34);
            if ( v5[8] != 42 )
            {
              puts("bad gms file");
              return (unsigned int)-1;
            }
            v6 = v5[9];
            v7 = v5 + 9;
            if ( v6 == 9 )
            {
              do
LABEL_5:
                v6 = *++v7;
              while ( *v7 == 9 );
            }
            if ( v6 == 32 )
              goto LABEL_5;
            if ( !v6 )
              goto LABEL_2;
            if ( v148 == -1 )
              break;
            if ( memcmp(v7, "Total", 5u) )
            {
              if ( v148 > 99 )
              {
                v15 = strtol(v7, nullptr, 10);
                if ( v148 == 100 )
                {
                  *((_DWORD *)v4 + 10) = v15;
                  v5 = *((char **)v4 + 34);
                  v148 = -1;
                }
                else
                {
                  if ( v148 == 101 )
                    *((_DWORD *)v4 + 11) = v15;
                  else
                    *((_DWORD *)v4 + 12) = v15;
                  v5 = *((char **)v4 + 34);
                  v148 = -1;
                }
              }
              goto LABEL_2;
            }
            v148 += 100;
            if ( (int)CoinMpsCardReader::nextGmsField(*((CoinMpsCardReader **)v4 + 34), nullptr) < 0 )
            {
LABEL_11:
              v8 = (CoinMessageHandler *)CoinMessageHandler::message(
                                           *((CoinMessageHandler **)v4 + 28),
                                           11,
                                           (CoinMpsIO *)((char *)v4 + 240));
              v13 = CoinMessageHandler::operator<<(v8, *((_QWORD *)v4 + 21), v9, v10, v11, v12, (__int64)ptr);
              CoinMessageHandler::operator<<(v13, 0, a4);
              return (unsigned int)-3;
            }
          }
          if ( !memcmp(v7, "Equation", 8u) )
          {
            v148 = 0;
            continue;
          }
          break;
        }
        if ( !memcmp(v7, "Variable", 8u) )
        {
          v148 = 1;
          continue;
        }
        break;
      }
      v16 = 0;
      v17 = memcmp(v7, "Nonzero", 7u) == 0;
      if ( v17 )
      {
        v148 = 2;
        continue;
      }
      break;
    }
    v18 = 5;
    v19 = (char *)v7;
    v20 = "Solve";
    do
    {
      if ( !v18 )
        break;
      v16 = (unsigned __int8)*v19 < (unsigned int)*v20;
      v17 = *v19++ == *v20++;
      --v18;
    }
    while ( v17 );
  }
  while ( (!v16 && !v17) != v16 );
  v164 = 0;
  BlankOr = (const char *)CoinMpsCardReader::nextBlankOr((CoinMpsCardReader *)(v7 + 5), v19);
  v22 = *BlankOr;
  if ( *BlankOr != 32 )
    goto LABEL_32;
  do
  {
    do
      v22 = *++BlankOr;
    while ( *BlankOr == 32 );
LABEL_32:
    ;
  }
  while ( v22 == 9 );
  if ( !v22 )
    BUG();
  if ( v22 == 32 )
  {
    v23 = v168;
  }
  else
  {
    v23 = v168;
    do
    {
      ++BlankOr;
      *v23++ = v22;
      v22 = *BlankOr;
    }
    while ( *BlankOr != 32 && v22 != 9 );
  }
  v24 = *(void **)v4;
  *v23 = 0;
  free(v24);
  *(_QWORD *)v4 = CoinStrdup(v168);
  v25 = strchr(BlankOr, 59);
  if ( *v25 != 9 && *v25 != 32 )
  {
    do
      --v25;
    while ( *v25 != 32 && *v25 != 9 );
  }
  *(_QWORD *)(*((_QWORD *)v4 + 34) + 888LL) = v25;
  CoinMpsCardReader::nextGmsField(*((CoinMpsCardReader **)v4 + 34), (char *)&dword_0 + 1);
  *(_QWORD *)(*((_QWORD *)v4 + 34) + 888LL) = strchr(v25, 59) + 1;
  v149 = *((char **)v4 + 34);
  strcpy(dest, v149 + 1068);
  v26 = strchr(dest, 59);
  if ( v26 )
    *v26 = 0;
  v27 = strstr(v5 + 8, "minim");
  v28 = *((int *)v4 + 10);
  *((_QWORD *)v4 + 17) = 0;
  v163 = v27;
  v29 = v28;
  v28 *= 8LL;
  *((_QWORD *)v4 + 12) = malloc(v28);
  v30 = malloc(v28);
  v31 = *((int *)v4 + 11);
  *((_QWORD *)v4 + 13) = v30;
  v32 = 4LL * (v29 + 1);
  *((_QWORD *)v4 + 14) = malloc(8 * v31);
  *((_QWORD *)v4 + 15) = malloc(8 * v31);
  *((_QWORD *)v4 + 16) = malloc(8 * v31);
  v33 = (int *)malloc(v32);
  v34 = *((int *)v4 + 12);
  v152 = v33;
  v159 = (int *)malloc(4 * v34);
  v162 = (double *)malloc(8 * v34);
  v158 = malloc(v32 - 4);
  v153 = (char **)malloc(v28);
  v35 = (char *)malloc(4 * v31);
  ptra = v35;
  v36 = (char **)malloc(8 * v31);
  *((_DWORD *)v4 + 12) = 0;
  v37 = v36;
  *v152 = 0;
  CoinMpsCardReader::nextGmsField((CoinMpsCardReader *)v149, (char *)&dword_0 + 1);
  v38 = *((_DWORD *)v4 + 11);
  if ( v38 > 0 )
  {
    v39 = 0;
    do
    {
      CoinMpsCardReader::nextGmsField(*((CoinMpsCardReader **)v4 + 34), (char *)&dword_0 + 1);
      v41 = *((_QWORD *)v4 + 34);
      v42 = *(char **)(v41 + 888);
      if ( !*v42 )
      {
        CoinMpsCardReader::nextGmsField(*((CoinMpsCardReader **)v4 + 34), nullptr);
        v41 = *((_QWORD *)v4 + 34);
        v42 = strchr((const char *)(v41 + 8), 44);
      }
      *(_QWORD *)(v41 + 888) = v42 + 1;
      v37[v39] = (char *)CoinStrdup((const char *)(*((_QWORD *)v4 + 34) + 1068LL));
      v40 = *((_QWORD *)v4 + 14);
      *(_DWORD *)&v35[4 * v39] = 11;
      *(_QWORD *)(v40 + 8 * v39) = 0xFFEFFFFFFFFFFFFFLL;
      *(_QWORD *)(*((_QWORD *)v4 + 14) + 8 * v39) = 0;
      *(_QWORD *)(*((_QWORD *)v4 + 15) + 8 * v39) = 0x7FEFFFFFFFFFFFFFLL;
      *(_QWORD *)(*((_QWORD *)v4 + 16) + 8 * v39) = 0;
      v38 = *((_DWORD *)v4 + 11);
      ++v39;
    }
    while ( v38 > (int)v39 );
  }
  CoinMpsIO::startHash(v4, v37, v38, 1);
  v43 = 0;
  *((_QWORD *)v4 + 18) = calloc(*((int *)v4 + 11), 1u);
  while ( 2 )
  {
    CoinMpsCardReader::nextGmsField(*((CoinMpsCardReader **)v4 + 34), (char *)&dword_0 + 1);
    v44 = *((char **)v4 + 34);
    v45 = strcmp(v44 + 1068, "Positive") != 0;
    if ( !v45 )
    {
LABEL_56:
      CoinMpsCardReader::nextGmsField((CoinMpsCardReader *)v44, (char *)&dword_0 + 1);
      do
      {
        CoinMpsCardReader::nextGmsField(*((CoinMpsCardReader **)v4 + 34), (char *)&dword_0 + 1);
        v46 = *((_QWORD *)v4 + 34);
        v47 = *(char **)(v46 + 888);
        if ( !*v47 )
        {
          CoinMpsCardReader::nextGmsField(*((CoinMpsCardReader **)v4 + 34), nullptr);
          v46 = *((_QWORD *)v4 + 34);
          v47 = strchr((const char *)(v46 + 8), 44);
        }
        *(_QWORD *)(v46 + 888) = v47 + 1;
        v48 = *v47;
        Hash = CoinMpsIO::findHash(v4, (const char *)(*((_QWORD *)v4 + 34) + 1068LL), 1);
        v50 = *((_QWORD *)v4 + 14);
        if ( v45 )
        {
          ++v43;
          *(_QWORD *)(v50 + 8LL * Hash) = 0;
          v51 = &ptra[4 * Hash];
          if ( v45 == 1 )
          {
            v52 = *((_QWORD *)v4 + 15);
            *(_DWORD *)v51 = 18;
            *(_QWORD *)(v52 + 8LL * Hash) = 0x3FF0000000000000LL;
          }
          else
          {
            *(_DWORD *)v51 = 19;
          }
          *(_BYTE *)(*((_QWORD *)v4 + 18) + Hash) = 1;
        }
        else
        {
          *(_QWORD *)(v50 + 8LL * Hash) = 0;
        }
      }
      while ( v48 == 44 );
      continue;
    }
    break;
  }
  if ( !strcmp(v44 + 1068, "Binary") )
  {
    v45 = 1;
    goto LABEL_56;
  }
  if ( !strcmp(v44 + 1068, "Integer") )
  {
    v45 = 2;
    goto LABEL_56;
  }
  v53 = *((_DWORD *)v4 + 10);
  if ( v53 > 0 )
  {
    v54 = 0;
    for ( i = *((CoinMpsCardReader **)v4 + 34); ; i = *((CoinMpsCardReader **)v4 + 34) )
    {
      CoinMpsCardReader::nextGmsField(i, (char *)&dword_0 + 1);
      v57 = *((_QWORD *)v4 + 34);
      v58 = *(char **)(v57 + 888);
      if ( !*v58 )
      {
        CoinMpsCardReader::nextGmsField(*((CoinMpsCardReader **)v4 + 34), nullptr);
        v57 = *((_QWORD *)v4 + 34);
        v58 = strchr((const char *)(v57 + 8), 44);
      }
      *(_QWORD *)(v57 + 888) = v58 + 1;
      v153[v54] = (char *)CoinStrdup((const char *)(*((_QWORD *)v4 + 34) + 1068LL));
      v56 = *((_QWORD *)v4 + 12);
      v158[v54] = 0;
      *(_QWORD *)(v56 + 8 * v54) = 0xFFEFFFFFFFFFFFFFLL;
      *(_QWORD *)(*((_QWORD *)v4 + 13) + 8 * v54) = 0x7FEFFFFFFFFFFFFFLL;
      v53 = *((_DWORD *)v4 + 10);
      if ( v53 <= (int)++v54 )
        break;
    }
  }
  CoinMpsIO::startHash(v4, v153, v53, 0);
  v150 = 0;
  v151 = 0;
  if ( *((int *)v4 + 10) <= 0 )
    goto LABEL_99;
  v59 = nullptr;
  v60 = v4;
  while ( 2 )
  {
    v156 = (int)v59;
    CoinMpsCardReader::nextGmsField(*((CoinMpsCardReader **)v60 + 34), (char *)&dword_0 + 1);
    v61 = *((_QWORD *)v60 + 34);
    strcpy(v168, (const char *)(v61 + 1068));
    v154 = v59;
    *strchr(v168, 46) = 0;
    v62 = v60;
    v63 = (char *)v61;
    while ( 1 )
    {
      GmsField = CoinMpsCardReader::nextGmsField((CoinMpsCardReader *)v63, (char *)&dword_0 + 3);
      if ( GmsField == 2 )
        break;
      v65 = CoinMpsIO::findHash(v62, (const char *)(*((_QWORD *)v62 + 34) + 1068LL), 1);
      if ( v65 >= 0 )
      {
        v66 = *((int *)v62 + 12);
        v63 = *((char **)v62 + 34);
        v67 = *((double *)v62 + 27);
        v159[v66] = v65;
        v68 = fabs(*(double *)v63);
        if ( v67 > v68 )
          ++v151;
        else
          v150 += v68 > 1.0e14;
        v162[v66] = *(double *)v63;
        *((_DWORD *)v62 + 12) = v66 + 1;
LABEL_78:
        if ( GmsField )
          goto LABEL_92;
        continue;
      }
      v63 = *((char **)v62 + 34);
      strcpy(src, v63 + 1068);
      v69 = strchr(src, 42);
      if ( !v69 )
        goto LABEL_78;
      v17 = *((_DWORD *)v62 + 71) == 1;
      *v69 = 0;
      v160 = v69;
      if ( v17 )
        v70 = CoinMpsIO::findHash(v62, src, 1);
      else
        v70 = CoinMpsIO::findHash(v62, v69 + 1, 1);
      v71 = v160;
      v157 = v70;
      v72 = *((double **)v62 + 34);
      v166[0] = 0;
      v73 = *v72;
      if ( *v72 != 0.0 && v73 != 1.0 )
      {
        sprintf(v166, "%g*", v73);
        v71 = v160;
      }
      if ( *((_DWORD *)v62 + 71) == 1 )
        strcat(v166, v71 + 1);
      else
        strcat(v166, src);
      CoinMpsIO::addString(v62, v156, v157, v166);
      v63 = *((char **)v62 + 34);
      if ( GmsField )
      {
LABEL_92:
        v74 = v63;
        v60 = v62;
        v75 = v154;
        goto LABEL_93;
      }
    }
    v60 = v62;
    v75 = v154;
    v74 = *((char **)v60 + 34);
LABEL_93:
    v152[(_QWORD)v75 + 1] = *((_DWORD *)v60 + 12);
    v76 = *((char **)v74 + 111);
    if ( !memcmp(v76, "=E=", 3u) )
    {
      *((_QWORD *)v74 + 111) = v76 + 3;
      CoinMpsCardReader::nextGmsField(*((CoinMpsCardReader **)v60 + 34), (char *)&dword_0 + 2);
      *(_QWORD *)(*((_QWORD *)v60 + 12) + 8LL * (_QWORD)v75) = **((_QWORD **)v60 + 34);
      *(_QWORD *)(*((_QWORD *)v60 + 13) + 8LL * (_QWORD)v75) = **((_QWORD **)v60 + 34);
      v79 = 1;
    }
    else
    {
      v77 = v76 + 3;
      if ( !memcmp(*((const void **)v74 + 111), "=G=", 3u) )
      {
        *((_QWORD *)v74 + 111) = v77;
        CoinMpsCardReader::nextGmsField(*((CoinMpsCardReader **)v60 + 34), (char *)&dword_0 + 2);
        *(_QWORD *)(*((_QWORD *)v60 + 12) + 8LL * (_QWORD)v75) = **((_QWORD **)v60 + 34);
        v79 = 3;
      }
      else
      {
        v17 = memcmp(*((const void **)v74 + 111), "=L=", 3u) == 0;
        *((_QWORD *)v74 + 111) = v77;
        v78 = *((CoinMpsCardReader **)v60 + 34);
        if ( v17 )
        {
          CoinMpsCardReader::nextGmsField(v78, (char *)&dword_0 + 2);
          *(_QWORD *)(*((_QWORD *)v60 + 13) + 8LL * (_QWORD)v75) = **((_QWORD **)v60 + 34);
          v79 = 2;
        }
        else
        {
          CoinMpsCardReader::nextGmsField(v78, (char *)&dword_0 + 2);
          v79 = 0;
        }
      }
    }
    v80 = *((CoinMpsCardReader **)v60 + 34);
    v158[(_QWORD)v75] = v79;
    CoinMpsCardReader::nextGmsField(v80, (char *)&byte_5);
    v59 = (char **)((char *)v75 + 1);
    if ( *((_DWORD *)v60 + 10) > (int)v59 )
      continue;
    break;
  }
  v4 = v60;
LABEL_99:
  v81 = *((char **)v4 + 34);
  while ( (int)CoinMpsCardReader::nextGmsField((CoinMpsCardReader *)v81, nullptr) >= 0 )
  {
    v81 = *((char **)v4 + 34);
    v82 = strchr(v81 + 8, 46);
    if ( v82 )
    {
      *v82 = 0;
      v108 = v82;
      v109 = CoinMpsIO::findHash(v4, v81 + 8, 1);
      v110 = v109;
      v111 = v108 + 1;
      if ( v109 >= 0 )
      {
        v120 = strchr(v111, 61);
        v121 = strtod(v120 + 1, nullptr);
        if ( !memcmp(v111, "fx", 2u) )
        {
          *(double *)(*((_QWORD *)v4 + 14) + 8LL * (int)v110) = v121;
          *(double *)(*((_QWORD *)v4 + 15) + 8LL * (int)v110) = v121;
        }
        else if ( !memcmp(v111, "up", 2u) )
        {
          *(double *)(*((_QWORD *)v4 + 15) + 8LL * (int)v110) = v121;
        }
        else if ( !memcmp(v111, "lo", 2u) )
        {
          *(double *)(*((_QWORD *)v4 + 14) + 8LL * (int)v110) = v121;
        }
      }
      v112 = strchr(v111, 59);
      v113 = v112;
      if ( v112 )
      {
        v114 = v112 + 1;
        if ( strchr(v112 + 1, 46) )
        {
          v115 = v113[1];
          if ( v115 == 32 || v115 == 9 )
          {
            do
            {
              do
                v115 = *++v114;
              while ( *v114 == 9 );
            }
            while ( v115 == 32 );
          }
          if ( !v115 )
            v114 = nullptr;
          v116 = strchr(v114, 46);
          v117 = v116 + 1;
          *v116 = 0;
          v118 = strchr(v116 + 1, 61);
          v119 = strtod(v118 + 1, nullptr);
          if ( !memcmp(v117, "fx", 2u) )
          {
            *(double *)(*((_QWORD *)v4 + 14) + 8 * v110) = v119;
            abort();
          }
          if ( !memcmp(v117, "up", 2u) )
          {
            *(double *)(*((_QWORD *)v4 + 15) + 8 * v110) = v119;
          }
          else if ( !memcmp(v117, "lo", 2u) )
          {
            *(double *)(*((_QWORD *)v4 + 14) + 8 * v110) = v119;
          }
        }
      }
      goto LABEL_99;
    }
  }
  v83 = CoinMpsIO::findHash(v4, dest, 1);
  v84 = v83;
  if ( *((_BYTE *)v4 + 280) )
  {
    v122 = 8LL * v83;
    free(*(void **)(*((_QWORD *)v4 + 20) + v122));
    v123 = *((_DWORD *)v4 + 11);
    v124 = v84 + 1;
    if ( v123 > v84 + 1 )
    {
      v125 = v124;
      v126 = v122 + 8;
      do
      {
        ++v124;
        *(_BYTE *)(*((_QWORD *)v4 + 18) + v125 - 1) = *(_BYTE *)(*((_QWORD *)v4 + 18) + v125);
        ++v125;
        *(_QWORD *)(*((_QWORD *)v4 + 14) + v126 - 8) = *(_QWORD *)(*((_QWORD *)v4 + 14) + v126);
        *(_QWORD *)(*((_QWORD *)v4 + 15) + v126 - 8) = *(_QWORD *)(*((_QWORD *)v4 + 15) + v126);
        *(_QWORD *)(*((_QWORD *)v4 + 20) + v126 - 8) = *(_QWORD *)(*((_QWORD *)v4 + 20) + v126);
        v123 = *((_DWORD *)v4 + 11);
        v126 += 8;
      }
      while ( v123 > v124 );
    }
    --*((_DWORD *)v4 + 45);
    *((_DWORD *)v4 + 11) = v123 - 1;
    v127 = 1.0;
    if ( v163 )
      v127 = -1.0;
    v155 = 0;
    if ( *((int *)v4 + 10) <= 0 )
    {
LABEL_167:
      --*((_DWORD *)v4 + 44);
      *((_DWORD *)v4 + 10) = v155;
      goto LABEL_106;
    }
    v128 = 0;
    v129 = 0;
    v130 = 0;
    v161 = v43;
    while ( 1 )
    {
      v131 = v152[v130 + 1];
      if ( v131 > v128 )
      {
        v132 = v128;
        v133 = &v159[v132];
        v134 = v159[v132];
        if ( v84 == v134 )
        {
LABEL_168:
          free(*(void **)(*((_QWORD *)v4 + 19) + 8 * v130));
          v143 = v152[v130 + 1];
          if ( v128 < v143 )
          {
            v144 = 0;
            do
            {
              v145 = v133[v144];
              if ( v84 != v145 )
                *(double *)(*((_QWORD *)v4 + 16) + 8LL * (v145 - (v84 < v145))) = v162[v128 + v144] * v127;
              ++v144;
            }
            while ( (unsigned int)(v143 - v128 - 1) + 1LL != v144 );
          }
          v128 = v143;
          v129 = v152[v155];
          v148 = v130;
          goto LABEL_165;
        }
        v135 = v129 + 1;
        v136 = v135 + (unsigned int)(v131 - v128 - 1);
        v137 = &v159[v132 - v135];
        v138 = &v162[v129 - v135];
        v139 = &v159[v129 - v135];
        v140 = &v162[v128 - v135];
        while ( 1 )
        {
          v141 = v140[v135];
          v129 = v135;
          v139[v135] = v134 - (v84 <= v134);
          v138[v135] = v141;
          if ( v136 == v135 )
            break;
          v134 = v137[++v135];
          if ( v84 == v134 )
            goto LABEL_168;
        }
      }
      v142 = v155;
      v128 = v131;
      *(_QWORD *)(*((_QWORD *)v4 + 12) + 8LL * v155++) = *(_QWORD *)(*((_QWORD *)v4 + 12) + 8 * v130);
      *(_QWORD *)(*((_QWORD *)v4 + 13) + 8 * v142) = *(_QWORD *)(*((_QWORD *)v4 + 13) + 8 * v130);
      *(_QWORD *)(*((_QWORD *)v4 + 19) + 8 * v142) = *(_QWORD *)(*((_QWORD *)v4 + 19) + 8 * v130);
      v152[v142 + 1] = v129;
LABEL_165:
      if ( *((_DWORD *)v4 + 10) <= (int)++v130 )
      {
        v43 = v161;
        goto LABEL_167;
      }
    }
  }
  v85 = 0xBFF0000000000000LL;
  if ( v163 )
    v85 = 0x3FF0000000000000LL;
  *(_QWORD *)(*((_QWORD *)v4 + 16) + 8LL * v83) = v85;
LABEL_106:
  CoinMpsIO::stopHash(v4, 0);
  CoinMpsIO::stopHash(v4, 1);
  if ( v43 )
  {
    v86 = *((_DWORD *)v4 + 11);
    if ( v86 > 0 )
    {
      v87 = 0;
      do
      {
        if ( *(_BYTE *)(*((_QWORD *)v4 + 18) + v87) )
        {
          v88 = (double *)(8 * v87 + *((_QWORD *)v4 + 14));
          if ( *v88 < -1.797693134862316e308 )
            *v88 = -1.797693134862316e308;
          v89 = (double *)(*((_QWORD *)v4 + 15) + 8 * v87);
          if ( *v89 > 1.797693134862316e308 )
            *v89 = 1.797693134862316e308;
          v86 = *((_DWORD *)v4 + 11);
        }
        ++v87;
      }
      while ( v86 > (int)v87 );
    }
  }
  else
  {
    free(*((void **)v4 + 18));
    *((_QWORD *)v4 + 18) = 0;
  }
  free(ptra);
  free(v158);
  v90 = *((_DWORD *)v4 + 73);
  if ( v90 && *((_BYTE *)v4 + 280) && v90 > 0 )
  {
    v91 = nullptr;
    ptra = (char *)(8LL * (unsigned int)(v90 - 1) + 8);
    while ( 1 )
    {
      v97 = *(char **)&v91[*((_QWORD *)v4 + 37)];
      sscanf(v97, "%d,%d,", src, v166);
      v93 = *(_DWORD *)src;
      if ( *(int *)src <= v148 )
        break;
      v92 = *(_DWORD *)v166;
      v93 = --*(_DWORD *)src;
      if ( *(int *)v166 > v84 )
        goto LABEL_121;
LABEL_122:
      v94 = strchr(v97, 44);
      v95 = strchr(v94 + 1, 44);
      sprintf(v168, "%d,%d,%s", v93, v92, v95 + 1);
      free(v97);
      v96 = *((_QWORD *)v4 + 37);
      *(_QWORD *)&v91[v96] = CoinStrdup(v168);
LABEL_123:
      v91 += 8;
      if ( ptra == v91 )
        goto LABEL_132;
    }
    v92 = *(_DWORD *)v166;
    if ( *(int *)v166 <= v84 )
      goto LABEL_123;
LABEL_121:
    *(_DWORD *)v166 = --v92;
    goto LABEL_122;
  }
LABEL_132:
  CoinPackedMatrix::CoinPackedMatrix(
    (CoinPackedMatrix *)v168,
    0,
    *((_DWORD *)v4 + 11),
    *((_DWORD *)v4 + 10),
    *((_DWORD *)v4 + 12),
    v162,
    v159,
    v152,
    nullptr);
  free(v159);
  free(v152);
  free(v162);
  v98 = (CoinPackedMatrix *)operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix(v98);
  *((_QWORD *)v4 + 11) = v98;
  CoinPackedMatrix::setExtraGap(v98, 0.0);
  CoinPackedMatrix::setExtraMajor(*((CoinPackedMatrix **)v4 + 11), 0.0);
  CoinPackedMatrix::reverseOrderedCopyOf(*((CoinPackedMatrix **)v4 + 11), (const CoinPackedMatrix *)v168);
  v99 = (CoinMessageHandler *)CoinMessageHandler::message(
                                *((CoinMessageHandler **)v4 + 28),
                                1,
                                (CoinMpsIO *)((char *)v4 + 240));
  v104 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v99, *(_QWORD *)v4, v100, v101, v102, v103, (__int64)ptra);
  v105 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v104);
  v106 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v105);
  v107 = CoinMessageHandler::operator<<(v106);
  CoinMessageHandler::operator<<(v107, 0, 0.0);
  if ( v150 | v151 && *(int *)(*((_QWORD *)v4 + 28) + 104LL) > 3 )
    printf("There were %d coefficients < %g and %d > %g\n", v151, *((double *)v4 + 27), v150, 1.0e14);
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v168);
  return v164;
}

