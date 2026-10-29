__int64 __fastcall sub_FC2B40(__m128i *a1, const __m128i *a2)
{
  __int32 v2; // eax
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __int64 v5; // rax
  __int32 v6; // edx
  __int32 v7; // edx
  __int64 result; // rax

  a1[4].m128i_i8[0] = 0;
  if ( a2[4].m128i_i8[0] )
  {
    v2 = a2[2].m128i_i32[0];
    v3 = _mm_loadu_si128(a2);
    v4 = _mm_loadu_si128(a2 + 1);
    a1[2].m128i_i64[1] = 0;
    a1[2].m128i_i32[0] = v2;
    v5 = a2[2].m128i_i64[1];
    a1[3].m128i_i64[0] = 0;
    a1[3].m128i_i32[2] = 0;
    a1[2].m128i_i64[1] = v5;
    LODWORD(v5) = a2[3].m128i_i32[0];
    *a1 = v3;
    a1[1] = v4;
    a2[2].m128i_i64[1] = 0;
    a1[3].m128i_i32[0] = v5;
    v6 = a2[3].m128i_i32[1];
    a2[3].m128i_i32[0] = 0;
    LODWORD(v5) = a1[3].m128i_i32[1];
    a1[3].m128i_i32[1] = v6;
    v7 = a2[3].m128i_i32[2];
    a2[3].m128i_i32[1] = v5;
    result = a1[3].m128i_u32[2];
    a1[3].m128i_i32[2] = v7;
    a2[3].m128i_i32[2] = result;
    a1[4].m128i_i8[0] = 1;
  }
  return result;
}
