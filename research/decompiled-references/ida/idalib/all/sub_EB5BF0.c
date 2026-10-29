__m128 *__fastcall sub_EB5BF0(__m128 *a1, __int64 a2, int a3)
{
  __m128 *result; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx

  result = a1;
  v4 = (unsigned int)(2 * a3);
  v5 = (unsigned int)(v4 + 1);
  v6 = 8LL * (unsigned int)(2 * *(_DWORD *)(a2 + 16)) + 24;
  LODWORD(v4) = *(_DWORD *)(a2 + 4 * v4 + v6);
  LODWORD(v6) = *(_DWORD *)(a2 + 4 * v5 + v6);
  *result = _mm_loadh_ps((const double *)(a2 + 8 * v5 + 24));
  result[1].m128_i32[0] = v4;
  result[1].m128_i32[1] = v6;
  return result;
}
