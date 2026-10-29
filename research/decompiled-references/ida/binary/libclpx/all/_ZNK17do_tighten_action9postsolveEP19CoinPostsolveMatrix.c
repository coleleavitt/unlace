__int64 __fastcall do_tighten_action::postsolve(do_tighten_action *this, CoinPostsolveMatrix *a2)
{
  __int64 v2; // r15
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r8
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 result; // rax
  unsigned __int64 v9; // rdi
  int v10; // eax
  int v11; // r14d
  int v12; // ebx
  __int64 v13; // rsi
  __int64 v14; // r9
  __int64 v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // xmm0_8
  int v21; // r14d
  int v22; // r12d
  int v23; // r9d
  unsigned int v24; // ebx
  __m128d v25; // xmm0
  int v26; // edx
  double v27; // xmm4_8
  __m128d v28; // xmm6
  __m128d v29; // xmm1
  __m128d v30; // xmm1
  __m128d v31; // xmm2
  double v32; // xmm4_8
  __int64 v33; // rcx
  double v34; // xmm6_8
  double v35; // xmm2_8
  double v36; // xmm1_8
  double v37; // xmm2_8
  __m128d v38; // xmm1
  __m128d v39; // xmm2
  int v40; // ecx
  __int64 v41; // rsi
  double v42; // xmm1_8
  double *v43; // [rsp+0h] [rbp-78h]
  __int64 v44; // [rsp+8h] [rbp-70h]
  unsigned __int64 v45; // [rsp+10h] [rbp-68h]
  __int64 v46; // [rsp+18h] [rbp-60h]
  __int64 v47; // [rsp+20h] [rbp-58h]
  __int64 v48; // [rsp+28h] [rbp-50h]
  __int64 v49; // [rsp+30h] [rbp-48h]
  __int64 v50; // [rsp+38h] [rbp-40h]

  v2 = *((_QWORD *)a2 + 8);
  v3 = *((_QWORD *)a2 + 7);
  v4 = *((_QWORD *)a2 + 33);
  v5 = *((_QWORD *)a2 + 13);
  v46 = *((_QWORD *)a2 + 5);
  v6 = *((_QWORD *)a2 + 14);
  v7 = *((_QWORD *)a2 + 22);
  v47 = *((_QWORD *)a2 + 6);
  v49 = *((_QWORD *)a2 + 11);
  v45 = *((_QWORD *)this + 3);
  v50 = *((_QWORD *)a2 + 12);
  v48 = *((_QWORD *)a2 + 20);
  result = 5LL * *((int *)this + 4);
  v9 = v45 + 40LL * *((int *)this + 4) - 40;
  if ( v45 > v9 )
    return result;
  do
  {
    while ( 2 )
    {
      v10 = *(_DWORD *)(v9 + 28);
      v11 = *(_DWORD *)(v9 + 24);
      v12 = *(_DWORD *)(v9 + 32);
      v13 = *(_QWORD *)v9;
      v14 = *(_QWORD *)(v9 + 8);
      v15 = *(_QWORD *)(v9 + 16);
      if ( v10 > 0 )
      {
        v16 = (unsigned int)(v10 - 1);
        v17 = 0;
        v18 = v16 + 1;
        do
        {
          v19 = *(int *)(v13 + 4 * v17);
          *(_QWORD *)(v5 + 8 * v19) = *(_QWORD *)(v14 + 8 * v17);
          v20 = *(_QWORD *)(v15 + 8 * v17++);
          *(_QWORD *)(v6 + 8 * v19) = v20;
        }
        while ( v17 != v18 );
      }
      result = v11;
      v44 = v11;
      v21 = *(_DWORD *)(v46 + 4LL * v11);
      v22 = *(_DWORD *)(v47 + 4 * result);
      if ( v22 <= 0 )
        goto LABEL_31;
      v23 = -1;
      v24 = (v12 + 2) & 0xFFFFFFFB;
      v25.m128d_f64[0] = 0.0;
      v26 = 0;
      v43 = (double *)(v48 + 8 * result);
      result = v21;
      do
      {
        while ( 1 )
        {
          v32 = *(double *)(v2 + 8 * result);
          v33 = *(int *)(v3 + 4 * result);
          result = *(int *)(v4 + 4 * result);
          v34 = *(double *)(v7 + 8 * v33);
          v35 = *(double *)(v5 + 8 * v33);
          v36 = v32 * v25.m128d_f64[0] + v34;
          if ( v35 <= v36 )
          {
            v37 = *(double *)(v6 + 8 * v33);
            if ( v36 <= v37 )
              goto LABEL_14;
            v23 = v33;
            v25.m128d_f64[1] = 0.0;
            v25.m128d_f64[0] = (v37 - v34) / v32;
            if ( v24 )
              goto LABEL_14;
            v27 = *v43;
            v25.m128d_f64[0] = v25.m128d_f64[0] + *v43;
            v38.m128d_f64[0] = v25.m128d_f64[0] + 0.5;
            if ( fabs(v25.m128d_f64[0] + 0.5) < 4.503599627370496e15 )
            {
              v39 = 0;
              v39.m128d_f64[0] = (double)(int)v38.m128d_f64[0];
              *(_QWORD *)&v38.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                               v39.m128d_f64[0]
                                             - COERCE_DOUBLE(
                                                 COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v39, v38).m128d_f64[0]))
                                               & 0x3FF0000000000000LL))
                                           | *(_QWORD *)&v38.m128d_f64[0] & 0x8000000000000000LL;
            }
            if ( fabs(v38.m128d_f64[0] - v25.m128d_f64[0]) > 0.0001 )
            {
              v30 = v25;
              if ( fabs(v25.m128d_f64[0]) < 4.503599627370496e15 )
              {
LABEL_12:
                v31.m128d_f64[0] = (double)(int)v30.m128d_f64[0];
                *(_QWORD *)&v30.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                                 COERCE_DOUBLE(
                                                   *(_QWORD *)&_mm_cmpgt_sd(v30, v31).m128d_f64[0]
                                                 & 0x3FF0000000000000LL)
                                               + v31.m128d_f64[0])
                                             | *(_QWORD *)&v25.m128d_f64[0] & 0x8000000000000000LL;
              }
LABEL_13:
              v23 = v33;
              v25.m128d_f64[0] = v30.m128d_f64[0] - v27;
              goto LABEL_14;
            }
            goto LABEL_23;
          }
          v23 = v33;
          v25.m128d_f64[1] = 0.0;
          v25.m128d_f64[0] = (v35 - v34) / v32;
          if ( !v24 )
            break;
LABEL_14:
          if ( v22 == ++v26 )
            goto LABEL_24;
        }
        v27 = *v43;
        v25.m128d_f64[0] = v25.m128d_f64[0] + *v43;
        v28.m128d_f64[0] = v25.m128d_f64[0] + 0.5;
        if ( fabs(v25.m128d_f64[0] + 0.5) < 4.503599627370496e15 )
        {
          v29 = 0;
          v29.m128d_f64[0] = (double)(int)v28.m128d_f64[0];
          *(_QWORD *)&v28.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                           v29.m128d_f64[0]
                                         - COERCE_DOUBLE(
                                             COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v29, v28).m128d_f64[0]))
                                           & 0x3FF0000000000000LL))
                                       | *(_QWORD *)&v28.m128d_f64[0] & 0x8000000000000000LL;
        }
        if ( fabs(v28.m128d_f64[0] - v25.m128d_f64[0]) > 0.0001 )
        {
          v30 = v25;
          if ( fabs(v25.m128d_f64[0]) < 4.503599627370496e15 )
            goto LABEL_12;
          goto LABEL_13;
        }
LABEL_23:
        ++v26;
        v23 = v33;
      }
      while ( v22 != v26 );
LABEL_24:
      if ( v23 < 0 )
        goto LABEL_31;
      v40 = 0;
      *v43 = *v43 + v25.m128d_f64[0];
      do
      {
        ++v40;
        v41 = *(int *)(v3 + 4LL * v21);
        v42 = *(double *)(v2 + 8LL * v21);
        v21 = *(_DWORD *)(v4 + 4LL * v21);
        *(double *)(v7 + 8 * v41) = v42 * v25.m128d_f64[0] + *(double *)(v7 + 8 * v41);
      }
      while ( v26 != v40 );
      result = v44;
      if ( fabs(*v43 - *(double *)(v49 + 8 * v44)) <= 1.0e-12 || fabs(*v43 - *(double *)(v50 + 8 * v44)) <= 1.0e-12 )
      {
LABEL_31:
        v9 -= 40LL;
        if ( v45 > v9 )
          return result;
        continue;
      }
      break;
    }
    *(_BYTE *)(*((_QWORD *)a2 + 24) + v44) = *(_BYTE *)(*((_QWORD *)a2 + 24) + v44) & 0xF8 | 1;
    if ( *(double *)(v6 + 8LL * v23) - *(double *)(v7 + 8LL * v23) > *(double *)(v7 + 8LL * v23)
                                                                   - *(double *)(v5 + 8LL * v23) )
    {
      result = *((_QWORD *)a2 + 25) + v23;
      *(_BYTE *)result = *(_BYTE *)result & 0xF8 | 2;
      goto LABEL_31;
    }
    result = *((_QWORD *)a2 + 25) + v23;
    v9 -= 40LL;
    *(_BYTE *)result = *(_BYTE *)result & 0xF8 | 3;
  }
  while ( v45 <= v9 );
  return result;
}

