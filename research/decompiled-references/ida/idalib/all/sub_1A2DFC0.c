unsigned __int64 __fastcall sub_1A2DFC0(__int64 a1, __int64 a2, __int16 a3)
{
  __m128i si128; // xmm0
  __m128i v5; // xmm1
  __m128i v6; // xmm2
  __m128i v7; // xmm3
  __m128i v8; // xmm4
  __m128i v9; // xmm5
  __int64 *v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rsi
  __m128i v13; // xmm6
  __int64 v14; // rdi
  __m128 v16; // [rsp+0h] [rbp-118h] BYREF
  __m128i v17; // [rsp+10h] [rbp-108h] BYREF
  __m128i v18; // [rsp+20h] [rbp-F8h] BYREF
  __m128i v19; // [rsp+30h] [rbp-E8h] BYREF
  __m128i v20; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v21; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v22; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+70h] [rbp-A8h]
  __m128i v24[7]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-28h]

  sub_A5E110(&v16, a2);
  si128 = _mm_load_si128((const __m128i *)&v16);
  v5 = _mm_load_si128(&v17);
  v6 = _mm_load_si128(&v18);
  v7 = _mm_load_si128(&v19);
  v25 = v23;
  v8 = _mm_load_si128(&v20);
  v9 = _mm_load_si128(&v21);
  v10 = (__int64 *)(a2 + 48);
  v11 = *(unsigned __int16 *)(a2 + 22);
  v12 = *(_QWORD *)(a2 + 24);
  v24[0] = si128;
  v13 = _mm_load_si128(&v22);
  v14 = *(_QWORD *)(a1 + 248);
  v24[1] = v5;
  v24[2] = v6;
  v24[3] = v7;
  v24[4] = v8;
  v24[5] = v9;
  v24[6] = v13;
  v24[0].m128i_i16[0] = a3 | v16.m128_i16[0] & 0xFFC0;
  v24[0].m128i_i64[1] = 0;
  return sub_A73610(v14, v12, v10, v11, v24, 0);
}
