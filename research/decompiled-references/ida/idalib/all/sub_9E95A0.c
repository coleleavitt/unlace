__m128 *__fastcall sub_9E95A0(__m128 *a1, __int64 a2)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)(a2 + 24);
  a1[1].m128_i8[0] = 1;
  *a1 = _mm_loadh_ps((const double *)(v2 + 16));
  return a1;
}
