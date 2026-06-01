const __m128i *__fastcall get_sourcefile(__int64 a1, __m128i *a2)
{
  const __m128i *result; // rax

  result = (const __m128i *)sub_505D70(*(_QWORD *)(qword_2CCB598 + 1672) + 1320LL, a1);
  if ( result )
  {
    if ( a2 )
      *a2 = _mm_loadu_si128(result);
    return (const __m128i *)result[1].m128i_i64[0];
  }
  return result;
}
