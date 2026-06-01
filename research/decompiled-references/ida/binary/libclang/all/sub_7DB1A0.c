__m128i *__fastcall sub_7DB1A0(__m128i *a1, __int64 a2)
{
  __m128i *v2; // rbp
  int v3; // esi
  __int32 v5; // eax
  __int32 v6; // eax

  v2 = (__m128i *)(a2 & 0xFFFFFFFFFFFFFFF8LL);
  v3 = a2 & 6;
  if ( v3 )
  {
    if ( v3 == 2 && v2 )
    {
      v5 = sub_720B10(v2);
      a1->m128i_i64[1] = (__int64)v2;
      a1->m128i_i32[0] = v5;
      return a1;
    }
LABEL_3:
    *a1 = _mm_loadu_si128(v2);
    a1[1] = _mm_loadu_si128(v2 + 1);
    a1[2].m128i_i64[0] = v2[2].m128i_i64[0];
    return a1;
  }
  if ( !v2 )
    goto LABEL_3;
  v6 = sub_720580((__int64)v2);
  a1->m128i_i64[1] = (__int64)v2;
  a1->m128i_i32[0] = v6;
  return a1;
}

