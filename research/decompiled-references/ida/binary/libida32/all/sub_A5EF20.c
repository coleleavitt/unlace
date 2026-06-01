__int64 __fastcall sub_A5EF20(__int64 a1, __m128i *a2)
{
  __m128i *v2; // rax
  __int64 result; // rax

  v2 = *(__m128i **)(a1 + 8);
  if ( v2 == *(__m128i **)(a1 + 16) )
  {
    sub_A5EC30((void ***)a1, v2, a2);
    return *(_QWORD *)(a1 + 8) - 32LL;
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
    a2[1].m128i_i8[0] = 0;
    result = *(_QWORD *)(a1 + 8);
    a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
    a2->m128i_i64[1] = 0;
    *(_QWORD *)(a1 + 8) = result + 32;
  }
  return result;
}

