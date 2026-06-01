__int64 (__fastcall **__fastcall sub_4E8030(__m128i *a1, __int64 a2, unsigned __int64 a3))()
{
  __m128i v4; // xmm0
  __m128i v6[2]; // [rsp+8h] [rbp-20h] BYREF

  sub_180C5A0(v6, "external_relation");
  v4 = _mm_loadl_epi64(v6);
  a1[2].m128i_i64[1] = a2;
  a1->m128i_i32[2] = -1;
  a1[2].m128i_i32[0] = 0;
  a1->m128i_i64[0] = (__int64)off_1C4FA40;
  a1[1] = _mm_unpacklo_epi64(v4, (__m128i)a3);
  return off_1C4FA40;
}

