__int64 __fastcall sub_124FC70(__m128i *a1, const __m128i *a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax

  *a1 = _mm_loadu_si128(a2);
  v2 = _mm_loadu_si128(a2 + 1);
  a1[1] = v2;
  a1[2] = _mm_loadu_si128(a2 + 2);
  if ( a2->m128i_i32[0] == 11 )
  {
    a1[2].m128i_i64[0] = 0;
    v3 = _mm_loadu_si128(a2 + 1);
    a2[1] = v2;
    v4 = a1[2].m128i_i64[0];
    a1[1] = v3;
    v5 = a2[2].m128i_i64[0];
    a2[2].m128i_i64[0] = v4;
    v6 = a1[2].m128i_i64[1];
    a1[2].m128i_i64[0] = v5;
    result = a2[2].m128i_i64[1];
    a2[2].m128i_i64[1] = v6;
    a1[2].m128i_i64[1] = result;
  }
  return result;
}
