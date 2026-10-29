__int64 __fastcall CoinLpIO::writeLp(CoinLpIO *this, _IO_FILE *stream, char a3, __m128 si128)
{
  _IO_FILE *v4; // r14
  CoinLpIO *v5; // rbx
  __int64 v6; // rax
  const char *ProblemName; // rax
  __int64 v8; // rbp
  double *v9; // rax
  __int64 v10; // r15
  int v11; // r13d
  double v12; // xmm0_8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // r15
  CoinLpIO *v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbp
  double *v20; // r12
  CoinLpIO *v21; // rax
  int v22; // r13d
  CoinLpIO *v23; // rbx
  double *v24; // r13
  unsigned __int64 *v25; // rbp
  const char **v26; // r15
  double v27; // xmm1_8
  int Decimals; // eax
  __int64 v29; // r15
  __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // rbp
  __int64 v33; // r12
  __int64 v34; // rbx
  __m128d v35; // xmm0
  __m128d v36; // xmm1
  int v37; // edx
  __m128d v38; // xmm1
  __m128d v39; // xmm2
  void **v40; // rbx
  void *v41; // rdi
  void **v42; // rbx
  void *v43; // rdi
  int v45; // edx
  char *v46; // r15
  char v47; // r12
  const char **v48; // r13
  int v49; // ebp
  char v50; // al
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rbp
  double *v54; // rbx
  CoinLpIO *v55; // rax
  int v56; // r13d
  CoinLpIO *v57; // r12
  char v58; // r13
  char *v59; // r12
  int v60; // ebp
  int v61; // edx
  const char **v62; // r13
  void **v63; // rax
  void **v64; // rbp
  __int64 v65; // rbx
  int v66; // r13d
  int v67; // r14d
  char *v68; // rax
  int v69; // r13d
  __int64 v70; // rdx
  unsigned int v71; // ecx
  __int64 v72; // rdx
  char *v73; // rcx
  char *v74; // rdx
  __int64 v75; // rcx
  char *v76; // r9
  char *v77; // rcx
  void **v78; // rax
  void **v79; // rbp
  __int64 v80; // rbx
  int v81; // r13d
  int v82; // r14d
  char *v83; // rax
  int v84; // r13d
  __int64 v85; // rdx
  unsigned int v86; // ecx
  __int64 v87; // rdx
  char *v88; // rcx
  char *v89; // rdx
  __int64 v90; // rcx
  char *v91; // r9
  char *v92; // rcx
  char **v93; // rbp
  char *v94; // rax
  double v95; // [rsp+8h] [rbp-1F0h]
  double v96; // [rsp+8h] [rbp-1F0h]
  int NumberAcross; // [rsp+14h] [rbp-1E4h]
  __int64 ColNames; // [rsp+18h] [rbp-1E0h]
  __int64 v99; // [rsp+18h] [rbp-1E0h]
  CoinLpIO *v100; // [rsp+18h] [rbp-1E0h]
  __int64 v101; // [rsp+20h] [rbp-1D8h]
  __int64 v102; // [rsp+20h] [rbp-1D8h]
  int v103; // [rsp+20h] [rbp-1D8h]
  __int64 v104; // [rsp+20h] [rbp-1D8h]
  _IO_FILE *v105; // [rsp+20h] [rbp-1D8h]
  size_t v106; // [rsp+20h] [rbp-1D8h]
  double v107; // [rsp+28h] [rbp-1D0h]
  int v108; // [rsp+28h] [rbp-1D0h]
  __int64 RowLower; // [rsp+30h] [rbp-1C8h]
  __int64 v110; // [rsp+30h] [rbp-1C8h]
  CoinLpIO *v112; // [rsp+38h] [rbp-1C0h]
  char *format; // [rsp+40h] [rbp-1B8h]
  __int64 v114; // [rsp+58h] [rbp-1A0h]
  __int64 v115; // [rsp+60h] [rbp-198h]
  __int64 RowNames; // [rsp+68h] [rbp-190h]
  int NumCols; // [rsp+78h] [rbp-180h]
  int NumRows; // [rsp+7Ch] [rbp-17Ch]
  __int64 v119; // [rsp+80h] [rbp-178h]
  void **ptr; // [rsp+88h] [rbp-170h]
  void **v121; // [rsp+90h] [rbp-168h]
  int v122; // [rsp+98h] [rbp-160h]
  int v123; // [rsp+9Ch] [rbp-15Ch]
  __int64 ColLower; // [rsp+A0h] [rbp-158h]
  __int64 ColUpper; // [rsp+A8h] [rbp-150h]
  char s[15]; // [rsp+B1h] [rbp-147h] BYREF
  char v127[312]; // [rsp+C0h] [rbp-138h] BYREF

  v4 = stream;
  v5 = this;
  CoinLpIO::getEpsilon(this);
  v95 = *(double *)si128.m128_u64;
  CoinLpIO::getInfinity(this);
  v107 = *(double *)si128.m128_u64;
  NumberAcross = CoinLpIO::getNumberAcross(this);
  v6 = *((_QWORD *)this + 10);
  v115 = *(_QWORD *)(v6 + 40);
  v114 = *(_QWORD *)(v6 + 32);
  NumCols = CoinLpIO::getNumCols(this);
  NumRows = CoinLpIO::getNumRows(this);
  ColLower = CoinLpIO::getColLower(this);
  ColUpper = CoinLpIO::getColUpper(this);
  RowLower = CoinLpIO::getRowLower(this);
  format = (char *)CoinLpIO::getRowUpper(this);
  v119 = CoinLpIO::integerColumns(this);
  RowNames = CoinLpIO::getRowNames(this);
  ColNames = CoinLpIO::getColNames(this);
  ptr = nullptr;
  v122 = 0;
  if ( RowNames )
    goto LABEL_2;
  v106 = NumRows + 1;
  v78 = (void **)malloc(v106 * 8);
  ptr = v78;
  if ( NumRows <= 0 )
    goto LABEL_182;
  v79 = v78;
  v80 = 0;
  do
  {
    sprintf(v127, "cons%d", v80);
    v81 = strlen(v127);
    v82 = v81;
    v83 = (char *)malloc(v81 + 1);
    if ( !v81 )
      goto LABEL_180;
    v84 = v81 >> 3;
    if ( v84 > 0 )
    {
      if ( v84 == 1 )
      {
        v89 = v83;
        v88 = v127;
      }
      else
      {
        v85 = 0;
        v86 = 0;
        do
        {
          si128 = (__m128)_mm_load_si128((const __m128i *)&v127[v85]);
          ++v86;
          *(__m128 *)&v83[v85] = si128;
          v85 += 16;
        }
        while ( v86 < (unsigned int)v84 >> 1 );
        v87 = 8LL * (v84 & 0xFFFFFFFE);
        v88 = &v127[v87];
        v89 = &v83[v87];
        if ( (v84 & 0xFFFFFFFE) == v84 )
          goto LABEL_171;
      }
      *v89 = *v88;
      v89[1] = v88[1];
      v89[2] = v88[2];
      v89[3] = v88[3];
      v89[4] = v88[4];
      v89[5] = v88[5];
      v89[6] = v88[6];
      v89[7] = v88[7];
LABEL_171:
      v90 = 8LL * (v84 - 1) + 8;
      v91 = &v127[v90];
      v92 = &v83[v90];
      goto LABEL_172;
    }
    v92 = v83;
    v91 = v127;
LABEL_172:
    switch ( v82 % 8 )
    {
      case 1:
        goto LABEL_179;
      case 2:
        goto LABEL_178;
      case 3:
        goto LABEL_177;
      case 4:
        goto LABEL_176;
      case 5:
        goto LABEL_175;
      case 6:
        goto LABEL_174;
      case 7:
        v92[6] = v91[6];
LABEL_174:
        v92[5] = v91[5];
LABEL_175:
        v92[4] = v91[4];
LABEL_176:
        v92[3] = v91[3];
LABEL_177:
        v92[2] = v91[2];
LABEL_178:
        v92[1] = v91[1];
LABEL_179:
        *v92 = *v91;
        break;
      default:
        break;
    }
LABEL_180:
    v79[v80++] = v83;
    v83[v82] = 0;
  }
  while ( (unsigned int)(NumRows - 1) + 1LL != v80 );
  v5 = this;
  v4 = stream;
  v78 = ptr;
LABEL_182:
  v93 = (char **)&v78[v106 - 1];
  v94 = (char *)malloc(4u);
  if ( v94 != "obj" )
  {
    v94[2] = 106;
    *(_WORD *)v94 = 25199;
  }
  v94[3] = 0;
  *v93 = v94;
  v122 = 1;
  RowNames = (__int64)ptr;
LABEL_2:
  v121 = nullptr;
  v123 = 0;
  if ( ColNames )
    goto LABEL_3;
  v63 = (void **)malloc(8LL * NumCols);
  v121 = v63;
  if ( NumCols > 0 )
  {
    v100 = v5;
    v64 = v63;
    v65 = 0;
    v105 = v4;
    while ( 1 )
    {
      sprintf(v127, "x%d", v65);
      v66 = strlen(v127);
      v67 = v66;
      v68 = (char *)malloc(v66 + 1);
      if ( v66 )
        break;
LABEL_160:
      v64[v65++] = v68;
      v68[v67] = 0;
      if ( (unsigned int)(NumCols - 1) + 1LL == v65 )
      {
        v5 = v100;
        v4 = v105;
        v123 = 1;
        ColNames = (__int64)v121;
        goto LABEL_3;
      }
    }
    v69 = v66 >> 3;
    if ( v69 <= 0 )
    {
      v77 = v68;
      v76 = v127;
    }
    else
    {
      if ( v69 == 1 )
      {
        v74 = v68;
        v73 = v127;
        goto LABEL_150;
      }
      v70 = 0;
      v71 = 0;
      do
      {
        si128 = (__m128)_mm_load_si128((const __m128i *)&v127[v70]);
        ++v71;
        *(__m128 *)&v68[v70] = si128;
        v70 += 16;
      }
      while ( v71 < (unsigned int)v69 >> 1 );
      v72 = 8LL * (v69 & 0xFFFFFFFE);
      v73 = &v127[v72];
      v74 = &v68[v72];
      if ( v69 != (v69 & 0xFFFFFFFE) )
      {
LABEL_150:
        *v74 = *v73;
        v74[1] = v73[1];
        v74[2] = v73[2];
        v74[3] = v73[3];
        v74[4] = v73[4];
        v74[5] = v73[5];
        v74[6] = v73[6];
        v74[7] = v73[7];
      }
      v75 = 8LL * (v69 - 1) + 8;
      v76 = &v127[v75];
      v77 = &v68[v75];
    }
    switch ( v67 % 8 )
    {
      case 1:
        goto LABEL_159;
      case 2:
        goto LABEL_158;
      case 3:
        goto LABEL_157;
      case 4:
        goto LABEL_156;
      case 5:
        goto LABEL_155;
      case 6:
        goto LABEL_154;
      case 7:
        v77[6] = v76[6];
LABEL_154:
        v77[5] = v76[5];
LABEL_155:
        v77[4] = v76[4];
LABEL_156:
        v77[3] = v76[3];
LABEL_157:
        v77[2] = v76[2];
LABEL_158:
        v77[1] = v76[1];
LABEL_159:
        *v77 = *v76;
        break;
      default:
        goto LABEL_160;
    }
    goto LABEL_160;
  }
  ColNames = (__int64)v63;
  v123 = 1;
LABEL_3:
  ProblemName = (const char *)CoinLpIO::getProblemName(v5);
  fprintf(v4, "\\Problem name: %s\n\n", ProblemName);
  fwrite("Minimize\n", 1u, 9u, v4);
  if ( *((int *)v5 + 40) <= 0 )
    goto LABEL_26;
  v8 = 1;
  while ( 2 )
  {
    if ( a3 )
      fprintf(v4, "%s:", *((const char **)v5 + v8 + 29));
    if ( NumCols <= 0 )
    {
      si128.m128_u64[0] = *((_QWORD *)v5 + v8 + 20);
LABEL_109:
      if ( fabs(*(double *)si128.m128_u64) <= v95 )
        goto LABEL_24;
      v11 = 0;
LABEL_22:
      ++v11;
      CoinLpIO::out_coeff(v5, v4, *(double *)si128.m128_u64, 1);
      goto LABEL_23;
    }
    v9 = *((double **)v5 + v8 + 17);
    v10 = 1;
    v11 = 0;
    v12 = *v9;
    while ( 2 )
    {
      if ( fabs(v12) <= v95 )
      {
        if ( NumCols <= (int)v10 )
          goto LABEL_19;
        v13 = 8 * v10;
        v12 = v9[v10];
        if ( v11 && v12 > v95 )
        {
LABEL_18:
          v101 = v13;
          fwrite(" +", 1u, 2u, v4);
          v9 = *((double **)v5 + v8 + 17);
          v12 = *(double *)((char *)v9 + v101);
        }
LABEL_12:
        ++v10;
        continue;
      }
      break;
    }
    CoinLpIO::out_coeff(v5, v4, v12, 0);
    ++v11;
    fprintf(v4, " %s", *(const char **)(ColNames + 8 * v10 - 8));
    if ( !(v11 % NumberAcross) )
      fputc(10, v4);
    if ( NumCols > (int)v10 )
    {
      v9 = *((double **)v5 + v8 + 17);
      v13 = 8 * v10;
      v12 = v9[v10];
      if ( v12 > v95 )
        goto LABEL_18;
      goto LABEL_12;
    }
LABEL_19:
    si128.m128_u64[0] = *((_QWORD *)v5 + v8 + 20);
    if ( !v11 )
      goto LABEL_109;
    if ( *(double *)si128.m128_u64 > v95 )
    {
      fwrite(" +", 1u, 2u, v4);
      si128.m128_u64[0] = *((_QWORD *)v5 + v8 + 20);
      if ( fabs(*(double *)si128.m128_u64) <= v95 )
        goto LABEL_23;
      goto LABEL_22;
    }
    if ( fabs(*(double *)si128.m128_u64) > v95 )
      goto LABEL_22;
LABEL_23:
    if ( v11 % NumberAcross )
LABEL_24:
      fputc(10, v4);
    v14 = v8++;
    if ( *((_DWORD *)v5 + 40) > v14 )
      continue;
    break;
  }
LABEL_26:
  fwrite("Subject To\n", 1u, 0xBu, v4);
  if ( NumRows <= 0 )
    goto LABEL_46;
  v15 = 0;
  v16 = v5;
  while ( 2 )
  {
    if ( a3 )
      fprintf(v4, "%s: ", *(const char **)(RowNames + 2 * v15));
    v17 = *((_QWORD *)v16 + 10);
    v18 = *(int *)(*(_QWORD *)(v17 + 48) + v15);
    if ( (int)v18 + *(_DWORD *)(*(_QWORD *)(v17 + 56) + v15) > (int)v18 )
    {
      v19 = (int)v18 + 1;
      v20 = (double *)(v114 + 8 * v18);
      v102 = v115 + 4 * (v18 - v19);
      v21 = v16;
      v22 = 0;
      v23 = v21;
      while ( 1 )
      {
        if ( fabs(*v20) > v95 )
        {
          CoinLpIO::out_coeff(v23, v4, *v20, 0);
          ++v22;
          fprintf(v4, " %s", *(const char **)(ColNames + 8LL * *(int *)(v102 + 4 * v19)));
          if ( !(v22 % NumberAcross) )
            fputc(10, v4);
        }
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 10) + 48LL) + v15)
           + *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 10) + 56LL) + v15) <= (int)v19 )
          break;
        if ( v22 )
        {
          if ( v20[1] > v95 )
            fwrite(" +", 1u, 2u, v4);
        }
        ++v19;
        ++v20;
      }
      v16 = v23;
    }
    if ( v95 > *(double *)&format[2 * v15] - *(double *)(RowLower + 2 * v15) )
    {
      fwrite(" =", 1u, 2u, v4);
      si128.m128_u64[0] = *(_QWORD *)(RowLower + 2 * v15);
      goto LABEL_57;
    }
    if ( v107 <= *(double *)&format[2 * v15] )
      goto LABEL_56;
    fwrite(" <=", 1u, 3u, v4);
    CoinLpIO::out_coeff(v16, v4, *(double *)&format[2 * v15], 1);
    fputc(10, v4);
    si128.m128_u64[0] = *(_QWORD *)(*((_QWORD *)v16 + 11) + 2 * v15);
    if ( *(double *)si128.m128_u64 > -v107 )
    {
      if ( a3 )
        fprintf(v4, "%s_low:", *(const char **)(RowNames + 2 * v15));
      v51 = *((_QWORD *)v16 + 10);
      v52 = *(int *)(*(_QWORD *)(v51 + 48) + v15);
      if ( (int)v52 < (int)v52 + *(_DWORD *)(*(_QWORD *)(v51 + 56) + v15) )
      {
        v53 = (int)v52 + 1;
        v54 = (double *)(v114 + 8 * v52);
        v104 = v115 + 4 * (v52 - v53);
        v55 = v16;
        v56 = 0;
        v57 = v55;
        while ( 1 )
        {
          if ( fabs(*v54) <= v95 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v57 + 10) + 48LL) + v15)
               + *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v57 + 10) + 56LL) + v15) <= (int)v53 )
              goto LABEL_125;
            if ( v56 && v54[1] > v95 )
              goto LABEL_124;
          }
          else
          {
            CoinLpIO::out_coeff(v57, v4, *v54, 0);
            ++v56;
            fprintf(v4, " %s", *(const char **)(ColNames + 8LL * *(int *)(v104 + 4 * v53)));
            if ( !(v56 % NumberAcross) )
              fputc(10, v4);
            if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v57 + 10) + 48LL) + v15)
               + *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v57 + 10) + 56LL) + v15) <= (int)v53 )
            {
LABEL_125:
              v16 = v57;
              break;
            }
            if ( v54[1] > v95 )
LABEL_124:
              fwrite(" +", 1u, 2u, v4);
          }
          ++v53;
          ++v54;
        }
      }
LABEL_56:
      fwrite(" >=", 1u, 3u, v4);
      si128.m128_u64[0] = *(_QWORD *)(RowLower + 2 * v15);
LABEL_57:
      CoinLpIO::out_coeff(v16, v4, *(double *)si128.m128_u64, 1);
      fputc(10, v4);
    }
    v15 += 4;
    if ( 4LL * (unsigned int)(NumRows - 1) + 4 != v15 )
      continue;
    break;
  }
  v5 = v16;
LABEL_46:
  fwrite("Bounds\n", 1u, 7u, v4);
  if ( NumCols <= 0 )
    goto LABEL_61;
  v24 = (double *)ColUpper;
  v25 = (unsigned __int64 *)ColLower;
  v26 = (const char **)ColNames;
  v27 = -v107;
  do
  {
    si128.m128_u64[0] = *v25;
    if ( *(double *)v25 > v27 )
    {
      if ( v107 <= *v24 )
        goto LABEL_49;
      CoinLpIO::out_coeff(v5, v4, *(double *)si128.m128_u64, 1);
      fprintf(v4, " <= %s <=", *v26);
      CoinLpIO::out_coeff(v5, v4, *v24, 1);
      fputc(10, v4);
      si128.m128_u64[0] = *v25;
    }
    if ( v27 == *(double *)si128.m128_u64 )
    {
      if ( v107 <= *v24 )
        goto LABEL_55;
      fprintf(v4, "%s <=", *v26);
      CoinLpIO::out_coeff(v5, v4, *v24, 1);
      fputc(10, v4);
      si128.m128_u64[0] = *v25;
      if ( *(double *)v25 <= v27 )
        goto LABEL_92;
    }
    else if ( *(double *)si128.m128_u64 <= v27 )
    {
      goto LABEL_51;
    }
LABEL_49:
    if ( v107 != *v24 || fabs(*(double *)si128.m128_u64) <= v95 )
      goto LABEL_51;
    CoinLpIO::out_coeff(v5, v4, *(double *)si128.m128_u64, 1);
    fprintf(v4, " <= %s\n", *v26);
    si128.m128_u64[0] = *v25;
LABEL_92:
    if ( v27 == *(double *)si128.m128_u64 )
LABEL_55:
      fprintf(v4, " %s Free\n", *v26);
LABEL_51:
    ++v24;
    ++v25;
    ++v26;
  }
  while ( (double *)(ColUpper + 8LL * (unsigned int)(NumCols - 1) + 8) != v24 );
  if ( v119 )
  {
    v45 = 1;
    v46 = (char *)v119;
    v47 = 0;
    v48 = (const char **)ColNames;
    v49 = 0;
    do
    {
      v50 = *v46;
      if ( *v46 == 1 || v50 == 4 )
      {
        if ( v45 )
          fwrite("Integers\n", 1u, 9u, v4);
        ++v49;
        fprintf(v4, "%s ", *v48);
        if ( !(v49 % NumberAcross) )
          fputc(10, v4);
        v50 = *v46;
        v45 = 0;
      }
      if ( v50 >= 2 )
        v47 = 1;
      ++v46;
      ++v48;
    }
    while ( v46 != (char *)(v119 + (unsigned int)(NumCols - 1) + 1) );
    v58 = v47;
    v59 = (char *)v119;
    if ( v49 % NumberAcross )
    {
      fputc(10, v4);
      if ( v58 )
        goto LABEL_129;
    }
    else if ( v58 )
    {
LABEL_129:
      v60 = 0;
      v61 = 1;
      v62 = (const char **)ColNames;
      do
      {
        if ( *v59 > 2 )
        {
          if ( v61 )
            fwrite("Semis\n", 1u, 6u, v4);
          ++v60;
          fprintf(v4, "%s ", *v62);
          if ( !(v60 % NumberAcross) )
            fputc(10, v4);
          v61 = 0;
        }
        ++v59;
        ++v62;
      }
      while ( v59 != v46 );
      if ( v60 % NumberAcross )
        fputc(10, v4);
    }
  }
LABEL_61:
  if ( !*((_QWORD *)v5 + 24) )
    goto LABEL_79;
  fwrite("SOS\n", 1u, 4u, v4);
  CoinLpIO::getEpsilon(v5);
  v96 = *(double *)si128.m128_u64;
  Decimals = CoinLpIO::getDecimals(v5);
  sprintf(s, "%%.%df", Decimals);
  if ( *((int *)v5 + 50) <= 0 )
    goto LABEL_79;
  v29 = ColNames;
  v110 = 0;
  v103 = 0;
  v112 = v5;
  while ( 2 )
  {
    v30 = *(_QWORD *)(*((_QWORD *)v112 + 24) + v110);
    fprintf(v4, "set%d:S%c::", v103, (unsigned int)(*(_DWORD *)(v30 + 12) + 48));
    v31 = *(_DWORD *)(v30 + 8);
    v32 = *(_QWORD *)(v30 + 16);
    v33 = *(_QWORD *)(v30 + 24);
    if ( v31 <= 0 )
      goto LABEL_78;
    v34 = 1;
    v99 = (unsigned int)(v31 - 1) + 2LL;
    while ( 2 )
    {
      while ( 2 )
      {
        fprintf(v4, " %s:", *(const char **)(v29 + 8LL * *(int *)(v32 + 4 * v34 - 4)));
        v38.m128d_f64[0] = *(double *)(v33 + 8 * v34 - 8);
        v35.m128d_f64[0] = v38.m128d_f64[0];
        if ( fabs(v38.m128d_f64[0]) < 4.503599627370496e15 )
        {
          v39 = 0;
          v39.m128d_f64[0] = (double)(int)v38.m128d_f64[0];
          *(_QWORD *)&v35.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                           v39.m128d_f64[0]
                                         - COERCE_DOUBLE(
                                             COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v39, v38).m128d_f64[0]))
                                           & 0x3FF0000000000000LL))
                                       | *(_QWORD *)&v38.m128d_f64[0] & 0x8000000000000000LL;
        }
        if ( v96 > v38.m128d_f64[0] - v35.m128d_f64[0] )
          goto LABEL_68;
        if ( v38.m128d_f64[0] - v35.m128d_f64[0] > 1.0 - v96 )
        {
          v35.m128d_f64[0] = v38.m128d_f64[0] + 0.5;
          if ( fabs(v38.m128d_f64[0] + 0.5) < 4.503599627370496e15 )
          {
            v36 = 0;
            v36.m128d_f64[0] = (double)(int)v35.m128d_f64[0];
            *(_QWORD *)&v35.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                             v36.m128d_f64[0]
                                           - COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v36, v35).m128d_f64[0] & 0x3FF0000000000000LL))
                                         | *(_QWORD *)&v35.m128d_f64[0] & 0x8000000000000000LL;
          }
LABEL_68:
          fprintf(v4, "%.0f", v35.m128d_f64[0]);
          v37 = (int)v34 % NumberAcross;
          if ( !((int)v34 % NumberAcross) )
            break;
          goto LABEL_69;
        }
        fprintf(v4, s, *(double *)(v33 + 8 * v34 - 8));
        v37 = (int)v34 % NumberAcross;
        if ( (int)v34 % NumberAcross )
        {
LABEL_69:
          if ( ++v34 == v99 )
            goto LABEL_76;
          continue;
        }
        break;
      }
      v108 = v37;
      ++v34;
      fputc(10, v4);
      v37 = v108;
      if ( v34 != v99 )
        continue;
      break;
    }
LABEL_76:
    if ( v37 )
      fputc(10, v4);
LABEL_78:
    ++v103;
    v110 += 8;
    if ( *((_DWORD *)v112 + 50) > v103 )
      continue;
    break;
  }
LABEL_79:
  fwrite("End\n", 1u, 4u, v4);
  if ( v122 )
  {
    if ( NumRows >= 0 )
    {
      v40 = ptr;
      do
      {
        v41 = *v40++;
        free(v41);
      }
      while ( &ptr[NumRows + 1] != v40 );
    }
    free(ptr);
  }
  if ( v123 )
  {
    if ( NumCols > 0 )
    {
      v42 = v121;
      do
      {
        v43 = *v42++;
        free(v43);
      }
      while ( &v121[(unsigned int)(NumCols - 1) + 1] != v42 );
    }
    free(v121);
  }
  return 0;
}

