double __fastcall ClpQuadraticObjective::reducedGradient(
        ClpQuadraticObjective *this,
        ClpSimplex *a2,
        double *a3,
        char a4)
{
  int v6; // r12d
  __int64 v7; // rbx
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rdx
  double v16; // xmm0_8
  __int64 v17; // rdx
  unsigned __int64 v18; // r15
  double *v19; // rbp
  __int64 v20; // rax
  int v21; // ecx
  unsigned int v22; // r8d
  unsigned int v23; // edi
  __int64 v24; // rax
  unsigned __int64 v25; // r9
  double *v26; // rdx
  __int64 v27; // rax
  signed int v28; // ecx
  __int64 v29; // rax
  int v30; // ecx
  __int64 v31; // rsi
  int v32; // ecx
  __int64 v33; // rax
  int v34; // r9d
  unsigned __int64 v35; // rdi
  unsigned int v36; // edx
  __int64 v37; // r11
  unsigned int v38; // r10d
  char *v39; // rdi
  __int64 v40; // rax
  signed int v41; // ecx
  __int64 v42; // rax
  int v43; // ecx
  double v45; // xmm0_8
  __int64 v46; // rdx
  __int64 v47; // rdx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  void *desta; // [rsp+8h] [rbp-90h]
  __int64 v52; // [rsp+10h] [rbp-88h]
  void *src; // [rsp+28h] [rbp-70h]
  void **v55; // [rsp+30h] [rbp-68h]
  _QWORD v56[2]; // [rsp+40h] [rbp-58h] BYREF
  int v57; // [rsp+50h] [rbp-48h]
  char v58; // [rsp+5Ch] [rbp-3Ch]

  v6 = *((_DWORD *)a2 + 26);
  v7 = *((int *)a2 + 27);
  v55 = *((void ***)a2 + 132);
  CoinIndexedVector::CoinIndexedVector((CoinIndexedVector *)v56);
  CoinIndexedVector::reserve((CoinIndexedVector *)v56, v6 + 1);
  v8 = v56[1];
  v9 = v56[0];
  v10 = (**(__int64 (__fastcall ***)(ClpQuadraticObjective *, ClpSimplex *, _QWORD, char *, __int64, _QWORD))this)(
          this,
          a2,
          *((_QWORD *)a2 + 150),
          (char *)this + 8,
          1,
          (unsigned int)(a4 != 0) + 1);
  src = (void *)v10;
  v11 = *((_QWORD *)a2 + 157);
  v52 = *((_QWORD *)a2 + 129);
  if ( v6 <= 0 )
  {
    v57 = 0;
LABEL_37:
    v58 = 0;
    goto LABEL_8;
  }
  v12 = 0;
  v13 = 0;
  v14 = (unsigned int)(v6 - 1) + 1LL;
  if ( a4 )
  {
    do
    {
      v15 = *(int *)(v11 + 4 * v12);
      if ( (int)v15 < (int)v7 )
      {
        v16 = *(double *)(v10 + 8 * v15);
        if ( v16 != 0.0 )
        {
          v17 = v13;
          *(double *)(v8 + 8 * v12) = v16;
          ++v13;
          *(_DWORD *)(v9 + 4 * v17) = v12;
        }
      }
      ++v12;
    }
    while ( v12 != v14 );
  }
  else
  {
    do
    {
      v47 = *(int *)(v11 + 4 * v12);
      if ( (int)v7 <= (int)v47 )
        v45 = *(double *)(v52 + 8 * v47);
      else
        v45 = *(double *)(v10 + 8 * v47);
      if ( v45 != 0.0 )
      {
        v46 = v13;
        *(double *)(v8 + 8 * v12) = v45;
        ++v13;
        *(_DWORD *)(v9 + 4 * v46) = v12;
      }
      ++v12;
    }
    while ( v12 != v14 );
  }
  v57 = v13;
  if ( !v13 )
    goto LABEL_37;
LABEL_8:
  ClpFactorization::updateColumnTranspose(
    *((ClpFactorization **)a2 + 158),
    (CoinIndexedVector *)v55,
    (CoinIndexedVector *)v56);
  v18 = 8 * v7;
  v19 = &a3[v7];
  if ( v6 <= 0 )
    goto LABEL_19;
  memset(v55[1], 0, 8LL * (unsigned int)(v6 - 1) + 8);
  if ( ((unsigned __int64)v19 >= v8 + 16 || v8 >= (unsigned __int64)&a3[v18 / 8 + 2]) && (unsigned int)v6 > 0x18 )
  {
    v20 = (v8 >> 3) & 1;
    if ( v6 - 1 < 2 - (unsigned int)((_DWORD)v20 == 0) )
    {
      v30 = 1;
      *v19 = *(double *)v8;
LABEL_18:
      v19[v30] = *(double *)(v8 + 8LL * v30);
      goto LABEL_19;
    }
    v21 = 0;
    if ( (_DWORD)v20 )
    {
      v21 = 1;
      *v19 = *(double *)v8;
    }
    v22 = 0;
    v23 = v6 - v20;
    v24 = v20;
    v25 = v8 + v24 * 8;
    v26 = &a3[v18 / 8 + v24];
    v27 = 0;
    do
    {
      ++v22;
      *(_OWORD *)&v26[v27] = *(_OWORD *)(v25 + v27 * 8);
      v27 += 2;
    }
    while ( v23 >> 1 > v22 );
    v28 = (v23 & 0xFFFFFFFE) + v21;
    if ( v23 != (v23 & 0xFFFFFFFE) )
    {
      v29 = v28;
      v30 = v28 + 1;
      v19[v29] = *(double *)(v8 + 8 * v29);
      if ( v30 < v6 )
        goto LABEL_18;
    }
  }
  else
  {
    v49 = 0;
    do
    {
      v19[v49 / 8] = *(double *)(v8 + v49);
      v49 += 8LL;
    }
    while ( 8LL * (unsigned int)(v6 - 1) + 8 != v49 );
  }
LABEL_19:
  memcpy(a3, src, 8 * v7);
  ClpModel::transposeTimes(a2, -1.0, v19, a3);
  if ( v6 > 0 )
  {
    v31 = v52 + v18;
    if ( ((unsigned __int64)v19 >= v52 + v18 + 16 || v52 + v18 >= (unsigned __int64)&a3[v18 / 8 + 2])
      && (unsigned int)v6 > 9 )
    {
      v32 = 0;
      v33 = ((unsigned __int64)v19 >> 3) & 1;
      if ( (((unsigned __int64)v19 >> 3) & 1) != 0 )
      {
        v32 = 1;
        *v19 = *(double *)(v52 + 8 * v7) + *v19;
      }
      v34 = v6 - v33;
      v35 = v18 + 8 * (((unsigned __int64)v19 >> 3) & 1);
      v36 = 0;
      v37 = v35 + v52;
      v38 = (unsigned int)(v6 - v33) >> 1;
      v39 = (char *)a3 + v35;
      v40 = 0;
      do
      {
        ++v36;
        *(__m128d *)&v39[v40 * 8] = _mm_add_pd(
                                      *(__m128d *)(v37 + v40 * 8),
                                      *(__m128d *)&a3[(((unsigned __int64)v19 >> 3) & 1) + v7 + v40]);
        v40 += 2;
      }
      while ( v36 < v38 );
      v41 = (v34 & 0xFFFFFFFE) + v32;
      if ( v34 != (v34 & 0xFFFFFFFE) )
      {
        v42 = v41;
        v43 = v41 + 1;
        v19[v42] = *(double *)(v31 + 8 * v42) + v19[v42];
        if ( v43 < v6 )
          v19[v43] = *(double *)(v31 + 8LL * v43) + v19[v43];
      }
    }
    else
    {
      v48 = 0;
      do
      {
        v19[v48 / 8] = *(double *)(v31 + v48) + v19[v48 / 8];
        v48 += 8LL;
      }
      while ( 8LL * (unsigned int)(v6 - 1) + 8 != v48 );
    }
  }
  desta = *((void **)this + 1);
  CoinIndexedVector::~CoinIndexedVector((CoinIndexedVector *)v56);
  return *(double *)&desta;
}

