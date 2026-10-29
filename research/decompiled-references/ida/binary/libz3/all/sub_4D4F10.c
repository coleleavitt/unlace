__m128i *__fastcall sub_4D4F10(__m128i *a1, __int64 a2)
{
  __m128i v2; // xmm0
  __m128i *result; // rax

  v2 = _mm_loadu_si128((const __m128i *)(a2 + 264));
  result = a1;
  *a1 = v2;
  if ( v2.m128i_i64[0] )
    ++*(_DWORD *)(v2.m128i_i64[0] + 8);
  return result;
}

