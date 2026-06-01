__int64 (__fastcall **__fastcall sub_8520C0(__m128i *a1))()
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __m128i si128; // xmm4
  __int64 v5; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v7; // rdi
  __m128i v8[2]; // [rsp+0h] [rbp-28h] BYREF

  v8[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)qword_1C6C4D8, (__m128i)(unsigned __int64)qword_1C6C528);
  a1->m128i_i64[0] = (__int64)qword_1C6C5A8;
  a1[3].m128i_i64[0] = (__int64)off_1C6C848;
  a1[2] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)algn_1C6C7D0, (__m128i)(unsigned __int64)qword_1C6C820);
  v2 = a1[6].m128i_i64[0];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[5].m128i_i64[1];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  si128 = _mm_load_si128(v8);
  v5 = a1[4].m128i_i64[0];
  a1->m128i_i64[0] = (__int64)qword_1C6C2C8;
  result = off_1C6A6A8;
  a1[3].m128i_i64[0] = (__int64)off_1C6A6A8;
  a1[2] = si128;
  if ( v5 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v5 - 8));
  v7 = a1[3].m128i_i64[1];
  if ( v7 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v7 - 8));
  return result;
}

