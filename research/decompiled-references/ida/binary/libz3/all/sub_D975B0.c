__m128i *__fastcall sub_D975B0(unsigned __int64 a1, unsigned __int64 *a2, __int64 *a3)
{
  __m128i *result; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx

  result = (__m128i *)sub_186B270(0x40u);
  v5 = *a2;
  result->m128i_i32[2] = 0;
  result[1].m128i_i64[0] = 0;
  result[1].m128i_i8[8] = 1;
  result->m128i_i64[0] = (__int64)&off_1C750F0;
  result[2] = _mm_unpacklo_epi64((__m128i)a1, (__m128i)v5);
  if ( v5 )
    ++*(_DWORD *)(v5 + 128);
  v6 = *a3;
  result[3].m128i_i64[0] = *a3;
  if ( v6 )
    ++*(_DWORD *)(v6 + 16);
  result[3].m128i_i8[8] = 1;
  return result;
}

