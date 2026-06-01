__int64 __fastcall sub_FC2BC0(__m128i *a1, const __m128i *a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  __m128i v4; // xmm2
  __m128i v5; // xmm3
  __int64 v6; // rax
  __int32 v7; // edx
  __int32 v8; // edx
  __int64 result; // rax

  a1[5].m128i_i8[8] = 0;
  if ( a2[5].m128i_i8[8] )
  {
    v2 = _mm_loadu_si128(a2);
    v3 = _mm_loadu_si128(a2 + 1);
    v4 = _mm_loadu_si128(a2 + 2);
    v5 = _mm_loadu_si128(a2 + 3);
    a1[4].m128i_i64[0] = 0;
    v6 = a2[4].m128i_i64[0];
    a1[4].m128i_i64[1] = 0;
    a1[5].m128i_i32[0] = 0;
    a1[4].m128i_i64[0] = v6;
    LODWORD(v6) = a2[4].m128i_i32[2];
    *a1 = v2;
    a1[1] = v3;
    a1[2] = v4;
    a1[3] = v5;
    a2[4].m128i_i64[0] = 0;
    a1[4].m128i_i32[2] = v6;
    v7 = a2[4].m128i_i32[3];
    a2[4].m128i_i32[2] = 0;
    LODWORD(v6) = a1[4].m128i_i32[3];
    a1[4].m128i_i32[3] = v7;
    v8 = a2[5].m128i_i32[0];
    a2[4].m128i_i32[3] = v6;
    result = a1[5].m128i_u32[0];
    a1[5].m128i_i32[0] = v8;
    a2[5].m128i_i32[0] = result;
    a1[5].m128i_i8[8] = 1;
  }
  return result;
}
