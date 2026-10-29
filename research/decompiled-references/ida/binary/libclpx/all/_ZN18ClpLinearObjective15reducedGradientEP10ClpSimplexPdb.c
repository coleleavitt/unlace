double __fastcall ClpLinearObjective::reducedGradient(ClpLinearObjective *this, ClpSimplex *a2, double *a3)
{
  int v3; // ebx
  CoinIndexedVector *v4; // r13
  unsigned __int64 v5; // r12
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rax
  int v10; // ecx
  double v11; // xmm0_8
  __int64 v12; // rdx
  int v13; // r14d
  void *v14; // r15
  __int64 v15; // rax
  __int64 v16; // r14
  double *v17; // r13
  double *v18; // r15
  __int64 v19; // rax
  int v20; // ecx
  unsigned int v21; // r8d
  unsigned int v22; // edi
  __int64 v23; // rax
  unsigned __int64 v24; // r9
  double *v25; // rdx
  __int64 v26; // rax
  signed int v27; // ecx
  __int64 v28; // rax
  int v29; // ecx
  int v30; // ecx
  _BOOL4 v31; // edx
  int v32; // r8d
  unsigned int v33; // edi
  _BOOL8 v34; // rax
  double *v35; // r9
  double *v36; // r14
  __int64 v37; // rax
  unsigned int v38; // edx
  signed int v39; // ecx
  __int64 v40; // rdx
  int v41; // ecx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v46; // [rsp+20h] [rbp-68h]
  _QWORD v47[2]; // [rsp+30h] [rbp-58h] BYREF
  int v48; // [rsp+40h] [rbp-48h]
  char v49; // [rsp+4Ch] [rbp-3Ch]

  v3 = *((_DWORD *)a2 + 26);
  v4 = *((CoinIndexedVector **)a2 + 132);
  CoinIndexedVector::CoinIndexedVector((CoinIndexedVector *)v47);
  CoinIndexedVector::reserve((CoinIndexedVector *)v47, v3 + 1);
  v5 = v47[1];
  v6 = v47[0];
  v7 = *((_QWORD *)a2 + 129);
  v8 = *((_QWORD *)a2 + 157);
  if ( v3 <= 0 )
  {
    v48 = 0;
LABEL_30:
    v49 = 0;
    goto LABEL_7;
  }
  v9 = 0;
  v10 = 0;
  do
  {
    v11 = *(double *)(v7 + 8LL * *(int *)(v8 + 4 * v9));
    if ( v11 != 0.0 )
    {
      v12 = v10;
      *(double *)(v5 + 8 * v9) = v11;
      ++v10;
      *(_DWORD *)(v6 + 4 * v12) = v9;
    }
    ++v9;
  }
  while ( v9 != (unsigned int)(v3 - 1) + 1LL );
  v48 = v10;
  if ( !v10 )
    goto LABEL_30;
LABEL_7:
  v13 = *((_DWORD *)a2 + 27);
  v14 = *((void **)v4 + 1);
  ClpFactorization::updateColumnTranspose(*((ClpFactorization **)a2 + 158), v4, (CoinIndexedVector *)v47);
  v15 = v13;
  v16 = v13;
  v46 = v15;
  v17 = &a3[v16];
  if ( v3 <= 0 )
  {
    v18 = *((double **)a2 + 130);
  }
  else
  {
    memset(v14, 0, 8LL * (unsigned int)(v3 - 1) + 8);
    v18 = *((double **)a2 + 130);
    if ( ((unsigned __int64)v17 >= v5 + 16 || v5 >= (unsigned __int64)&a3[v16 + 2]) && (unsigned int)v3 > 0x18 )
    {
      v19 = (v5 >> 3) & 1;
      if ( v3 - 1 < 2 - (unsigned int)((_DWORD)v19 == 0) )
      {
        v29 = 1;
        *v17 = *(double *)v5;
LABEL_17:
        v17[v29] = *(double *)(v5 + 8LL * v29);
        goto LABEL_18;
      }
      v20 = 0;
      if ( (_DWORD)v19 )
      {
        v20 = 1;
        *v17 = *(double *)v5;
      }
      v21 = 0;
      v22 = v3 - v19;
      v23 = v19;
      v24 = v5 + v23 * 8;
      v25 = &a3[v16 + v23];
      v26 = 0;
      do
      {
        ++v21;
        *(_OWORD *)&v25[v26] = *(_OWORD *)(v24 + v26 * 8);
        v26 += 2;
      }
      while ( v22 >> 1 > v21 );
      v27 = (v22 & 0xFFFFFFFE) + v20;
      if ( v22 != (v22 & 0xFFFFFFFE) )
      {
        v28 = v27;
        v29 = v27 + 1;
        v17[v28] = *(double *)(v5 + 8 * v28);
        if ( v29 < v3 )
          goto LABEL_17;
      }
    }
    else
    {
      v43 = 0;
      do
      {
        v17[v43 / 8] = *(double *)(v5 + v43);
        v43 += 8LL;
      }
      while ( 8LL * (unsigned int)(v3 - 1) + 8 != v43 );
    }
  }
LABEL_18:
  memcpy(a3, *((const void **)a2 + 131), v16 * 8);
  ClpModel::transposeTimes(a2, -1.0, v17, a3);
  if ( v3 > 0 )
  {
    if ( (v17 >= v18 + 2 || v18 >= &a3[v16 + 2]) && (unsigned int)v3 > 9 )
    {
      v30 = 0;
      v31 = ((unsigned __int8)v17 & 8) != 0;
      if ( ((unsigned __int8)v17 & 8) != 0 )
      {
        v30 = 1;
        *v17 = *v18 + *v17;
      }
      v32 = v3 - v31;
      v33 = (unsigned int)(v3 - v31) >> 1;
      v34 = ((unsigned __int8)v17 & 8) != 0;
      v35 = &v18[v34];
      v36 = &a3[v34 + v16];
      v37 = 0;
      v38 = 0;
      do
      {
        ++v38;
        *(__m128d *)&v36[v37] = _mm_add_pd(
                                  *(__m128d *)&v35[v37],
                                  *(__m128d *)&a3[(((unsigned __int8)v17 & 8) != 0) + v46 + v37]);
        v37 += 2;
      }
      while ( v38 < v33 );
      v39 = (v32 & 0xFFFFFFFE) + v30;
      if ( v32 != (v32 & 0xFFFFFFFE) )
      {
        v40 = v39;
        v41 = v39 + 1;
        v17[v40] = v18[v40] + v17[v40];
        if ( v41 < v3 )
          v17[v41] = v18[v41] + v17[v41];
      }
    }
    else
    {
      v44 = 0;
      do
      {
        v17[v44 / 8] = v18[v44 / 8] + v17[v44 / 8];
        v44 += 8LL;
      }
      while ( v44 != 8LL * (unsigned int)(v3 - 1) + 8 );
    }
  }
  CoinIndexedVector::~CoinIndexedVector((CoinIndexedVector *)v47);
  return 0.0;
}

