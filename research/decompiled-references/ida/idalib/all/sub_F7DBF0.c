__m128i *__fastcall sub_F7DBF0(__int64 a1, const __m128i *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  __m128i *result; // rax
  __int64 v8; // rsi

  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(_QWORD *)a1;
  v6 = v4 + 1;
  result = (__m128i *)(v5 + 56 * v4);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    v8 = a1 + 16;
    if ( v5 > (unsigned __int64)a2 || result <= a2 )
    {
      sub_2237220(a1, v8, v6, 56);
      result = (__m128i *)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
    }
    else
    {
      sub_2237220(a1, v8, v6, 56);
      a2 = (const __m128i *)((char *)a2 + *(_QWORD *)a1 - v5);
      result = (__m128i *)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
    }
  }
  *result = _mm_loadu_si128(a2);
  result[1] = _mm_loadu_si128(a2 + 1);
  result[2] = _mm_loadu_si128(a2 + 2);
  result[3].m128i_i64[0] = a2[3].m128i_i64[0];
  ++*(_DWORD *)(a1 + 8);
  return result;
}
