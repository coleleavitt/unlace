__int64 __fastcall ClpSimplex::readLp(CoinMessageHandler **this, const char *a2, double a3)
{
  struct _IO_FILE *v4; // r12
  unsigned __int64 ObjCoefficients; // r12
  void *v6; // r14
  const CoinPackedMatrix *MatrixByRow; // rax
  __int64 v8; // rax
  char *v9; // r12
  int v10; // r14d
  char *v11; // rax
  unsigned int v12; // esi
  __int64 v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // rdx
  char *v16; // rcx
  char *v17; // rdx
  signed int v18; // esi
  __int64 v19; // rdx
  int NumCols; // r14d
  __int64 v21; // rax
  int v22; // esi
  int v23; // r8d
  unsigned __int64 v24; // rcx
  unsigned int v25; // edx
  unsigned int v26; // edi
  __int64 v27; // rax
  unsigned int v28; // edi
  __int128 v29; // xmm0
  __int64 v30; // rax
  int v31; // esi
  CoinMessageHandler *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 *v38; // rdx
  __int64 *v39; // r14
  __int64 *v40; // r12
  __int64 *v41; // rdx
  __int64 *v42; // r14
  __int64 *v43; // r12
  int v44; // r14d
  unsigned int v45; // r12d
  unsigned int v46; // eax
  CoinMessageHandler *v47; // rsi
  volatile signed __int32 *v48; // rax
  const char *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  int i; // r14d
  unsigned int v53; // eax
  CoinMessageHandler *v54; // rsi
  volatile signed __int32 *v55; // rax
  const char *v56; // rax
  int v58; // edx
  int v59; // edx
  int v60; // ecx
  int v61; // ecx
  int v62; // edx
  char *v63; // rcx
  char *v64; // rdx
  char v65; // di
  __int64 v66; // [rsp+0h] [rbp-5E0h]
  double *RowLower; // [rsp+8h] [rbp-5D8h]
  double *RowUpper; // [rsp+10h] [rbp-5D0h]
  double *v69; // [rsp+10h] [rbp-5D0h]
  const double *na; // [rsp+18h] [rbp-5C8h]
  char *n; // [rsp+18h] [rbp-5C8h]
  const double *srca; // [rsp+20h] [rbp-5C0h]
  void *src; // [rsp+20h] [rbp-5C0h]
  __int64 *srcb; // [rsp+20h] [rbp-5C0h]
  __int64 *srcc; // [rsp+20h] [rbp-5C0h]
  __int64 *srcd; // [rsp+20h] [rbp-5C0h]
  __int64 *srce; // [rsp+20h] [rbp-5C0h]
  volatile signed __int32 *v78; // [rsp+38h] [rbp-5A8h] BYREF
  _BYTE v79[1440]; // [rsp+40h] [rbp-5A0h] BYREF

  if ( !strcmp(a2, "-") )
  {
    v4 = stdin;
    if ( stdin )
      goto LABEL_3;
LABEL_94:
    printf("### ERROR: ClpSimplex::readLp():  Unable to open file %s for reading\n", a2);
    return 1;
  }
  v4 = fopen(a2, "r");
  if ( !v4 )
    goto LABEL_94;
LABEL_3:
  CoinLpIO::CoinLpIO((CoinLpIO *)v79);
  CoinLpIO::setEpsilon((CoinLpIO *)v79, a3);
  if ( stdin != v4 )
    fclose(v4);
  CoinLpIO::readLp((CoinLpIO *)v79, a2);
  CoinLpIO::getProblemName((CoinLpIO *)v79);
  std::string::string();
  ClpModel::setStrParam();
  if ( v78 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v62 = _InterlockedExchangeAdd(v78 - 2, 0xFFFFFFFF);
    }
    else
    {
      v62 = *((_DWORD *)v78 - 2);
      *((_DWORD *)v78 - 2) = v62 - 1;
    }
    if ( v62 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  CoinLpIO::objectiveOffset((CoinLpIO *)v79);
  ClpModel::setDblParam(this, 4);
  if ( v79[256] )
  {
    CoinLpIO::objectiveOffset((CoinLpIO *)v79);
    ClpModel::setDblParam(this, 4);
    NumCols = CoinLpIO::getNumCols((CoinLpIO *)v79);
    src = (void *)CoinLpIO::getObjCoefficients((CoinLpIO *)v79);
    if ( src )
    {
      if ( (unsigned __int64)NumCols > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      ObjCoefficients = operator new[](8LL * NumCols);
      memcpy((void *)ObjCoefficients, src, 8LL * NumCols);
    }
    else
    {
      ObjCoefficients = 0;
    }
    if ( NumCols > 0 )
    {
      v21 = (ObjCoefficients >> 3) & 1;
      v22 = 0;
      if ( 2 - (unsigned int)((_DWORD)v21 == 0) > NumCols - 1 )
        goto LABEL_34;
      if ( (_DWORD)v21 )
      {
        v22 = 1;
        *(double *)ObjCoefficients = -*(double *)ObjCoefficients;
      }
      v23 = NumCols - v21;
      v24 = ObjCoefficients + 8 * v21;
      v25 = 0;
      v26 = NumCols - v21;
      v27 = 0;
      v28 = v26 >> 1;
      do
      {
        ++v25;
        *(double *)&v29 = -*(double *)(v24 + v27);
        *((double *)&v29 + 1) = -*(double *)(v24 + v27 + 8);
        *(_OWORD *)(v24 + v27) = v29;
        v27 += 16;
      }
      while ( v25 < v28 );
      v22 += v23 & 0xFFFFFFFE;
      if ( v23 != (v23 & 0xFFFFFFFE) )
      {
LABEL_34:
        v30 = v22;
        v31 = v22 + 1;
        *(double *)(ObjCoefficients + 8 * v30) = -*(double *)(ObjCoefficients + 8 * v30);
        if ( v31 < NumCols )
          *(double *)(ObjCoefficients + 8LL * v31) = -*(double *)(ObjCoefficients + 8LL * v31);
      }
    }
    ClpModel::setOptimizationDirection((ClpModel *)this, -1.0);
    v32 = (CoinMessageHandler *)CoinMessageHandler::message(*(this + 43), 92, (const CoinMessages *)(this + 52));
    v37 = CoinMessageHandler::operator<<(
            v32,
            (__int64)"Switching back to maximization to get correct duals etc",
            v33,
            v34,
            v35,
            v36,
            v66);
    CoinMessageHandler::operator<<(v37, 0, -1.0);
    RowUpper = (double *)CoinLpIO::getRowUpper((CoinLpIO *)v79);
    RowLower = (double *)CoinLpIO::getRowLower((CoinLpIO *)v79);
    v6 = (void *)ObjCoefficients;
    if ( ObjCoefficients )
      goto LABEL_9;
  }
  else
  {
    RowUpper = (double *)CoinLpIO::getRowUpper((CoinLpIO *)v79);
    RowLower = (double *)CoinLpIO::getRowLower((CoinLpIO *)v79);
  }
  ObjCoefficients = CoinLpIO::getObjCoefficients((CoinLpIO *)v79);
  v6 = nullptr;
LABEL_9:
  srca = (const double *)CoinLpIO::getColUpper((CoinLpIO *)v79);
  na = (const double *)CoinLpIO::getColLower((CoinLpIO *)v79);
  MatrixByRow = (const CoinPackedMatrix *)CoinLpIO::getMatrixByRow((CoinLpIO *)v79);
  ClpSimplex::loadProblem(
    (ClpSimplex *)this,
    MatrixByRow,
    na,
    srca,
    (const double *)ObjCoefficients,
    RowLower,
    RowUpper,
    nullptr);
  if ( v6 )
    operator delete[](v6);
  if ( CoinLpIO::integerColumns((CoinLpIO *)v79) )
  {
    v8 = operator new[](*((int *)this + 27));
    *(this + 34) = (CoinMessageHandler *)v8;
    v9 = (char *)v8;
    v10 = *((_DWORD *)this + 27);
    v11 = (char *)CoinLpIO::integerColumns((CoinLpIO *)v79);
    if ( v10 && v9 != v11 )
    {
      v12 = v10 >> 3;
      if ( v10 >> 3 > 0 )
      {
        if ( (v11 >= v9 + 16 || v9 >= v11 + 16) && v12 > 1 )
        {
          v13 = 0;
          v14 = 0;
          do
          {
            ++v14;
            *(__m128i *)&v9[v13] = _mm_loadu_si128((const __m128i *)&v11[v13]);
            v13 += 16;
          }
          while ( v14 < v12 >> 1 );
          v15 = 8LL * (v12 & 0xFFFFFFFE);
          v16 = &v11[v15];
          v17 = &v9[v15];
          if ( v12 != (v12 & 0xFFFFFFFE) )
          {
            *v17 = *v16;
            v17[1] = v16[1];
            v17[2] = v16[2];
            v17[3] = v16[3];
            v17[4] = v16[4];
            v17[5] = v16[5];
            v17[6] = v16[6];
            v17[7] = v16[7];
          }
          v18 = v12 - 1;
        }
        else
        {
          v18 = v12 - 1;
          v63 = v9;
          v64 = v11;
          do
          {
            v65 = *v64;
            v64 += 8;
            v63 += 8;
            *(v63 - 8) = v65;
            *(v63 - 7) = *(v64 - 7);
            *(v63 - 6) = *(v64 - 6);
            *(v63 - 5) = *(v64 - 5);
            *(v63 - 4) = *(v64 - 4);
            *(v63 - 3) = *(v64 - 3);
            *(v63 - 2) = *(v64 - 2);
            *(v63 - 1) = *(v64 - 1);
          }
          while ( v64 != &v11[8 * v18 + 8] );
        }
        v19 = 8LL * v18 + 8;
        v11 += v19;
        v9 += v19;
      }
      switch ( v10 % 8 )
      {
        case 1:
          goto LABEL_105;
        case 2:
          goto LABEL_104;
        case 3:
          goto LABEL_103;
        case 4:
          goto LABEL_102;
        case 5:
          goto LABEL_101;
        case 6:
          goto LABEL_100;
        case 7:
          v9[6] = v11[6];
LABEL_100:
          v9[5] = v11[5];
LABEL_101:
          v9[4] = v11[4];
LABEL_102:
          v9[3] = v11[3];
LABEL_103:
          v9[2] = v11[2];
LABEL_104:
          v9[1] = v11[1];
LABEL_105:
          *v9 = *v11;
          break;
        default:
          break;
      }
    }
  }
  else
  {
    *(this + 34) = nullptr;
  }
  ClpSimplex::createStatus((ClpSimplex *)this);
  v38 = (__int64 *)*(this + 46);
  v39 = (__int64 *)*(this + 47);
  *(this + 46) = nullptr;
  *(this + 47) = nullptr;
  n = (char *)(this + 46);
  *(this + 48) = nullptr;
  if ( v38 != v39 )
  {
    v40 = v38;
    if ( &_pthread_key_create )
    {
      do
      {
        if ( (_UNKNOWN *)(*v40 - 24) != &std::string::_Rep::_S_empty_rep_storage
          && _InterlockedExchangeAdd((volatile signed __int32 *)(*v40 - 8), 0xFFFFFFFF) <= 0 )
        {
          srcb = v38;
          std::string::_Rep::_M_destroy();
          v38 = srcb;
        }
        ++v40;
      }
      while ( v39 != v40 );
    }
    else
    {
      do
      {
        v50 = *v40;
        if ( (_UNKNOWN *)(*v40 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          v61 = *(_DWORD *)(v50 - 8);
          *(_DWORD *)(v50 - 8) = v61 - 1;
          if ( v61 <= 0 )
          {
            srce = v38;
            std::string::_Rep::_M_destroy();
            v38 = srce;
          }
        }
        ++v40;
      }
      while ( v40 != v39 );
    }
  }
  if ( v38 )
    operator delete(v38);
  v41 = (__int64 *)*(this + 49);
  v42 = (__int64 *)*(this + 50);
  *(this + 49) = nullptr;
  *(this + 50) = nullptr;
  v69 = (double *)(this + 49);
  *(this + 51) = nullptr;
  if ( v41 != v42 )
  {
    v43 = v41;
    if ( &_pthread_key_create )
    {
      do
      {
        if ( (_UNKNOWN *)(*v43 - 24) != &std::string::_Rep::_S_empty_rep_storage
          && _InterlockedExchangeAdd((volatile signed __int32 *)(*v43 - 8), 0xFFFFFFFF) <= 0 )
        {
          srcc = v41;
          std::string::_Rep::_M_destroy();
          v41 = srcc;
        }
        ++v43;
      }
      while ( v42 != v43 );
    }
    else
    {
      do
      {
        v51 = *v43;
        if ( (_UNKNOWN *)(*v43 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          v60 = *(_DWORD *)(v51 - 8);
          *(_DWORD *)(v51 - 8) = v60 - 1;
          if ( v60 <= 0 )
          {
            srcd = v41;
            std::string::_Rep::_M_destroy();
            v41 = srcd;
          }
        }
        ++v43;
      }
      while ( v42 != v43 );
    }
  }
  if ( v41 )
    operator delete(v41);
  std::vector<std::string>::reserve(n, *((int *)this + 26));
  if ( *((int *)this + 26) > 0 )
  {
    v44 = 0;
    v45 = 0;
    while ( 1 )
    {
      v49 = (const char *)CoinLpIO::rowName((CoinLpIO *)v79, v44);
      if ( v49 )
      {
        v46 = strlen(v49);
        if ( v45 < v46 )
          v45 = v46;
        std::string::string();
        v47 = *(this + 47);
        if ( v47 != *(this + 48) )
        {
LABEL_56:
          v48 = v78;
          if ( v47 )
          {
            *(_QWORD *)v47 = v78;
            v48 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
            v78 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
          }
          *(this + 47) = (CoinMessageHandler *)((char *)v47 + 8);
          if ( v48 - 6 == (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
            goto LABEL_59;
LABEL_89:
          if ( &_pthread_key_create )
          {
            v59 = _InterlockedExchangeAdd(v48 - 2, 0xFFFFFFFF);
          }
          else
          {
            v59 = *((_DWORD *)v48 - 2);
            *((_DWORD *)v48 - 2) = v59 - 1;
          }
          if ( v59 <= 0 )
            std::string::_Rep::_M_destroy();
          goto LABEL_59;
        }
      }
      else
      {
        std::string::string();
        v47 = *(this + 47);
        if ( v47 != *(this + 48) )
          goto LABEL_56;
      }
      std::vector<std::string>::_M_realloc_insert<std::string>(n, v47, &v78);
      v48 = v78;
      if ( v78 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_89;
LABEL_59:
      if ( *((_DWORD *)this + 26) <= ++v44 )
        goto LABEL_70;
    }
  }
  v45 = 0;
LABEL_70:
  std::vector<std::string>::reserve(v69, *((int *)this + 27));
  if ( *((int *)this + 27) > 0 )
  {
    for ( i = 0; *((_DWORD *)this + 27) > i; ++i )
    {
      v56 = (const char *)CoinLpIO::columnName((CoinLpIO *)v79, i);
      if ( v56 )
      {
        v53 = strlen(v56);
        if ( v45 < v53 )
          v45 = v53;
        std::string::string();
        v54 = *(this + 50);
        if ( v54 != *(this + 51) )
        {
LABEL_75:
          v55 = v78;
          if ( v54 )
          {
            *(_QWORD *)v54 = v78;
            v55 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
            v78 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
          }
          *(this + 50) = (CoinMessageHandler *)((char *)v54 + 8);
          if ( v55 - 6 == (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
            continue;
LABEL_84:
          if ( &_pthread_key_create )
          {
            v58 = _InterlockedExchangeAdd(v55 - 2, 0xFFFFFFFF);
          }
          else
          {
            v58 = *((_DWORD *)v55 - 2);
            *((_DWORD *)v55 - 2) = v58 - 1;
          }
          if ( v58 <= 0 )
            std::string::_Rep::_M_destroy();
          continue;
        }
      }
      else
      {
        std::string::string();
        v54 = *(this + 50);
        if ( v54 != *(this + 51) )
          goto LABEL_75;
      }
      std::vector<std::string>::_M_realloc_insert<std::string>(v69, v54, &v78);
      v55 = v78;
      if ( v78 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_84;
    }
  }
  *((_DWORD *)this + 82) = v45;
  CoinLpIO::~CoinLpIO((CoinLpIO *)v79);
  return 0;
}

