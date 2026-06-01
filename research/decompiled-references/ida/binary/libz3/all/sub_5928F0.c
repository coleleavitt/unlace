__m128i **__fastcall sub_5928F0(__m128i **a1, __int64 a2)
{
  __m128i *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx

  v2 = (__m128i *)sub_186B270(0x50u);
  v3 = *(unsigned int *)(a2 + 48);
  v2->m128i_i64[0] = (__int64)off_1C51B98;
  v4 = *(_QWORD *)(a2 + 40) + 16 * v3;
  v2[4].m128i_i64[0] = a2;
  v2[3].m128i_i64[0] = v4;
  v2[3].m128i_i64[1] = (__int64)off_1C67FA8;
  v2[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)v4);
  v2[4].m128i_i64[1] = (__int64)v2;
  *a1 = v2;
  v2->m128i_i32[2] = 1;
  v2[2] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v4, (__m128i)(unsigned __int64)v4);
  return a1;
}

