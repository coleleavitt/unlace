__m128 *__fastcall sub_20BE360(__m128 *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __m128 v4; // xmm0
  double v5[2]; // [rsp+0h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  a1->m128_u64[0] = *(_QWORD *)(a2 + 16);
  a1->m128_u64[1] = v2;
  *(_QWORD *)&v5[0] = a2 + 24;
  v4 = _mm_loadh_ps(v5);
  a1[1] = v4;
  a1[2] = v4;
  a1[3] = v4;
  return a1;
}
