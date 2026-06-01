__int64 __fastcall ClpSimplexOther::dualOfModel(ClpSimplexOther *this, double a2, double a3)
{
  int v3; // edx
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // r9d
  __int64 v7; // rax
  double v8; // xmm3_8
  double v9; // xmm3_8
  int v10; // edx
  int v11; // r10d
  __int64 v12; // rax
  double v13; // xmm1_8
  double v14; // xmm3_8
  int v15; // eax
  double v16; // xmm2_8
  int v17; // r14d
  ClpSimplexOther *v18; // r14
  int v19; // ebx
  __int64 v20; // r13
  __int64 v21; // r15
  int i; // esi
  double v23; // xmm5_8
  double v24; // xmm4_8
  const void *v25; // rbx
  int v26; // eax
  __int64 v27; // r12
  __int64 v28; // r13
  unsigned __int64 v29; // r15
  const void *v30; // rsi
  char *v31; // rbx
  __int64 (__fastcall ***v32)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // rdi
  __int64 v33; // rdi
  __int64 (*v34)(void); // rax
  const CoinPackedMatrix *v35; // rax
  __int64 v36; // r11
  __int64 v37; // r15
  __int64 v38; // rcx
  double v39; // xmm5_8
  __int64 v40; // r10
  double v41; // xmm1_8
  double v42; // xmm0_8
  __int64 v43; // r12
  int v45; // edx
  __int64 v46; // rax
  __int64 v47; // rdi
  char *v48; // r9
  double *v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rax
  double v52; // xmm0_8
  double *v53; // rax
  unsigned __int64 v54; // r15
  unsigned __int64 v55; // r15
  double *v56; // r15
  char v57; // cl
  double v58; // xmm4_8
  __int64 v59; // rax
  int v60; // esi
  double v61; // xmm0_8
  double v62; // xmm3_8
  __int64 v63; // rax
  __int64 v64; // rdx
  double v65; // xmm1_8
  double v66; // xmm0_8
  double v67; // xmm4_8
  int v68; // esi
  int v69; // eax
  double *v70; // [rsp+8h] [rbp-168h]
  int *v71; // [rsp+10h] [rbp-160h]
  double *v72; // [rsp+18h] [rbp-158h]
  double *v73; // [rsp+20h] [rbp-150h]
  double *v74; // [rsp+20h] [rbp-150h]
  double *v75; // [rsp+28h] [rbp-148h]
  double *v76; // [rsp+28h] [rbp-148h]
  int v78; // [rsp+38h] [rbp-138h]
  int v79; // [rsp+3Ch] [rbp-134h]
  char v80; // [rsp+43h] [rbp-12Dh]
  int v81; // [rsp+44h] [rbp-12Ch]
  __int64 v82; // [rsp+50h] [rbp-120h]
  double v83; // [rsp+58h] [rbp-118h]
  double v84; // [rsp+58h] [rbp-118h]
  double v85; // [rsp+60h] [rbp-110h]
  char *v86; // [rsp+60h] [rbp-110h]
  const CoinPackedMatrix *src; // [rsp+68h] [rbp-108h]
  int v88; // [rsp+7Ch] [rbp-F4h] BYREF
  double v89[12]; // [rsp+80h] [rbp-F0h] BYREF
  _BYTE v90[144]; // [rsp+E0h] [rbp-90h] BYREF

  v3 = *((_DWORD *)this + 27);
  v88 = 0;
  if ( v3 <= 0 )
  {
    v9 = 0.0;
    v4 = 0;
    v80 = 0;
  }
  else
  {
    v4 = 0;
    v5 = 8LL * (unsigned int)(v3 - 1) + 8;
    v6 = 0;
    v7 = 0;
    v80 = 0;
    do
    {
      while ( 1 )
      {
        v8 = *(double *)(*((_QWORD *)this + 22) + v7);
        if ( *(double *)(*((_QWORD *)this + 23) + v7) < 1.0e20 )
          break;
        v7 += 8;
        v4 += v8 < -1.0e20;
        if ( v5 == v7 )
          goto LABEL_8;
      }
      if ( v8 > -1.0e20 )
      {
        ++v6;
        v80 = 1;
      }
      v7 += 8;
    }
    while ( v5 != v7 );
LABEL_8:
    v88 = v3;
    v9 = (double)v6;
  }
  if ( a3 * (double)v3 < v9 )
    return 0;
  v10 = *((_DWORD *)this + 26);
  if ( v10 <= 0 )
  {
    v16 = 0.0;
    v15 = 0;
    v79 = 0;
  }
  else
  {
    v11 = 0;
    v79 = 0;
    v12 = 0;
    do
    {
      v13 = *(double *)(*((_QWORD *)this + 18) + v12);
      if ( v13 > -1.0e20 )
      {
        v14 = *(double *)(*((_QWORD *)this + 19) + v12);
        if ( v14 < 1.0e20 )
        {
          if ( v13 == v14 )
            ++v11;
          else
            ++v79;
        }
      }
      v12 += 8;
    }
    while ( 8LL * (unsigned int)(v10 - 1) + 8 != v12 );
    v15 = v11;
    v16 = (double)v79;
  }
  if ( v16 > (double)v10 * a2 )
    return 0;
  v17 = v15 - v4;
  printf("would have %d free columns in primal, %d in dual\n", v4, v15);
  v81 = *((_DWORD *)this + 27);
  if ( 4 * v17 > v81 && a2 < 1.0 )
    return 0;
  v18 = this;
  if ( v80 )
  {
    v18 = (ClpSimplexOther *)operator new(0x6F0u);
    ClpSimplex::ClpSimplex(v18, this, -1);
    CoinBuild::CoinBuild((CoinBuild *)v90);
    v19 = *((_DWORD *)v18 + 27);
    v20 = *((_QWORD *)v18 + 22);
    v88 = 0;
    v89[0] = 1.0;
    v21 = *((_QWORD *)v18 + 23);
    if ( v19 > 0 )
    {
      for ( i = 0; i < v19; v88 = i )
      {
        v23 = *(double *)(v21 + 8LL * i);
        if ( v23 < 1.0e20 )
        {
          v24 = *(double *)(v20 + 8LL * i);
          v85 = v24;
          if ( v24 > -1.0e20 )
          {
            v83 = *(double *)(v21 + 8LL * i);
            if ( fabs(v23) <= fabs(v24) )
            {
              ClpSimplex::setColumnLower(v18, i, -1.797693134862316e308);
              CoinBuild::addRow((CoinBuild *)v90, 1, &v88, v89, v85, 1.797693134862316e308);
            }
            else
            {
              ClpSimplex::setColumnUpper(v18, i, 1.797693134862316e308);
              CoinBuild::addRow((CoinBuild *)v90, 1, &v88, v89, -1.797693134862316e308, v83);
            }
            i = v88;
          }
        }
        ++i;
      }
    }
    ClpModel::addRows(v18, (const CoinBuild *)v90, 0, 1);
    CoinBuild::~CoinBuild((CoinBuild *)v90);
    v81 = *((_DWORD *)v18 + 27);
  }
  v25 = *((const void **)v18 + 18);
  v26 = *((_DWORD *)v18 + 26);
  v27 = *((_QWORD *)v18 + 22);
  v28 = *((_QWORD *)v18 + 23);
  v78 = v26;
  if ( !v25 )
  {
    v30 = *((const void **)v18 + 19);
    if ( !v30 )
    {
      v86 = nullptr;
      goto LABEL_99;
    }
    if ( (unsigned __int64)v26 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v29 = 8LL * v26;
      v86 = nullptr;
      goto LABEL_34;
    }
LABEL_107:
    __cxa_throw_bad_array_new_length();
  }
  if ( (unsigned __int64)v26 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_107;
  v29 = 8LL * v26;
  v86 = (char *)operator new[](v29);
  memcpy(v86, v25, v29);
  v30 = *((const void **)v18 + 19);
  if ( !v30 )
  {
LABEL_99:
    v31 = nullptr;
    goto LABEL_35;
  }
LABEL_34:
  v31 = (char *)operator new[](v29);
  memcpy(v31, v30, v29);
LABEL_35:
  v32 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))v18 + 20);
  v82 = 0;
  if ( v32 )
    v82 = (**v32)(v32, 0, 0, v90, 0, 2);
  v33 = *((_QWORD *)v18 + 24);
  if ( !v33 )
  {
    CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v89, nullptr);
    BUG();
  }
  v34 = **(__int64 (***)(void))v33;
  if ( (char *)v34 == (char *)ClpPackedMatrix::getPackedMatrix )
    v35 = *(const CoinPackedMatrix **)(v33 + 88);
  else
    v35 = (const CoinPackedMatrix *)v34();
  src = v35;
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v89, v35);
  v88 = 0;
  v36 = *((_QWORD *)src + 7);
  v37 = *((_QWORD *)src + 6);
  v73 = *((double **)src + 5);
  v75 = *((double **)src + 4);
  if ( v81 > 0 )
  {
    v38 = 1;
    v39 = *(double *)this;
    v40 = (unsigned int)(v81 - 1) + 2LL;
    v84 = 0.0;
    while ( 1 )
    {
      while ( 1 )
      {
        v41 = *(double *)(v28 + 8 * v38 - 8);
        v42 = *(double *)(v27 + 8 * v38 - 8);
        if ( v41 > 1.0e20 )
          break;
        if ( v42 >= -1.0e20 )
          goto LABEL_48;
LABEL_44:
        if ( v41 == 0.0 )
          goto LABEL_45;
        v45 = *(_DWORD *)(v36 + 4 * v38 - 4);
        v46 = *(int *)(v37 + 4 * v38 - 4);
        v84 = *(double *)(v82 + 8 * v38 - 8) * v39 * v41 + v84;
        if ( (int)v46 >= (int)v46 + v45 )
          goto LABEL_45;
        v47 = (unsigned int)(v45 - 1) + 1LL;
        v48 = (char *)v73 + 4 * v46;
        v49 = &v75[v46];
        v50 = 0;
        do
        {
          v51 = 8LL * *(int *)&v48[4 * v50];
          v52 = *(double *)&v86[v51];
          if ( v52 > -1.0e20 )
            *(double *)&v86[v51] = v52 - v49[v50] * v41;
          v53 = (double *)&v31[v51];
          if ( *v53 < 1.0e20 )
            *v53 = *v53 - v49[v50] * v41;
          ++v50;
        }
        while ( v47 != v50 );
        v88 = v38++;
        if ( v40 == v38 )
          goto LABEL_61;
      }
      if ( v42 > -1.0e20 )
      {
        v41 = *(double *)(v27 + 8 * v38 - 8);
        goto LABEL_44;
      }
LABEL_45:
      v88 = v38++;
      if ( v40 == v38 )
        goto LABEL_61;
    }
  }
  v84 = 0.0;
LABEL_61:
  v54 = v79 + v78;
  if ( v54 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v71 = (int *)operator new[](4 * v54);
  CoinPackedMatrix::reverseOrdering((CoinPackedMatrix *)v89);
  CoinPackedMatrix::transpose((CoinPackedMatrix *)v89);
  v55 = 8 * v54;
  v70 = (double *)operator new[](v55);
  v74 = (double *)operator new[](v55);
  v72 = (double *)operator new[](v55);
  if ( (unsigned __int64)v81 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v76 = (double *)operator new[](8LL * v81);
  v56 = (double *)operator new[](8LL * v81);
  v88 = 0;
  if ( v81 > 0 )
  {
    v57 = 0;
    v58 = *(double *)this;
    v59 = 0;
    do
    {
      v61 = *(double *)(v82 + 8 * v59) * v58;
      v62 = *(double *)(v27 + 8 * v59);
      if ( *(double *)(v28 + 8 * v59) > 1.0e20 )
      {
        if ( v62 <= -1.0e20 )
          v76[v59] = v61;
        else
          v76[v59] = -1.797693134862316e308;
        v56[v59] = v61;
      }
      else
      {
        if ( v62 >= -1.0e20 )
        {
          if ( v57 )
            v88 = v59;
LABEL_48:
          abort();
        }
        v76[v59] = v61;
        v56[v59] = 1.797693134862316e308;
      }
      v60 = ++v59;
      v57 = 1;
    }
    while ( v59 != (unsigned int)(v81 - 1) + 1LL );
    v88 = v60;
  }
  if ( v78 > 0 )
  {
    v63 = 0;
    v64 = (unsigned int)(v78 - 1) + 1LL;
    do
    {
      while ( 1 )
      {
        v65 = *(double *)&v86[8 * v63];
        v66 = *(double *)&v31[8 * v63];
        if ( v65 >= -1.0e20 )
          break;
        v70[v63] = -1.797693134862316e308;
        v74[v63] = 0.0;
        v71[v63] = v63;
        v72[v63] = -v66;
LABEL_77:
        if ( v64 == ++v63 )
          goto LABEL_81;
      }
      v67 = -v65;
      if ( v66 <= 1.0e20 )
      {
        if ( v65 == v66 )
        {
          v72[v63] = v67;
          v71[v63] = v63;
          v70[v63] = -1.797693134862316e308;
          v74[v63] = 1.797693134862316e308;
        }
        else
        {
          v70[v63] = -1.797693134862316e308;
          v74[v63] = 0.0;
          v71[v63] = v63;
          v72[v63] = -v66;
          v72[v78] = v67;
          v70[v78] = 0.0;
          v74[v78] = 1.797693134862316e308;
          v71[v78++] = v63;
        }
        goto LABEL_77;
      }
      v72[v63] = v67;
      v70[v63] = 0.0;
      v71[v63] = v63;
      v74[v63++] = 1.797693134862316e308;
    }
    while ( v64 != v63 );
  }
LABEL_81:
  if ( v79 )
  {
    CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v90);
    CoinPackedMatrix::setExtraGap((CoinPackedMatrix *)v90, 0.0);
    CoinPackedMatrix::setExtraMajor((CoinPackedMatrix *)v90, 0.0);
    CoinPackedMatrix::submatrixOfWithDuplicates((CoinPackedMatrix *)v90, (const CoinPackedMatrix *)v89, v78, v71);
    CoinPackedMatrix::operator=((CoinPackedMatrix *)v89);
    CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v90);
  }
  v43 = operator new(0x6F0u);
  ClpSimplex::ClpSimplex((ClpSimplex *)v43, 0);
  ClpSimplex::passInEventHandler((ClpSimplex *)v43, *((const ClpEventHandler **)this + 45));
  ClpSimplex::loadProblem((ClpSimplex *)v43, (const CoinPackedMatrix *)v89, v70, v74, v72, v76, v56, nullptr);
  ClpModel::setObjectiveOffset((ClpModel *)v43, v84);
  ClpSimplex::setDualBound((ClpSimplex *)v43, *((double *)v18 + 98));
  ClpSimplex::setInfeasibilityCost((ClpSimplex *)v43, *((double *)v18 + 113));
  ClpModel::setDualTolerance((ClpModel *)v43, *((double *)v18 + 3));
  ClpModel::setPrimalTolerance((ClpModel *)v43, *((double *)v18 + 4));
  ClpSimplex::setPerturbation((ClpSimplex *)v43, *((_DWORD *)v18 + 327));
  ClpModel::setSpecialOptions((ClpModel *)v43, *((_DWORD *)v18 + 84));
  v68 = *((_DWORD *)v18 + 74);
  *(_DWORD *)(v43 + 728) = *((_DWORD *)v18 + 182);
  ClpModel::setMaximumIterations((ClpModel *)v43, v68);
  v69 = ClpSimplex::factorizationFrequency(v18);
  ClpSimplex::setFactorizationFrequency((ClpSimplex *)v43, v69);
  CoinMessageHandler::setLogLevel(*(CoinMessageHandler **)(v43 + 344), *(_DWORD *)(*((_QWORD *)v18 + 43) + 104LL));
  operator delete[](v70);
  operator delete[](v74);
  operator delete[](v76);
  operator delete[](v56);
  operator delete[](v72);
  operator delete[](v71);
  if ( v86 )
    operator delete[](v86);
  if ( v31 )
    operator delete[](v31);
  if ( v80 )
  {
    ClpSimplex::~ClpSimplex(v18);
    operator delete(v18);
  }
  ClpSimplex::createStatus((ClpSimplex *)v43);
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v89);
  return v43;
}

