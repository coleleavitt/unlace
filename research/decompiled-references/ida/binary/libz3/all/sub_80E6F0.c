void __fastcall sub_80E6F0(__m128i *a1)
{
  __m128i *v1; // r12
  __int64 v3; // rdi
  __int64 v4; // rdi
  __m128i si128; // xmm4
  __int64 v6; // rdi
  __int64 v7; // rdi
  __m128i v8[2]; // [rsp+0h] [rbp-28h] BYREF

  v1 = a1 - 3;
  v8[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)qword_1C6C4D8, (__m128i)(unsigned __int64)qword_1C6C528);
  a1[-3].m128i_i64[0] = (__int64)qword_1C6C5A8;
  a1->m128i_i64[0] = (__int64)off_1C6C848;
  a1[-1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)algn_1C6C7D0, (__m128i)(unsigned __int64)qword_1C6C820);
  v3 = a1[3].m128i_i64[0];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[2].m128i_i64[1];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  si128 = _mm_load_si128(v8);
  v6 = a1[1].m128i_i64[0];
  a1[-3].m128i_i64[0] = (__int64)qword_1C6C2C8;
  a1->m128i_i64[0] = (__int64)off_1C6A6A8;
  a1[-1] = si128;
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = a1->m128i_i64[1];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  operator delete(v1, 0x70u);
}

