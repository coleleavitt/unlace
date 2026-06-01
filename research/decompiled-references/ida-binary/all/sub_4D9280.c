char __fastcall sub_4D9280(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v10; // rcx
  unsigned __int64 *v11; // r12
  signed int v13; // eax
  double v14; // xmm6_8
  __m128d v15; // xmm7
  double v16; // xmm9_8
  double v17; // xmm8_8
  __m128d v18; // xmm3
  double v19; // xmm5_8
  __m128d v20; // xmm4
  double v21; // xmm2_8
  double v22; // xmm3_8
  double v23; // xmm2_8
  double v24; // xmm5_8
  double v25; // xmm12_8
  double v26; // xmm4_8
  double v27; // xmm0_8
  double v28; // xmm1_8
  double v29; // xmm1_8
  __m128d v30; // xmm0
  double v31; // xmm2_8
  double v32; // xmm1_8
  double v33; // xmm0_8
  __m128d v34; // xmm14
  double v35; // xmm0_8
  signed int v36; // edx
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // rbp
  _BYTE *v39; // rax
  _BYTE *v40; // rcx
  _BYTE *v41; // rdx

  v10 = *(unsigned int *)(a1 + 44);
  if ( (v10 & 0x20) == 0 || (v11 = (unsigned __int64 *)a2, a2 = *(unsigned int *)(a3 + 44), (a2 & 0x20) == 0) )
  {
    sub_4D8580(a5, a1, a2, a3, v10);
LABEL_47:
    LOBYTE(v13) = 0;
    return v13;
  }
  v13 = ((unsigned int)v10 >> 1) & 1;
  if ( ((*(_DWORD *)(a1 + 44) & 2) != 0) != ((*(_DWORD *)(a3 + 44) & 2) != 0) )
  {
    if ( dword_8D1DFC > 1 )
    {
      __printf_chk(1, "Discriminate on: first_char_match_\n", a5, a6, a7, a8, a9);
      LOBYTE(v13) = (*(_BYTE *)(a1 + 44) & 2) != 0;
    }
    return v13;
  }
  v14 = *(double *)(a1 + 24);
  v15 = (__m128d)*(unsigned __int64 *)(a3 + 24);
  v16 = *(double *)(a1 + 32);
  v17 = *(double *)(a3 + 32);
  v18 = (__m128d)*(unsigned __int64 *)&v14;
  v18.m128d_f64[0] = v14 - v15.m128d_f64[0];
  v19 = _mm_cmplt_sd(v15, (__m128d)0LL).m128d_f64[0];
  v20 = (__m128d)*(unsigned __int64 *)&v16;
  v20.m128d_f64[0] = v16 - v17;
  v18.m128d_f64[0] = _mm_cmplt_sd(v18, (__m128d)0LL).m128d_f64[0];
  v21 = _mm_cmplt_sd((__m128d)*(unsigned __int64 *)&v14, (__m128d)0LL).m128d_f64[0];
  *(_QWORD *)&v22 = ~*(_QWORD *)&v18.m128d_f64[0] & COERCE_UNSIGNED_INT64(v14 - v15.m128d_f64[0])
                  | COERCE_UNSIGNED_INT64(-(v14 - v15.m128d_f64[0])) & *(_QWORD *)&v18.m128d_f64[0];
  *(_QWORD *)&v23 = ~*(_QWORD *)&v21 & *(_QWORD *)&v14 | COERCE_UNSIGNED_INT64(-v14) & *(_QWORD *)&v21;
  *(_QWORD *)&v24 = ~*(_QWORD *)&v19 & *(_QWORD *)&v15.m128d_f64[0]
                  | COERCE_UNSIGNED_INT64(-*(double *)(a3 + 24)) & *(_QWORD *)&v19;
  v20.m128d_f64[0] = _mm_cmplt_sd(v20, (__m128d)0LL).m128d_f64[0];
  v25 = fmax(v23, v24) * 2.220446049250313e-16;
  *(_QWORD *)&v26 = ~*(_QWORD *)&v20.m128d_f64[0] & COERCE_UNSIGNED_INT64(v16 - v17)
                  | COERCE_UNSIGNED_INT64(-(v16 - v17)) & *(_QWORD *)&v20.m128d_f64[0];
  v27 = _mm_cmplt_sd((__m128d)*(unsigned __int64 *)&v16, (__m128d)0LL).m128d_f64[0];
  v28 = _mm_cmplt_sd((__m128d)*(unsigned __int64 *)&v17, (__m128d)0LL).m128d_f64[0];
  v29 = fmax(
          COERCE_DOUBLE(~*(_QWORD *)&v27 & *(_QWORD *)&v16 | COERCE_UNSIGNED_INT64(-v16) & *(_QWORD *)&v27),
          COERCE_DOUBLE(~*(_QWORD *)&v28 & *(_QWORD *)&v17 | COERCE_UNSIGNED_INT64(-v17) & *(_QWORD *)&v28));
  v30 = (__m128d)*(unsigned __int64 *)&v14;
  v30.m128d_f64[0] = v14 - 1.0;
  v31 = fmax(v23, 1.0) * 2.220446049250313e-16;
  v32 = v29 * 2.220446049250313e-16;
  v30.m128d_f64[0] = _mm_cmplt_sd(v30, (__m128d)0LL).m128d_f64[0];
  *(_QWORD *)&v33 = ~*(_QWORD *)&v30.m128d_f64[0] & COERCE_UNSIGNED_INT64(v14 - 1.0)
                  | COERCE_UNSIGNED_INT64(-(v14 - 1.0)) & *(_QWORD *)&v30.m128d_f64[0];
  if ( v31 < v33 )
  {
    v34 = (__m128d)COERCE_UNSIGNED_INT64(v15.m128d_f64[0] - 1.0);
    v35 = _mm_cmplt_sd(v34, (__m128d)0LL).m128d_f64[0];
    *(_QWORD *)&v31 = COERCE_UNSIGNED_INT64(-v34.m128d_f64[0]) & *(_QWORD *)&v35;
    *(_QWORD *)&v33 = ~*(_QWORD *)&v35 & *(_QWORD *)&v34.m128d_f64[0] | *(_QWORD *)&v31;
    if ( fmax(v24, 1.0) * 2.220446049250313e-16 < v33 )
    {
      if ( ((*(_DWORD *)(a3 + 44) & 4) != 0) == ((*(_DWORD *)(a1 + 44) & 4) != 0) )
      {
        if ( v25 >= v22 )
        {
          if ( v32 >= v26 )
            goto LABEL_12;
LABEL_25:
          if ( dword_8D1DFC > 1 )
          {
            __printf_chk(1, "Discriminate on: boundary_chars_use\n", v33, v32, v31, v22, v26);
            v16 = *(double *)(a1 + 32);
            v17 = *(double *)(a3 + 32);
          }
          LOBYTE(v13) = v16 > v17;
          return v13;
        }
LABEL_22:
        if ( dword_8D1DFC > 1 )
        {
          __printf_chk(1, "Discriminate on: boundary_chars_ratio\n", v33, v32, v31, v22, v26);
          v14 = *(double *)(a1 + 24);
          v15.m128d_f64[0] = *(double *)(a3 + 24);
        }
        LOBYTE(v13) = v14 > v15.m128d_f64[0];
        return v13;
      }
      goto LABEL_19;
    }
  }
  if ( v25 < v22 )
    goto LABEL_22;
  if ( v32 < v26 )
    goto LABEL_25;
  if ( ((*(_DWORD *)(a3 + 44) & 4) != 0) != ((*(_DWORD *)(a1 + 44) & 4) != 0) )
  {
LABEL_19:
    if ( dword_8D1DFC > 1 )
    {
      __printf_chk(1, "Discriminate on: query_is_candidate_prefix_\n", v33, v32, v31, v22, v26);
      LODWORD(v10) = *(_DWORD *)(a1 + 44);
    }
    return ((unsigned int)v10 >> 2) & 1;
  }
LABEL_12:
  v36 = *(_DWORD *)(a1 + 40);
  v13 = *(_DWORD *)(a3 + 40);
  if ( v36 == v13 )
  {
    v37 = *v11;
    v38 = *a4;
    if ( *a4 == *v11 )
    {
      v13 = ((unsigned int)v10 >> 3) & 1;
      if ( ((a2 & 8) != 0) == ((*(_DWORD *)(a1 + 44) & 8) != 0) )
      {
        if ( dword_8D1DFC > 1 )
        {
          __printf_chk(1, "Discriminate on: lexicographical_compare\n", v33, v32, v31, v22, v26);
          v37 = *v11;
          v38 = *a4;
        }
        v39 = (_BYTE *)v11[1];
        v40 = &v39[v38];
        if ( (__int64)v38 >= (__int64)v37 )
          v40 = &v39[v37];
        v41 = (_BYTE *)a4[1];
        if ( v39 == v40 )
        {
LABEL_45:
          LOBYTE(v13) = v41 != (_BYTE *)(v38 + a4[1]);
        }
        else
        {
          while ( *v41 <= *v39 )
          {
            if ( *v41 < *v39 )
              goto LABEL_47;
            ++v39;
            ++v41;
            if ( v39 == v40 )
              goto LABEL_45;
          }
          LOBYTE(v13) = 1;
        }
      }
      else if ( dword_8D1DFC > 1 )
      {
        __printf_chk(1, "Discriminate on: text_is_lowercase_\n", v33, v32, v31, v22, v26);
        LOBYTE(v13) = (*(_BYTE *)(a1 + 44) & 8) != 0;
      }
    }
    else
    {
      if ( dword_8D1DFC > 1 )
        __printf_chk(1, "Discriminate on: text length\n", v33, v32, v31, v22, v26);
      LOBYTE(v13) = v37 < v38;
    }
  }
  else
  {
    if ( dword_8D1DFC > 1 )
    {
      __printf_chk(1, "Discriminate on: char_match_index_sum_\n", v33, v32, v31, v22, v26);
      v36 = *(_DWORD *)(a1 + 40);
      v13 = *(_DWORD *)(a3 + 40);
    }
    LOBYTE(v13) = v36 < v13;
  }
  return v13;
}
