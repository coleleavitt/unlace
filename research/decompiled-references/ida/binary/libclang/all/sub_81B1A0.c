__m128i *__fastcall sub_81B1A0(__int64 a1, _QWORD *a2, const __m128i *a3, unsigned int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __m128i *result; // rax
  __int16 v9; // dx
  __int64 v10; // rdx

  v6 = a2[274];
  v7 = 24LL * a4;
  a2[284] += v7;
  result = (__m128i *)((v6 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[275] >= (unsigned __int64)&result->m128i_u64[(unsigned __int64)v7 / 8] && v6 )
    a2[274] = (char *)result + v7;
  else
    result = (__m128i *)sub_804090((__int64)(a2 + 274), v7, 3);
  v9 = *(_WORD *)(a1 + 20);
  *(_QWORD *)(a1 + 24) = result;
  *(_WORD *)(a1 + 20) = (2 * a4) | v9 & 1;
  if ( a4 )
  {
    *result = _mm_loadu_si128(a3);
    result[1].m128i_i64[0] = a3[1].m128i_i64[0];
    if ( a4 != 1 )
    {
      result = (__m128i *)&qword_18;
      do
      {
        v10 = *(_QWORD *)(a1 + 24);
        *(__m128i *)((char *)result + v10) = _mm_loadu_si128((const __m128i *)((char *)result + (_QWORD)a3));
        *(__int64 *)((char *)result[1].m128i_i64 + v10) = *(__int64 *)((char *)result[1].m128i_i64 + (_QWORD)a3);
        result = (__m128i *)((char *)result + 24);
      }
      while ( (__m128i *)(24LL * (a4 - 2) + 48) != result );
    }
  }
  return result;
}

