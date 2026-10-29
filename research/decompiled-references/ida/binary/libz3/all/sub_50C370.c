__int64 __fastcall sub_50C370(__m128i *a1, unsigned __int64 a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rax
  __m128i v5[2]; // [rsp+8h] [rbp-20h] BYREF

  sub_180C5A0(v5, "interval_relation");
  v2 = _mm_loadl_epi64(v5);
  a1->m128i_i32[2] = -1;
  a1[2].m128i_i32[0] = 0;
  a1->m128i_i64[0] = (__int64)&off_1C50408;
  a1[1] = _mm_unpacklo_epi64(v2, (__m128i)a2);
  sub_180C0A0(&a1[3]);
  a1[6].m128i_i64[0] = (__int64)a1[3].m128i_i64;
  a1[5].m128i_i64[1] = (__int64)&a1[2].m128i_i64[1];
  a1[6].m128i_i64[1] = 0;
  sub_B28750(&a1[7]);
  v3 = sub_4D6490(a1[1].m128i_i64[1]);
  return sub_16669D0(&a1[14], v3);
}

