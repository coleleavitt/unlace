__int64 __fastcall ClpSimplex::writeLp(
        ClpSimplex *this,
        const char *a2,
        const char *a3,
        double a4,
        int a5,
        int a6,
        double a7,
        bool a8)
{
  _QWORD *v8; // rax
  int v9; // r15d
  char *v10; // r13
  __int64 v11; // rbx
  __int64 v12; // r14
  char isInteger; // al
  double *v14; // rbx
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64); // rdi
  unsigned __int64 v16; // rax
  double v17; // rdx
  int v18; // edi
  __int64 v19; // rdx
  unsigned int v20; // ecx
  int v21; // r9d
  __int64 v22; // rsi
  unsigned int v23; // r8d
  __int64 v24; // rdx
  unsigned int v25; // r8d
  unsigned __int64 v26; // r10
  double *v27; // rsi
  signed int v28; // edi
  __int64 v29; // rdx
  int v30; // edi
  __int64 v31; // rdi
  __int64 (*v32)(void); // rax
  const CoinPackedMatrix *v33; // rsi
  const char *v34; // r9
  __int64 result; // rax
  int v36; // edi
  __int64 v37; // rdx
  unsigned int v38; // ecx
  int v39; // r9d
  __int64 v40; // rsi
  unsigned int v41; // r8d
  __int64 v42; // rdx
  unsigned int v43; // r8d
  unsigned __int64 v44; // r10
  double *v45; // rsi
  __int128 v46; // xmm0
  signed int v47; // edi
  __int64 v48; // rdx
  double v49; // xmm0_8
  int v50; // edi
  unsigned __int64 v51; // rdx
  ClpModel *v52; // rdi
  int v53; // edx
  int v54; // edx
  int v55; // edx
  int v56; // edx
  int v57; // edx
  unsigned __int64 v58; // rdx
  char **v59; // [rsp+8h] [rbp-678h]
  char **v60; // [rsp+10h] [rbp-670h]
  FILE *stream; // [rsp+28h] [rbp-658h]
  char v66; // [rsp+3Fh] [rbp-641h]
  ClpModel *v67; // [rsp+48h] [rbp-638h]
  __int64 v68; // [rsp+60h] [rbp-620h] BYREF
  __int64 v69; // [rsp+68h] [rbp-618h] BYREF
  char *filename; // [rsp+70h] [rbp-610h] BYREF
  char v71[8]; // [rsp+78h] [rbp-608h] BYREF
  _QWORD v72[12]; // [rsp+80h] [rbp-600h] BYREF
  _QWORD v73[180]; // [rsp+E0h] [rbp-5A0h] BYREF

  v67 = this;
  std::string::string();
  std::string::string();
  filename = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  if ( !(unsigned int)std::string::compare((std::string *)&v69, "") )
  {
    std::string::assign((std::string *)&filename, (const std::string *)&v68);
  }
  else
  {
    std::string::string((std::string *)v72, (const std::string *)&v68);
    std::string::append((std::string *)v72, ".", 1u);
    v8 = (_QWORD *)std::string::append((std::string *)v72, (const std::string *)&v69);
    v73[0] = *v8;
    *v8 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    std::string::swap((std::string *)&filename, (std::string *)v73);
    if ( (_UNKNOWN *)(v73[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v53 = _InterlockedExchangeAdd((volatile signed __int32 *)(v73[0] - 8LL), 0xFFFFFFFF);
      }
      else
      {
        v53 = *(_DWORD *)(v73[0] - 8LL);
        *(_DWORD *)(v73[0] - 8LL) = v53 - 1;
      }
      if ( v53 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v72[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v54 = _InterlockedExchangeAdd((volatile signed __int32 *)(v72[0] - 8LL), 0xFFFFFFFF);
      }
      else
      {
        v54 = *(_DWORD *)(v72[0] - 8LL);
        *(_DWORD *)(v72[0] - 8LL) = v54 - 1;
      }
      if ( v54 <= 0 )
        std::string::_Rep::_M_destroy();
    }
  }
  stream = fopen(filename, "w");
  if ( !stream )
  {
    printf("### ERROR: in OsiSolverInterface::writeLpNative(): unable to open file %s\n", filename);
    exit(1);
  }
  v60 = (char **)ClpModel::rowNamesAsChar(this);
  v59 = (char **)ClpModel::columnNamesAsChar(this);
  v9 = *((_DWORD *)this + 27);
  v10 = (char *)operator new[](v9);
  if ( v9 <= 0 )
  {
    v66 = 0;
  }
  else
  {
    v11 = 0;
    v66 = 0;
    v12 = (unsigned int)(v9 - 1) + 1LL;
    do
    {
      while ( 1 )
      {
        isInteger = ClpModel::isInteger(this, v11);
        if ( !isInteger )
          break;
        v10[v11++] = 1;
        v66 = isInteger;
        if ( v11 == v12 )
          goto LABEL_10;
      }
      v10[v11++] = 0;
    }
    while ( v11 != v12 );
  }
LABEL_10:
  if ( (unsigned __int64)v9 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v14 = (double *)operator new[](8LL * v9);
  v15 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64))this + 20);
  if ( v15 )
    v16 = (**v15)(v15, 0, 0, v71, 0, 2);
  else
    v16 = 0;
  v17 = a7;
  if ( a7 == 0.0 )
    v17 = 1.0;
  if ( v17 * *(double *)v67 >= 0.0 )
  {
    if ( v9 <= 0 )
      goto LABEL_26;
    if ( (v16 >= (unsigned __int64)(v14 + 2) || (unsigned __int64)v14 >= v16 + 16) && (unsigned int)v9 > 0x18 )
    {
      v18 = 0;
      v19 = (v16 >> 3) & 1;
      if ( ((v16 >> 3) & 1) != 0 )
      {
        v18 = 1;
        *v14 = *(double *)v16;
      }
      v20 = 0;
      v21 = v9 - v19;
      v22 = (v16 >> 3) & 1;
      v23 = v9 - v19;
      v24 = 0;
      v25 = v23 >> 1;
      v26 = v16 + v22 * 8;
      v27 = &v14[v22];
      do
      {
        ++v20;
        *(_OWORD *)&v27[v24] = *(_OWORD *)(v26 + v24 * 8);
        v24 += 2;
      }
      while ( v25 > v20 );
      v28 = (v21 & 0xFFFFFFFE) + v18;
      if ( v21 != (v21 & 0xFFFFFFFE) )
      {
        v29 = v28;
        v30 = v28 + 1;
        v14[v29] = *(double *)(v16 + 8 * v29);
        if ( v30 < v9 )
          v14[v30] = *(double *)(v16 + 8LL * v30);
      }
      goto LABEL_26;
    }
    v51 = 0;
    v52 = v67;
    do
    {
      v14[v51 / 8] = *(double *)(v16 + v51);
      v51 += 8LL;
    }
    while ( v51 != 8LL * (unsigned int)(v9 - 1) + 8 );
LABEL_52:
    v67 = v52;
    goto LABEL_26;
  }
  if ( v9 <= 0 )
    goto LABEL_26;
  if ( v16 < (unsigned __int64)(v14 + 2) && (unsigned __int64)v14 < v16 + 16 || (unsigned int)v9 <= 0xD )
  {
    v58 = 0;
    v52 = v67;
    do
    {
      v14[v58 / 8] = -*(double *)(v16 + v58);
      v58 += 8LL;
    }
    while ( v58 != 8LL * (unsigned int)(v9 - 1) + 8 );
    goto LABEL_52;
  }
  v36 = 0;
  v37 = (v16 >> 3) & 1;
  if ( ((v16 >> 3) & 1) != 0 )
  {
    v36 = 1;
    *v14 = -*(double *)v16;
  }
  v38 = 0;
  v39 = v9 - v37;
  v40 = (v16 >> 3) & 1;
  v41 = v9 - v37;
  v42 = 0;
  v43 = v41 >> 1;
  v44 = v16 + v40 * 8;
  v45 = &v14[v40];
  do
  {
    ++v38;
    *(double *)&v46 = -*(double *)(v44 + v42 * 8);
    *((double *)&v46 + 1) = -*(double *)(v44 + v42 * 8 + 8);
    *(_OWORD *)&v45[v42] = v46;
    v42 += 2;
  }
  while ( v38 < v43 );
  v47 = (v39 & 0xFFFFFFFE) + v36;
  if ( (v39 & 0xFFFFFFFE) != v39 )
  {
    v48 = v47;
    v49 = *(double *)(v16 + 8LL * v47);
    v50 = v47 + 1;
    v14[v48] = -v49;
    if ( v50 < v9 )
      v14[v50] = -*(double *)(v16 + 8LL * v50);
  }
LABEL_26:
  CoinLpIO::CoinLpIO((CoinLpIO *)v73);
  CoinLpIO::setInfinity((CoinLpIO *)v73, 1.797693134862316e308);
  CoinLpIO::setEpsilon((CoinLpIO *)v73, a4);
  CoinLpIO::setNumberAcross((CoinLpIO *)v73, a5);
  CoinLpIO::setDecimals((CoinLpIO *)v73, a6);
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v72);
  CoinPackedMatrix::setExtraGap((CoinPackedMatrix *)v72, 0.0);
  CoinPackedMatrix::setExtraMajor((CoinPackedMatrix *)v72, 0.0);
  v31 = *((_QWORD *)v67 + 24);
  if ( v31 )
  {
    v32 = **(__int64 (***)(void))v31;
    if ( (char *)v32 == (char *)ClpPackedMatrix::getPackedMatrix )
      v33 = *(const CoinPackedMatrix **)(v31 + 88);
    else
      v33 = (const CoinPackedMatrix *)v32();
  }
  else
  {
    v33 = nullptr;
  }
  CoinPackedMatrix::reverseOrderedCopyOf((CoinPackedMatrix *)v72, v33);
  v34 = nullptr;
  if ( v66 )
    v34 = v10;
  CoinLpIO::setLpDataWithoutRowAndColNames(
    (CoinLpIO *)v73,
    (const CoinPackedMatrix *)v72,
    *((const double **)v67 + 22),
    *((const double **)v67 + 23),
    v14,
    v34,
    *((const double **)v67 + 18),
    *((const double **)v67 + 19));
  CoinLpIO::setLpDataRowAndColNames((CoinLpIO *)v73, (const char *const *)v60, (const char *const *)v59);
  operator delete[](v14);
  operator delete[](v10);
  CoinLpIO::writeLp((CoinLpIO *)v73, stream, a4, a5, a6, a8);
  if ( v60 )
  {
    ClpModel::deleteNamesAsChar(v67, (const char *const *)v60, *((_DWORD *)v67 + 26) + 1);
    ClpModel::deleteNamesAsChar(v67, (const char *const *)v59, *((_DWORD *)v67 + 27));
  }
  fclose(stream);
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v72);
  CoinLpIO::~CoinLpIO((CoinLpIO *)v73);
  if ( filename - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v56 = _InterlockedExchangeAdd((volatile signed __int32 *)filename - 2, 0xFFFFFFFF);
    }
    else
    {
      v56 = *((_DWORD *)filename - 2);
      *((_DWORD *)filename - 2) = v56 - 1;
    }
    if ( v56 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  if ( (_UNKNOWN *)(v69 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v57 = _InterlockedExchangeAdd((volatile signed __int32 *)(v69 - 8), 0xFFFFFFFF);
    }
    else
    {
      v57 = *(_DWORD *)(v69 - 8);
      *(_DWORD *)(v69 - 8) = v57 - 1;
    }
    if ( v57 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  result = v68;
  if ( (_UNKNOWN *)(v68 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v55 = _InterlockedExchangeAdd((volatile signed __int32 *)(v68 - 8), 0xFFFFFFFF);
    }
    else
    {
      v55 = *(_DWORD *)(v68 - 8);
      *(_DWORD *)(v68 - 8) = v55 - 1;
    }
    if ( v55 <= 0 )
      return std::string::_Rep::_M_destroy();
  }
  return result;
}

