__m128i *__fastcall sub_1ED0DE0(__int64 a1, __m128i *a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  __m128i *result; // rax
  __int8 v7; // dl
  __int8 *v8; // rbx

  v3 = *(unsigned int *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  v5 = v3 + 1;
  result = (__m128i *)(*(_QWORD *)a1 + 40 * v3);
  if ( v5 > *(unsigned int *)(a1 + 12) )
  {
    if ( v4 > (unsigned __int64)a2 || result <= a2 )
    {
      sub_13FB330(a1, v5);
      result = (__m128i *)(*(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8));
    }
    else
    {
      v8 = &a2->m128i_i8[-v4];
      sub_13FB330(a1, v5);
      a2 = (__m128i *)&v8[*(_QWORD *)a1];
      result = (__m128i *)(*(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8));
    }
  }
  result->m128i_i64[0] = (__int64)result[1].m128i_i64;
  if ( (__m128i *)a2->m128i_i64[0] == &a2[1] )
  {
    result[1] = _mm_loadu_si128(a2 + 1);
  }
  else
  {
    result->m128i_i64[0] = a2->m128i_i64[0];
    result[1].m128i_i64[0] = a2[1].m128i_i64[0];
  }
  result->m128i_i64[1] = a2->m128i_i64[1];
  a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
  v7 = a2[2].m128i_i8[0];
  a2->m128i_i64[1] = 0;
  a2[1].m128i_i8[0] = 0;
  result[2].m128i_i8[0] = v7;
  ++*(_DWORD *)(a1 + 8);
  return result;
}
