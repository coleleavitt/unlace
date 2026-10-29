__m128i *__fastcall sub_229FE90(__int64 a1)
{
  char **v1; // rbx
  __m128i *result; // rax
  __int64 v3; // rax
  __m128i si128; // xmm0
  __m128i v5[3]; // [rsp+0h] [rbp-38h] BYREF

  v1 = &off_2BED300;
  do
  {
    while ( 1 )
    {
      result = (__m128i *)*((unsigned int *)v1 + 4);
      if ( (_DWORD)result )
        break;
      v1 += 4;
      if ( &off_2BEDEE0 == (_UNKNOWN **)v1 )
        return result;
    }
    v3 = *(unsigned int *)(a1 + 8);
    si128 = _mm_load_si128((const __m128i *)v1);
    if ( v3 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
    {
      v5[0] = si128;
      sub_2237220(a1, (const void *)(a1 + 16), v3 + 1, 16);
      v3 = *(unsigned int *)(a1 + 8);
      si128 = _mm_load_si128(v5);
    }
    v1 += 4;
    result = (__m128i *)(*(_QWORD *)a1 + 16 * v3);
    *result = si128;
    ++*(_DWORD *)(a1 + 8);
  }
  while ( &off_2BEDEE0 != (_UNKNOWN **)v1 );
  return result;
}
