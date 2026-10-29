__m128 *__fastcall sub_B7ADA0(__m128 *a1, __int64 a2)
{
  double v2; // rdx
  __int64 v3; // rcx
  double v5[4]; // [rsp+8h] [rbp-20h] BYREF

  sub_B8E970(a2 + 48);
  v2 = *(double *)(a2 + 104);
  v3 = *(_QWORD *)(a2 + 112);
  a1[1].m128_u64[0] = 0;
  v5[0] = v2;
  a1[1].m128_u64[1] = *(_QWORD *)&v2 + 8 * v3;
  *a1 = _mm_loadh_ps(v5);
  return a1;
}
