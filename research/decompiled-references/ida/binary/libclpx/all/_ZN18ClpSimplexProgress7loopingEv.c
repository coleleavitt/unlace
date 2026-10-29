__int64 __fastcall ClpSimplexProgress::looping(ClpSimplexProgress *this, double a2)
{
  __int64 v2; // rsi
  int v4; // r10d
  int v5; // r14d
  __int64 v6; // xmm1_8
  int v7; // ebp
  int v8; // r15d
  int v9; // r11d
  bool v10; // zf
  __int64 v11; // xmm2_8
  int v12; // eax
  bool v13; // dl
  __int64 v14; // xmm2_8
  __int64 v15; // xmm2_8
  int v16; // eax
  bool v17; // dl
  __int64 v18; // xmm2_8
  __int64 v19; // xmm2_8
  int v20; // eax
  bool v21; // dl
  __int64 v22; // xmm2_8
  __int64 v23; // xmm2_8
  int v24; // eax
  __int64 v25; // xmm2_8
  int v26; // eax
  __int64 v27; // xmm2_8
  int v28; // eax
  int v29; // eax
  unsigned int v30; // r12d
  CoinMessageHandler *v31; // r13
  CoinMessageHandler *v32; // rax
  CoinMessageHandler *v33; // rax
  CoinMessageHandler *v34; // rax
  __int64 v35; // rax
  int v36; // eax
  bool v37; // sf
  __int64 v38; // rdi
  int v39; // ebp
  CoinMessageHandler *v40; // r13
  int v41; // eax
  CoinMessageHandler *v42; // rax
  CoinMessageHandler *v43; // rdi
  __int64 v44; // rax
  int v45; // r12d
  __int64 v47; // rax
  CoinMessageHandler *v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rdi
  double v51; // xmm0_8
  double *v52; // rdi
  double v53; // xmm0_8
  double v54; // [rsp+8h] [rbp-80h]
  int v55; // [rsp+10h] [rbp-78h]
  int v56; // [rsp+10h] [rbp-78h]
  int v57; // [rsp+10h] [rbp-78h]
  int v58; // [rsp+10h] [rbp-78h]
  int v59; // [rsp+18h] [rbp-70h]
  int v60; // [rsp+20h] [rbp-68h]
  int v61; // [rsp+20h] [rbp-68h]
  int v62; // [rsp+20h] [rbp-68h]
  int v63; // [rsp+20h] [rbp-68h]
  _BYTE v64[88]; // [rsp+30h] [rbp-58h] BYREF

  v2 = *((_QWORD *)this + 30);
  if ( !v2 )
    return (unsigned int)-1;
  if ( *(int *)(v2 + 1300) < 0 )
  {
    v4 = *(_DWORD *)(v2 + 308);
    a2 = *(double *)(v2 + 72) - *(double *)(v2 + 696);
LABEL_4:
    v5 = *(_DWORD *)(v2 + 1232);
    v6 = 0;
    v54 = *(double *)(v2 + 896);
    goto LABEL_5;
  }
  ClpNonLinearCost::feasibleReportCost(*(ClpNonLinearCost **)(v2 + 1320));
  v2 = *((_QWORD *)this + 30);
  v4 = *(_DWORD *)(v2 + 308);
  if ( *(int *)(v2 + 1300) < 0 )
    goto LABEL_4;
  if ( 3 * (*(_DWORD *)(v2 + 104) + *(_DWORD *)(v2 + 108)) < v4 )
    return 1;
  v5 = *(_DWORD *)(v2 + 1224);
  v54 = *(double *)(v2 + 888);
  v6 = *(_QWORD *)(*(_QWORD *)(v2 + 1320) + 32LL);
LABEL_5:
  if ( *(_QWORD *)this == *(_QWORD *)&a2 && *((_QWORD *)this + 5) == *(_QWORD *)&v54 && *((_DWORD *)this + 62) == v5 )
  {
    if ( v4 == *((_DWORD *)this + 67) )
    {
      v7 = 1;
      v8 = 1;
      v9 = 0;
    }
    else if ( *(int *)(*(_QWORD *)(v2 + 344) + 104LL) > 10 )
    {
      v59 = v4;
      v7 = 0;
      v8 = 1;
      printf("%d %d %d %d %d loop check\n", 0, 1, 1, 1, 1);
      v2 = *((_QWORD *)this + 30);
      v9 = 1;
      v4 = v59;
    }
    else
    {
      v7 = 0;
      v8 = 1;
      v9 = 1;
    }
  }
  else
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
  }
  if ( *((_QWORD *)this + 1) == *(_QWORD *)&a2
    && *((_QWORD *)this + 6) == *(_QWORD *)&v54
    && *((_DWORD *)this + 63) == v5 )
  {
    v8 |= 2u;
    if ( v4 == *((_DWORD *)this + 68) )
    {
      ++v7;
    }
    else
    {
      ++v9;
      if ( *(int *)(*(_QWORD *)(v2 + 344) + 104LL) > 10 )
      {
        v60 = v4;
        v55 = v9;
        printf("%d %d %d %d %d loop check\n", 1, v9, 1, 1, 1);
        v2 = *((_QWORD *)this + 30);
        v4 = v60;
        v9 = v55;
      }
    }
  }
  v10 = *((_QWORD *)this + 7) == *(_QWORD *)&v54;
  v11 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 62) = *((_DWORD *)this + 63);
  v12 = *((_DWORD *)this + 68);
  *(_QWORD *)this = v11;
  v13 = v10;
  v10 = *((_QWORD *)this + 2) == *(_QWORD *)&a2;
  v14 = *((_QWORD *)this + 6);
  *((_DWORD *)this + 67) = v12;
  *((_QWORD *)this + 5) = v14;
  *((_QWORD *)this + 10) = *((_QWORD *)this + 11);
  if ( v10 && v13 && *((_DWORD *)this + 64) == v5 )
  {
    v8 |= 4u;
    if ( *((_DWORD *)this + 69) == v4 )
    {
      ++v7;
    }
    else
    {
      ++v9;
      if ( *(int *)(*(_QWORD *)(v2 + 344) + 104LL) > 10 )
      {
        v62 = v4;
        v57 = v9;
        printf("%d %d %d %d %d loop check\n", 2, v9, 1, 1, 1);
        v2 = *((_QWORD *)this + 30);
        v4 = v62;
        v9 = v57;
      }
    }
  }
  v10 = *((_QWORD *)this + 3) == *(_QWORD *)&a2;
  v15 = *((_QWORD *)this + 2);
  *((_DWORD *)this + 63) = *((_DWORD *)this + 64);
  v16 = *((_DWORD *)this + 69);
  *((_QWORD *)this + 1) = v15;
  v17 = v10;
  v10 = *((_QWORD *)this + 8) == *(_QWORD *)&v54;
  v18 = *((_QWORD *)this + 7);
  *((_DWORD *)this + 68) = v16;
  *((_QWORD *)this + 6) = v18;
  *((_QWORD *)this + 11) = *((_QWORD *)this + 12);
  if ( v10 && v17 && *((_DWORD *)this + 65) == v5 )
  {
    v8 |= 8u;
    if ( v4 == *((_DWORD *)this + 70) )
    {
      ++v7;
    }
    else
    {
      ++v9;
      if ( *(int *)(*(_QWORD *)(v2 + 344) + 104LL) > 10 )
      {
        v61 = v4;
        v56 = v9;
        printf("%d %d %d %d %d loop check\n", 3, v9, 1, 1, 1);
        v2 = *((_QWORD *)this + 30);
        v4 = v61;
        v9 = v56;
      }
    }
  }
  v10 = *((_QWORD *)this + 4) == *(_QWORD *)&a2;
  v19 = *((_QWORD *)this + 3);
  *((_DWORD *)this + 64) = *((_DWORD *)this + 65);
  v20 = *((_DWORD *)this + 70);
  *((_QWORD *)this + 2) = v19;
  v21 = v10;
  v10 = *((_QWORD *)this + 9) == *(_QWORD *)&v54;
  v22 = *((_QWORD *)this + 8);
  *((_DWORD *)this + 69) = v20;
  *((_QWORD *)this + 7) = v22;
  *((_QWORD *)this + 12) = *((_QWORD *)this + 13);
  if ( v10 && v21 && *((_DWORD *)this + 66) == v5 )
  {
    v8 |= 0x10u;
    if ( *((_DWORD *)this + 71) == v4 )
    {
      ++v7;
    }
    else
    {
      ++v9;
      if ( *(int *)(*(_QWORD *)(v2 + 344) + 104LL) > 10 )
      {
        v63 = v4;
        v58 = v9;
        printf("%d %d %d %d %d loop check\n", 4, v9, 1, 1, 1);
        v2 = *((_QWORD *)this + 30);
        v9 = v58;
        v4 = v63;
      }
    }
  }
  v23 = *((_QWORD *)this + 4);
  v24 = *((_DWORD *)this + 66);
  *((_DWORD *)this + 66) = v5;
  *((_QWORD *)this + 3) = v23;
  if ( v7 != 5 )
    v7 = v9;
  v25 = *((_QWORD *)this + 9);
  *((_DWORD *)this + 65) = v24;
  v26 = *((_DWORD *)this + 71);
  *((double *)this + 4) = a2;
  *((_QWORD *)this + 8) = v25;
  *((_DWORD *)this + 71) = v4;
  v27 = *((_QWORD *)this + 14);
  *((_DWORD *)this + 70) = v26;
  *((double *)this + 9) = v54;
  v28 = *((_DWORD *)this + 72);
  *((_QWORD *)this + 13) = v27;
  *((_QWORD *)this + 14) = v6;
  v29 = v28 + 1;
  v10 = (*(_DWORD *)(v2 + 1344) & 3) == 0;
  v30 = *(_DWORD *)(v2 + 1344) & 3;
  *((_DWORD *)this + 72) = v29;
  if ( !v10 || v29 <= 9 || v8 == 16 || !v7 || *(int *)(*(_QWORD *)(v2 + 192) + 52LL) > 14 )
    return (unsigned int)-1;
  v31 = *(CoinMessageHandler **)(v2 + 344);
  CoinMessages::CoinMessages((CoinMessages *)v64, (const CoinMessages *)(v2 + 416));
  v32 = (CoinMessageHandler *)CoinMessageHandler::message(v31, 25, (const CoinMessages *)v64);
  v33 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v32);
  v34 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v33);
  v35 = CoinMessageHandler::operator<<(v34);
  CoinMessageHandler::operator<<(v35, 0, a2);
  CoinMessages::~CoinMessages((CoinMessages *)v64);
  v36 = *((_DWORD *)this + 73) + 1;
  v37 = *((_DWORD *)this + 73) - 8 < 0;
  *((_DWORD *)this + 73) = v36;
  if ( v37 ^ __OFSUB__(v36, 9) | (v36 == 9) )
  {
    *(_DWORD *)(*((_QWORD *)this + 30) + 1304LL) = 1;
    if ( *((int *)this + 73) <= 1 )
    {
      ClpSimplexProgress::startCheck(this);
      v50 = *((_QWORD *)this + 30);
      if ( *(int *)(v50 + 1300) < 0 )
      {
        *(double *)(v50 + 872) = 1.05 * *(double *)(v50 + 872);
        v52 = *((double **)this + 30);
        v53 = v52[98];
        if ( v53 < 1.0e17 )
        {
          ClpSimplex::setDualBound((ClpSimplex *)v52, v53 * 1.1);
          ClpSimplexDual::resetFakeBounds(*((ClpSimplexDual **)this + 30), 0);
        }
      }
      else
      {
        if ( *((int *)this + 73) > 3 )
        {
          *(double *)(v50 + 880) = 1.05 * *(double *)(v50 + 880);
          v50 = *((_QWORD *)this + 30);
        }
        if ( *(_DWORD *)(*(_QWORD *)(v50 + 1320) + 112LL) )
        {
          v51 = *(double *)(v50 + 904);
          if ( v51 < 1.0e17 )
          {
            v30 = -2;
            ClpSimplex::setInfeasibilityCost((ClpSimplex *)v50, v51 * 1.1);
            return v30;
          }
        }
      }
      return (unsigned int)-2;
    }
    else
    {
      v38 = *((_QWORD *)this + 30);
      if ( *(int *)(v38 + 1300) < 0 )
      {
        a2 = 1.0e14;
        if ( *(double *)(v38 + 784) > 1.0e14 )
        {
          ClpSimplex::setDualBound((ClpSimplex *)v38, 1.0e14);
          v38 = *((_QWORD *)this + 30);
        }
        v39 = *((_DWORD *)this + 43);
      }
      else
      {
        v39 = *((_DWORD *)this + 55);
      }
      v40 = *(CoinMessageHandler **)(v38 + 344);
      v41 = *((_DWORD *)v40 + 26);
      if ( v39 < 0 )
      {
        v30 = 4;
        if ( v41 > 62 )
          puts("***** All flagged?");
      }
      else
      {
        if ( v41 > 62 )
        {
          CoinMessages::CoinMessages((CoinMessages *)v64, (const CoinMessages *)(v38 + 416));
          v42 = (CoinMessageHandler *)CoinMessageHandler::message(v40, 12, (const CoinMessages *)v64);
          v43 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v42);
          v44 = CoinMessageHandler::operator<<(v43);
          CoinMessageHandler::operator<<(v44, 0, a2);
          CoinMessages::~CoinMessages((CoinMessages *)v64);
          v38 = *((_QWORD *)this + 30);
        }
        v45 = *(_DWORD *)(v38 + 1152);
        *(_DWORD *)(v38 + 1152) = v39;
        ClpSimplex::setFlagged(*((ClpSimplex **)this + 30), v39);
        *(_DWORD *)(*((_QWORD *)this + 30) + 1152LL) = v45;
        v30 = -2;
        ClpSimplexProgress::startCheck(this);
        *((_DWORD *)this + 73) = 2;
      }
    }
  }
  else if ( v54 >= 0.0001 )
  {
    v47 = *((_QWORD *)this + 30);
    v48 = *(CoinMessageHandler **)(v47 + 344);
    CoinMessages::CoinMessages((CoinMessages *)v64, (const CoinMessages *)(v47 + 416));
    v49 = CoinMessageHandler::message(v48, 43, (const CoinMessages *)v64);
    CoinMessageHandler::operator<<(v49, 0, 0.0001);
    v30 = 3;
    CoinMessages::~CoinMessages((CoinMessages *)v64);
  }
  return v30;
}

