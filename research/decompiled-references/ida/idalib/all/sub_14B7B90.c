__m128i *__fastcall sub_14B7B90(__int64 a1, const __m128i *a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __m128i *result; // rax
  __int64 v7; // rsi
  __int8 *v8; // rbp

  v3 = *(unsigned int *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  v5 = v3 + 1;
  result = (__m128i *)(*(_QWORD *)a1 + 24 * v3);
  if ( v5 > *(unsigned int *)(a1 + 12) )
  {
    v7 = a1 + 16;
    if ( v4 > (unsigned __int64)a2 || result <= a2 )
    {
      sub_2237220(a1, v7, v5, 24);
      result = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
    }
    else
    {
      v8 = &a2->m128i_i8[-v4];
      sub_2237220(a1, v7, v5, 24);
      a2 = (const __m128i *)&v8[*(_QWORD *)a1];
      result = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
    }
  }
  *result = _mm_loadu_si128(a2);
  result[1].m128i_i64[0] = a2[1].m128i_i64[0];
  ++*(_DWORD *)(a1 + 8);
  return result;
}
