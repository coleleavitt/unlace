__int64 __fastcall sub_140BE40(__m128i *a1, const __m128i *a2)
{
  __int64 result; // rax

  *a1 = _mm_loadu_si128(a2);
  result = a2[1].m128i_i64[0];
  a1[1].m128i_i64[0] = result;
  return result;
}
