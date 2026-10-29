// Alternative name is '_ZN9CoinModelC1EPKci'
void __fastcall CoinModel::CoinModel(
        CoinModel *this,
        const char *haystack,
        int a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double v9; // xmm0_8
  char v10; // al
  int v11; // r13d
  const char *ProblemName; // rbp
  size_t v13; // rax
  int NumRows; // ebp
  const CoinPackedMatrix *MatrixByRow; // rax
  __int64 v16; // r12
  __int64 RowLower; // r14
  __int64 ObjCoefficients; // r13
  __int64 v19; // rax
  __int64 v20; // rbp
  const char *v21; // rax
  __int64 v22; // rbp
  __int64 v23; // r14
  bool v24; // r12
  int v25; // ebp
  const char *v26; // rax
  int v27; // ebp
  bool v28; // r13
  const char *v29; // rax
  const char *v30; // rax
  int v31; // edx
  char *v32; // rax
  char *v33; // rcx
  char v34; // di
  char *v35; // rsi
  char v36; // dl
  char *v37; // rbp
  const char *v38; // r14
  char *v39; // rax
  const char *v40; // rcx
  _BYTE *v41; // r13
  char v42; // si
  std::ostream *v43; // rax
  int v44; // eax
  int v45; // ebp
  int v46; // r14d
  char *v47; // rcx
  int v48; // edx
  unsigned int v49; // eax
  int v50; // r12d
  int v51; // edx
  __int64 v52; // r13
  __int64 v53; // rbp
  int v54; // esi
  char *v55; // rdi
  int v56; // r13d
  int v57; // edx
  __int64 v58; // r14
  __int64 v59; // r12
  int v60; // ecx
  double v61; // xmm4_8
  __int64 (__fastcall *v62)(__int64, unsigned int); // rax
  int v63; // ecx
  int v64; // edx
  __int64 ColumnName; // rax
  double v66; // xmm4_8
  double v67; // xmm5_8
  char *v68; // rdx
  const char *v69; // r8
  const char *v70; // rsi
  char *s; // [rsp+8h] [rbp-50A0h]
  char *sa; // [rsp+8h] [rbp-50A0h]
  double sb; // [rsp+8h] [rbp-50A0h]
  char *sc; // [rsp+8h] [rbp-50A0h]
  char sd; // [rsp+8h] [rbp-50A0h]
  int v76[2]; // [rsp+10h] [rbp-5098h]
  int v77; // [rsp+10h] [rbp-5098h]
  unsigned int v78; // [rsp+10h] [rbp-5098h]
  int v79; // [rsp+10h] [rbp-5098h]
  __int64 ColUpper; // [rsp+18h] [rbp-5090h]
  char v81; // [rsp+18h] [rbp-5090h]
  __int64 v82; // [rsp+18h] [rbp-5090h]
  __int64 v83; // [rsp+20h] [rbp-5088h]
  int v84; // [rsp+20h] [rbp-5088h]
  __int64 v85; // [rsp+20h] [rbp-5088h]
  __int64 v86; // [rsp+28h] [rbp-5080h]
  int v87; // [rsp+28h] [rbp-5080h]
  int v88[2]; // [rsp+30h] [rbp-5078h]
  int v89; // [rsp+30h] [rbp-5078h]
  __int64 v90; // [rsp+38h] [rbp-5070h]
  int Mps; // [rsp+48h] [rbp-5060h]
  int NumCols; // [rsp+4Ch] [rbp-505Ch]
  int v94; // [rsp+A4h] [rbp-5004h] BYREF
  void *v95; // [rsp+A8h] [rbp-5000h] BYREF
  void *v96; // [rsp+B0h] [rbp-4FF8h] BYREF
  double *v97; // [rsp+B8h] [rbp-4FF0h] BYREF
  _BYTE v98[32]; // [rsp+C0h] [rbp-4FE8h] BYREF
  __int64 v99; // [rsp+E0h] [rbp-4FC8h]
  __int64 v100; // [rsp+E8h] [rbp-4FC0h]
  __int64 v101; // [rsp+F0h] [rbp-4FB8h]
  __int64 v102; // [rsp+F8h] [rbp-4FB0h]
  _QWORD v103[34]; // [rsp+120h] [rbp-4F88h] BYREF
  __int64 v104; // [rsp+230h] [rbp-4E78h]
  char v105; // [rsp+238h] [rbp-4E70h]
  int v106; // [rsp+23Ch] [rbp-4E6Ch]
  int v107; // [rsp+244h] [rbp-4E64h]
  __int64 v108; // [rsp+248h] [rbp-4E60h]
  char dest[8]; // [rsp+250h] [rbp-4E58h] BYREF

  CoinBaseModel::CoinBaseModel(this);
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 30) = 0;
  *(_OWORD *)((char *)this + 100) = 0;
  v9 = 0.0;
  *(_QWORD *)this = &off_4D1800;
  *((_OWORD *)this + 8) = 0;
  CoinModelHash::CoinModelHash((CoinModel *)((char *)this + 144));
  *((_QWORD *)this + 22) = 0;
  *((_QWORD *)this + 23) = 0;
  *((_QWORD *)this + 24) = 0;
  *((_QWORD *)this + 25) = 0;
  CoinModelHash::CoinModelHash((CoinModel *)((char *)this + 208));
  *((_QWORD *)this + 30) = 0;
  CoinModelHash::CoinModelHash((CoinModel *)((char *)this + 248));
  *((_QWORD *)this + 35) = 0;
  *((_QWORD *)this + 36) = 0;
  *((_QWORD *)this + 37) = 0;
  *((_QWORD *)this + 38) = 0;
  CoinModelHash2::CoinModelHash2((CoinModel *)((char *)this + 312));
  CoinModelLinkedList::CoinModelLinkedList((CoinModel *)((char *)this + 336));
  CoinModelLinkedList::CoinModelLinkedList((CoinModel *)((char *)this + 392));
  *((_QWORD *)this + 56) = 0;
  CoinModelHash2::CoinModelHash2((CoinModel *)((char *)this + 456));
  *((_QWORD *)this + 60) = 0;
  *((_QWORD *)this + 61) = 0;
  *((_DWORD *)this + 124) = 0;
  CoinModelLinkedList::CoinModelLinkedList((CoinModel *)((char *)this + 504));
  CoinModelLinkedList::CoinModelLinkedList((CoinModel *)((char *)this + 560));
  *((_DWORD *)this + 154) = 0;
  *((_QWORD *)this + 78) = 0;
  *((_DWORD *)this + 158) = 0;
  *((_QWORD *)this + 80) = 0;
  *((_QWORD *)this + 81) = 0;
  *((_QWORD *)this + 82) = 0;
  *((_QWORD *)this + 83) = 0;
  *((_QWORD *)this + 84) = 0;
  *((_QWORD *)this + 85) = 0;
  *((_QWORD *)this + 86) = 0;
  *((_QWORD *)this + 87) = 0;
  *((_DWORD *)this + 176) = -1;
  *((_BYTE *)this + 708) = 0;
  *((_DWORD *)this + 178) = 0;
  std::string::assign((CoinModel *)((char *)this + 40), "row_master", 0xAu);
  std::string::assign((CoinModel *)((char *)this + 48), "column_master", 0xDu);
  if ( !strcmp(haystack, "-") || !strcmp(haystack, "stdin") )
  {
    CoinMpsIO::CoinMpsIO((CoinMpsIO *)v103);
    v105 = 1;
    v106 = a3;
  }
  else
  {
    std::string::string();
    std::string::string();
    v10 = fileCoinReadable((std::string *)v103, (const std::string *)dest);
    if ( (_UNKNOWN *)(*(_QWORD *)dest - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v63 = _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)dest - 8LL), 0xFFFFFFFF);
      }
      else
      {
        v63 = *(_DWORD *)(*(_QWORD *)dest - 8LL);
        *(_DWORD *)(*(_QWORD *)dest - 8LL) = v63 - 1;
      }
      if ( v63 <= 0 )
      {
        sd = v10;
        std::string::_Rep::_M_destroy();
        v10 = sd;
      }
    }
    v11 = 0;
    if ( !v10 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      strlen(haystack);
      std::__ostream_insert<char,std::char_traits<char>>();
      v41 = *(_BYTE **)((char *)&std::cerr + *(_QWORD *)(std::cerr - 24LL) + 240);
      if ( !v41 )
        std::__throw_bad_cast();
      if ( v41[56] )
      {
        v42 = v41[67];
      }
      else
      {
        std::ctype<char>::_M_widen_init();
        v42 = 10;
        v62 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v41 + 48LL);
        if ( v62 != std::ctype<char>::do_widen )
          v42 = v62((__int64)v41, 10u);
      }
      v43 = (std::ostream *)std::ostream::put((std::ostream *)&std::cerr, v42);
      std::ostream::flush(v43);
      v11 = -1;
    }
    if ( (_UNKNOWN *)(v103[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v64 = _InterlockedExchangeAdd((volatile signed __int32 *)(v103[0] - 8LL), 0xFFFFFFFF);
      }
      else
      {
        v64 = *(_DWORD *)(v103[0] - 8LL);
        *(_DWORD *)(v103[0] - 8LL) = v64 - 1;
      }
      if ( v64 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    CoinMpsIO::CoinMpsIO((CoinMpsIO *)v103);
    v105 = 1;
    v106 = a3;
    if ( v11 )
      goto LABEL_5;
  }
  Mps = CoinMpsIO::readMps((CoinMpsIO *)v103, haystack, "");
  if ( Mps )
    goto LABEL_5;
  ProblemName = (const char *)CoinMpsIO::getProblemName((CoinMpsIO *)v103);
  v13 = strlen(ProblemName);
  std::string::assign((CoinModel *)((char *)this + 32), ProblemName, v13);
  CoinMpsIO::objectiveOffset((CoinMpsIO *)v103);
  *((_QWORD *)this + 3) = 0;
  NumRows = CoinMpsIO::getNumRows((CoinMpsIO *)v103);
  NumCols = CoinMpsIO::getNumCols((CoinMpsIO *)v103);
  MatrixByRow = (const CoinPackedMatrix *)CoinMpsIO::getMatrixByRow((CoinMpsIO *)v103);
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v98, MatrixByRow);
  v16 = v102;
  v83 = v99;
  v86 = v100;
  *(_QWORD *)v88 = v101;
  RowLower = CoinMpsIO::getRowLower((CoinMpsIO *)v103);
  s = (char *)CoinMpsIO::getRowUpper((CoinMpsIO *)v103);
  *(_QWORD *)v76 = CoinMpsIO::getColLower((CoinMpsIO *)v103);
  ColUpper = CoinMpsIO::getColUpper((CoinMpsIO *)v103);
  ObjCoefficients = CoinMpsIO::getObjCoefficients((CoinMpsIO *)v103);
  if ( NumRows > 0 )
  {
    v19 = (unsigned int)(NumRows - 1);
    v20 = 0;
    v90 = v19 + 1;
    do
    {
      v21 = (const char *)CoinMpsIO::rowName((CoinMpsIO *)v103, v20);
      v9 = *(double *)(RowLower + 8 * v20);
      a5 = *(double *)&s[8 * v20];
      CoinModel::addRow(
        this,
        *(_DWORD *)(v16 + 4 * v20),
        (const int *)(v86 + 4LL * *(int *)(*(_QWORD *)v88 + 4 * v20)),
        (const double *)(v83 + 8LL * *(int *)(*(_QWORD *)v88 + 4 * v20)),
        v9,
        a5,
        v21);
      ++v20;
    }
    while ( v90 != v20 );
  }
  if ( NumCols <= 0 )
  {
    v84 = 0;
    v24 = 0;
  }
  else
  {
    v84 = 0;
    v22 = 0;
    v23 = (unsigned int)(NumCols - 1) + 1LL;
    do
    {
      while ( 1 )
      {
        a7 = *(double *)(*(_QWORD *)v76 + 8 * v22);
        a5 = *(double *)(ColUpper + 8 * v22);
        CoinModel::setColumnBounds(this, v22, a7, a5);
        v9 = *(double *)(ObjCoefficients + 8 * v22);
        CoinModel::setColumnObjective(this, v22, v9);
        if ( (unsigned __int8)CoinMpsIO::isInteger((CoinMpsIO *)v103, v22) )
          break;
        if ( v23 == ++v22 )
          goto LABEL_19;
      }
      CoinModel::setColumnIsInteger(this, v22++, 1);
      ++v84;
    }
    while ( v23 != v22 );
LABEL_19:
    v24 = 0;
    if ( v84 )
      v24 = *(_DWORD *)(v104 + 1240) == 11;
  }
  if ( *((int *)this + 2) > 0 )
  {
    v25 = 0;
    do
    {
      v26 = (const char *)CoinMpsIO::rowName((CoinMpsIO *)v103, v25);
      CoinModel::setRowName(this, v25++, v26);
    }
    while ( *((_DWORD *)this + 2) > v25 );
  }
  v77 = v107;
  if ( *((int *)this + 3) <= 0 )
  {
LABEL_40:
    if ( !v77 )
      goto LABEL_46;
    goto LABEL_41;
  }
  v27 = 0;
  v28 = !v24 && v107 == 0;
  do
  {
    while ( v28 )
    {
      v29 = (const char *)CoinMpsIO::columnName((CoinMpsIO *)v103, v27);
      CoinModel::setColumnName(this, v27++, v29);
      if ( *((_DWORD *)this + 3) <= v27 )
        goto LABEL_39;
    }
    v30 = (const char *)CoinMpsIO::columnName((CoinMpsIO *)v103, v27);
    strcpy(dest, v30);
    v31 = strlen(dest);
    if ( v31 <= 0 )
      goto LABEL_38;
    v32 = &dest[1];
    v33 = dest;
    v34 = 0;
    v35 = &dest[v31 - 1 + 1];
    while ( 1 )
    {
      v36 = *v33;
      if ( *v33 != 45 )
        break;
      *v33 = 95;
      v34 = 1;
      v33 = v32;
      if ( v35 == v32 )
        goto LABEL_37;
LABEL_34:
      ++v32;
    }
    if ( v36 == 43 )
    {
      *v33 = 36;
      v34 = 1;
    }
    else if ( v36 == 42 )
    {
      *v33 = 38;
      v34 = 1;
    }
    v33 = v32;
    if ( v35 != v32 )
      goto LABEL_34;
LABEL_37:
    Mps -= (v34 == 0) - 1;
LABEL_38:
    CoinModel::setColumnName(this, v27++, dest);
  }
  while ( *((_DWORD *)this + 3) > v27 );
LABEL_39:
  if ( !Mps )
    goto LABEL_40;
  printf("%d column names changed to eliminate - + or *\n", Mps);
  if ( v77 )
  {
LABEL_41:
    if ( v107 > 0 )
    {
      v37 = nullptr;
      sa = (char *)(8LL * (unsigned int)(v107 - 1) + 8);
      do
      {
        v38 = *(const char **)&v37[v108];
        sscanf(v38, "%d,%d,", &v97, dest);
        v39 = strchr(v38, 44);
        v40 = strchr(v39 + 1, 44) + 1;
        if ( *((_DWORD *)this + 2) <= (int)v97 || *((_DWORD *)this + 3) <= *(int *)dest )
        {
          fwrite("code CoinModel strings for rim\n", 1u, 0x1Fu, stderr);
          abort();
        }
        CoinModel::setElement(this, (int)v97, *(int *)dest, v40);
        v37 += 8;
      }
      while ( sa != v37 );
    }
  }
LABEL_46:
  if ( *(_DWORD *)(v104 + 1240) != 11 )
    goto LABEL_47;
  v95 = nullptr;
  v96 = nullptr;
  v97 = nullptr;
  if ( (unsigned int)CoinMpsIO::readQuadraticMps((CoinMpsIO *)v103, nullptr, (int **)&v95, (int **)&v96, &v97, 2) )
    goto LABEL_78;
  v44 = *((_DWORD *)this + 3);
  v89 = -1;
  if ( a3 == 13 )
  {
    v94 = *((_DWORD *)this + 3);
    v89 = *((_DWORD *)this + 2);
    CoinModel::addColumn(this, 0, nullptr, nullptr, -1.797693134862316e308, 1.797693134862316e308, 1.0, "obj", 0);
    a5 = 0.0;
    v9 = -1.797693134862316e308;
    *(_QWORD *)dest = 0xBFF0000000000000LL;
    CoinModel::addRow(this, 1, &v94, (const double *)dest, -1.797693134862316e308, 0.0, "objrow");
    v44 = *((_DWORD *)this + 3);
  }
  v45 = v77 | v84;
  if ( v77 | v84 )
  {
    v46 = 0;
    v85 = 0;
    if ( v44 > 0 )
    {
      while ( 1 )
      {
        dest[0] = 0;
        CoinModel::getColumnObjective(this, v46);
        if ( v9 == 0.0 || v89 >= 0 )
        {
          v78 = 0;
          v81 = 1;
        }
        else
        {
          sprintf(dest, "%g", v9);
          v47 = dest;
          do
          {
            v48 = *(_DWORD *)v47;
            v47 += 4;
            v49 = ~v48 & (v48 - 16843009) & 0x80808080;
          }
          while ( !v49 );
          v81 = 0;
          if ( (~v48 & (v48 - 16843009) & 0x8080) == 0 )
          {
            LOBYTE(v49) = (~v48 & (v48 - 16843009) & 0x80808080) >> 16;
            LODWORD(v47) = (_DWORD)v47 + 2;
          }
          v78 = (_DWORD)v47 - (__CFADD__((_BYTE)v49, (_BYTE)v49) + 3) - (unsigned int)dest;
        }
        v50 = *(_DWORD *)((char *)v95 + v85);
        v51 = *(_DWORD *)((char *)v95 + v85 + 4);
        v85 += 4;
        if ( v51 > v50 )
          break;
LABEL_77:
        if ( *((_DWORD *)this + 3) <= ++v46 )
          goto LABEL_78;
      }
      v87 = 0;
      v52 = 4LL * v50;
      v53 = v50;
      while ( 2 )
      {
        v54 = *(_DWORD *)((char *)v96 + v52);
        sb = v97[v53];
        if ( v54 == v46 )
        {
          sb = 0.5 * v97[v53];
          goto LABEL_70;
        }
        if ( v54 >= v46 )
        {
LABEL_70:
          if ( sb != 0.0 )
          {
            ++v87;
            ColumnName = CoinModel::getColumnName(this, v54);
            if ( sb == 1.0 )
            {
              v68 = "";
              if ( !v81 )
                v68 = "+";
              sprintf(&dest[v78], "%s%s", v68, ColumnName, &dest[v78], v9, a5, sb, a7, v66, v67, sb);
              v69 = &dest[v78];
            }
            else
            {
              v9 = sb;
              if ( v81 || (v67 = 0.0, v70 = "+%g*%s", sb < 0.0) )
                v70 = "%g*%s";
              sprintf(&dest[v78], v70, ColumnName, sb, a5, sb, a7, v66, v67, sb);
              v69 = &dest[v78];
            }
            v78 += strlen(v69);
            v81 = 0;
            v51 = *(_DWORD *)((char *)v95 + v85);
          }
        }
        ++v50;
        v52 += 4;
        ++v53;
        if ( v50 >= v51 )
        {
          if ( v87 )
          {
            if ( v89 < 0 )
              CoinModel::setColumnObjective(this, v46, dest);
            else
              CoinModel::setElement(this, v89, v46, dest);
          }
          goto LABEL_77;
        }
        continue;
      }
    }
LABEL_78:
    v55 = (char *)v95;
  }
  else
  {
    v55 = (char *)v95;
    if ( v44 > 0 )
    {
      v82 = 4;
      do
      {
        v56 = *(_DWORD *)&v55[v82 - 4];
        v57 = *(_DWORD *)&v55[v82];
        if ( v56 < v57 )
        {
          v58 = 4LL * v56;
          v59 = v56;
          do
          {
            v60 = *(_DWORD *)((char *)v96 + v58);
            v61 = v97[v59];
            v79 = v60;
            *(double *)&sc = v61;
            if ( v60 == v45 )
            {
              printf("diag %d %d %g\n", v45, v45, v61);
              CoinModel::setQuadraticElement(this, v45, v45, 0.5 * *(double *)&sc);
            }
            if ( v60 <= v45 )
            {
              if ( v60 < v45 )
              {
                printf("below diag %d %d %g\n", v45, v60, v61);
                CoinModel::setQuadraticElement(this, v45, v79, *(double *)&sc);
              }
            }
            else
            {
              printf("above diag %d %d %g\n", v45, v60, v61);
              v55 = (char *)v95;
              v57 = *(_DWORD *)((char *)v95 + v82);
            }
            ++v56;
            v58 += 4;
            ++v59;
          }
          while ( v56 < v57 );
          v44 = *((_DWORD *)this + 3);
        }
        ++v45;
        v82 += 4;
      }
      while ( v45 < v44 );
    }
  }
  if ( v55 )
    operator delete[](v55);
  if ( v96 )
    operator delete[](v96);
  if ( v97 )
    operator delete[](v97);
LABEL_47:
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v98);
LABEL_5:
  CoinMpsIO::~CoinMpsIO((CoinMpsIO *)v103);
}

