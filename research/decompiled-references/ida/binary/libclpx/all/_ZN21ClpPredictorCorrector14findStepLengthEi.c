__int64 __fastcall ClpPredictorCorrector::findStepLength(ClpPredictorCorrector *this, int a2)
{
  __int64 result; // rax
  double v4; // xmm2_8
  __m128d v5; // xmm8
  __int64 v6; // r9
  __int64 v7; // r8
  double v8; // xmm0_8
  __m128d v9; // xmm1
  char v10; // cl
  double v11; // xmm3_8
  double v12; // xmm13_8
  double v13; // xmm14_8
  double v14; // xmm6_8
  double v15; // xmm3_8
  __m128d v16; // xmm4
  double v17; // xmm13_8
  double v18; // xmm14_8
  double v19; // xmm6_8
  double v20; // xmm3_8
  __m128d v21; // xmm4
  double v22; // xmm3_8
  double v23; // xmm1_8
  double v24; // xmm2_8
  const void *v25; // rdi
  double v26; // xmm2_8
  __m128d v27; // rt1
  __m128d v28; // xmm3
  __m128d v29; // xmm3

  result = (unsigned int)(*((_DWORD *)this + 26) + *((_DWORD *)this + 27));
  if ( *((int *)this + 77) > 79 && *((_BYTE *)this + 1308) )
  {
    v5.m128d_f64[0] = 0.001 * *((double *)this + 108);
    if ( v5.m128d_f64[0] < 1000.0 )
      v5.m128d_f64[0] = 1000.0;
    v4 = 1.797693134862316e308;
    if ( (int)result > 0 )
      goto LABEL_4;
LABEL_45:
    v9.m128d_f64[0] = 1.797693134862316e288;
    goto LABEL_23;
  }
  v4 = 1.797693134862316e308;
  v5.m128d_f64[0] = 1.797693134862316e308;
  if ( (int)result <= 0 )
    goto LABEL_45;
LABEL_4:
  v7 = (unsigned int)(result - 1) + 1LL;
  result = 0;
  v8 = 0.0;
  v9 = (__m128d)0x7BC79CA10C924222uLL;
  do
  {
    v6 = *((_QWORD *)this + 33);
    v10 = *(_BYTE *)(v6 + result);
    if ( (v10 & 2) == 0 )
    {
      v11 = *(double *)(*((_QWORD *)this + 145) + 8 * result);
      if ( v11 < 0.0 )
        v11 = -v11;
      v8 = fmax(v11, v8);
      if ( (v10 & 8) != 0 )
      {
        v12 = *(double *)(*((_QWORD *)this + 150) + 8 * result);
        v13 = *(double *)(*((_QWORD *)this + 147) + 8 * result);
        v14 = -v12;
        v15 = *(double *)(*((_QWORD *)this + 159) + 8 * result);
        if ( v15 > 1.0e-12 && -v13 * v4 > v15 )
          v4 = -v15 / v13;
        v16 = (__m128d)*(unsigned __int64 *)(*((_QWORD *)this + 141) + 8 * result);
        if ( v14 * v9.m128d_f64[0] > v16.m128d_f64[0] )
        {
          v16.m128d_f64[0] = v16.m128d_f64[0] / v14;
          if ( v16.m128d_f64[0] > 0.2 || v5.m128d_f64[0] > v15 + v13 || v12 < -1000.0 || v12 >= -0.000001 )
          {
            v9 = v16;
          }
          else
          {
            v29 = _mm_cmpge_sd((__m128d)*(unsigned __int64 *)(*((_QWORD *)this + 104) + 8 * result), v5);
            v9 = _mm_or_pd(_mm_and_pd(v9, v29), _mm_andn_pd(v29, v16));
          }
        }
      }
      if ( (*(_BYTE *)(v6 + result) & 0x10) != 0 )
      {
        v17 = *(double *)(*((_QWORD *)this + 149) + 8 * result);
        v18 = *(double *)(*((_QWORD *)this + 148) + 8 * result);
        v19 = -v17;
        v20 = *(double *)(*((_QWORD *)this + 160) + 8 * result);
        if ( v20 > 1.0e-12 && -v18 * v4 > v20 )
          v4 = -v20 / v18;
        v21 = (__m128d)*(unsigned __int64 *)(*((_QWORD *)this + 140) + 8 * result);
        if ( v9.m128d_f64[0] * v19 > v21.m128d_f64[0] )
        {
          v21.m128d_f64[0] = v21.m128d_f64[0] / v19;
          if ( v21.m128d_f64[0] > 0.2 || v5.m128d_f64[0] > v20 + v18 || v17 < -1000.0 || v17 >= -0.000001 )
          {
            v9 = v21;
          }
          else
          {
            v27.m128d_f64[0] = *(double *)(*((_QWORD *)this + 104) + 8 * result);
            v28 = _mm_cmpge_sd((__m128d)COERCE_UNSIGNED_INT64(-v5.m128d_f64[0]), v27);
            v9 = _mm_or_pd(_mm_and_pd(v9, v28), _mm_andn_pd(v28, v21));
          }
        }
      }
    }
    ++result;
  }
  while ( v7 != result );
LABEL_23:
  v22 = *((double *)this + 114);
  v23 = v9.m128d_f64[0] * v22;
  v24 = v4 * v22;
  *((double *)this + 126) = v23;
  if ( a2 < 0 )
    goto LABEL_28;
  if ( v23 > 1.0 )
    *((_QWORD *)this + 126) = 0x3FF0000000000000LL;
  if ( v24 <= 1.0 )
  {
LABEL_28:
    *((double *)this + 127) = v24;
  }
  else
  {
    *((_QWORD *)this + 127) = 0x3FF0000000000000LL;
    v24 = 1.0;
  }
  v25 = *((const void **)this + 20);
  if ( v25 )
  {
    result = (__int64)__dynamic_cast(
                        v25,
                        (const struct __class_type_info *)&`typeinfo for'ClpObjective,
                        (const struct __class_type_info *)&`typeinfo for'ClpQuadraticObjective,
                        0);
    if ( result )
    {
      v26 = fmin(v24, *((double *)this + 126));
      if ( v26 > 0.0001 )
      {
        *((double *)this + 127) = v26;
        *((double *)this + 126) = v26;
      }
    }
  }
  return result;
}

