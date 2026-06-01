__m128i *__fastcall sub_649DC0(__m128i *a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  __m128i v5; // xmm1
  __int64 v6; // rdx
  __m128i *result; // rax

  v5 = (__m128i)a3;
  v6 = *a5;
  result = a1;
  *a1 = _mm_unpacklo_epi64((__m128i)*a5, v5);
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  return result;
}

