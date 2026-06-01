__m128 **__fastcall sub_21E7170(__m128 **a1, unsigned int **a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  double v5; // r12
  double v6; // r13
  double v7; // r14
  double v8; // rsi
  __m128 *v9; // rax
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  double v13[10]; // [rsp+8h] [rbp-50h] BYREF

  v3 = (__int64)*a2;
  v4 = *(*a2)++;
  v5 = *(double *)(v3 + 44);
  v6 = *(double *)(v3 + 28);
  v7 = *(double *)(v3 + 12);
  v8 = *(double *)(v3 + 20);
  v13[2] = *(double *)(v3 + 36);
  v13[1] = v8;
  v9 = (__m128 *)operator new(0x30u);
  v13[0] = v7;
  *a1 = v9;
  *a2 += 2 * v4;
  v10 = _mm_loadh_ps(v13);
  v13[0] = v6;
  *v9 = v10;
  v11 = _mm_loadh_ps(v13);
  v13[0] = v5;
  v9[1] = v11;
  v9[2] = _mm_loadh_ps(v13);
  return a1;
}
