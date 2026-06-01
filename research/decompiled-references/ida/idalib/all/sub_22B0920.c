__int64 __fastcall sub_22B0920(__m128i *a1, const __m128i *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r13
  __int64 v7; // rbx
  unsigned int v8; // ecx

  result = (__int64)a2[1].m128i_i64;
  if ( a1 < &a2[1] && (result = (__int64)a1[1].m128i_i64, a2 < &a1[1]) )
  {
    a1->m128i_i64[0] |= a2->m128i_i64[0];
    a1->m128i_i64[1] |= a2->m128i_u64[1];
    a1[1].m128i_i64[0] |= a2[1].m128i_u64[0];
    a1[1].m128i_i64[1] |= a2[1].m128i_u64[1];
    a1[2].m128i_i64[0] |= a2[2].m128i_u64[0];
    result = a2[2].m128i_i64[1];
    a1[2].m128i_i64[1] |= result;
  }
  else
  {
    *a1 = _mm_or_si128(_mm_loadu_si128(a2), *a1);
    a1[1] = _mm_or_si128(_mm_loadu_si128(a2 + 1), a1[1]);
    a1[2] = _mm_or_si128(_mm_loadu_si128(a2 + 2), a1[2]);
  }
  v5 = a3 + (a4 << 6);
  if ( a3 != v5 )
  {
    v7 = a3;
    do
    {
      v8 = *(_DWORD *)(v7 + 8);
      result = 1LL << v8;
      if ( ((1LL << v8) & a2->m128i_i64[v8 >> 6]) != 0 )
        result = sub_22B0920(a1, v7 + 16, a3, a4);
      v7 += 64;
    }
    while ( v5 != v7 );
  }
  return result;
}
