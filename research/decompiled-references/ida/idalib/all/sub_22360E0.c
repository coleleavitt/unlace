__m128i *__fastcall sub_22360E0(__m128i *a1, __m128i *a2)
{
  __int32 v2; // eax
  __m128i v3; // xmm6
  __m128i v4; // xmm7
  __m128i v5; // xmm0
  unsigned int v6; // eax
  __m128i v7; // xmm1
  __m128i v8; // xmm2
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  __m128i v12; // xmm5
  __int64 v13; // rax
  __m128i v15; // [rsp+0h] [rbp-98h] BYREF
  __m128i v16; // [rsp+20h] [rbp-78h] BYREF
  __m128i v17; // [rsp+30h] [rbp-68h] BYREF
  __m128i v18; // [rsp+40h] [rbp-58h] BYREF
  __m128i v19; // [rsp+50h] [rbp-48h] BYREF
  __m128i v20; // [rsp+60h] [rbp-38h] BYREF
  __int64 v21; // [rsp+70h] [rbp-28h]
  __int32 v22; // [rsp+78h] [rbp-20h]

  v21 = a2[5].m128i_i64[0];
  v2 = a2[5].m128i_i32[2];
  v16 = _mm_loadu_si128(a2);
  v17 = _mm_loadu_si128(a2 + 1);
  v18 = _mm_loadu_si128(a2 + 2);
  v22 = v2;
  v19 = _mm_loadu_si128(a2 + 3);
  v20 = _mm_loadu_si128(a2 + 4);
  sub_2236030((__int64)a2);
  v3 = _mm_load_si128(&v16);
  v4 = _mm_load_si128(&v17);
  v5 = _mm_load_si128(&v18);
  v15.m128i_i32[0] = _byteswap_ulong(a2[4].m128i_u32[0]);
  v6 = a2[4].m128i_u32[1];
  v7 = _mm_load_si128(&v19);
  v8 = _mm_load_si128(&v20);
  *a2 = v3;
  v15.m128i_i32[1] = _byteswap_ulong(v6);
  v9 = a2[4].m128i_u32[2];
  a2[1] = v4;
  v15.m128i_i32[2] = _byteswap_ulong(v9);
  v10 = a2[4].m128i_u32[3];
  a2[2] = v5;
  v15.m128i_i32[3] = _byteswap_ulong(v10);
  v11 = a2[5].m128i_u32[0];
  v12 = _mm_load_si128(&v15);
  a2[3] = v7;
  a1[1].m128i_i32[0] = _byteswap_ulong(v11);
  v13 = v21;
  *a1 = v12;
  a2[5].m128i_i64[0] = v13;
  LODWORD(v13) = v22;
  a2[4] = v8;
  a2[5].m128i_i32[2] = v13;
  return a1;
}
