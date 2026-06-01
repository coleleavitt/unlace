__m128i *__fastcall sub_1D3C010(
        __m128i *a1,
        _QWORD *a2,
        const __m128i *a3,
        const __m128i *a4,
        unsigned __int8 a5,
        __int64 a6)
{
  __m128i *result; // rax
  __m128i v7; // xmm1
  __m128i v8; // xmm3

  result = a1;
  if ( (a3->m128i_i32[0] & 0x7FFFFFFF) != 0 )
  {
    if ( (a4->m128i_i32[0] & 0x7FFFFFFF) != 0 )
    {
      sub_1D3B740(a1, a2, a3, a4, a5, a6);
      return a1;
    }
    else
    {
      v8 = _mm_loadu_si128(a3 + 1);
      *a1 = _mm_loadu_si128(a3);
      a1[1] = v8;
    }
  }
  else
  {
    v7 = _mm_loadu_si128(a4 + 1);
    *a1 = _mm_loadu_si128(a4);
    a1[1] = v7;
  }
  return result;
}
