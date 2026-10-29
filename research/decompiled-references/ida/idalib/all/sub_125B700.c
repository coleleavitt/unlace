__int64 __fastcall sub_125B700(__int64 a1, __m128i *a2)
{
  __m128i *v2; // rax
  __m128i *v3; // rcx
  __int64 result; // rax

  v2 = *(__m128i **)(a1 + 8);
  if ( v2 == *(__m128i **)(a1 + 16) )
  {
    sub_125B300(a1, v2, a2);
    return *(_QWORD *)(a1 + 8) - 64LL;
  }
  else
  {
    v2->m128i_i64[0] = (__int64)v2[1].m128i_i64;
    if ( &a2[1] == (__m128i *)a2->m128i_i64[0] )
    {
      v2[1] = _mm_loadu_si128(a2 + 1);
    }
    else
    {
      v2->m128i_i64[0] = a2->m128i_i64[0];
      v2[1].m128i_i64[0] = a2[1].m128i_i64[0];
    }
    v2->m128i_i64[1] = a2->m128i_i64[1];
    a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
    a2->m128i_i64[1] = 0;
    a2[1].m128i_i8[0] = 0;
    v2[2].m128i_i64[0] = (__int64)v2[3].m128i_i64;
    v3 = (__m128i *)a2[2].m128i_i64[0];
    if ( v3 == &a2[3] )
    {
      v2[3] = _mm_loadu_si128(a2 + 3);
    }
    else
    {
      v2[2].m128i_i64[0] = (__int64)v3;
      v2[3].m128i_i64[0] = a2[3].m128i_i64[0];
    }
    v2[2].m128i_i64[1] = a2[2].m128i_i64[1];
    a2[3].m128i_i8[0] = 0;
    result = *(_QWORD *)(a1 + 8);
    a2[2].m128i_i64[0] = (__int64)a2[3].m128i_i64;
    a2[2].m128i_i64[1] = 0;
    *(_QWORD *)(a1 + 8) = result + 64;
  }
  return result;
}
