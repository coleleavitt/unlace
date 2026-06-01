__int64 __fastcall ClpModel::readMps(ClpModel *this, const char *a2, char a3, char a4, double a5)
{
  char v7; // r12
  CoinMessageHandler *v8; // rdi
  char v9; // al
  double v10; // xmm0_8
  CoinMessageHandler *v11; // rax
  CoinMessageHandler *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  const double *RowUpper; // r12
  const CoinPackedMatrix *MatrixByCol; // rax
  __int64 v21; // r12
  __int64 v22; // rax
  CoinMessageHandler *v23; // rdi
  CoinMessageHandler *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  CoinMessageHandler *v29; // rax
  __int64 v30; // rax
  void *v31; // rdi
  char v32; // al
  struct timeval si128; // xmm0
  unsigned int v34; // ebx
  unsigned int v35; // eax
  unsigned int v36; // eax
  CoinMessageHandler *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // [rsp+0h] [rbp-260h]
  double *ColLower; // [rsp+10h] [rbp-250h]
  double *ColUpper; // [rsp+18h] [rbp-248h]
  double *v46; // [rsp+18h] [rbp-248h]
  int tv_sec; // [rsp+20h] [rbp-240h]
  int tv_usec; // [rsp+28h] [rbp-238h]
  const char *v50; // [rsp+30h] [rbp-230h]
  const char *v51; // [rsp+30h] [rbp-230h]
  double *ObjCoefficients; // [rsp+38h] [rbp-228h]
  unsigned int Mps; // [rsp+4Ch] [rbp-214h]
  CoinMessageHandler *v54[2]; // [rsp+50h] [rbp-210h] BYREF
  void *v55; // [rsp+60h] [rbp-200h] BYREF
  void *v56; // [rsp+68h] [rbp-1F8h] BYREF
  struct rusage usage; // [rsp+70h] [rbp-1F0h] BYREF
  _QWORD v58[27]; // [rsp+100h] [rbp-160h] BYREF
  double v59; // [rsp+1D8h] [rbp-88h]
  CoinMessageHandler *v60; // [rsp+1E0h] [rbp-80h]
  __int64 v61; // [rsp+1F0h] [rbp-70h] BYREF
  __int64 v62; // [rsp+210h] [rbp-50h]

  if ( !strcmp(a2, "-") || !strcmp(a2, "stdin") )
    goto LABEL_3;
  std::string::string();
  std::string::string();
  v32 = fileCoinReadable((std::string *)&usage, (const std::string *)v58);
  if ( (_UNKNOWN *)(v58[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    LOBYTE(v54[0]) = v32;
    sub_8F640(v58[0] - 24LL);
    v32 = (char)v54[0];
  }
  if ( v32 )
  {
    if ( (_UNKNOWN *)(usage.ru_utime.tv_sec - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_8F640(usage.ru_utime.tv_sec - 24);
LABEL_3:
    CoinMpsIO::CoinMpsIO((CoinMpsIO *)v58);
    CoinMpsIO::passInMessageHandler((CoinMpsIO *)v58, *((CoinMessageHandler **)this + 43));
    CoinMessages::CoinMessages((CoinMessages *)&usage, (ClpModel *)((char *)this + 448));
    CoinMessages::operator=(&v61, &usage);
    CoinMessages::~CoinMessages((CoinMessages *)&usage);
    v7 = CoinMessageHandler::prefix(v60);
    v8 = *((CoinMessageHandler **)this + 43);
    v54[0] = v60;
    v9 = CoinMessageHandler::prefix(v8);
    CoinMessageHandler::setPrefix(v54[0], v9);
    v10 = fmax(*((double *)this + 10), v59);
    v59 = v10;
    getrusage(RUSAGE_SELF, &usage);
    tv_sec = usage.ru_utime.tv_sec;
    tv_usec = usage.ru_utime.tv_usec;
    Mps = CoinMpsIO::readMps((CoinMpsIO *)v58, a2, "");
    CoinMessageHandler::setPrefix(v60, v7);
    if ( Mps && (!a4 || Mps - 1 > 0x1869E) )
    {
      v11 = (CoinMessageHandler *)CoinMessageHandler::message(
                                    *((CoinMessageHandler **)this + 43),
                                    45,
                                    (ClpModel *)((char *)this + 416));
      v12 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v11);
      v17 = CoinMessageHandler::operator<<(v12, (__int64)a2, v13, v14, v15, v16, v43);
LABEL_7:
      CoinMessageHandler::operator<<(v17, 0, v10);
      CoinMpsIO::~CoinMpsIO((CoinMpsIO *)v58);
      return Mps;
    }
    RowUpper = (const double *)CoinMpsIO::getRowUpper((CoinMpsIO *)v58);
    v54[0] = (CoinMessageHandler *)CoinMpsIO::getRowLower((CoinMpsIO *)v58);
    ObjCoefficients = (double *)CoinMpsIO::getObjCoefficients((CoinMpsIO *)v58);
    ColUpper = (double *)CoinMpsIO::getColUpper((CoinMpsIO *)v58);
    ColLower = (double *)CoinMpsIO::getColLower((CoinMpsIO *)v58);
    MatrixByCol = (const CoinPackedMatrix *)CoinMpsIO::getMatrixByCol((CoinMpsIO *)v58);
    ClpModel::loadProblem(
      this,
      MatrixByCol,
      ColLower,
      ColUpper,
      ObjCoefficients,
      (const double *)v54[0],
      RowUpper,
      nullptr);
    if ( CoinMpsIO::integerColumns((CoinMpsIO *)v58) )
    {
      v21 = operator new[](*((int *)this + 27));
      *((_QWORD *)this + 34) = v21;
      LODWORD(v54[0]) = *((_DWORD *)this + 27);
      v22 = CoinMpsIO::integerColumns((CoinMpsIO *)v58);
      CoinMemcpyN<char>(v22, LODWORD(v54[0]), v21);
      if ( *(_DWORD *)(v62 + 1240) != 11 )
      {
LABEL_11:
        CoinMpsIO::getProblemName((CoinMpsIO *)v58);
        std::string::string();
        ClpModel::setStrParam();
        if ( (_UNKNOWN *)(usage.ru_utime.tv_sec - 24) != &std::string::_Rep::_S_empty_rep_storage )
          sub_8F640(usage.ru_utime.tv_sec - 24);
        if ( a3 )
        {
          memset(&usage, 0, 24);
          *(_OWORD *)v54 = 0;
          sub_8F9A0((__int64)this + 368, &usage);
          std::vector<std::string>::~vector(&usage);
          si128 = (struct timeval)_mm_load_si128((const __m128i *)v54);
          usage.ru_stime.tv_sec = 0;
          v46 = (double *)((char *)this + 392);
          usage.ru_utime = si128;
          sub_8F9A0((__int64)this + 392, &usage);
          std::vector<std::string>::~vector(&usage);
          std::vector<std::string>::reserve((char *)this + 368, *((int *)this + 26));
          if ( *((int *)this + 26) <= 0 )
          {
            v34 = 0;
          }
          else
          {
            LODWORD(v54[0]) = 0;
            v34 = 0;
            do
            {
              while ( 1 )
              {
                v50 = (const char *)CoinMpsIO::rowName((CoinMpsIO *)v58, (int)v54[0]);
                v35 = strlen(v50);
                if ( v34 < v35 )
                  v34 = v35;
                std::string::string();
                std::vector<std::string>::emplace_back<std::string>((char *)this + 368, &usage);
                if ( (_UNKNOWN *)(usage.ru_utime.tv_sec - 24) != &std::string::_Rep::_S_empty_rep_storage )
                  break;
                ++LODWORD(v54[0]);
                if ( *((_DWORD *)this + 26) <= SLODWORD(v54[0]) )
                  goto LABEL_36;
              }
              sub_8F640(usage.ru_utime.tv_sec - 24);
              ++LODWORD(v54[0]);
            }
            while ( *((_DWORD *)this + 26) > SLODWORD(v54[0]) );
          }
LABEL_36:
          std::vector<std::string>::reserve(v46, *((int *)this + 27));
          if ( *((int *)this + 27) > 0 )
          {
            LODWORD(v54[0]) = 0;
            do
            {
              while ( 1 )
              {
                v51 = (const char *)CoinMpsIO::columnName((CoinMpsIO *)v58, (int)v54[0]);
                v36 = strlen(v51);
                if ( v34 < v36 )
                  v34 = v36;
                std::string::string();
                std::vector<std::string>::emplace_back<std::string>(v46, &usage);
                if ( (_UNKNOWN *)(usage.ru_utime.tv_sec - 24) != &std::string::_Rep::_S_empty_rep_storage )
                  break;
                ++LODWORD(v54[0]);
                if ( *((_DWORD *)this + 27) <= SLODWORD(v54[0]) )
                  goto LABEL_42;
              }
              sub_8F640(usage.ru_utime.tv_sec - 24);
              ++LODWORD(v54[0]);
            }
            while ( *((_DWORD *)this + 27) > SLODWORD(v54[0]) );
          }
LABEL_42:
          *((_DWORD *)this + 82) = v34;
        }
        else
        {
          *((_DWORD *)this + 82) = 0;
        }
        CoinMpsIO::objectiveOffset((CoinMpsIO *)v58);
        ClpModel::setDblParam(this, 4);
        getrusage(RUSAGE_SELF, &usage);
        v23 = *((CoinMessageHandler **)this + 43);
        *(double *)v54 = (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec);
        v24 = (CoinMessageHandler *)CoinMessageHandler::message(v23, 44, (ClpModel *)((char *)this + 416));
        v29 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v24, (__int64)a2, v25, v26, v27, v28, v43);
        v10 = *(double *)v54 - ((double)tv_usec * 0.000001 + (double)tv_sec);
        v17 = CoinMessageHandler::operator<<(v29);
        goto LABEL_7;
      }
    }
    else
    {
      v30 = v62;
      *((_QWORD *)this + 34) = 0;
      if ( *(_DWORD *)(v30 + 1240) != 11 )
        goto LABEL_11;
    }
    v55 = nullptr;
    v56 = nullptr;
    usage.ru_utime.tv_sec = 0;
    Mps = CoinMpsIO::readQuadraticMps((CoinMpsIO *)v58, nullptr, (int **)&v55, (int **)&v56, (double **)&usage, 2);
    v31 = v55;
    if ( !Mps || a4 )
    {
      ClpModel::loadQuadraticObjective(
        this,
        *((_DWORD *)this + 27),
        (const int *)v55,
        (const int *)v56,
        (const double *)usage.ru_utime.tv_sec);
      v31 = v55;
    }
    if ( v31 )
      operator delete[](v31);
    if ( v56 )
      operator delete[](v56);
    if ( usage.ru_utime.tv_sec )
      operator delete[]((void *)usage.ru_utime.tv_sec);
    goto LABEL_11;
  }
  v37 = (CoinMessageHandler *)CoinMessageHandler::message(
                                *((CoinMessageHandler **)this + 43),
                                40,
                                (ClpModel *)((char *)this + 416));
  v42 = CoinMessageHandler::operator<<(v37, (__int64)a2, v38, v39, v40, v41, v43);
  CoinMessageHandler::operator<<(v42, 0, a5);
  if ( (_UNKNOWN *)(usage.ru_utime.tv_sec - 24) != &std::string::_Rep::_S_empty_rep_storage )
    sub_8F640(usage.ru_utime.tv_sec - 24);
  return (unsigned int)-1;
}

