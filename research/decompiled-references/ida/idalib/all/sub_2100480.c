__m128i *__fastcall sub_2100480(int *a1, const __m128i *a2)
{
  int v2; // eax
  __int64 v3; // rbp
  __m128i *result; // rax

  v2 = *a1;
  v3 = a2[-1].m128i_i64[1];
  if ( *a1 != 1 )
  {
    if ( !v2 )
    {
      result = (__m128i *)sub_21236A0(32, a2[-1].m128i_i64[1], a1);
      *result = _mm_loadu_si128(a2);
      result[1] = _mm_loadu_si128(a2 + 1);
      goto LABEL_5;
    }
    if ( v2 != 3 )
      sub_2221CA0(".set redefinition is not supported");
  }
  result = (__m128i *)sub_21236A0(40, a2[-1].m128i_i64[1], a1);
  *result = _mm_loadu_si128(a2);
  result[1] = _mm_loadu_si128(a2 + 1);
  result[2].m128i_i64[0] = a2[2].m128i_i64[0];
LABEL_5:
  result[-1].m128i_i64[1] = v3;
  *(_QWORD *)(v3 + 8) = result;
  result->m128i_i8[8] &= ~8u;
  a2->m128i_i8[8] = a2->m128i_i8[8] & 0xED | 2;
  return result;
}
