bool __fastcall sub_283F0(double *a1, double *a2)
{
  __m128d v2; // xmm2
  __m128d v3; // xmm3
  __m128d v4; // xmm1
  bool result; // al
  double v6; // xmm0_8
  __m128d v7; // xmm2
  __m128d v8; // xmm3
  __m128d v9; // xmm1
  double v10; // xmm0_8
  __m128d v11; // xmm3
  __m128d v12; // xmm2
  __m128d v13; // xmm1
  double v14; // xmm0_8
  __m128d v15; // xmm1
  __m128d v16; // xmm2
  __m128d v17; // xmm0
  double v18; // xmm1_8
  double v19; // xmm0_8
  double v20; // xmm1_8
  double v21; // xmm0_8
  double v22; // xmm3_8
  double v23; // xmm0_8
  double v24; // xmm0_8
  double v25; // xmm1_8
  double v26; // xmm0_8
  double v27; // xmm3_8
  double v28; // xmm0_8
  double v29; // xmm0_8
  double v30; // xmm1_8
  double v31; // xmm0_8
  double v32; // xmm3_8
  double v33; // xmm0_8
  double v34; // xmm3_8
  double v35; // xmm0_8
  double v36; // xmm3_8
  double v37; // xmm1_8
  double v38; // xmm3_8

  v2.m128d_f64[0] = *a1;
  v3.m128d_f64[0] = *a2;
  v4.m128d_f64[0] = *a1 - *a2;
  result = *a2 == 0.0 || *a1 == 0.0;
  if ( result )
  {
    v6 = _mm_cmpgt_sd((__m128d)0LL, v4).m128d_f64[0];
    if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-v4.m128d_f64[0]) & *(_QWORD *)&v6 | ~*(_QWORD *)&v6
                                                                                & *(_QWORD *)&v4.m128d_f64[0]) > 1.0e-12 )
      return 0;
  }
  else
  {
    v19 = _mm_cmpgt_sd((__m128d)0LL, v4).m128d_f64[0];
    v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-v4.m128d_f64[0]) & *(_QWORD *)&v19 | ~*(_QWORD *)&v19
                                                                                  & *(_QWORD *)&v4.m128d_f64[0])
        * 1.0e12;
    v21 = _mm_cmpgt_sd((__m128d)0LL, v3).m128d_f64[0];
    *(_QWORD *)&v22 = COERCE_UNSIGNED_INT64(-v3.m128d_f64[0]) & *(_QWORD *)&v21
                    | ~*(_QWORD *)&v21 & *(_QWORD *)&v3.m128d_f64[0];
    v23 = _mm_cmpgt_sd((__m128d)0LL, v2).m128d_f64[0];
    if ( fmin(
           COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-v2.m128d_f64[0]) & *(_QWORD *)&v23 | ~*(_QWORD *)&v23
                                                                                   & *(_QWORD *)&v2.m128d_f64[0]),
           v22) < v20 )
      return result;
  }
  v7.m128d_f64[0] = a1[1];
  v8.m128d_f64[0] = a2[1];
  v9.m128d_f64[0] = v7.m128d_f64[0] - v8.m128d_f64[0];
  result = v8.m128d_f64[0] == 0.0 || v7.m128d_f64[0] == 0.0;
  if ( result )
  {
    v10 = _mm_cmpgt_sd((__m128d)0LL, v9).m128d_f64[0];
    if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-v9.m128d_f64[0]) & *(_QWORD *)&v10 | ~*(_QWORD *)&v10
                                                                                 & *(_QWORD *)&v9.m128d_f64[0]) > 1.0e-12 )
      return 0;
  }
  else
  {
    v24 = _mm_cmpgt_sd((__m128d)0LL, v9).m128d_f64[0];
    v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-v9.m128d_f64[0]) & *(_QWORD *)&v24 | ~*(_QWORD *)&v24
                                                                                  & *(_QWORD *)&v9.m128d_f64[0])
        * 1.0e12;
    v26 = _mm_cmpgt_sd((__m128d)0LL, v8).m128d_f64[0];
    *(_QWORD *)&v27 = COERCE_UNSIGNED_INT64(-v8.m128d_f64[0]) & *(_QWORD *)&v26
                    | ~*(_QWORD *)&v26 & *(_QWORD *)&v8.m128d_f64[0];
    v28 = _mm_cmpgt_sd((__m128d)0LL, v7).m128d_f64[0];
    if ( fmin(
           COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-v7.m128d_f64[0]) & *(_QWORD *)&v28 | ~*(_QWORD *)&v28
                                                                                   & *(_QWORD *)&v7.m128d_f64[0]),
           v27) < v25 )
      return result;
  }
  v11.m128d_f64[0] = a2[2];
  v12.m128d_f64[0] = a1[2];
  v13.m128d_f64[0] = v12.m128d_f64[0] - v11.m128d_f64[0];
  result = v12.m128d_f64[0] == 0.0 || v11.m128d_f64[0] == 0.0;
  if ( !result )
  {
    v29 = _mm_cmpgt_sd((__m128d)0LL, v13).m128d_f64[0];
    v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-v13.m128d_f64[0]) & *(_QWORD *)&v29 | ~*(_QWORD *)&v29
                                                                                   & *(_QWORD *)&v13.m128d_f64[0])
        * 1.0e12;
    v31 = _mm_cmpgt_sd((__m128d)0LL, v11).m128d_f64[0];
    *(_QWORD *)&v32 = COERCE_UNSIGNED_INT64(-v11.m128d_f64[0]) & *(_QWORD *)&v31
                    | ~*(_QWORD *)&v31 & *(_QWORD *)&v11.m128d_f64[0];
    v33 = _mm_cmpgt_sd((__m128d)0LL, v12).m128d_f64[0];
    if ( fmin(
           COERCE_DOUBLE(
             COERCE_UNSIGNED_INT64(-v12.m128d_f64[0]) & *(_QWORD *)&v33
           | ~*(_QWORD *)&v33 & *(_QWORD *)&v12.m128d_f64[0]),
           v32) < v30 )
      return result;
    goto LABEL_7;
  }
  v14 = _mm_cmpgt_sd((__m128d)0LL, v13).m128d_f64[0];
  if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-v13.m128d_f64[0]) & *(_QWORD *)&v14 | ~*(_QWORD *)&v14
                                                                                & *(_QWORD *)&v13.m128d_f64[0]) > 1.0e-12 )
    return 0;
LABEL_7:
  v15.m128d_f64[0] = a2[3];
  v16.m128d_f64[0] = a1[3];
  v17.m128d_f64[0] = v16.m128d_f64[0] - v15.m128d_f64[0];
  if ( v15.m128d_f64[0] == 0.0 || v16.m128d_f64[0] == 0.0 )
  {
    v18 = _mm_cmpgt_sd((__m128d)0LL, v17).m128d_f64[0];
    return COERCE_DOUBLE(
             COERCE_UNSIGNED_INT64(-v17.m128d_f64[0]) & *(_QWORD *)&v18
           | ~*(_QWORD *)&v18 & *(_QWORD *)&v17.m128d_f64[0]) <= 1.0e-12;
  }
  else
  {
    v34 = _mm_cmpgt_sd((__m128d)0LL, v17).m128d_f64[0];
    v35 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(-v17.m128d_f64[0]) & *(_QWORD *)&v34 | ~*(_QWORD *)&v34
                                                                                   & *(_QWORD *)&v17.m128d_f64[0])
        * 1.0e12;
    v36 = _mm_cmpgt_sd((__m128d)0LL, v15).m128d_f64[0];
    *(_QWORD *)&v37 = COERCE_UNSIGNED_INT64(-v15.m128d_f64[0]) & *(_QWORD *)&v36
                    | ~*(_QWORD *)&v36 & *(_QWORD *)&v15.m128d_f64[0];
    v38 = _mm_cmpgt_sd((__m128d)0LL, v16).m128d_f64[0];
    return fmin(
             COERCE_DOUBLE(
               COERCE_UNSIGNED_INT64(-v16.m128d_f64[0]) & *(_QWORD *)&v38
             | ~*(_QWORD *)&v38 & *(_QWORD *)&v16.m128d_f64[0]),
             v37) >= v35;
  }
}
