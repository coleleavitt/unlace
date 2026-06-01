__int64 __fastcall forcing_constraint_action::postsolve(forcing_constraint_action *this, CoinPostsolveMatrix *a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // r15
  __int64 v4; // r14
  double v5; // xmm3_8
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  CoinPostsolveMatrix *v8; // rbp
  int *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // r13d
  __m128d v13; // xmm2
  __int64 v14; // rdx
  char v15; // r11
  __int64 v16; // rsi
  double v17; // xmm1_8
  double *v18; // rcx
  _BYTE *v19; // r10
  double v20; // xmm0_8
  __int64 v21; // rcx
  double v22; // xmm1_8
  double *v23; // rdx
  _BYTE *v24; // r8
  double v25; // xmm0_8
  __int64 v26; // rax
  CoinPostsolveMatrix *v27; // r13
  __int64 v28; // rbp
  double v29; // xmm0_8
  __m128d v30; // xmm4
  __m128d v31; // xmm5
  double v32; // xmm1_8
  int v33; // r14d
  __int64 v34; // r12
  int minor2; // eax
  __int64 v36; // rcx
  double v37; // xmm0_8
  char v38; // dl
  __int64 v39; // rax
  __int64 v40; // rbp
  __int64 v41; // r14
  __int64 v42; // r13
  int v43; // eax
  double *v44; // rdx
  double v45; // xmm1_8
  double v46; // xmm7_8
  double v47; // [rsp+8h] [rbp-F0h]
  __int64 v48; // [rsp+10h] [rbp-E8h]
  double v49; // [rsp+18h] [rbp-E0h]
  double v50; // [rsp+20h] [rbp-D8h]
  int *v51; // [rsp+28h] [rbp-D0h]
  int *v52; // [rsp+30h] [rbp-C8h]
  __int64 v53; // [rsp+38h] [rbp-C0h]
  int v54; // [rsp+40h] [rbp-B8h]
  CoinPostsolveMatrix *v55; // [rsp+40h] [rbp-B8h]
  __int64 v56; // [rsp+48h] [rbp-B0h]
  __int64 v57; // [rsp+50h] [rbp-A8h]
  __int64 v58; // [rsp+60h] [rbp-98h]
  __int64 v59; // [rsp+68h] [rbp-90h]
  unsigned __int64 v60; // [rsp+80h] [rbp-78h]
  int v61; // [rsp+90h] [rbp-68h]
  int v62; // [rsp+94h] [rbp-64h]
  int *v63; // [rsp+98h] [rbp-60h]
  __int64 v64; // [rsp+A0h] [rbp-58h]
  __int64 v65; // [rsp+A8h] [rbp-50h]
  __int64 v66; // [rsp+B0h] [rbp-48h]
  __int64 v67; // [rsp+B8h] [rbp-40h]

  v2 = *((_QWORD *)this + 3);
  v3 = *((_QWORD *)a2 + 5);
  v4 = *((_QWORD *)a2 + 6);
  v53 = *((_QWORD *)a2 + 8);
  v50 = *((double *)a2 + 18);
  v51 = *((int **)a2 + 7);
  v52 = *((int **)a2 + 33);
  v57 = *((_QWORD *)a2 + 11);
  v56 = *((_QWORD *)a2 + 12);
  v64 = *((_QWORD *)a2 + 13);
  v65 = *((_QWORD *)a2 + 14);
  v48 = *((_QWORD *)a2 + 23);
  v66 = *((_QWORD *)a2 + 22);
  v67 = *((_QWORD *)a2 + 21);
  v5 = *((double *)a2 + 17);
  result = 32LL * *((int *)this + 4);
  v7 = v2 + result - 32;
  if ( v2 <= v7 )
  {
    v8 = a2;
    v59 = v2 + result - 64;
    v47 = -*((double *)a2 + 18);
    v60 = v7 + (~(result - 32) & 0xFFFFFFFFFFFFFFE0LL);
    while ( 1 )
    {
      v9 = *(int **)v7;
      v10 = *(_QWORD *)(v7 + 8);
      v61 = *(_DWORD *)(v7 + 16);
      v11 = *(int *)(v7 + 20);
      v12 = v11 + *(_DWORD *)(v7 + 24);
      if ( (int)v11 <= 0 )
        break;
      v13 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
      v14 = 0;
      v15 = 1;
      do
      {
        v16 = v9[v14];
        v17 = *(double *)(v10 + 8 * v14);
        v18 = (double *)(v56 + 8 * v16);
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v17 - *v18) & *(_QWORD *)&v13.m128d_f64[0]) > v5 )
        {
          v19 = (_BYTE *)(v16 + *((_QWORD *)v8 + 24));
          if ( (*v19 & 7) != 1 )
          {
            v20 = *(double *)(v48 + 8 * v16);
            *v19 = *v19 & 0xF8 | 3;
            v17 = *(double *)(v10 + 8 * v14);
            if ( v47 > v20 || *(double *)(v57 + 8 * v16) <= -1.797693134862316e308 )
              v15 = 0;
          }
        }
        ++v14;
        *v18 = v17;
      }
      while ( (unsigned int)(v11 - 1) + 1LL != v14 );
      v11 = (int)v11;
      if ( (int)v11 < v12 )
        goto LABEL_12;
LABEL_18:
      if ( v15 )
        goto LABEL_19;
      if ( v12 > 0 )
      {
        v26 = (unsigned int)(v12 - 1);
        v62 = v12;
        v54 = -1;
        v27 = v8;
        v63 = v9;
        v28 = v4;
        v58 = (__int64)&v9[v26 + 1];
        v49 = 0.0;
        while ( 1 )
        {
          v34 = *v9;
          v33 = *v9;
          minor2 = presolve_find_minor2(v61, *(_DWORD *)(v3 + 4 * v34), *(_DWORD *)(v28 + 4 * v34), v51, v52);
          v36 = *((_QWORD *)v27 + 24);
          v37 = *(double *)(v48 + 8 * v34);
          v38 = *(_BYTE *)(v36 + v34) & 7;
          if ( v47 > v37 && v38 != 2 )
            break;
          if ( v37 <= v50 )
          {
LABEL_27:
            if ( (int *)v58 == ++v9 )
              goto LABEL_32;
          }
          else
          {
            if ( v38 != 3 )
              break;
            if ( (int *)v58 == ++v9 )
            {
LABEL_32:
              v39 = v54;
              v4 = v28;
              v9 = v63;
              v8 = v27;
              v12 = v62;
              goto LABEL_33;
            }
          }
        }
        v29 = v37 / *(double *)(v53 + 8LL * minor2);
        v30 = _mm_and_pd((__m128d)*(unsigned __int64 *)&v49, v13);
        *(_QWORD *)&v31.m128d_f64[0] = *(_QWORD *)&v13.m128d_f64[0] & *(_QWORD *)&v29;
        v32 = _mm_cmpge_sd(v30, v31).m128d_f64[0];
        if ( COERCE_DOUBLE(*(_QWORD *)&v13.m128d_f64[0] & *(_QWORD *)&v29) <= v30.m128d_f64[0] )
          v33 = v54;
        v54 = v33;
        *(_QWORD *)&v49 = ~*(_QWORD *)&v32 & *(_QWORD *)&v29 | *(_QWORD *)&v49 & *(_QWORD *)&v32;
        goto LABEL_27;
      }
      v36 = *((_QWORD *)v8 + 24);
      v39 = -1;
      v49 = 0.0;
LABEL_33:
      *(_BYTE *)(v39 + v36) = *(_BYTE *)(v39 + v36) & 0xF8 | 1;
      if ( *(double *)(v65 + 8LL * v61) - *(double *)(v66 + 8LL * v61) <= *(double *)(v66 + 8LL * v61)
                                                                        - *(double *)(v64 + 8LL * v61) )
        *(_BYTE *)(*((_QWORD *)v8 + 25) + v61) = *(_BYTE *)(*((_QWORD *)v8 + 25) + v61) & 0xF8 | 3;
      else
        *(_BYTE *)(*((_QWORD *)v8 + 25) + v61) = *(_BYTE *)(*((_QWORD *)v8 + 25) + v61) & 0xF8 | 2;
      *(double *)(v67 + 8LL * v61) = v49;
      if ( v12 > 0 )
      {
        v55 = v8;
        v40 = v4;
        v41 = (__int64)&v9[v12 - 1 + 1];
        while ( 1 )
        {
          v42 = *v9;
          v43 = presolve_find_minor2(v61, *(_DWORD *)(v3 + 4 * v42), *(_DWORD *)(v40 + 4 * v42), v51, v52);
          v44 = (double *)(v48 + 8 * v42);
          v45 = *v44;
          v46 = *v44 - v49 * *(double *)(v53 + 8LL * v43);
          *v44 = v46;
          if ( v45 < 0.0 == v46 < 0.0 )
            goto LABEL_39;
          if ( v47 <= v46 || *(double *)(v56 + 8 * v42) >= 1.797693134862316e308 )
          {
            if ( v46 <= v50 || *(double *)(v57 + 8 * v42) <= -1.797693134862316e308 )
              goto LABEL_39;
            ++v9;
            *(_BYTE *)(*((_QWORD *)v55 + 24) + v42) = *(_BYTE *)(*((_QWORD *)v55 + 24) + v42) & 0xF8 | 3;
            if ( (int *)v41 == v9 )
            {
LABEL_45:
              v4 = v40;
              v8 = v55;
              break;
            }
          }
          else
          {
            *(_BYTE *)(*((_QWORD *)v55 + 24) + v42) = *(_BYTE *)(*((_QWORD *)v55 + 24) + v42) & 0xF8 | 2;
LABEL_39:
            if ( (int *)v41 == ++v9 )
              goto LABEL_45;
          }
        }
      }
LABEL_19:
      result = v59;
      v7 = v59;
      if ( v59 == v60 )
        return result;
      v59 -= 32;
    }
    if ( (int)v11 >= v12 )
      goto LABEL_19;
    v15 = 1;
    v13 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
    do
    {
LABEL_12:
      v21 = v9[v11];
      v22 = *(double *)(v10 + 8 * v11);
      v23 = (double *)(v57 + 8 * v21);
      if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v22 - *v23) & *(_QWORD *)&v13.m128d_f64[0]) > v5 )
      {
        v24 = (_BYTE *)(v21 + *((_QWORD *)v8 + 24));
        if ( (*v24 & 7) != 1 )
        {
          v25 = *(double *)(v48 + 8 * v21);
          *v24 = *v24 & 0xF8 | 2;
          v22 = *(double *)(v10 + 8 * v11);
          if ( v25 > v50 || *(double *)(v56 + 8 * v21) >= 1.797693134862316e308 )
            v15 = 0;
        }
      }
      ++v11;
      *v23 = v22;
    }
    while ( v12 > (int)v11 );
    goto LABEL_18;
  }
  return result;
}

