__int64 __fastcall sub_225F0D0(__m128i *a1, __m128i *a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rax
  __int64 result; // rax

  if ( (a2[5].m128i_i8[8] & 1) != 0 )
  {
    a1[5].m128i_i8[8] |= 1u;
    if ( (a2[5].m128i_i8[8] & 1) != 0 )
    {
      result = a2->m128i_i64[1];
      a1->m128i_i32[0] = a2->m128i_i32[0];
    }
    else
    {
      result = std::_V2::system_category((std::_V2 *)a1);
      a1->m128i_i32[0] = 0;
    }
    a1->m128i_i64[1] = result;
  }
  else
  {
    a1[5].m128i_i8[8] &= ~1u;
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( (__m128i *)a2->m128i_i64[0] == &a2[1] )
    {
      a1[1] = _mm_loadu_si128(a2 + 1);
    }
    else
    {
      a1->m128i_i64[0] = a2->m128i_i64[0];
      a1[1].m128i_i64[0] = a2[1].m128i_i64[0];
    }
    a1->m128i_i64[1] = a2->m128i_i64[1];
    v2 = _mm_loadu_si128(a2 + 2);
    a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
    v3 = a2[3].m128i_i64[0];
    a2->m128i_i64[1] = 0;
    a2[1].m128i_i8[0] = 0;
    a1[3].m128i_i64[0] = v3;
    LODWORD(v3) = a2[3].m128i_i32[2];
    a1[2] = v2;
    a1[3].m128i_i32[2] = v3;
    a1[3].m128i_i32[3] = a2[3].m128i_i32[3];
    a1[4].m128i_i64[0] = a2[4].m128i_i64[0];
    a1[4].m128i_i32[2] = a2[4].m128i_i32[2];
    a1[4].m128i_i32[3] = a2[4].m128i_i32[3];
    result = a2[5].m128i_u8[0];
    a1[5].m128i_i8[0] = result;
  }
  return result;
}
