__int64 __fastcall CoinDenseFactorization::factor(CoinDenseFactorization *this)
{
  int v1; // r15d
  __int64 v2; // rcx
  int v3; // eax
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r8
  int v8; // r14d
  int v9; // r13d
  CoinDenseFactorization *v10; // rax
  double v11; // xmm1_8
  int v12; // ecx
  int v13; // edx
  __int64 v14; // rax
  int v15; // ebx
  double v16; // xmm0_8
  bool v17; // cc
  double v18; // xmm0_8
  __int64 v19; // r9
  __int64 *v20; // rdx
  int v21; // esi
  __int64 v22; // xmm0_8
  __int64 *v23; // rdi
  int *v24; // rax
  int v25; // edx
  __m128d v26; // xmm2
  int v27; // edi
  __int64 v28; // rax
  unsigned int v29; // r8d
  unsigned int v30; // edx
  __m128d v31; // xmm1
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // edi
  int v36; // ebp
  __int64 v37; // r15
  __int64 v38; // rdx
  unsigned __int64 v39; // r8
  __int64 v40; // rcx
  __m128d v41; // xmm2
  int v42; // edi
  __int64 v43; // rsi
  int v44; // ebx
  __m128d v45; // xmm3
  unsigned int v46; // r11d
  __int64 v47; // rsi
  unsigned int v48; // edx
  __int64 v49; // rax
  __int64 v50; // rdx
  int v51; // edi
  int v52; // eax
  __int64 v53; // rcx
  __int64 v55; // rax
  int v56; // edx
  __int64 v57; // [rsp+0h] [rbp-B8h]
  unsigned int v58; // [rsp+8h] [rbp-B0h]
  int v59; // [rsp+Ch] [rbp-ACh]
  __int64 v60; // [rsp+10h] [rbp-A8h]
  int v61; // [rsp+18h] [rbp-A0h]
  int v62; // [rsp+1Ch] [rbp-9Ch]
  double *v63; // [rsp+20h] [rbp-98h]
  __int64 v64; // [rsp+30h] [rbp-88h]
  unsigned int v66; // [rsp+40h] [rbp-78h]
  int v67; // [rsp+44h] [rbp-74h]
  __int64 v68; // [rsp+50h] [rbp-68h]
  __int64 v69; // [rsp+68h] [rbp-50h]
  __int64 v70; // [rsp+70h] [rbp-48h]
  __int64 v71; // [rsp+78h] [rbp-40h]

  v1 = *((_DWORD *)this + 9);
  *(_QWORD *)((char *)this + 52) = 0;
  if ( v1 <= 0 )
  {
    v56 = *((_DWORD *)this + 10);
    v10 = this;
    *((_DWORD *)this + 11) = 0;
    if ( v56 <= 0 )
      return *((unsigned int *)this + 14);
    goto LABEL_42;
  }
  v2 = *((_QWORD *)this + 9);
  v3 = 0;
  v70 = v2;
  do
  {
    *(_DWORD *)(v2 + 4LL * (v3 + v1)) = v3;
    v1 = *((_DWORD *)this + 9);
    ++v3;
  }
  while ( v1 > v3 );
  v4 = *((_DWORD *)this + 10);
  v5 = *((_QWORD *)this + 10);
  *((_DWORD *)this + 11) = 0;
  if ( v4 > 0 )
  {
    v6 = v5;
    v7 = 0;
    v8 = 1;
    v9 = v1;
    v71 = v5 - 8;
    v10 = this;
    v67 = 2;
    v69 = 24;
    v68 = 8;
    v59 = 0;
    v11 = *((double *)this + 2);
    if ( v1 <= 0 )
    {
LABEL_41:
      v1 = v9;
    }
    else
    {
      while ( 1 )
      {
        v12 = v7;
        v13 = -1;
        v60 = v7 + 1;
        v14 = v7;
        do
        {
          v15 = v13;
          v16 = fabs(*(double *)(v6 + 8 * v14));
          v17 = v16 <= v11;
          v18 = fmax(v16, v11);
          if ( !v17 )
            v15 = v14;
          ++v14;
          v11 = v18;
          v13 = v15;
        }
        while ( v14 != v7 + 1 + (unsigned int)(v9 - 1 - v7) );
        if ( v15 < 0 )
          break;
        v19 = 8 * v7;
        if ( v59 != v15 )
        {
          v20 = (__int64 *)(v68 + v71);
          v21 = 0;
          do
          {
            v22 = *v20;
            v23 = &v20[v19 / 0xFFFFFFFFFFFFFFF8LL];
            ++v21;
            *v20 = v20[v19 / 0xFFFFFFFFFFFFFFF8LL + v15];
            v20 += v9;
            v23[v15] = v22;
          }
          while ( v21 != v8 );
          v24 = (int *)(v70 + 4LL * (v9 + v59));
          v25 = *v24;
          *v24 = *(_DWORD *)(v70 + 4LL * (v9 + v15));
          *(_DWORD *)(v70 + 4LL * (v15 + *((_DWORD *)this + 9))) = v25;
          v9 = *((_DWORD *)this + 9);
        }
        v26.m128d_f64[1] = 0.0;
        v26.m128d_f64[0] = 1.0 / *(double *)(v6 + 8 * v7);
        *(double *)(v6 + 8 * v7) = v26.m128d_f64[0];
        if ( v8 < v9 )
        {
          v27 = v8;
          v28 = ((unsigned __int64)(v6 + v68) >> 3) & 1;
          if ( (unsigned int)(v9 + -2 - v7) <= 1 )
            goto LABEL_22;
          if ( (_DWORD)v28 )
          {
            v27 = v67;
            *(double *)(v6 + v68) = *(double *)(v6 + v68) * v26.m128d_f64[0];
          }
          v29 = v9 + ~(_DWORD)v7 - v28;
          v30 = 0;
          v31 = _mm_unpacklo_pd(v26, v26);
          v32 = v6 + 8 * (v60 + v28);
          v33 = 0;
          do
          {
            ++v30;
            *(__m128d *)(v32 + v33) = _mm_mul_pd(*(__m128d *)(v32 + v33), v31);
            v33 += 16;
          }
          while ( v29 >> 1 > v30 );
          v27 += v29 & 0xFFFFFFFE;
          if ( v29 != (v29 & 0xFFFFFFFE) )
          {
LABEL_22:
            v34 = v27;
            v35 = v27 + 1;
            *(double *)(v6 + 8 * v34) = *(double *)(v6 + 8 * v34) * v26.m128d_f64[0];
            if ( v35 < v9 )
              *(double *)(v6 + 8LL * v35) = v26.m128d_f64[0] * *(double *)(v6 + 8LL * v35);
          }
        }
        v61 = *((_DWORD *)this + 10);
        if ( v8 >= v61 )
        {
          v1 = v9;
          ++*((_DWORD *)this + 11);
          goto LABEL_43;
        }
        v36 = v8;
        v37 = 8LL * v15;
        v38 = v6;
        v62 = v15;
        v57 = 8LL * v9;
        v64 = v60 + v9;
        v39 = v6 + 8 * v64;
        v66 = v9 + -2 - v12;
        v58 = v9 - v12 - 1;
        v63 = (double *)(v6 + v68);
        do
        {
          v40 = v38 + v57;
          v41 = (__m128d)*(unsigned __int64 *)(v38 + v57 + v19);
          if ( v59 != v62 )
          {
            *(_QWORD *)(v40 + v19) = *(_QWORD *)(v40 + v37);
            *(double *)(v40 + v37) = v41.m128d_f64[0];
            v41 = (__m128d)*(unsigned __int64 *)(v40 + v19);
          }
          if ( v8 < v9 )
          {
            if ( ((unsigned __int64)v63 >= v39 + 16 || v6 + v69 <= v39) && v58 > 8 )
            {
              v42 = v8;
              v43 = (v39 >> 3) & 1;
              if ( v66 < 2 - (unsigned int)((_DWORD)v43 == 0) )
                goto LABEL_37;
              if ( (_DWORD)v43 )
              {
                v42 = v67;
                *(double *)(v40 + 8LL * v8) = *(double *)(v40 + 8LL * v8) - *v63 * v41.m128d_f64[0];
              }
              v44 = v58 - v43;
              v45 = _mm_unpacklo_pd(v41, v41);
              v46 = (v58 - (unsigned int)v43) >> 1;
              v47 = v38 + 8 * (((v39 >> 3) & 1) + v64);
              v48 = 0;
              v49 = 0;
              do
              {
                ++v48;
                *(__m128d *)(v47 + v49) = _mm_sub_pd(
                                            *(__m128d *)(v47 + v49),
                                            _mm_mul_pd(*(__m128d *)(v6 + 8 * (v60 + ((v39 >> 3) & 1)) + v49), v45));
                v49 += 16;
              }
              while ( v48 < v46 );
              v42 += v44 & 0xFFFFFFFE;
              if ( v44 != (v44 & 0xFFFFFFFE) )
              {
LABEL_37:
                v50 = v42;
                v51 = v42 + 1;
                *(double *)(v40 + 8 * v50) = *(double *)(v40 + 8 * v50) - *(double *)(v6 + 8 * v50) * v41.m128d_f64[0];
                if ( v51 < v9 )
                  *(double *)(v40 + 8LL * v51) = *(double *)(v40 + 8LL * v51)
                                               - v41.m128d_f64[0] * *(double *)(v6 + 8LL * v51);
              }
            }
            else
            {
              v55 = 8LL * v8;
              do
              {
                *(double *)(v40 + v55) = *(double *)(v40 + v55) - *(double *)(v6 + v55) * v41.m128d_f64[0];
                v55 += 8;
              }
              while ( 8 * (v8 + (unsigned __int64)v66 + 1) != v55 );
            }
          }
          ++v36;
          v39 += v57;
          v38 = v40;
        }
        while ( v36 != v61 );
        v10 = this;
        v7 = v60;
        ++v8;
        v6 += v57;
        v68 += 8;
        v69 += 8;
        ++*((_DWORD *)this + 11);
        v59 = v60;
        ++v67;
        v11 = *((double *)this + 2);
        if ( (int)v60 >= v9 )
          goto LABEL_41;
      }
      v1 = v9;
      v10 = this;
    }
LABEL_42:
    *((_DWORD *)v10 + 14) = -1;
  }
LABEL_43:
  if ( v1 > 0 )
  {
    v52 = 0;
    v53 = *((_QWORD *)this + 9);
    do
    {
      *(_DWORD *)(v53 + 4LL * *(int *)(v53 + 4LL * (v52 + v1))) = v52;
      v1 = *((_DWORD *)this + 9);
      ++v52;
    }
    while ( v1 > v52 );
  }
  return *((unsigned int *)this + 14);
}

