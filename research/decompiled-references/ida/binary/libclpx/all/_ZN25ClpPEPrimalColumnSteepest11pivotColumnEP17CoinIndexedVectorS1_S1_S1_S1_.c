__int64 __fastcall ClpPEPrimalColumnSteepest::pivotColumn(
        ClpPEPrimalColumnSteepest *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        CoinIndexedVector *a5,
        CoinIndexedVector *a6)
{
  __int64 v9; // rsi
  int v10; // ebx
  int v11; // r12d
  __int64 v12; // r15
  int v13; // edx
  __int64 v14; // rax
  int v15; // edi
  __int64 v16; // rcx
  double v17; // xmm0_8
  unsigned __int8 v18; // dl
  double *v19; // rdx
  double v20; // xmm0_8
  double v21; // xmm2_8
  double v22; // xmm0_8
  __int64 v23; // r14
  char v24; // dl
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  __int64 v29; // rsi
  __int64 *v30; // rcx
  int v31; // r14d
  int v32; // r12d
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // edx
  double v37; // xmm0_8
  __int64 v38; // xmm8_8
  __int64 *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  int v42; // edx
  int v43; // ecx
  double v44; // xmm5_8
  bool v45; // r10
  __int64 v46; // r9
  double v47; // xmm0_8
  double v48; // xmm2_8
  int v49; // ebx
  int v50; // r14d
  double v51; // xmm4_8
  double v52; // xmm6_8
  __int64 v53; // r11
  bool v54; // bp
  int v55; // edx
  int v56; // r8d
  int v57; // ecx
  __int64 v58; // rdi
  int *v59; // rdx
  unsigned __int64 v60; // r10
  __int64 v61; // rcx
  double v62; // xmm1_8
  double v63; // xmm3_8
  double v64; // xmm0_8
  __int64 v65; // rcx
  double v66; // xmm1_8
  double v67; // xmm3_8
  double v68; // xmm0_8
  CoinIndexedVector *v69; // rsi
  __int64 v70; // rax
  __int64 v72; // r14
  int v73; // edx
  int v74; // r8d
  int v75; // eax
  double *v76; // rcx
  __int64 *v77; // rdx
  double *v78; // rcx
  bool v79; // dl
  int v80; // r8d
  int v81; // eax
  int v82; // r9d
  double *v83; // rcx
  double v84; // xmm0_8
  void *v85; // rdi
  __int64 v86; // rax
  ClpSimplex *v87; // rbx
  __int64 (__fastcall *v88)(ClpPEPrimalColumnSteepest *, ClpSimplex *, int); // rax
  CoinIndexedVector *v89; // rax
  bool v90; // si
  __int64 v91; // rsi
  __int64 v92; // rdi
  int v93; // r12d
  bool v94; // dl
  int v95; // eax
  int v96; // eax
  int v97; // edx
  int v98; // eax
  CoinMessageHandler *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rax
  __int64 v105; // [rsp+0h] [rbp-108h]
  int v106; // [rsp+Ch] [rbp-FCh]
  double v107; // [rsp+10h] [rbp-F8h]
  bool v108; // [rsp+18h] [rbp-F0h]
  double v109; // [rsp+18h] [rbp-F0h]
  __int64 v110; // [rsp+18h] [rbp-F0h]
  CoinIndexedVector *v112; // [rsp+20h] [rbp-E8h]
  CoinIndexedVector *v113; // [rsp+20h] [rbp-E8h]
  ClpPESimplex *v114; // [rsp+20h] [rbp-E8h]
  double v116; // [rsp+30h] [rbp-D8h]
  struct rusage usage; // [rsp+40h] [rbp-C8h] BYREF

  v9 = *((_QWORD *)this + 1);
  v10 = *((_DWORD *)this + 19);
  v11 = *(_DWORD *)(v9 + 1168);
  v12 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL);
  v107 = fmin(0.01, *(double *)(v9 + 768)) + *(double *)(v9 + 872);
  if ( v10 == 4 )
  {
    v10 = 5 - *((_DWORD *)this + 22);
  }
  else if ( v10 >= 10 )
  {
    v10 = 3;
  }
  (*(void (__fastcall **)(_QWORD, __int64, CoinIndexedVector *, _QWORD, __int64))(**(_QWORD **)(v9 + 192) + 312LL))(
    *(_QWORD *)(v9 + 192),
    v9,
    a2,
    0,
    4);
  v13 = *((_DWORD *)a2 + 4);
  if ( v13 > 1 )
  {
    v106 = *(_DWORD *)(*((_QWORD *)this + 1) + 1160LL);
LABEL_70:
    if ( v10 > 3 )
      ClpPrimalColumnSteepest::djsAndDevex2(this, a2, a4, a5, a6);
    else
      ClpPrimalColumnSteepest::djsAndSteepest2(this, a2, a4, a5, a6);
    v14 = *((_QWORD *)this + 1);
    v15 = v106;
    goto LABEL_10;
  }
  v14 = *((_QWORD *)this + 1);
  v15 = *(_DWORD *)(v14 + 1160);
  v106 = v15;
  if ( v13 )
  {
    if ( **(_DWORD **)a2 == v11 && fabs(**((double **)a2 + 1)) > 0.000001 )
    {
      if ( v10 > 3 )
        ClpPrimalColumnSteepest::djsAndDevex(this, a2, a4, a5, a6);
      else
        ClpPrimalColumnSteepest::djsAndSteepest(this, a2, a4, a5, a6);
      v14 = *((_QWORD *)this + 1);
      goto LABEL_10;
    }
    goto LABEL_70;
  }
  if ( *((int *)this + 23) >= 0 )
  {
    if ( v10 > 3 )
      ClpPrimalColumnSteepest::justDevex(this, a2, a4, a5, a6);
    else
      ClpPrimalColumnSteepest::justSteepest(this, a2, a4, a5, a6);
    v14 = *((_QWORD *)this + 1);
  }
LABEL_10:
  if ( v15 < 0 )
    goto LABEL_19;
  v16 = 8LL * v15;
  v17 = *(double *)(*(_QWORD *)(v14 + 1176) + v16);
  v18 = *(_BYTE *)(*(_QWORD *)(v14 + 264) + v15) & 7;
  if ( v18 == 2 )
  {
    if ( v17 <= v107 )
    {
      v83 = (double *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + v16);
      if ( *v83 != 0.0 )
        *v83 = 2.225073858507201e-308;
      goto LABEL_19;
    }
    v19 = (double *)(v12 + v16);
    v20 = v17 * v17;
    if ( *(double *)(v12 + 8LL * v15) != 0.0 )
      goto LABEL_18;
    v77 = *((__int64 **)this + 5);
    v78 = (double *)(v77[1] + v16);
    if ( *v78 != 0.0 )
    {
      v20 = v20 + *v78;
      if ( v20 <= 0.0 )
        v79 = v20 <= -1.0e-50;
      else
        v79 = v20 >= 1.0e-50;
      if ( !v79 )
      {
        *v78 = 1.0e-100;
        goto LABEL_19;
      }
      goto LABEL_190;
    }
    goto LABEL_186;
  }
  if ( v18 <= 2u )
  {
    if ( v18 )
      goto LABEL_19;
LABEL_15:
    if ( fabs(v17) > v107 * 100.0 )
    {
      v17 = v17 * 10.0;
      goto LABEL_17;
    }
LABEL_143:
    v76 = (double *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + v16);
    if ( *v76 != 0.0 )
      *v76 = 2.225073858507201e-308;
    goto LABEL_19;
  }
  if ( v18 != 3 )
  {
    if ( v18 != 4 )
      goto LABEL_19;
    goto LABEL_15;
  }
  if ( -v107 <= v17 )
    goto LABEL_143;
LABEL_17:
  v19 = (double *)(v12 + v16);
  v20 = v17 * v17;
  if ( *(double *)(v12 + 8LL * v15) != 0.0 )
  {
LABEL_18:
    *v19 = v20;
    goto LABEL_19;
  }
  v77 = *((__int64 **)this + 5);
  v78 = (double *)(v77[1] + v16);
  if ( *v78 != 0.0 )
  {
    v20 = v20 + *v78;
    if ( v20 <= 0.0 )
      v94 = v20 <= -1.0e-50;
    else
      v94 = v20 >= 1.0e-50;
    if ( v94 )
      goto LABEL_190;
    *v78 = 1.0e-100;
    goto LABEL_19;
  }
LABEL_186:
  if ( v20 <= 0.0 )
    v90 = v20 <= -1.0e-50;
  else
    v90 = v20 >= 1.0e-50;
  if ( v90 )
  {
    v91 = *((int *)v77 + 4);
    v92 = *v77;
    *((_DWORD *)v77 + 4) = v91 + 1;
    *(_DWORD *)(v92 + 4 * v91) = v106;
LABEL_190:
    *v78 = v20;
  }
LABEL_19:
  v21 = *(double *)(v14 + 32);
  v22 = *(double *)(v14 + 848);
  if ( *(int *)(v14 + 1164) < 0 )
  {
    v22 = v22 - *(double *)(v14 + 840);
    v108 = v21 > v22;
  }
  else
  {
    v108 = v21 > *(double *)(v14 + 856) - v22;
  }
  v23 = *((_QWORD *)this + 14);
  v24 = *(_BYTE *)(v23 + 192);
  if ( v108 )
  {
    ++*(_DWORD *)(v23 + 156);
    ++*(_DWORD *)(v23 + 168);
    if ( v24 )
    {
      ++*(_DWORD *)(v23 + 164);
      v25 = *((_DWORD *)this + 35) + 1;
      v26 = *((_DWORD *)this + 34) + 1;
      *((_DWORD *)this + 35) = v25;
      *((_DWORD *)this + 34) = v26;
      if ( v25 > 9 && *(_DWORD *)(v14 + 308) * 5 * v26 > *(_DWORD *)(v23 + 156) * v25 )
        *((_BYTE *)this + 144) = 1;
    }
LABEL_26:
    if ( !*(_DWORD *)(v23 + 176) )
      goto LABEL_27;
    goto LABEL_106;
  }
  *(_DWORD *)(v23 + 168) = 0;
  if ( !v24 )
    goto LABEL_26;
  ++*((_DWORD *)this + 35);
  if ( !*(_DWORD *)(v23 + 176) )
    goto LABEL_27;
LABEL_106:
  getrusage(RUSAGE_SELF, &usage);
  *(double *)(v23 + 224) = (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec);
  v72 = *((_QWORD *)this + 14);
  if ( *((double *)this + 15) >= 1.0 && *((int *)this + 32) > 99 )
  {
    ClpPESimplex::updateDualDegenerates(*((ClpPESimplex **)this + 14));
    ClpPESimplex::updateDualDegeneratesAvg(*((ClpPESimplex **)this + 14), 100);
    *((_DWORD *)this + 32) = 0;
    v72 = *((_QWORD *)this + 14);
  }
  getrusage(RUSAGE_SELF, &usage);
  v22 = (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001
      + (double)SLODWORD(usage.ru_utime.tv_sec)
      - *(double *)(v72 + 224)
      + *(double *)(v72 + 200);
  *(double *)(v72 + 200) = v22;
  v23 = *((_QWORD *)this + 14);
  if ( *(_DWORD *)(v23 + 176) )
  {
    getrusage(RUSAGE_SELF, &usage);
    v22 = (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec);
    *(double *)(v23 + 224) = v22;
    v23 = *((_QWORD *)this + 14);
  }
LABEL_27:
  v27 = *((_DWORD *)this + 32);
  v116 = *((double *)this + 15);
  if ( v116 < 1.0 && (v73 = *((_DWORD *)this + 33), v73 <= v27) && (*((_BYTE *)this + 144) || v27 > 999) )
  {
    if ( v108 )
    {
      ClpPESimplex::updatePrimalDegenerates((ClpPESimplex *)v23);
      ClpPESimplex::identifyCompatibleCols(
        *((ClpPESimplex **)this + 14),
        *(_DWORD *)(*((_QWORD *)this + 1) + 104LL) + *(_DWORD *)(*((_QWORD *)this + 1) + 108LL),
        nullptr,
        a4,
        a3);
      v23 = *((_QWORD *)this + 14);
      if ( *(_DWORD *)(v23 + 176) )
      {
        ClpPESimplex::updatePrimalDegeneratesAvg(*((ClpPESimplex **)this + 14), *((_DWORD *)this + 32));
        ClpPESimplex::updateCompatibleColsAvg(*((ClpPESimplex **)this + 14), *((_DWORD *)this + 32));
        v23 = *((_QWORD *)this + 14);
        if ( *(int *)(v23 + 176) > 3 )
        {
          sprintf(
            (char *)&usage,
            "coDegen = %d; coComp = %d; iCurrent_ = %d; compatibleColumns = %d",
            *((_DWORD *)this + 34),
            *((_DWORD *)this + 35),
            *((_DWORD *)this + 32),
            *(_DWORD *)(v23 + 48));
          v99 = (CoinMessageHandler *)CoinMessageHandler::message(
                                        *(CoinMessageHandler **)(*((_QWORD *)this + 1) + 344LL),
                                        92,
                                        (const CoinMessages *)(*((_QWORD *)this + 1) + 416LL));
          v104 = CoinMessageHandler::operator<<(v99, (__int64)&usage, v100, v101, v102, v103, v105);
          CoinMessageHandler::operator<<(v104, 0, v22);
          v23 = *((_QWORD *)this + 14);
        }
      }
      if ( (double)*(int *)(v23 + 48) > (double)*(int *)(*((_QWORD *)this + 1) + 108LL) )
      {
        puts("switching off pe");
        v23 = *((_QWORD *)this + 14);
        *((_QWORD *)this + 15) = 0x3FF0000000000000LL;
      }
      v95 = *((_DWORD *)this + 33);
      if ( *((_DWORD *)this + 32) == v95 )
      {
        v98 = v95 - 50;
        if ( v98 <= 49 )
          v98 = 50;
        *((_DWORD *)this + 33) = v98;
      }
      else
      {
        v96 = v95 + 50;
        if ( v96 >= 300 )
          v96 = 300;
        *((_DWORD *)this + 33) = v96;
      }
      *((_BYTE *)this + 144) = 0;
      *((_QWORD *)this + 17) = 0;
      v28 = 1;
    }
    else
    {
      v28 = v27 + 1;
      *((_DWORD *)this + 33) = v73 + 1;
    }
  }
  else
  {
    v28 = v27 + 1;
    if ( *(int *)(v23 + 168) > 9 )
      v116 = v116 * 0.25;
  }
  *((_DWORD *)this + 32) = v28;
  if ( *(_DWORD *)(v23 + 176) )
  {
    getrusage(RUSAGE_SELF, &usage);
    *(double *)(v23 + 200) = (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001
                           + (double)SLODWORD(usage.ru_utime.tv_sec)
                           - *(double *)(v23 + 224)
                           + *(double *)(v23 + 200);
  }
  v29 = *((_QWORD *)this + 1);
  v30 = *((__int64 **)this + 5);
  v112 = (CoinIndexedVector *)v29;
  v31 = *(_DWORD *)(v29 + 108);
  v32 = *((_DWORD *)v30 + 4);
  v109 = (double)*((int *)this + 27) / (double)*(int *)(v29 + 104);
  if ( v10 == 4 )
  {
    if ( (double)*((int *)this + 27) / (double)*(int *)(v29 + 104) < 5.0 )
    {
      v74 = v32 / 10;
      v75 = (int)((unsigned __int64)(1717986919LL * v31) >> 32) >> 3;
LABEL_123:
      v33 = v75 - (v31 >> 31);
      if ( v74 >= v33 )
        v33 = v74;
      if ( v33 < 2000 )
        v33 = 2000;
      goto LABEL_38;
    }
    if ( v109 < 7.0 )
    {
      v74 = v32 / 5;
      v75 = (int)((unsigned __int64)(1717986919LL * v31) >> 32) >> 2;
      goto LABEL_123;
    }
    CoinIndexedVector::clear(a2);
    CoinIndexedVector::clear(a5);
    v85 = *((void **)this + 4);
    ++*((_DWORD *)this + 22);
    *((_DWORD *)this + 23) = -1;
    if ( v85 )
      operator delete[](v85);
    v86 = *(_QWORD *)this;
    *((_QWORD *)this + 4) = 0;
    v87 = *((ClpSimplex **)this + 1);
    v88 = *(__int64 (__fastcall **)(ClpPEPrimalColumnSteepest *, ClpSimplex *, int))(v86 + 16);
    if ( v88 != ClpPEPrimalColumnSteepest::saveWeights )
    {
      v88(this, *((ClpSimplex **)this + 1), 4);
      goto LABEL_184;
    }
    v89 = *((CoinIndexedVector **)this + 14);
    if ( v89 )
    {
      if ( v87 != *((ClpSimplex **)v89 + 12) )
        goto LABEL_181;
      if ( (unsigned __int8)ClpPESimplex::checkSize(*((ClpPESimplex **)this + 14)) )
        goto LABEL_183;
      v89 = *((CoinIndexedVector **)this + 14);
      if ( v89 )
      {
LABEL_181:
        v113 = v89;
        ClpPESimplex::~ClpPESimplex(v89);
        operator delete(v113);
      }
    }
    v114 = (ClpPESimplex *)operator new(0xE8u);
    ClpPESimplex::ClpPESimplex(v114, v87);
    *((_QWORD *)this + 14) = v114;
LABEL_183:
    ClpPrimalColumnSteepest::saveWeights(this, v87, 4);
LABEL_184:
    CoinIndexedVector::clear(a2);
    v30 = *((__int64 **)this + 5);
    v29 = *((_QWORD *)this + 1);
    v80 = *((_DWORD *)v30 + 4);
    v112 = (CoinIndexedVector *)v29;
    goto LABEL_161;
  }
  v33 = 10;
  if ( v10 <= 3 )
  {
    v33 = v32 + 1;
    if ( v10 > 1 )
    {
      if ( v10 == 2 )
      {
        v33 = v32 / 8;
        if ( v32 / 8 < 2000 )
          v33 = 2000;
        goto LABEL_38;
      }
      v80 = *((_DWORD *)v30 + 4);
LABEL_161:
      if ( v109 < 1.0 )
      {
        v33 = v32 / 20;
        v32 = v80;
        if ( v33 < 2000 )
          v33 = 2000;
      }
      else if ( v109 >= 5.0 )
      {
        if ( v109 < 10.0 )
        {
          v93 = v32 / 8;
          v33 = v31 / 20;
          if ( v93 >= v31 / 20 )
            v33 = v93;
          v32 = v80;
          if ( v33 < 2000 )
            v33 = 2000;
        }
        else
        {
          v84 = v109 / 80.0 * (double)v32;
          if ( v84 <= (double)v32 )
          {
            v32 = v80;
            v97 = v31 / 10;
            if ( v31 / 10 < 2000 )
              v97 = 2000;
            v33 = (int)v84;
            if ( v97 >= (int)v84 )
              v33 = v97;
          }
          else
          {
            v33 = v32 + 1;
            v32 = v80;
          }
        }
      }
      else
      {
        v81 = v32;
        v32 = v80;
        v82 = v81 / 10;
        v33 = v31 / 40;
        if ( v82 >= v31 / 40 )
          v33 = v82;
        if ( v33 < 2000 )
          v33 = 2000;
      }
    }
  }
LABEL_38:
  v110 = *v30;
  if ( *(_DWORD *)(v29 + 1328) + 199 >= *(_DWORD *)(v29 + 308) )
  {
    v34 = *(_QWORD *)(v29 + 1264);
    v35 = *(_QWORD *)(v34 + 8);
    v36 = v35 ? *(_DWORD *)(v35 + 68) : *(_DWORD *)(*(_QWORD *)(v34 + 16) + 52LL);
    if ( v36 > 10 )
    {
      v37 = *(double *)(v29 + 768);
      if ( v37 > 0.00000001 )
        v107 = v37 / 0.00000001 * v107;
      v107 = fmin(1000.0, v107);
    }
  }
  v38 = 0;
  if ( v106 >= 0 )
  {
    v39 = (__int64 *)(v12 + 8LL * v106);
    v38 = *v39;
    *v39 = 0;
  }
  v40 = *(_QWORD *)(v29 + 1264);
  v41 = *(_QWORD *)(v40 + 8);
  if ( v41 )
    v42 = *(_DWORD *)(v41 + 68);
  else
    v42 = *(_DWORD *)(*(_QWORD *)(v40 + 16) + 52LL);
  if ( v42 && *(_DWORD *)(v29 + 1232) )
    v107 = fmax(v107, 1.0e-10 * *(double *)(v29 + 904));
  v43 = *(_DWORD *)(v29 + 108);
  v44 = *((double *)this + 15);
  v45 = 0;
  v46 = *((_QWORD *)this + 14);
  v47 = (double)*(int *)(v46 + 48);
  v48 = v107 * v107;
  if ( v44 < 1.0 )
    v45 = v47 / (double)(v43 + *(_DWORD *)(v29 + 104)) >= 0.01;
  HIDWORD(usage.ru_utime.tv_sec) = v32;
  LODWORD(usage.ru_utime.tv_usec) = 0;
  v49 = -1;
  v50 = -1;
  v51 = 1.0e-30;
  if ( v47 / (double)v43 > 0.5 )
    v45 = 0;
  v52 = 1.0e-30;
  v53 = 0;
  v54 = v45;
  v55 = 1664525 * *(_DWORD *)(v29 + 356) + 1013904223;
  *(_DWORD *)(v29 + 356) = v55;
  LODWORD(usage.ru_utime.tv_sec) = (int)((double)v55 * 2.328306436538696e-10 * (double)v32);
  HIDWORD(usage.ru_utime.tv_usec) = usage.ru_utime.tv_sec;
  while ( 1 )
  {
    v56 = *(_DWORD *)((char *)&usage.ru_utime.tv_sec + v53);
    v57 = *(_DWORD *)((char *)&usage.ru_utime.tv_sec + v53 + 4);
    if ( v57 > v56 )
      break;
    if ( !v33 )
      goto LABEL_90;
LABEL_89:
    v53 += 8;
    if ( v53 == 16 )
      goto LABEL_90;
  }
  v58 = *((_QWORD *)this + 4);
  v59 = (int *)(v110 + 4LL * v56);
  v60 = v110 + 4 + 4 * (v56 + (unsigned __int64)(unsigned int)(v57 - 1 - v56));
  if ( v54 )
  {
    while ( 1 )
    {
      v65 = *v59;
      v66 = *(double *)(v58 + 8 * v65);
      v67 = *(double *)(v12 + 8 * v65);
      v68 = fmax(v51 * v66, v44 * (v52 * v66));
      if ( v67 > v48 )
      {
        if ( v67 > v68 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v29 + 264) + v65) & 0x40) != 0 )
          {
            ++v33;
          }
          else if ( *(_BYTE *)(*(_QWORD *)(v46 + 64) + v65) )
          {
            v49 = *v59;
            v51 = v67 / v66;
          }
          else if ( v67 > v52 * v66 )
          {
            v50 = *v59;
            v52 = v67 / v66;
          }
        }
        --v33;
      }
      if ( !v33 )
        break;
      if ( (int *)v60 == ++v59 )
        goto LABEL_89;
    }
  }
  else
  {
    while ( 1 )
    {
      v61 = *v59;
      v62 = *(double *)(v58 + 8 * v61);
      v63 = *(double *)(v12 + 8 * v61);
      v64 = fmax(v51 * v62, v44 * (v52 * v62));
      if ( v63 > v48 )
      {
        if ( v63 > v64 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v29 + 264) + v61) & 0x40) != 0 )
          {
            ++v33;
          }
          else if ( v63 > v52 * v62 )
          {
            v50 = *v59;
            v52 = v63 / v62;
          }
        }
        --v33;
      }
      if ( !v33 )
        break;
      if ( (int *)v60 == ++v59 )
        goto LABEL_89;
    }
  }
LABEL_90:
  if ( v50 < 0 )
  {
    if ( v49 < 0 )
      goto LABEL_114;
    if ( v51 >= v116 * v52 )
      goto LABEL_158;
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v29 + 264) + v50) & 7) != 0 )
    {
      if ( v49 < 0 )
        goto LABEL_95;
      if ( v51 < v116 * v52 )
      {
        v112 = (CoinIndexedVector *)v29;
        goto LABEL_95;
      }
LABEL_130:
      if ( *(_DWORD *)(v46 + 176) && v52 > v51 )
        ++*(_DWORD *)(v46 + 172);
      v112 = (CoinIndexedVector *)v29;
      if ( v44 >= 1.0 )
      {
LABEL_134:
        *(_BYTE *)(v46 + 192) = 0;
        *(_DWORD *)(*((_QWORD *)v112 + 24) + 48LL) = v49;
        goto LABEL_97;
      }
LABEL_137:
      v70 = v49;
      if ( *(_BYTE *)(*(_QWORD *)(v46 + 64) + v49) )
      {
        ++*(_DWORD *)(v46 + 160);
        *(_BYTE *)(v46 + 192) = 1;
        v69 = v112;
        *(_DWORD *)(*((_QWORD *)v112 + 24) + 48LL) = v49;
        goto LABEL_98;
      }
      goto LABEL_134;
    }
    printf("Free in %d compat %c dj %g\n", v50, *(_BYTE *)(*(_QWORD *)(v46 + 64) + v50) == 0 ? 110 : 121, v52);
    v46 = *((_QWORD *)this + 14);
    if ( v49 < 0 )
    {
      v112 = *((CoinIndexedVector **)this + 1);
LABEL_94:
      v44 = *((double *)this + 15);
LABEL_95:
      if ( v44 >= 1.0 )
      {
        *(_BYTE *)(v46 + 192) = 0;
        v49 = v50;
        *(_DWORD *)(*((_QWORD *)v112 + 24) + 48LL) = v50;
LABEL_97:
        v69 = v112;
        v70 = v49;
LABEL_98:
        *(_QWORD *)(*((_QWORD *)v69 + 24) + 32LL) = *(_QWORD *)(*((_QWORD *)v69 + 147) + 8 * v70);
        goto LABEL_99;
      }
      v49 = v50;
      goto LABEL_137;
    }
    v29 = *((_QWORD *)this + 1);
    v51 = 0.0;
    if ( v116 * v52 <= 0.0 )
    {
LABEL_158:
      v44 = *((double *)this + 15);
      goto LABEL_130;
    }
  }
  v112 = (CoinIndexedVector *)v29;
  if ( v50 >= 0 )
    goto LABEL_94;
LABEL_114:
  *(_BYTE *)(v46 + 192) = 0;
  v49 = v50;
  *(_DWORD *)(*(_QWORD *)(v29 + 192) + 48LL) = v50;
LABEL_99:
  if ( v106 >= 0 )
    *(_QWORD *)(v12 + 8LL * v106) = v38;
  *(double *)(v46 + 184) = *(double *)(*(_QWORD *)(v46 + 96) + 72LL) * **(double **)(v46 + 96)
                         - *(double *)(*(_QWORD *)(v46 + 96) + 40LL);
  return (unsigned int)v49;
}

