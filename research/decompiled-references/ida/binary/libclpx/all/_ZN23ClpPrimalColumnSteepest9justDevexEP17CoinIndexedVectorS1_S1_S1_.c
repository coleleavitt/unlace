CoinIndexedVector *__fastcall ClpPrimalColumnSteepest::justDevex(
        ClpPrimalColumnSteepest *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        CoinIndexedVector *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rcx
  double v12; // xmm0_8
  double *v13; // rax
  int v14; // ebp
  __int64 v15; // xmm3_8
  __int64 v16; // r14
  __int64 v17; // r8
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // r11
  __int64 v21; // r10
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // r10
  double v25; // xmm0_8
  signed int v26; // edx
  double *v27; // rcx
  double v28; // xmm1_8
  int v29; // esi
  double v30; // xmm0_8
  double v31; // xmm1_8
  int v32; // eax
  __int64 v33; // r10
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r11
  __int64 v37; // rax
  __int64 v38; // r9
  double v39; // xmm0_8
  __int64 v40; // rdx
  double *v41; // rsi
  int v42; // ecx
  double v43; // xmm1_8
  double v44; // xmm0_8
  double v45; // xmm1_8
  int v48; // [rsp+14h] [rbp-44h] BYREF
  double v49[8]; // [rsp+18h] [rbp-40h] BYREF

  v9 = *((_QWORD *)this + 1);
  v10 = *((_QWORD *)this + 5);
  v11 = *(_QWORD *)(v9 + 1256);
  v12 = *(double *)(v9 + 832);
  v48 = *((_DWORD *)this + 23);
  v49[0] = v12;
  v13 = (double *)(*(_QWORD *)(v10 + 8) + 8LL * *(int *)(v11 + 4LL * v48));
  if ( *v13 != 0.0 )
    *v13 = 2.225073858507201e-308;
  v14 = *(_DWORD *)(v9 + 1160);
  v15 = 0;
  if ( v14 >= 0 )
    v15 = *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * v14);
  *((_DWORD *)this + 23) = -1;
  v49[0] = -1.0;
  CoinIndexedVector::createPacked(a2, 1, &v48, v49);
  ClpFactorization::updateColumnTranspose(*(ClpFactorization **)(*((_QWORD *)this + 1) + 1264LL), a3, a2);
  (*(void (__fastcall **)(_QWORD, _QWORD, CoinIndexedVector *, CoinIndexedVector *, CoinIndexedVector *, double))(**(_QWORD **)(*((_QWORD *)this + 1) + 192LL) + 392LL))(
    *(_QWORD *)(*((_QWORD *)this + 1) + 192LL),
    *((_QWORD *)this + 1),
    a2,
    a5,
    a4,
    -1.0);
  v16 = *(_QWORD *)a2;
  v17 = *((_QWORD *)a2 + 1);
  v18 = *((_QWORD *)this + 4);
  v19 = *((_DWORD *)a2 + 4);
  v20 = *(int *)(*((_QWORD *)this + 1) + 108LL);
  if ( v19 > 0 )
  {
    v21 = (unsigned int)(v19 - 1);
    v22 = *((_QWORD *)this + 8);
    v23 = 0;
    v24 = v21 + 1;
    do
    {
      while ( 1 )
      {
        v25 = *(double *)(v17 + 8 * v23);
        v26 = v20 + *(_DWORD *)(v16 + 4 * v23);
        v27 = (double *)(v18 + 8 * v20 + 8LL * *(int *)(v16 + 4 * v23));
        v28 = *v27;
        *(_QWORD *)(v17 + 8 * v23) = 0;
        v29 = *(_DWORD *)(v22 + 4LL * (v26 >> 5));
        v30 = v25 * v25 * *((double *)this + 3);
        if ( _bittest(&v29, v26) )
          v30 = v30 + 1.0;
        v31 = v28 * 0.99;
        if ( v31 <= v30 )
          break;
        ++v23;
        *v27 = v31;
        if ( v23 == v24 )
          goto LABEL_11;
      }
      ++v23;
      *v27 = v30;
    }
    while ( v24 != v23 );
  }
LABEL_11:
  v32 = *((_DWORD *)a4 + 4);
  v33 = *(_QWORD *)a4;
  v34 = *((_QWORD *)a4 + 1);
  if ( v32 > 0 )
  {
    v35 = (unsigned int)(v32 - 1);
    v36 = *((_QWORD *)this + 8);
    v37 = 0;
    v38 = v35 + 1;
    do
    {
      while ( 1 )
      {
        v39 = *(double *)(v34 + 8 * v37);
        v40 = *(int *)(v33 + 4 * v37);
        v41 = (double *)(v18 + 8 * v40);
        v42 = *(_DWORD *)(v36 + 4LL * ((int)v40 >> 5));
        v43 = *v41;
        *(_QWORD *)(v34 + 8 * v37) = 0;
        v44 = v39 * v39 * *((double *)this + 3);
        if ( _bittest(&v42, v40) )
          v44 = v44 + 1.0;
        v45 = v43 * 0.99;
        if ( v45 <= v44 )
          break;
        ++v37;
        *v41 = v45;
        if ( v37 == v38 )
          goto LABEL_17;
      }
      ++v37;
      *v41 = v44;
    }
    while ( v37 != v38 );
  }
LABEL_17:
  if ( v14 >= 0 )
    *(_QWORD *)(v18 + 8LL * v14) = v15;
  *((_DWORD *)a5 + 4) = 0;
  *((_BYTE *)a5 + 28) = 0;
  *((_DWORD *)a2 + 4) = 0;
  *((_BYTE *)a2 + 28) = 0;
  *((_DWORD *)a4 + 4) = 0;
  *((_BYTE *)a4 + 28) = 0;
  return a5;
}

