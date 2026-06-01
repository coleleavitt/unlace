__int64 __fastcall ClpPrimalColumnSteepest::pivotColumn(
        ClpPrimalColumnSteepest *this,
        double **a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        CoinIndexedVector *a5,
        CoinIndexedVector *a6)
{
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // ebp
  __int64 v12; // rdi
  __int64 v13; // r13
  int v14; // r15d
  void (__fastcall *v15)(__int64, __int64, double **, _QWORD, __int64); // rax
  int v16; // eax
  CoinIndexedVector *v17; // r9
  __int64 v18; // rax
  __int64 v19; // r15
  int v20; // eax
  __int64 v21; // rax
  __int64 result; // rax
  __int64 v23; // rax
  int v24; // edx
  char v25; // al
  __int64 v26; // r8
  __int64 v27; // rdx
  int **v28; // r9
  __int64 v29; // rsi
  double v30; // xmm1_8
  __int64 v31; // r14
  __int64 v32; // rdx
  double v33; // xmm0_8
  unsigned __int8 v34; // al
  int v35; // r8d
  double v36; // xmm0_8
  double v37; // xmm0_8
  int v38; // edi
  int v39; // ecx
  int *v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rax
  int v43; // eax
  double v44; // xmm0_8
  __int64 v45; // xmm6_8
  __int64 *v46; // rax
  __int64 v47; // r8
  __int64 v48; // rax
  int v49; // eax
  double v50; // xmm1_8
  __int64 v51; // r9
  double v52; // xmm4_8
  __int64 v53; // r8
  __int64 v54; // rcx
  double v55; // xmm0_8
  double *v56; // rdx
  __int64 v57; // rcx
  void *v58; // rdi
  __int64 v59; // rax
  int v60; // edx
  int v61; // edx
  int v62; // ecx
  void *v63; // rdi
  ClpSimplex *v64; // r8
  int v65; // eax
  __int64 v66; // r11
  double v67; // xmm2_8
  ClpPrimalColumnSteepest *v68; // r14
  double v69; // xmm0_8
  double v70; // xmm2_8
  int v71; // r9d
  int v72; // r8d
  int *v73; // rdi
  int *v74; // rbx
  __int64 v75; // r8
  double v76; // xmm0_8
  double v77; // xmm3_8
  __int64 v78; // rax
  int v79; // ebp
  int v80; // eax
  int v81; // ecx
  double v82; // xmm0_8
  int v83; // eax
  int v84; // ecx
  double v85; // xmm0_8
  int *v86; // rdi
  int *v87; // rbx
  __int64 v88; // r8
  double v89; // xmm0_8
  int v90; // r11d
  int v91; // eax
  int v92; // r8d
  void *v93; // rdi
  int v94; // r8d
  __int64 v95; // rax
  __int64 v96; // rsi
  double *v97; // rdx
  double v98; // xmm0_8
  bool v99; // al
  int v100; // r14d
  bool v101; // al
  __int64 v102; // rax
  double v103; // xmm0_8
  double v105; // [rsp+10h] [rbp-68h]
  CoinIndexedVector *v107; // [rsp+10h] [rbp-68h]
  double v108; // [rsp+18h] [rbp-60h]
  int v110; // [rsp+18h] [rbp-60h]
  int v111; // [rsp+18h] [rbp-60h]
  int v112; // [rsp+18h] [rbp-60h]
  int v115; // [rsp+20h] [rbp-58h]
  unsigned int v116; // [rsp+20h] [rbp-58h]
  int v117; // [rsp+20h] [rbp-58h]
  CoinIndexedVector *v118; // [rsp+28h] [rbp-50h]
  int v119; // [rsp+30h] [rbp-48h]
  _DWORD v120[17]; // [rsp+34h] [rbp-44h]

  v9 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(*(_QWORD *)(v9 + 1320) + 149LL) || *(_DWORD *)(v9 + 1300) == 2 )
  {
    CoinIndexedVector::expand((CoinIndexedVector *)a2);
    return ClpPrimalColumnSteepest::pivotColumnOldMethod(this, (CoinIndexedVector *)a2, a3, a4, a5, a6);
  }
  v10 = *((_QWORD *)this + 5);
  v11 = *((_DWORD *)this + 19);
  v12 = *(_QWORD *)(v9 + 192);
  v13 = *(_QWORD *)(v10 + 8);
  v14 = *(_DWORD *)(v9 + 1168);
  v108 = *(double *)(v9 + 872);
  v15 = *(void (__fastcall **)(__int64, __int64, double **, _QWORD, __int64))(*(_QWORD *)v12 + 312LL);
  v105 = fmin(0.01, *(double *)(v9 + 768));
  if ( v11 == 4 )
  {
    v11 = 5 - *((_DWORD *)this + 22);
LABEL_12:
    v15(v12, v9, a2, 0, 4);
    v16 = *((_DWORD *)a2 + 4);
    v17 = a6;
    if ( v16 > 1 )
      goto LABEL_13;
    goto LABEL_67;
  }
  if ( v11 <= 9 )
    goto LABEL_12;
  v11 = 3;
  v15(v12, v9, a2, 0, 4);
  v16 = *((_DWORD *)a2 + 4);
  v17 = a6;
  if ( v16 <= 1 )
  {
LABEL_67:
    if ( !v16 )
    {
      v62 = *((_DWORD *)this + 23);
      v23 = *((_QWORD *)this + 1);
      v19 = *(int *)(v23 + 1160);
      v24 = ~v62 >> 31;
      if ( v11 != 5 )
      {
        *(_DWORD *)(v23 + 1736) = -3;
        if ( v62 >= 0 )
        {
          if ( v11 > 3 )
          {
            ClpPrimalColumnSteepest::justDevex(this, (CoinIndexedVector *)a2, a4, a5, v17);
            v20 = *((_DWORD *)this + 20);
            if ( v20 == 2 )
              goto LABEL_8;
          }
          else
          {
            ClpPrimalColumnSteepest::justSteepest(this, (CoinIndexedVector *)a2, a4, a5, v17);
            v20 = *((_DWORD *)this + 20);
            if ( v20 == 2 )
              goto LABEL_8;
          }
          goto LABEL_22;
        }
        goto LABEL_98;
      }
LABEL_19:
      v118 = v17;
      v115 = v24;
      v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v23 + 192) + 272LL))(*(_QWORD *)(v23 + 192));
      v27 = (unsigned int)v115;
      if ( !v25 )
      {
        *(_DWORD *)(*((_QWORD *)this + 1) + 1736LL) = -3;
        if ( v115 > 0 )
        {
          v11 = 5;
          ClpPrimalColumnSteepest::justDjs(this, (CoinIndexedVector *)a2, a4, a5, v118);
          v20 = *((_DWORD *)this + 20);
          if ( v20 == 2 )
            goto LABEL_8;
        }
        else
        {
          v20 = *((_DWORD *)this + 20);
          v11 = 5;
          if ( v20 == 2 )
            goto LABEL_8;
        }
        goto LABEL_22;
      }
      v78 = *((_QWORD *)this + 1);
      *((_DWORD *)this + 23) = -1;
      v79 = *(_DWORD *)(v78 + 108);
      v116 = *(_DWORD *)(v78 + 104);
      v80 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, CoinIndexedVector *))(**(_QWORD **)(v78 + 192) + 280LL))(
              *(_QWORD *)(v78 + 192),
              v9,
              v27,
              v116,
              v26,
              v118);
      v64 = *((ClpSimplex **)this + 1);
      v81 = v79 / 10;
      if ( v79 / 10 > *((_DWORD *)v64 + 306) )
        v81 = *((_DWORD *)v64 + 306);
      v82 = (double)(v80 + *((_DWORD *)this + 27)) / (double)(int)(v116 + 2 * v80);
      if ( v82 < 1.0 )
      {
        v83 = v81 / 20;
        v84 = 100;
        if ( v83 >= 100 )
          v84 = v83;
        return ClpPrimalColumnSteepest::partialPricing(this, (CoinIndexedVector *)a2, a4, v84, 5 * v83);
      }
      if ( v82 < 3.0 )
      {
        v83 = v81 / 15;
        v84 = 500;
        if ( v83 >= 500 )
          v84 = v83;
        return ClpPrimalColumnSteepest::partialPricing(this, (CoinIndexedVector *)a2, a4, v84, 5 * v83);
      }
      if ( v82 < 4.0 || *((_DWORD *)this + 19) == 5 )
      {
        v83 = v81 / 10;
        v84 = 1000;
        if ( v83 >= 1000 )
          v84 = v83;
        return ClpPrimalColumnSteepest::partialPricing(this, (CoinIndexedVector *)a2, a4, v84, 5 * v83);
      }
      v63 = *((void **)this + 4);
      ++*((_DWORD *)this + 22);
      if ( v63 )
      {
        operator delete[](v63);
        v64 = *((ClpSimplex **)this + 1);
      }
      *((_QWORD *)this + 4) = 0;
      ClpSimplex::computeDuals(v64, nullptr);
      v11 = 4;
      (*(void (__fastcall **)(ClpPrimalColumnSteepest *, _QWORD, __int64))(*(_QWORD *)this + 16LL))(
        this,
        *((_QWORD *)this + 1),
        4);
      *(_DWORD *)(*((_QWORD *)this + 1) + 1736LL) = -3;
LABEL_98:
      v20 = *((_DWORD *)this + 20);
      if ( v20 == 2 )
        goto LABEL_8;
      goto LABEL_22;
    }
    if ( *(_DWORD *)*a2 == v14 )
    {
      v23 = *((_QWORD *)this + 1);
      v19 = *(int *)(v23 + 1160);
      if ( fabs(*a2[1]) > 0.000001 )
      {
        if ( v11 != 5 )
        {
          *(_DWORD *)(v23 + 1736) = -3;
          if ( v11 > 3 )
          {
            ClpPrimalColumnSteepest::djsAndDevex(this, (CoinIndexedVector *)a2, a4, a5, v17);
            v20 = *((_DWORD *)this + 20);
            if ( v20 == 2 )
              goto LABEL_8;
          }
          else
          {
            ClpPrimalColumnSteepest::djsAndSteepest(this, (CoinIndexedVector *)a2, a4, a5, v17);
            v57 = *((_QWORD *)this + 1);
            result = *(unsigned int *)(v57 + 1736);
            if ( (int)result >= -1 )
            {
              *((_DWORD *)this + 20) = 1;
              *(_DWORD *)(*(_QWORD *)(v57 + 192) + 48LL) = result;
              if ( (_DWORD)result != -1 )
                *(_QWORD *)(*(_QWORD *)(v57 + 192) + 32LL) = *(_QWORD *)(*(_QWORD *)(v57 + 1176) + 8LL * (int)result);
              return result;
            }
            if ( (_DWORD)result == -2 )
            {
              ClpPrimalColumnSteepest::redoInfeasibilities(this);
              v20 = *((_DWORD *)this + 20);
              if ( v20 == 2 )
                goto LABEL_8;
            }
            else
            {
              v20 = *((_DWORD *)this + 20);
              if ( v20 == 2 )
              {
                *((_DWORD *)this + 20) = 1;
                *(_DWORD *)(*(_QWORD *)(v57 + 192) + 48LL) = -1;
                return 0xFFFFFFFFLL;
              }
            }
          }
          goto LABEL_22;
        }
        v24 = 1;
        goto LABEL_19;
      }
      if ( v11 == 5 )
        goto LABEL_18;
      goto LABEL_14;
    }
LABEL_13:
    v23 = *((_QWORD *)this + 1);
    v19 = *(int *)(v23 + 1160);
    if ( v11 == 5 )
    {
LABEL_18:
      v24 = 2;
      goto LABEL_19;
    }
LABEL_14:
    *(_DWORD *)(v23 + 1736) = -3;
    if ( v11 > 3 )
    {
      ClpPrimalColumnSteepest::djsAndDevex2(this, (CoinIndexedVector *)a2, a4, a5, v17);
      v20 = *((_DWORD *)this + 20);
      if ( v20 == 2 )
        goto LABEL_8;
      goto LABEL_22;
    }
    goto LABEL_7;
  }
  v18 = *((_QWORD *)this + 1);
  v11 = 3;
  v19 = *(int *)(v18 + 1160);
  *(_DWORD *)(v18 + 1736) = -3;
LABEL_7:
  ClpPrimalColumnSteepest::djsAndSteepest2(this, (CoinIndexedVector *)a2, a4, a5, v17);
  v20 = *((_DWORD *)this + 20);
  if ( v20 == 2 )
  {
LABEL_8:
    v21 = *((_QWORD *)this + 1);
    *((_DWORD *)this + 20) = 1;
    *(_DWORD *)(*(_QWORD *)(v21 + 192) + 48LL) = -1;
    return 0xFFFFFFFFLL;
  }
LABEL_22:
  if ( v20 == 1 )
    ClpPrimalColumnSteepest::redoInfeasibilities(this);
  v28 = *((int ***)this + 5);
  v29 = *((_QWORD *)this + 1);
  v30 = v105 + v108;
  v31 = *((int *)v28 + 4);
  if ( (int)v19 >= 0 )
  {
    v32 = 2LL * (int)v19;
    v33 = *(double *)(*(_QWORD *)(v29 + 1176) + v32 * 4);
    v34 = *(_BYTE *)(*(_QWORD *)(v29 + 264) + (int)v19) & 7;
    if ( v34 == 2 )
    {
      if ( v33 > v30 )
        goto LABEL_126;
    }
    else
    {
      if ( v34 <= 2u )
      {
        if ( v34 )
          goto LABEL_29;
        goto LABEL_64;
      }
      if ( v34 != 3 )
      {
        if ( v34 != 4 )
          goto LABEL_29;
LABEL_64:
        if ( fabs(v33) <= 100.0 * v30 )
          goto LABEL_65;
        v33 = v33 * 10.0;
        goto LABEL_126;
      }
      if ( -v30 > v33 )
      {
LABEL_126:
        v85 = v33 * v33;
        if ( *(double *)(v13 + 8LL * (int)v19) == 0.0 )
        {
          v97 = (double *)&v28[1][v32];
          if ( *v97 == 0.0 )
          {
            if ( v85 <= 0.0 )
              v101 = v85 <= -1.0e-50;
            else
              v101 = v85 >= 1.0e-50;
            if ( v101 )
            {
              v102 = (__int64)*v28;
              *((_DWORD *)v28 + 4) = v31 + 1;
              *(_DWORD *)(v102 + 4 * v31) = v19;
              *v97 = v85;
              LODWORD(v31) = *((_DWORD *)v28 + 4);
            }
          }
          else
          {
            v98 = v85 + *v97;
            if ( v98 <= 0.0 )
              v99 = v98 <= -1.0e-50;
            else
              v99 = v98 >= 1.0e-50;
            if ( v99 )
              *v97 = v98;
            else
              *v97 = 1.0e-100;
          }
        }
        else
        {
          *(double *)(v13 + 8LL * (int)v19) = v85;
        }
        goto LABEL_29;
      }
    }
LABEL_65:
    v56 = (double *)&v28[1][v32];
    if ( *v56 != 0.0 )
      *v56 = 2.225073858507201e-308;
  }
LABEL_29:
  v35 = *(_DWORD *)(v29 + 108);
  v36 = (double)*((int *)this + 27);
  if ( v11 == 5 )
  {
    *((_DWORD *)this + 23) = -1;
    v38 = *((_DWORD *)this + 19);
    if ( v36 / (double)*(int *)(v29 + 104) < 1.0 )
    {
      v39 = (int)v31 / 200;
      LODWORD(v31) = *((_DWORD *)v28 + 4);
      if ( v39 < 100 )
        v39 = 100;
      goto LABEL_36;
    }
    if ( v38 == 5 )
    {
      v92 = v35 / 30;
      if ( v92 < 2000 )
        v92 = 2000;
      v39 = (int)v31 / 10;
      LODWORD(v31) = *((_DWORD *)v28 + 4);
      if ( v92 >= v39 )
        v39 = v92;
      goto LABEL_36;
    }
    v58 = *((void **)this + 4);
    ++*((_DWORD *)this + 22);
    if ( v58 )
    {
      v110 = v35;
      operator delete[](v58);
      v29 = *((_QWORD *)this + 1);
      v35 = v110;
    }
    v59 = *(_QWORD *)this;
    v111 = v35;
    *((_QWORD *)this + 4) = 0;
    (*(void (__fastcall **)(ClpPrimalColumnSteepest *, __int64, __int64))(v59 + 16))(this, v29, 4);
    v29 = *((_QWORD *)this + 1);
    v35 = v111;
    v37 = (double)*((int *)this + 27) / (double)*(int *)(v29 + 104);
LABEL_80:
    if ( v37 >= 5.0 )
    {
      if ( v37 >= 7.0 )
      {
        v117 = v35;
        CoinIndexedVector::clear((CoinIndexedVector *)a2);
        CoinIndexedVector::clear(a5);
        v93 = *((void **)this + 4);
        ++*((_DWORD *)this + 22);
        *((_DWORD *)this + 23) = -1;
        v94 = v117;
        if ( v93 )
        {
          operator delete[](v93);
          v94 = v117;
        }
        v95 = *(_QWORD *)this;
        v112 = v94;
        v96 = *((_QWORD *)this + 1);
        *((_QWORD *)this + 4) = 0;
        (*(void (__fastcall **)(ClpPrimalColumnSteepest *, __int64, __int64))(v95 + 16))(this, v96, 4);
        CoinIndexedVector::clear((CoinIndexedVector *)a2);
        v28 = *((int ***)this + 5);
        v29 = *((_QWORD *)this + 1);
        v38 = *((_DWORD *)this + 19);
        v35 = v112;
        v90 = *((_DWORD *)v28 + 4);
        goto LABEL_141;
      }
      v39 = v35 / 10;
      if ( v35 / 10 < 2000 )
        v39 = 2000;
      v60 = (int)((unsigned __int64)(1717986919LL * (int)v31) >> 32) >> 1;
    }
    else
    {
      v39 = v35 / 20;
      if ( v35 / 20 < 2000 )
        v39 = 2000;
      v60 = (int)((unsigned __int64)(1717986919LL * (int)v31) >> 32) >> 2;
    }
    v28 = *((int ***)this + 5);
    v38 = *((_DWORD *)this + 19);
    v61 = v60 - ((int)v31 >> 31);
    v11 = 4;
    if ( v39 < v61 )
      v39 = v61;
    LODWORD(v31) = *((_DWORD *)v28 + 4);
    goto LABEL_36;
  }
  v37 = v36 / (double)*(int *)(v29 + 104);
  if ( v11 == 4 )
    goto LABEL_80;
  v38 = *((_DWORD *)this + 19);
  v39 = 10;
  if ( v11 <= 3 )
  {
    v39 = 2147483646;
    if ( v11 > 1 )
    {
      if ( v11 == 2 )
      {
        v39 = (int)v31 / 8;
        if ( (int)v31 / 8 < 2000 )
          v39 = 2000;
        goto LABEL_36;
      }
      v90 = v31;
LABEL_141:
      if ( v37 < 1.0 )
      {
        v11 = 3;
        v39 = (int)v31 / 20;
        LODWORD(v31) = v90;
        if ( v39 < 2000 )
          v39 = 2000;
      }
      else if ( v37 >= 5.0 )
      {
        if ( v37 >= 10.0 )
        {
          v103 = v37 / 80.0 * (double)(int)v31;
          if ( v103 <= (double)(int)v31 )
          {
            LODWORD(v31) = v90;
            v11 = 3;
            v39 = v35 / 10;
            if ( v35 / 10 < 2000 )
              v39 = 2000;
            if ( v39 < (int)v103 )
              v39 = (int)v103;
          }
          else
          {
            v39 = v31 + 1;
            v11 = 3;
            LODWORD(v31) = v90;
          }
        }
        else
        {
          v11 = 3;
          v39 = v35 / 20;
          if ( v35 / 20 < 2000 )
            v39 = 2000;
          v100 = (int)v31 / 8;
          if ( v39 < v100 )
            v39 = v100;
          LODWORD(v31) = v90;
        }
      }
      else
      {
        v39 = v35 / 40;
        if ( v35 / 40 < 2000 )
          v39 = 2000;
        v11 = 3;
        v91 = (int)v31 / 10;
        LODWORD(v31) = v90;
        if ( v39 < v91 )
          v39 = v91;
      }
    }
  }
LABEL_36:
  v40 = *v28;
  if ( *(_DWORD *)(v29 + 1328) + 199 >= *(_DWORD *)(v29 + 308) )
  {
    v41 = *(_QWORD *)(v29 + 1264);
    v42 = *(_QWORD *)(v41 + 8);
    v43 = v42 ? *(_DWORD *)(v42 + 68) : *(_DWORD *)(*(_QWORD *)(v41 + 16) + 52LL);
    if ( v43 > 10 )
    {
      v44 = *(double *)(v29 + 768);
      if ( v44 > 0.00000001 )
        v30 = v30 * (v44 / 0.00000001);
      v30 = fmin(1000.0, v30);
    }
  }
  v45 = 0;
  if ( (int)v19 >= 0 )
  {
    v46 = (__int64 *)(v13 + 8LL * (int)v19);
    v45 = *v46;
    *v46 = 0;
  }
  v47 = *(_QWORD *)(v29 + 1264);
  v48 = *(_QWORD *)(v47 + 8);
  if ( v48 )
    v49 = *(_DWORD *)(v48 + 68);
  else
    v49 = *(_DWORD *)(*(_QWORD *)(v47 + 16) + 52LL);
  if ( v49 && *(_DWORD *)(v29 + 1232) )
    v30 = fmax(v30, 1.0e-15 * *(double *)(v29 + 904));
  v50 = v30 * v30;
  if ( v38 <= 1 )
  {
    v51 = *((_QWORD *)this + 4);
    if ( (int)v31 > 0 )
    {
      v52 = 1.0e-30;
      v53 = (__int64)&v40[(unsigned int)(v31 - 1) + 1];
      result = 0xFFFFFFFFLL;
      do
      {
        v54 = *v40;
        v55 = *(double *)(v13 + 8 * v54);
        if ( v55 > v50
          && v55 > *(double *)(v51 + 8 * v54) * v52
          && (*(_BYTE *)(*(_QWORD *)(v29 + 264) + v54) & 0x40) == 0 )
        {
          result = (unsigned int)v54;
          v52 = v55 / *(double *)(v51 + 8 * v54);
        }
        ++v40;
      }
      while ( (int *)v53 != v40 );
      if ( v52 > 1.0e-30 )
        goto LABEL_59;
    }
    *(_DWORD *)(*(_QWORD *)(v29 + 192) + 48LL) = -1;
    result = 0xFFFFFFFFLL;
    goto LABEL_61;
  }
  v65 = 1664525 * *(_DWORD *)(v29 + 356);
  v120[0] = v31;
  v120[1] = 0;
  v66 = 0;
  v67 = (double)(int)v31;
  v65 += 1013904223;
  v68 = this;
  *(_DWORD *)(v29 + 356) = v65;
  v107 = (CoinIndexedVector *)(v40 + 1);
  v69 = (double)v65 * 2.328306436538696e-10 * v67;
  v70 = 1.0e-30;
  v119 = (int)v69;
  v120[2] = (int)v69;
  result = 0xFFFFFFFFLL;
  while ( 1 )
  {
    v71 = v120[v66 - 1];
    v72 = v120[v66];
    if ( v11 > 4 )
      break;
    if ( v72 > v71 )
    {
      v73 = &v40[v71];
      v74 = (int *)((char *)v107 + 4 * v71 + 4 * (unsigned __int64)(unsigned int)(v72 - 1 - v71));
      while ( 1 )
      {
        v75 = *v73;
        v76 = *(double *)(v13 + 8 * v75);
        if ( v76 > v50 )
        {
          v77 = *(double *)(*((_QWORD *)v68 + 4) + 8 * v75);
          if ( v76 > v70 * v77 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(v29 + 264) + v75) & 0x40) != 0 )
            {
              ++v39;
            }
            else
            {
              result = (unsigned int)v75;
              v70 = v76 / v77;
            }
          }
          --v39;
        }
        if ( !v39 )
          goto LABEL_59;
        if ( v74 == ++v73 )
          goto LABEL_163;
      }
    }
LABEL_162:
    if ( !v39 )
      goto LABEL_59;
LABEL_163:
    v66 += 2;
    if ( v66 == 4 )
      goto LABEL_59;
  }
  if ( v72 <= v71 )
    goto LABEL_162;
  v86 = &v40[v71];
  v87 = (int *)((char *)v107 + 4 * (unsigned int)(v72 - 1 - v71) + 4 * (__int64)v71);
  while ( 1 )
  {
    v88 = *v86;
    v89 = *(double *)(v13 + 8 * v88);
    if ( v89 > v50 )
    {
      if ( v89 > v70 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v29 + 264) + v88) & 0x40) != 0 )
        {
          ++v39;
        }
        else
        {
          v70 = *(double *)(v13 + 8 * v88);
          result = (unsigned int)v88;
        }
      }
      --v39;
    }
    if ( !v39 )
      break;
    if ( v87 == ++v86 )
      goto LABEL_163;
  }
LABEL_59:
  *(_DWORD *)(*(_QWORD *)(v29 + 192) + 48LL) = result;
  if ( (int)result >= 0 )
    *(_QWORD *)(*(_QWORD *)(v29 + 192) + 32LL) = *(_QWORD *)(*(_QWORD *)(v29 + 1176) + 8LL * (int)result);
LABEL_61:
  if ( (int)v19 >= 0 )
    *(_QWORD *)(v13 + 8 * v19) = v45;
  return result;
}

