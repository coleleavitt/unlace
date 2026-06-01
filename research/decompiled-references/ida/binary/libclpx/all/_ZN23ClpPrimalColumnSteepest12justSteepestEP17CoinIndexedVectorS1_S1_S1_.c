__int64 __fastcall ClpPrimalColumnSteepest::justSteepest(
        ClpPrimalColumnSteepest *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        CoinIndexedVector *a5)
{
  __int64 v8; // xmm4_8
  __int64 v10; // rax
  __int64 v11; // rdx
  double v12; // xmm0_8
  __int64 v13; // rcx
  __int64 v14; // rsi
  double *v15; // rcx
  __int64 v16; // xmm5_8
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  CoinIndexedVector *v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rdi
  signed int v24; // ecx
  double v25; // xmm3_8
  int v26; // esi
  double v27; // xmm0_8
  double v28; // xmm0_8
  __int64 v29; // rsi
  double v30; // xmm0_8
  double v31; // xmm3_8
  int v32; // ecx
  double *v33; // rdx
  double v34; // xmm1_8
  int v35; // eax
  __int64 v36; // r10
  __int64 v37; // r11
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // r8
  double v43; // xmm7_8
  int v44; // r9d
  double v45; // xmm0_8
  double v46; // xmm0_8
  double v47; // xmm1_8
  __int64 v48; // rcx
  double *v49; // rdx
  double v50; // xmm7_8
  double v51; // xmm2_8
  double v52; // xmm3_8
  __int64 result; // rax
  int v55; // [rsp+Ch] [rbp-7Ch]
  double v56; // [rsp+10h] [rbp-78h]
  __int64 v57; // [rsp+18h] [rbp-70h]
  int v58; // [rsp+20h] [rbp-68h]
  int v59; // [rsp+24h] [rbp-64h]
  __int64 v60; // [rsp+28h] [rbp-60h]
  __int64 v61; // [rsp+30h] [rbp-58h]
  __int64 v62; // [rsp+38h] [rbp-50h]
  int v63; // [rsp+44h] [rbp-44h] BYREF
  double v64[8]; // [rsp+48h] [rbp-40h] BYREF

  v8 = 0;
  v10 = *((int *)this + 23);
  v11 = *((_QWORD *)this + 1);
  v12 = *(double *)(v11 + 832);
  *((_DWORD *)this + 23) = -1;
  v13 = *(_QWORD *)(v11 + 1256);
  v63 = v10;
  v64[0] = v12;
  v14 = *(int *)(v13 + 4 * v10);
  v15 = (double *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + 8 * v14);
  if ( *v15 != 0.0 )
    *v15 = 2.225073858507201e-308;
  *(double *)&v16 = 0.0;
  if ( *((_DWORD *)this + 19) != 1 )
  {
    v17 = *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * ((int)v14 >> 5));
    if ( _bittest(&v17, v14) )
      *(double *)&v16 = 1.0;
  }
  v18 = *(int *)(v11 + 1160);
  v58 = *(_DWORD *)(v11 + 1160);
  if ( (int)v18 >= 0 )
    v8 = *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v18);
  v57 = v8;
  v56 = *(double *)&v16;
  v64[0] = -1.0;
  CoinIndexedVector::createPacked(a2, 1, &v63, v64);
  ClpFactorization::updateColumnTranspose(*(ClpFactorization **)(*((_QWORD *)this + 1) + 1264LL), a3, a2);
  (*(void (__fastcall **)(_QWORD, _QWORD, CoinIndexedVector *, CoinIndexedVector *, CoinIndexedVector *, double))(**(_QWORD **)(*((_QWORD *)this + 1) + 192LL) + 392LL))(
    *(_QWORD *)(*((_QWORD *)this + 1) + 192LL),
    *((_QWORD *)this + 1),
    a2,
    a5,
    a4,
    -1.0);
  v19 = *((_QWORD *)this + 1);
  v20 = *((CoinIndexedVector **)this + 6);
  v55 = *((_DWORD *)a2 + 4);
  v61 = *(_QWORD *)a2;
  v60 = *((_QWORD *)this + 4);
  v21 = *((_QWORD *)a2 + 1);
  v59 = *(_DWORD *)(v19 + 108);
  v62 = *((_QWORD *)v20 + 1);
  ClpFactorization::updateColumnTranspose(*(ClpFactorization **)(v19 + 1264), a3, v20);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, CoinIndexedVector *, CoinIndexedVector *))(**(_QWORD **)(*((_QWORD *)this + 1) + 192LL)
                                                                                           + 400LL))(
    *(_QWORD *)(*((_QWORD *)this + 1) + 192LL),
    *((_QWORD *)this + 1),
    *((_QWORD *)this + 6),
    a4,
    a5);
  if ( v55 > 0 )
  {
    v22 = 0;
    v23 = (unsigned int)(v55 - 1) + 1LL;
    do
    {
      while ( 1 )
      {
        v29 = *(int *)(v61 + 4 * v22);
        v30 = *(double *)(v21 + 8 * v22);
        v31 = v30 * v30;
        v32 = *(_DWORD *)(v61 + 4 * v22);
        v33 = (double *)(v60 + 8LL * v59 + 8 * v29);
        v34 = *v33;
        *(_QWORD *)(v21 + 8 * v22) = 0;
        v28 = *((double *)this + 3) * (v30 * v30) - *(double *)(v62 + 8 * v29) * v30 + v34;
        if ( v28 < 0.0001 )
          break;
LABEL_13:
        ++v22;
        *v33 = v28;
        if ( v23 == v22 )
          goto LABEL_17;
      }
      if ( *((_DWORD *)this + 19) != 1 )
      {
        v24 = v59 + v32;
        v25 = v31 * v56;
        v26 = *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * (v24 >> 5));
        v27 = v25;
        if ( _bittest(&v26, v24) )
          v27 = v25 + 1.0;
        v28 = fmax(v27, 0.0001);
        goto LABEL_13;
      }
      ++v22;
      *v33 = fmax(0.0001, v31 + 1.0);
    }
    while ( v23 != v22 );
  }
LABEL_17:
  v35 = *((_DWORD *)a4 + 4);
  v36 = *((_QWORD *)this + 4);
  v37 = *(_QWORD *)a4;
  v38 = *((_QWORD *)a4 + 1);
  v39 = *((_QWORD *)a5 + 1);
  if ( v35 > 0 )
  {
    v40 = (unsigned int)(v35 - 1);
    v41 = 0;
    v42 = v40 + 1;
    do
    {
      while ( 1 )
      {
        v47 = *(double *)(v38 + 8 * v41);
        v48 = *(int *)(v37 + 4 * v41);
        v49 = (double *)(v36 + 8 * v48);
        v50 = v47 * v47;
        v51 = *v49;
        *(_QWORD *)(v38 + 8 * v41) = 0;
        v52 = *(double *)(v39 + 8 * v41);
        *(_QWORD *)(v39 + 8 * v41) = 0;
        v46 = *((double *)this + 3) * (v47 * v47) + v47 * v52 + v51;
        if ( v46 < 0.0001 )
          break;
LABEL_22:
        ++v41;
        *v49 = v46;
        if ( v41 == v42 )
          goto LABEL_26;
      }
      if ( *((_DWORD *)this + 19) != 1 )
      {
        v43 = v50 * v56;
        v44 = *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * ((int)v48 >> 5));
        v45 = v43;
        if ( _bittest(&v44, v48) )
          v45 = v43 + 1.0;
        v46 = fmax(v45, 0.0001);
        goto LABEL_22;
      }
      ++v41;
      *v49 = fmax(0.0001, v50 + 1.0);
    }
    while ( v41 != v42 );
  }
LABEL_26:
  if ( v58 >= 0 )
    *(_QWORD *)(v36 + 8LL * v58) = v57;
  result = CoinIndexedVector::clear(*((CoinIndexedVector **)this + 6));
  *((_DWORD *)a5 + 4) = 0;
  *((_BYTE *)a5 + 28) = 0;
  *((_DWORD *)a2 + 4) = 0;
  *((_BYTE *)a2 + 28) = 0;
  *((_DWORD *)a4 + 4) = 0;
  *((_BYTE *)a4 + 28) = 0;
  return result;
}

