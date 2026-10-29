__int64 __fastcall CoinDenseFactorization::updateColumn(
        CoinDenseFactorization *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        char a4)
{
  char v4; // al
  unsigned __int64 v5; // r8
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  int v8; // r10d
  __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rcx
  int v12; // r15d
  double *v13; // r9
  double *v14; // r14
  __int64 v15; // rbp
  int v16; // r8d
  __int64 v17; // rbx
  __m128d v18; // xmm2
  unsigned int v19; // r12d
  int v20; // r11d
  __int64 v21; // rcx
  unsigned int v22; // r12d
  __int64 v23; // rax
  __m128d v24; // xmm3
  __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  __int64 v27; // rcx
  unsigned int v28; // esi
  __int64 v29; // rcx
  int v30; // r11d
  __int64 v31; // rcx
  double *v32; // r8
  double *v33; // r11
  double *v34; // rax
  double v35; // xmm0_8
  int v36; // esi
  __int64 v37; // rcx
  __int64 v38; // rbp
  __int64 v39; // r12
  __int64 v40; // r15
  int *v41; // r9
  __int64 v42; // rax
  _QWORD *v43; // rbx
  __m128d v44; // xmm3
  unsigned int v45; // ecx
  __m128d v46; // xmm2
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdi
  double *v52; // rsi
  double v53; // xmm0_8
  int v54; // esi
  int v55; // eax
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rsi
  char *v60; // rax
  unsigned __int64 v61; // rax
  __int64 v62; // r12
  __int64 v63; // r15
  _QWORD *v64; // r13
  double *v65; // r12
  __m128d v66; // xmm2
  int v67; // r14d
  char *v68; // r8
  int v69; // ebp
  __int64 v70; // rax
  unsigned int v71; // esi
  __m128d v72; // xmm3
  int v73; // eax
  __int64 v74; // r8
  int v75; // eax
  __int64 v76; // rax
  int v77; // eax
  CoinIndexedVector *v78; // rax
  int v80; // eax
  int *v81; // rsi
  double *v82; // rdi
  double v83; // xmm0_8
  __int64 v84; // rdi
  __int64 v85; // [rsp+0h] [rbp-A0h]
  int v86; // [rsp+10h] [rbp-90h]
  __int64 v88; // [rsp+20h] [rbp-80h]
  __int64 v89; // [rsp+28h] [rbp-78h]
  int v90; // [rsp+28h] [rbp-78h]
  __int64 v91; // [rsp+38h] [rbp-68h]
  int v92; // [rsp+4Ch] [rbp-54h]
  unsigned __int64 v93; // [rsp+50h] [rbp-50h]
  char v96; // [rsp+67h] [rbp-39h]

  v4 = *((_BYTE *)a3 + 28);
  v5 = *((_QWORD *)a3 + 1);
  v6 = *(_QWORD *)a3;
  v93 = v5;
  v7 = *((_QWORD *)a2 + 1);
  v91 = v6;
  v96 = v4;
  v8 = *((_DWORD *)this + 9);
  if ( v4 )
  {
    v55 = *((_DWORD *)a3 + 4);
    if ( v55 > 0 )
    {
      v56 = (unsigned int)(v55 - 1);
      v57 = *((_QWORD *)this + 9);
      v58 = 0;
      v59 = v56 + 1;
      do
      {
        *(_QWORD *)(v7 + 8LL * *(int *)(v57 + 4LL * *(int *)(v6 + 4 * v58))) = *(_QWORD *)(v5 + 8 * v58);
        *(_QWORD *)(v5 + 8 * v58++) = 0;
      }
      while ( v58 != v59 );
    }
  }
  else if ( a4 )
  {
    v7 = v5;
  }
  else if ( v8 > 0 )
  {
    v9 = *((_QWORD *)this + 9) + 4LL * v8;
    v10 = 0;
    do
    {
      v11 = (_QWORD *)(v5 + 8LL * *(int *)(v9 + 4 * v10));
      *(_QWORD *)(v7 + 8 * v10++) = *v11;
      *v11 = 0;
    }
    while ( v10 != (unsigned int)(v8 - 1) + 1LL );
  }
  v12 = *((_DWORD *)this + 10);
  v88 = *((_QWORD *)this + 10);
  if ( v12 > 0 )
  {
    v13 = (double *)(v7 + 8);
    v14 = (double *)(*((_QWORD *)this + 10) + 8LL);
    v15 = *((_QWORD *)this + 10);
    v16 = 0;
    v85 = 8LL * v8;
    v17 = 0;
    v86 = v8 - 1;
    while ( 1 )
    {
      ++v16;
      v18 = (__m128d)*((unsigned __int64 *)v13 - 1);
      if ( v16 >= v8 )
        goto LABEL_52;
      v19 = v8 - v16;
      if ( v14 < v13 + 2 && v13 < v14 + 2 || v19 <= 8 )
        break;
      v20 = v16;
      v21 = ((unsigned __int64)v13 >> 3) & 1;
      if ( 2 - (unsigned int)((_DWORD)v21 == 0) > v86 - v16 )
      {
        ++v17;
      }
      else
      {
        if ( (_DWORD)v21 )
        {
          v20 = v17 + 2;
          *v13 = *v13 - *v14 * v18.m128d_f64[0];
        }
        ++v17;
        v22 = v19 - v21;
        v23 = 0;
        v24 = _mm_unpacklo_pd(v18, v18);
        v25 = 8 * (v17 + v21);
        v26 = v7 + v25;
        v27 = v15 + v25;
        v28 = 0;
        do
        {
          ++v28;
          *(__m128d *)(v26 + v23) = _mm_sub_pd(*(__m128d *)(v26 + v23), _mm_mul_pd(*(__m128d *)(v27 + v23), v24));
          v23 += 16;
        }
        while ( v22 >> 1 > v28 );
        v20 += v22 & 0xFFFFFFFE;
        if ( v22 == (v22 & 0xFFFFFFFE) )
          goto LABEL_19;
      }
      v29 = v20;
      v30 = v20 + 1;
      *(double *)(v7 + 8 * v29) = *(double *)(v7 + 8 * v29) - *(double *)(v15 + 8 * v29) * v18.m128d_f64[0];
      if ( v30 < v8 )
        *(double *)(v7 + 8LL * v30) = *(double *)(v7 + 8LL * v30) - v18.m128d_f64[0] * *(double *)(v15 + 8LL * v30);
LABEL_19:
      v15 += v85;
      v14 = (double *)((char *)v14 + v85 + 8);
      ++v13;
      if ( v16 == v12 )
        goto LABEL_20;
    }
    v60 = (char *)v13 - v7;
    do
    {
      *(double *)&v60[v7] = *(double *)&v60[v7] - *(double *)&v60[v15] * v18.m128d_f64[0];
      v60 += 8;
    }
    while ( v60 != (char *)(8 * (v17 + (unsigned int)(v86 - v16) + 2)) );
LABEL_52:
    ++v17;
    goto LABEL_19;
  }
LABEL_20:
  LODWORD(v31) = v12 - 1;
  v32 = (double *)(v88 + 8LL * v8 * v8);
  if ( v12 - 1 >= 0 )
  {
    v89 = 8LL * v8;
    if ( v12 == 1 )
    {
      v33 = (double *)(v88 + 8LL * v8 * v8);
LABEL_23:
      v31 = (int)v31;
      v34 = &v33[(int)v31 + v89 / 0xFFFFFFFFFFFFFFF8LL];
      do
      {
        v35 = *(double *)(v7 + 8 * v31) * *v34;
        v34 = (double *)((char *)v34 - 8 - v89);
        *(double *)(v7 + 8 * v31--) = v35;
      }
      while ( (int)v31 >= 0 );
      goto LABEL_25;
    }
    v62 = 8LL * (int)v31;
    v63 = (v7 >> 3) & 1;
    v64 = (_QWORD *)(v7 + v62);
    v65 = (double *)((char *)v32 + v62 - v89);
    while ( 1 )
    {
      v66 = (__m128d)(unsigned __int64)*v64;
      v33 = &v32[-v8];
      v66.m128d_f64[0] = v66.m128d_f64[0] * *v65;
      *v64 = *(_QWORD *)&v66.m128d_f64[0];
      if ( (v7 >= (unsigned __int64)(v33 + 2) || (unsigned __int64)v33 >= v7 + 16) && (int)v31 > 8 )
      {
        v67 = v31 - 1;
        if ( 2 - (unsigned int)((_DWORD)v63 == 0) > (int)v31 - 1 )
        {
          v75 = 1;
          *(double *)v7 = *(double *)v7 - *v33 * v66.m128d_f64[0];
        }
        else
        {
          if ( (_DWORD)v63 )
            *(double *)v7 = *(double *)v7 - *v33 * v66.m128d_f64[0];
          v68 = (char *)v32 + 8 * v63 - v89;
          v69 = v31 - v63;
          v70 = 0;
          v71 = 0;
          v72 = _mm_unpacklo_pd(v66, v66);
          do
          {
            ++v71;
            *(__m128d *)(v7 + 8 * v63 + v70) = _mm_sub_pd(
                                                 *(__m128d *)(v7 + 8 * v63 + v70),
                                                 _mm_mul_pd(*(__m128d *)&v68[v70], v72));
            v70 += 16;
          }
          while ( (unsigned int)(v31 - v63) >> 1 > v71 );
          v73 = (v69 & 0xFFFFFFFE) + v63;
          if ( (v69 & 0xFFFFFFFE) == v69 )
            goto LABEL_67;
          v74 = v73;
          v75 = v73 + 1;
          *(double *)(v7 + 8 * v74) = *(double *)(v7 + 8 * v74) - v33[v74] * v66.m128d_f64[0];
          if ( v75 >= (int)v31 )
            goto LABEL_67;
        }
        *(double *)(v7 + 8LL * v75) = *(double *)(v7 + 8LL * v75) - v66.m128d_f64[0] * v33[v75];
      }
      else
      {
        v76 = 0;
        do
        {
          *(double *)(v7 + 8 * v76) = *(double *)(v7 + 8 * v76) - v33[v76] * v66.m128d_f64[0];
          ++v76;
        }
        while ( (int)v31 > (int)v76 );
        v67 = v31 - 1;
      }
LABEL_67:
      --v64;
      v65 = (double *)((char *)v65 - 8 - v89);
      LODWORD(v31) = v67;
      v32 = v33;
      if ( v67 <= 0 )
      {
        v32 = (double *)(v88 + 8LL * v8 * v8);
        goto LABEL_23;
      }
    }
  }
LABEL_25:
  v36 = *((_DWORD *)this + 13);
  if ( v36 > 0 )
  {
    v37 = *((_QWORD *)this + 9);
    v38 = (v7 >> 3) & 1;
    v39 = 8LL * v8;
    v40 = v37 + 4 * ((unsigned int)(v36 - 1) + (__int64)(2 * v8)) + 4;
    v41 = (int *)(v37 + v39);
    v90 = (v8 - v38) & 0xFFFFFFFE;
    v92 = v38 + v90 + 1;
    do
    {
      v42 = *v41;
      v43 = (_QWORD *)(v7 + 8 * v42);
      v44 = (__m128d)(unsigned __int64)*v43;
      v44.m128d_f64[0] = v44.m128d_f64[0] * v32[v42];
      if ( v8 > 0 )
      {
        if ( ((unsigned __int64)v32 >= v7 + 16 || v7 >= (unsigned __int64)(v32 + 2)) && (unsigned int)v8 > 8 )
        {
          if ( 2 - (unsigned int)((_DWORD)v38 == 0) > v8 - 1 )
          {
            v48 = 1;
            *(double *)v7 = *(double *)v7 - *v32 * v44.m128d_f64[0];
          }
          else
          {
            if ( (_DWORD)v38 )
              *(double *)v7 = *(double *)v7 - *v32 * v44.m128d_f64[0];
            v45 = 0;
            v46 = _mm_unpacklo_pd(v44, v44);
            v47 = 0;
            do
            {
              ++v45;
              *(__m128d *)(v7 + 8 * ((v7 >> 3) & 1) + v47 * 8) = _mm_sub_pd(
                                                                   *(__m128d *)(v7 + 8 * ((v7 >> 3) & 1) + v47 * 8),
                                                                   _mm_mul_pd(
                                                                     *(__m128d *)&v32[((v7 >> 3) & 1) + v47],
                                                                     v46));
              v47 += 2;
            }
            while ( (unsigned int)(v8 - v38) >> 1 > v45 );
            if ( v90 == v8 - (_DWORD)v38 )
              goto LABEL_38;
            v48 = v92;
            *(double *)(v7 + 8LL * ((int)v38 + v90)) = *(double *)(v7 + 8LL * ((int)v38 + v90))
                                                     - v32[(int)v38 + v90] * v44.m128d_f64[0];
            if ( v92 >= v8 )
              goto LABEL_38;
          }
          *(double *)(v7 + 8 * v48) = *(double *)(v7 + 8 * v48) - v32[v48] * v44.m128d_f64[0];
        }
        else
        {
          v61 = 0;
          do
          {
            *(double *)(v7 + v61) = *(double *)(v7 + v61) - v32[v61 / 8] * v44.m128d_f64[0];
            v61 += 8LL;
          }
          while ( v61 != 8LL * (unsigned int)(v8 - 1) + 8 );
        }
      }
LABEL_38:
      ++v41;
      v32 = (double *)((char *)v32 + v39);
      *v43 = *(_QWORD *)&v44.m128d_f64[0];
    }
    while ( v41 != (int *)v40 );
  }
  if ( a4 )
  {
    if ( v8 <= 0 )
      goto LABEL_95;
    v77 = 0;
    v50 = 0;
    while ( fabs(*(double *)v7) <= *((double *)this + 2) )
    {
LABEL_77:
      *(_QWORD *)v7 = 0;
      ++v77;
      v7 += 8LL;
      if ( *((_DWORD *)this + 9) <= v77 )
        goto LABEL_78;
    }
    while ( 1 )
    {
      v7 += 8LL;
      v54 = v50 + 1;
      *(_DWORD *)(v91 + 4 * v50) = v77++;
      if ( *((_DWORD *)this + 9) <= v77 )
        break;
      v50 = v54;
      if ( fabs(*(double *)v7) <= *((double *)this + 2) )
        goto LABEL_77;
    }
LABEL_94:
    *((_DWORD *)a3 + 4) = v54;
    return 0;
  }
  else
  {
    if ( !v96 )
    {
      if ( v8 > 0 )
      {
        v49 = 0;
        v50 = 0;
        v51 = *((_QWORD *)this + 9);
        do
        {
          while ( 1 )
          {
            v52 = (double *)(v7 + 8LL * *(int *)(v51 + 4 * v49));
            v53 = *v52;
            *v52 = 0.0;
            if ( fabs(v53) <= *((double *)this + 2) )
              break;
            v54 = v50 + 1;
            *(double *)(v93 + 8 * v49) = v53;
            *(_DWORD *)(v91 + 4 * v50) = v49;
            v8 = *((_DWORD *)this + 9);
            if ( v8 <= (int)++v49 )
              goto LABEL_94;
            v50 = v54;
          }
          ++v49;
        }
        while ( (int)v49 < v8 );
LABEL_78:
        v78 = a3;
        *((_DWORD *)a3 + 4) = v50;
        if ( (_DWORD)v50 )
          return 0;
        goto LABEL_79;
      }
LABEL_95:
      v78 = a3;
      *((_DWORD *)a3 + 4) = 0;
LABEL_79:
      *((_BYTE *)v78 + 28) = 0;
      return 0;
    }
    if ( v8 <= 0 )
      goto LABEL_95;
    v80 = 0;
    LODWORD(v50) = 0;
    v81 = *((int **)this + 9);
    do
    {
      while ( 1 )
      {
        v82 = (double *)(v7 + 8LL * *v81);
        v83 = *v82;
        *v82 = 0.0;
        if ( fabs(v83) > *((double *)this + 2) )
          break;
        ++v80;
        ++v81;
        if ( v80 >= v8 )
          goto LABEL_78;
      }
      v84 = (int)v50;
      ++v81;
      LODWORD(v50) = v50 + 1;
      *(double *)(v93 + 8 * v84) = v83;
      *(_DWORD *)(v91 + 4 * v84) = v80;
      v8 = *((_DWORD *)this + 9);
      ++v80;
    }
    while ( v80 < v8 );
    *((_DWORD *)a3 + 4) = v50;
    return 0;
  }
}

