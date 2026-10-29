void __fastcall sub_80E610(__m128i *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __m128i si128; // xmm4
  __int64 v5; // rdi
  __int64 v6; // rdi
  __m128i v7[2]; // [rsp+0h] [rbp-28h] BYREF

  v7[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)qword_1C6C4D8, (__m128i)(unsigned __int64)qword_1C6C528);
  a1->m128i_i64[0] = (__int64)qword_1C6C5A8;
  a1[3].m128i_i64[0] = (__int64)off_1C6C848;
  a1[2] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)algn_1C6C7D0, (__m128i)(unsigned __int64)qword_1C6C820);
  v2 = a1[6].m128i_i64[0];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[5].m128i_i64[1];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  si128 = _mm_load_si128(v7);
  v5 = a1[4].m128i_i64[0];
  a1->m128i_i64[0] = (__int64)qword_1C6C2C8;
  a1[3].m128i_i64[0] = (__int64)off_1C6A6A8;
  a1[2] = si128;
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[3].m128i_i64[1];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  operator delete(a1, 0x70u);
}

