__int64 __fastcall ClpSimplexOther::parametricsLoop(ClpSimplex *a1, double *a2, ClpDataSave *a3, char a4)
{
  ClpSimplex *v4; // r14
  ClpSimplexProgress *v5; // rdi
  int v8; // r12d
  int *v9; // rax
  __int64 result; // rax
  int v11; // ebp
  ClpSimplex *v12; // r15
  CoinIndexedVector **v13; // r14
  CoinIndexedVector *v14; // rdi
  double v15; // xmm0_8
  double *v16; // rsi
  __int64 v17; // rcx
  int v18; // edx
  int *v19; // rax
  __int64 v20; // r11
  __int64 v21; // rdx
  int v22; // edx
  int *v23; // rax
  __int64 v24; // r10
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rax
  double v32; // xmm0_8
  double v33; // xmm1_8
  double v34; // xmm0_8
  int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rax
  double v41; // xmm0_8
  double v42; // xmm1_8
  double v43; // xmm0_8
  __int64 v44; // rbx
  __int64 v45; // rdi
  double v46; // xmm2_8
  int v47; // ebx
  double v48; // xmm4_8
  int v49; // r8d
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  double v54; // xmm1_8
  double v55; // xmm0_8
  double *v56; // rsi
  double v57; // xmm1_8
  CoinFactorization **v58; // rdi
  __int64 v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rax
  double v62; // xmm1_8
  double v63; // xmm0_8
  double *v64; // rcx
  double v65; // xmm1_8
  double v66; // [rsp+10h] [rbp-88h]
  CoinIndexedVector **v67; // [rsp+18h] [rbp-80h]
  CoinIndexedVector **v69; // [rsp+28h] [rbp-70h]
  __int64 v70; // [rsp+30h] [rbp-68h]
  int *v71; // [rsp+40h] [rbp-58h]
  int *v72; // [rsp+48h] [rbp-50h]
  double *v73[8]; // [rsp+58h] [rbp-40h] BYREF

  v4 = a1;
  v5 = (ClpSimplex *)((char *)a1 + 1408);
  v8 = *((_DWORD *)v5 - 326) + *((_DWORD *)v5 - 325);
  v71 = *((int **)a2 + 5);
  v9 = *((int **)a2 + 7);
  *((_DWORD *)v5 - 272) = -1;
  v72 = v9;
  ClpSimplexProgress::startCheck(v5);
  result = *((unsigned int *)v4 + 80);
  *((_DWORD *)v4 + 324) = 1;
  if ( (int)result < 0 )
  {
    v11 = 0;
    v12 = v4;
    v70 = v8;
    v69 = (CoinIndexedVector **)((char *)v4 + 1056);
    v67 = (CoinIndexedVector **)((char *)v4 + 1104);
    while ( 1 )
    {
      v13 = v69;
      do
      {
        v14 = *v13++;
        CoinIndexedVector::clear(v14);
      }
      while ( v67 != v13 );
      CoinIndexedVector::clear(*((CoinIndexedVector **)v12 + 138));
      CoinIndexedVector::clear(*((CoinIndexedVector **)v12 + 139));
      (*(void (__fastcall **)(_QWORD, ClpSimplex *))(**((_QWORD **)v12 + 24) + 224LL))(*((_QWORD *)v12 + 24), v12);
      if ( !a4 )
        ClpSimplexOther::statusOfProblemInParametrics(v12, v11, a3);
      if ( *((_DWORD *)v12 + 308) )
      {
        if ( *((double *)v12 + 95) > 1000.0 )
        {
          v15 = *a2;
          if ( *a2 > 1.0e10 )
          {
            *((_DWORD *)v12 + 80) = 0;
            v4 = v12;
            a2[1] = v15;
LABEL_58:
            *((double *)v4 + 100) = v15;
            return 0;
          }
        }
        v16 = *((double **)v12 + 123);
        v17 = *((_QWORD *)v12 + 126);
        v18 = *(v71 - 1);
        if ( v18 > 0 )
        {
          v19 = v71;
          v20 = (__int64)&v71[v18 - 1 + 1];
          do
          {
            v21 = *v19++;
            v16[v21] = v16[v70 + v21] * *a2 + v16[v70 + v70 + v21];
          }
          while ( (int *)v20 != v19 );
        }
        v22 = *(v72 - 1);
        if ( v22 > 0 )
        {
          v23 = v72;
          v24 = (__int64)&v72[v22 - 1 + 1];
          do
          {
            v25 = *v23++;
            *(double *)(v17 + 8 * v25) = *(double *)(v17 + v70 * 8 + 8 * v25) * *a2
                                       + *(double *)(v17 + v70 * 8 + v70 * 8 + 8 * v25);
          }
          while ( (int *)v24 != v23 );
        }
        memcpy(*((void **)v12 + 22), v16, 8LL * *((int *)v12 + 27));
        memcpy(
          *((void **)v12 + 18),
          (const void *)(*((_QWORD *)v12 + 123) + 8LL * *((int *)v12 + 27)),
          8LL * *((int *)v12 + 26));
        memcpy(*((void **)v12 + 23), *((const void **)v12 + 126), 8LL * *((int *)v12 + 27));
        memcpy(
          *((void **)v12 + 19),
          (const void *)(*((_QWORD *)v12 + 126) + 8LL * *((int *)v12 + 27)),
          8LL * *((int *)v12 + 26));
        if ( *((_QWORD *)v12 + 28) )
        {
          v26 = *((_DWORD *)v12 + 27);
          if ( v26 > 0 )
          {
            v27 = *((_QWORD *)v12 + 29);
            v28 = *((_QWORD *)v12 + 22);
            v29 = *((_QWORD *)v12 + 23);
            v30 = 8LL * (unsigned int)(v26 - 1) + 8;
            v31 = 0;
            do
            {
              v32 = *(double *)(v28 + v31);
              v33 = *(double *)(v27 + v31);
              if ( v32 > -1.0e20 )
                *(double *)(v28 + v31) = v32 * v33;
              v34 = *(double *)(v29 + v31);
              if ( v34 < 1.0e20 )
                *(double *)(v29 + v31) = v34 * v33;
              v31 += 8;
            }
            while ( v30 != v31 );
          }
          v35 = *((_DWORD *)v12 + 26);
          if ( v35 > 0 )
          {
            v36 = *((_QWORD *)v12 + 30);
            v37 = *((_QWORD *)v12 + 18);
            v38 = *((_QWORD *)v12 + 19);
            v39 = 8LL * (unsigned int)(v35 - 1) + 8;
            v40 = 0;
            do
            {
              v41 = *(double *)(v37 + v40);
              v42 = *(double *)(v36 + v40);
              if ( v41 > -1.0e20 )
                *(double *)(v37 + v40) = v41 * v42;
              v43 = *(double *)(v38 + v40);
              if ( v43 < 1.0e20 )
                *(double *)(v38 + v40) = v43 * v42;
              v40 += 8;
            }
            while ( v39 != v40 );
          }
        }
        *((_DWORD *)v12 + 80) = -1;
        v44 = *((_QWORD *)v12 + 20);
        v73[0] = nullptr;
        ClpSimplexDual::gutsOfDual(v12, 0, v73, -1, a3);
        v45 = *((_QWORD *)v12 + 20);
        if ( v45 != v44 )
        {
          if ( v45 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 80LL))(v45);
          *((_QWORD *)v12 + 20) = v44;
        }
        if ( *((double *)v12 + 112) != 0.0 )
        {
          v46 = 0.0;
          v47 = 99;
          v48 = 0.000000001;
          while ( 1 )
          {
            v49 = *((_DWORD *)v12 + 27);
            *((_DWORD *)v12 + 80) = -1;
            if ( v8 > v49 )
              break;
LABEL_44:
            if ( v46 == 0.0 && v49 > 0 )
            {
              v59 = *((_QWORD *)v12 + 150);
              v60 = *((_QWORD *)v12 + 123);
              v61 = 0;
              do
              {
                v62 = *(double *)(v60 + v61);
                v63 = *(double *)(v59 + v61);
                if ( v62 - 0.000000001 > v63 )
                {
                  *(double *)(v60 + v61) = v63;
                  v46 = v46 + v62 - v63;
                }
                else
                {
                  v64 = (double *)(v61 + *((_QWORD *)v12 + 126));
                  v65 = *v64;
                  if ( v63 > *v64 + 0.000000001 )
                  {
                    *v64 = v63;
                    v46 = v46 + v65 - v63;
                  }
                }
                v61 += 8;
              }
              while ( v61 != 8LL * (unsigned int)(v49 - 1) + 8 );
            }
            v66 = v48;
            ClpSimplexDual::gutsOfDual(v12, 1, v73, -1, a3);
            v48 = v66;
            if ( *((double *)v12 + 112) != 0.0 )
            {
              if ( --v47 )
                continue;
            }
            goto LABEL_47;
          }
          v50 = *((_QWORD *)v12 + 150);
          v51 = 8LL * v49;
          v52 = *((_QWORD *)v12 + 123);
          v53 = 8 * (v49 + (unsigned __int64)(unsigned int)(v8 - v49 - 1) + 1);
          while ( 2 )
          {
            while ( 1 )
            {
              v54 = *(double *)(v52 + v51);
              v55 = *(double *)(v50 + v51);
              if ( v54 - v48 > v55 )
                break;
              v56 = (double *)(v51 + *((_QWORD *)v12 + 126));
              v57 = *v56;
              if ( v55 <= *v56 + v48 )
                goto LABEL_40;
              v51 += 8;
              *v56 = v55;
              v46 = v46 + v57 - v55;
              if ( v53 == v51 )
                goto LABEL_44;
            }
            *(double *)(v52 + v51) = v55;
            v46 = v46 + v54 - v55;
LABEL_40:
            v51 += 8;
            if ( v53 == v51 )
              goto LABEL_44;
            continue;
          }
        }
      }
LABEL_47:
      if ( *((_DWORD *)a3 + 14) )
      {
        v58 = *((CoinFactorization ***)v12 + 158);
        if ( v58[1] )
        {
          CoinFactorization::sparseThreshold(v58[1], 0);
          v58 = *((CoinFactorization ***)v12 + 158);
        }
        ClpFactorization::goSparse((ClpFactorization *)v58);
      }
      result = *((unsigned int *)v12 + 80);
      if ( (int)result >= 0 && *a2 >= a2[1] - 0.0000001 )
      {
LABEL_55:
        v4 = v12;
        break;
      }
      a4 = ClpModel::hitMaximumIterations(v12);
      if ( a4 )
      {
        *((_DWORD *)v12 + 80) = 3;
        return 3;
      }
      *((_DWORD *)v12 + 80) = -1;
      v11 = 1;
      ClpSimplexOther::whileIterating(v12);
      result = *((unsigned int *)v12 + 80);
      if ( (int)result >= 0 )
        goto LABEL_55;
    }
  }
  if ( !(_DWORD)result )
  {
    v15 = a2[1];
    goto LABEL_58;
  }
  if ( (_DWORD)result == 10 )
    return 0xFFFFFFFFLL;
  return result;
}

