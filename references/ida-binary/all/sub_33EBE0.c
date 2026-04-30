unsigned __int64 __fastcall sub_33EBE0(__int64 *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rsi
  __m128i v4[2]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *a1;
  result = *(a1 - 4);
  v4[0] = _mm_loadu_si128((const __m128i *)a1);
  v4[1] = _mm_loadu_si128((const __m128i *)a1 + 1);
  if ( result >= v1 )
  {
    v3 = a1[1];
    for ( a1 -= 4; v1 < result || v3 < a1[1]; a1 -= 4 )
    {
      result = *(a1 - 4);
      *((__m128i *)a1 + 2) = _mm_loadu_si128((const __m128i *)a1);
      *(__m128i *)((char *)a1 + 41) = _mm_loadu_si128((const __m128i *)((char *)a1 + 9));
      if ( result < v1 )
        goto LABEL_6;
    }
    a1 += 4;
  }
LABEL_6:
  *(__m128i *)a1 = _mm_load_si128(v4);
  *(__m128i *)((char *)a1 + 9) = _mm_loadu_si128((const __m128i *)((char *)&v4[0].m128i_u64[1] + 1));
  return result;
}
