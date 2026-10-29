__m128d *__fastcall sub_29A020(__m128 a1, __int64 a2, int *a3, int *a4, __m128d *a5)
{
  int v5; // r10d
  __m128d *result; // rax
  int v7; // r11d
  int v8; // r8d
  int v9; // ecx
  int v10; // r9d
  int v11; // esi
  int v12; // edi
  double v13; // xmm1_8
  int v14; // ecx
  __m128d v15; // xmm1
  __m128d v16; // xmm2

  if ( a5 )
  {
    v5 = a3[2];
    result = a5;
    v7 = *a3;
    v8 = a3[3];
    v9 = v5 - *a3;
    v10 = a4[1];
    v11 = a3[1];
    v12 = a4[2] - *a4;
    v13 = (double)v9;
    v14 = a4[3] - v10;
    *(_QWORD *)&v15.m128d_f64[1] = a1.m128_u64[1];
    v15.m128d_f64[0] = fmin(*(double *)a1.m128_u64, fmin(v13 / (double)v12, (double)(v8 - v11) / (double)v14));
    v16 = 0;
    v16.m128d_f64[0] = (double)*a4 - ((double)((v7 + v5) / 2) / v15.m128d_f64[0] - (double)(v12 / 2));
    *result = _mm_unpacklo_pd(v15, v16);
    result[1].m128d_f64[0] = (double)v10 - ((double)((v8 + v11) / 2) / v15.m128d_f64[0] - (double)(v14 / 2));
  }
  return result;
}
