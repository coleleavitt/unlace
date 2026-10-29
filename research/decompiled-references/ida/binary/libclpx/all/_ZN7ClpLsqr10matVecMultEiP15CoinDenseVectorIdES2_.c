void __fastcall ClpLsqr::matVecMult(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  int v8; // r12d
  int v9; // r14d
  _QWORD *v10; // r13
  double *v11; // r9
  unsigned __int64 v12; // rbx
  double *v13; // r8
  __int64 v14; // rdi
  double *v15; // rsi
  unsigned int v16; // ecx
  __int64 v17; // rdx
  double *v18; // r11
  double *v19; // r10
  double *v20; // rdx
  __int64 v21; // rax
  signed int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  double *v25; // r8
  __int64 v26; // rsi
  int v27; // edi
  unsigned int v28; // r9d
  unsigned int v29; // edx
  __int64 v30; // rax
  __m128d v31; // xmm1
  unsigned __int64 v32; // rcx
  double *v33; // rsi
  __int64 v34; // rax
  signed int v35; // eax
  double *v36; // rcx
  int v37; // edx
  int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  double *v41; // rdx
  double *v42; // r9
  double *v43; // rdi
  int v44; // r15d
  unsigned int v45; // ecx
  __int64 v46; // rdx
  unsigned __int64 v47; // rsi
  double *v48; // r10
  double *v49; // rdx
  __int64 v50; // rax
  signed int v51; // r15d
  __int64 v52; // rax
  int v53; // r15d
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  unsigned int v56; // eax
  unsigned int v57; // r9d
  unsigned __int64 v58; // rdi
  __int64 v59; // rax
  __m128d v60; // xmm1
  unsigned int v61; // edx
  __int64 v62; // rcx
  double *v63; // rsi
  __int64 v64; // rax
  unsigned __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rcx
  int v68; // edx
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rax
  int v73; // [rsp+8h] [rbp-50h]
  int v74; // [rsp+8h] [rbp-50h]
  double *v75; // [rsp+8h] [rbp-50h]
  double *v77; // [rsp+10h] [rbp-48h]
  unsigned int v78; // [rsp+10h] [rbp-48h]
  unsigned int v79; // [rsp+18h] [rbp-40h]
  double *v80; // [rsp+18h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 8);
  v73 = a2;
  v8 = *(_DWORD *)(v7 + 108);
  v9 = *(_DWORD *)(v7 + 104);
  v10 = (_QWORD *)operator new(0x10u);
  CoinDenseVector<double>::CoinDenseVector(v10, (unsigned int)v8, 0.0);
  v11 = (double *)v10[1];
  v12 = *(_QWORD *)(a3 + 8);
  v13 = *(double **)(a4 + 8);
  v14 = *(_QWORD *)(a1 + 8);
  if ( a2 == 1 )
  {
    v80 = *(double **)(a4 + 8);
    v77 = (double *)v10[1];
    ClpPdco::matVecMult(v14, 2, v10, a4);
    v42 = v77;
    v25 = v80;
    if ( v8 > 0 )
    {
      v43 = *(double **)(a1 + 16);
      if ( (unsigned int)v8 > 8
        && ((unsigned __int64)v43 >= v12 + 16 || v12 >= (unsigned __int64)(v43 + 2))
        && ((unsigned __int64)v77 >= v12 + 16 || v12 >= (unsigned __int64)(v77 + 2)) )
      {
        v44 = 0;
        if ( ((v12 >> 3) & 1) != 0 )
        {
          v44 = 1;
          *(double *)v12 = *v43 * *v77 + *(double *)v12;
        }
        v45 = 0;
        v46 = (v12 >> 3) & 1;
        v78 = v8 - ((v12 >> 3) & 1);
        v47 = v12 + v46 * 8;
        v48 = &v43[v46];
        v49 = &v42[v46];
        v50 = 0;
        do
        {
          ++v45;
          *(__m128d *)(v47 + v50 * 8) = _mm_add_pd(
                                          _mm_mul_pd(*(__m128d *)&v48[v50], *(__m128d *)&v49[v50]),
                                          *(__m128d *)(v47 + v50 * 8));
          v50 += 2;
        }
        while ( v45 < v78 >> 1 );
        v51 = (v78 & 0xFFFFFFFE) + v44;
        if ( v78 != (v78 & 0xFFFFFFFE) )
        {
          v52 = v51;
          v53 = v51 + 1;
          *(double *)(v12 + 8 * v52) = v42[v52] * v43[v52] + *(double *)(v12 + 8 * v52);
          if ( v53 < v8 )
            *(double *)(v12 + 8LL * v53) = v43[v53] * v42[v53] + *(double *)(v12 + 8LL * v53);
        }
      }
      else
      {
        v72 = 0;
        do
        {
          *(double *)(v12 + v72) = v43[v72 / 8] * v77[v72 / 8] + *(double *)(v12 + v72);
          v72 += 8LL;
        }
        while ( v72 != 8LL * (unsigned int)(v8 - 1) + 8 );
      }
    }
    if ( v9 > 0 )
    {
      v54 = 8LL * v8;
      v55 = v12 + v54;
      if ( (v12 + v54 >= a1 + 32 || a1 + 24 >= v12 + 8 * (v8 + (__int64)v9))
        && (unsigned int)v9 > 8
        && (v55 >= (unsigned __int64)(v80 + 2) || (unsigned __int64)v80 >= v12 + 8LL * v8 + 16) )
      {
        v56 = (v55 >> 3) & 1;
        if ( v56 )
          *(double *)(v12 + 8LL * v8) = *v80 * *(double *)(a1 + 24) + *(double *)(v12 + 8LL * v8);
        else
          v73 = 0;
        v57 = v9 - v56;
        v58 = v12 + 8 * (v56 + (__int64)v8);
        v59 = v56;
        v60 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)(a1 + 24), (__m128d)*(unsigned __int64 *)(a1 + 24));
        v61 = 0;
        v62 = v59 * 8 + v54;
        v63 = &v80[v59];
        v64 = 0;
        v65 = v12 + v62;
        do
        {
          ++v61;
          *(__m128d *)(v65 + v64 * 8) = _mm_add_pd(_mm_mul_pd(*(__m128d *)&v63[v64], v60), *(__m128d *)(v58 + v64 * 8));
          v64 += 2;
        }
        while ( v61 < v57 >> 1 );
        v66 = (v57 & 0xFFFFFFFE) + v73;
        if ( v57 != (v57 & 0xFFFFFFFE) )
        {
          v67 = v66;
          v68 = v8 + v66;
          v40 = v66 + 1;
          *(double *)(v12 + 8LL * v68) = v80[v67] * *(double *)(a1 + 24) + *(double *)(v12 + 8LL * v68);
          if ( v40 < v9 )
          {
            v41 = (double *)(v12 + 8LL * (v40 + v8));
            goto LABEL_22;
          }
        }
      }
      else
      {
        v71 = 0;
        do
        {
          *(double *)(v55 + v71) = v80[v71 / 8] * *(double *)(a1 + 24) + *(double *)(v55 + v71);
          v71 += 8LL;
        }
        while ( v71 != 8LL * (unsigned int)(v9 - 1) + 8 );
      }
    }
  }
  else
  {
    if ( v8 > 0 )
    {
      v15 = *(double **)(a1 + 16);
      if ( (v13 >= v11 + 2 || v11 >= v13 + 2) && (v15 >= v11 + 2 || v11 >= v15 + 2) && (unsigned int)v8 > 0xE )
      {
        v74 = 0;
        if ( (((unsigned __int64)v15 >> 3) & 1) != 0 )
        {
          v74 = 1;
          *v11 = *v15 * *v13;
        }
        v16 = 0;
        v17 = ((unsigned __int64)v15 >> 3) & 1;
        v79 = v8 - (((unsigned __int64)v15 >> 3) & 1);
        v18 = &v15[v17];
        v19 = &v13[v17];
        v20 = &v11[v17];
        v21 = 0;
        do
        {
          ++v16;
          *(__m128d *)&v20[v21] = _mm_mul_pd(*(__m128d *)&v19[v21], *(__m128d *)&v18[v21]);
          v21 += 2;
        }
        while ( v79 >> 1 > v16 );
        v22 = (v79 & 0xFFFFFFFE) + v74;
        if ( v79 != (v79 & 0xFFFFFFFE) )
        {
          v23 = v22;
          v24 = v22 + 1;
          v11[v23] = v15[v23] * v13[v23];
          if ( v24 < v8 )
            v11[v24] = v15[v24] * v13[v24];
        }
      }
      else
      {
        v70 = 0;
        do
        {
          v11[v70 / 8] = v15[v70 / 8] * v13[v70 / 8];
          v70 += 8LL;
        }
        while ( v70 != 8LL * (unsigned int)(v8 - 1) + 8 );
      }
    }
    v75 = v13;
    ClpPdco::matVecMult(v14, 1, a3, v10);
    if ( v9 > 0 )
    {
      v25 = v75;
      v26 = v8;
      if ( ((unsigned __int64)&v75[v26] >= v12 + 16 || v12 >= (unsigned __int64)&v75[v26 + 2])
        && (v12 + 8LL * v9 <= a1 + 24 || v12 >= a1 + 32)
        && (unsigned int)v9 > 8 )
      {
        v27 = 0;
        if ( ((v12 >> 3) & 1) != 0 )
        {
          v27 = 1;
          *(double *)v12 = v75[v8] * *(double *)(a1 + 24) + *(double *)v12;
        }
        v28 = v9 - ((v12 >> 3) & 1);
        v29 = 0;
        v30 = (v12 >> 3) & 1;
        v31 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)(a1 + 24), (__m128d)*(unsigned __int64 *)(a1 + 24));
        v32 = v12 + v30 * 8;
        v33 = &v75[v30 + v26];
        v34 = 0;
        do
        {
          ++v29;
          *(__m128d *)(v32 + v34 * 8) = _mm_add_pd(_mm_mul_pd(*(__m128d *)&v33[v34], v31), *(__m128d *)(v32 + v34 * 8));
          v34 += 2;
        }
        while ( v28 >> 1 > v29 );
        v35 = (v28 & 0xFFFFFFFE) + v27;
        if ( v28 != (v28 & 0xFFFFFFFE) )
        {
          v36 = (double *)(v12 + 8LL * v35);
          v37 = v8 + v35;
          v38 = v35 + 1;
          *v36 = v75[v37] * *(double *)(a1 + 24) + *v36;
          if ( v38 < v9 )
          {
            v39 = v38;
            v40 = v8 + v38;
            v41 = (double *)(v12 + 8 * v39);
LABEL_22:
            *v41 = v25[v40] * *(double *)(a1 + 24) + *v41;
          }
        }
      }
      else
      {
        v69 = 0;
        do
        {
          *(double *)(v12 + v69) = *(double *)(a1 + 24) * v75[v26 + v69 / 8] + *(double *)(v12 + v69);
          v69 += 8LL;
        }
        while ( v69 != 8LL * (unsigned int)(v9 - 1) + 8 );
      }
    }
  }
  CoinDenseVector<double>::~CoinDenseVector(v10);
  operator delete(v10);
}

