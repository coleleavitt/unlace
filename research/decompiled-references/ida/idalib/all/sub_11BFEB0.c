__int64 __fastcall sub_11BFEB0(__int64 a1, __m128i *a2, const void *a3, __int64 a4)
{
  unsigned int v4; // ebp
  size_t v5; // r8

  v4 = *(unsigned __int8 *)(a1 + 48);
  if ( (_BYTE)v4 )
    return 0;
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 != a4 || v5 && memcmp(*(const void **)a1, a3, v5) )
    return v4;
  *(_QWORD *)(a1 + 16) = a1 + 32;
  if ( (__m128i *)a2->m128i_i64[0] == &a2[1] )
  {
    *(__m128i *)(a1 + 32) = _mm_loadu_si128(a2 + 1);
  }
  else
  {
    *(_QWORD *)(a1 + 16) = a2->m128i_i64[0];
    *(_QWORD *)(a1 + 32) = a2[1].m128i_i64[0];
  }
  *(_QWORD *)(a1 + 24) = a2->m128i_i64[1];
  a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
  a2->m128i_i64[1] = 0;
  a2[1].m128i_i8[0] = 0;
  *(_BYTE *)(a1 + 48) = 1;
  return 1;
}
