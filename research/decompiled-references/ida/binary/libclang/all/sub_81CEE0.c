__m128 *__fastcall sub_81CEE0(__m128 *a1, __int64 a2, int a3)
{
  __m128 *result; // rax
  int v5; // edi
  __int64 v6; // rdx
  __m128 v7; // xmm0
  unsigned __int64 v8; // rdx

  result = a1;
  v5 = 3 * a3;
  v6 = 8LL * *(unsigned int *)(a2 + 28) + 32;
  v7 = _mm_loadh_ps((const double *)(a2 + 8LL * (unsigned int)(v5 + 1) + v6));
  v8 = *(_QWORD *)(a2 + 8LL * (unsigned int)(3 * a3 + 2) + v6);
  *result = v7;
  result[1].m128_u64[0] = v8;
  return result;
}

