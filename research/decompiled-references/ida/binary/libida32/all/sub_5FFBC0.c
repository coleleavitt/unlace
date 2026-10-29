int *__fastcall sub_5FFBC0(int *a1)
{
  int v1; // edx
  int *result; // rax
  __m128i v3; // xmm0
  __m128i v4; // [rsp+0h] [rbp-38h] BYREF
  __m128i v5[2]; // [rsp+10h] [rbp-28h] BYREF

  v1 = *a1;
  result = a1 - 12;
  v4 = _mm_loadu_si128((const __m128i *)a1);
  v5[0] = _mm_loadu_si128((const __m128i *)a1 + 1);
  for ( v5[1] = _mm_loadu_si128((const __m128i *)a1 + 2);
        v1 - *result < 0;
        *(__m128i *)(result + 31) = _mm_loadu_si128((const __m128i *)(result + 19)) )
  {
    v3 = _mm_loadu_si128((const __m128i *)result);
    a1 = result;
    result -= 12;
    *((__m128i *)result + 6) = v3;
    *((__m128i *)result + 7) = _mm_loadu_si128((const __m128i *)result + 4);
  }
  *(__m128i *)a1 = _mm_load_si128(&v4);
  *((__m128i *)a1 + 1) = _mm_load_si128(v5);
  *(__m128i *)(a1 + 7) = _mm_loadu_si128((const __m128i *)((char *)&v5[0].m128i_u64[1] + 4));
  return result;
}

