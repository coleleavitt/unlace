__int64 __fastcall sub_21B6800(__m128i *a1, _BYTE *a2, _BYTE *a3)
{
  __m128i *v3; // r8
  size_t v5; // r14
  unsigned __int64 v6; // rbp
  __int64 result; // rax
  __m128i v8; // xmm0
  __m128i v9[3]; // [rsp+8h] [rbp-30h] BYREF

  v3 = a1 + 12;
  v5 = a3 - a2;
  v6 = (a3 - a2) >> 3;
  a1->m128i_i64[1] = (__int64)&a1[1].m128i_i64[1];
  a1[1].m128i_i64[0] = 0x1000000000LL;
  a1[11].m128i_i64[1] = 0x1000000000LL;
  v9[0].m128i_i64[0] = (__int64)a1[20].m128i_i64;
  result = 0;
  v8 = _mm_loadl_epi64(v9);
  a1[9].m128i_i64[1] = 0;
  a1->m128i_i64[0] = (__int64)off_2BE9900;
  a1[10].m128i_i64[0] = 0;
  a1[10].m128i_i32[2] = 0;
  a1[11].m128i_i64[0] = (__int64)a1[12].m128i_i64;
  a1[20] = _mm_unpacklo_epi64(v8, v8);
  a1[21].m128i_i64[0] = 0;
  a1[21].m128i_i32[2] = v6;
  if ( v6 > 0x10 )
  {
    sub_2237220(&a1[11], &a1[12], v6, 8);
    result = a1[11].m128i_u32[2];
    v3 = (__m128i *)(a1[11].m128i_i64[0] + 8 * result);
  }
  if ( a3 != a2 )
  {
    memcpy(v3, a2, v5);
    result = a1[11].m128i_u32[2];
  }
  a1[11].m128i_i32[2] = result + v6;
  return result;
}
