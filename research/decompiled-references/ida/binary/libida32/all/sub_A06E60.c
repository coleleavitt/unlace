void __fastcall sub_A06E60(const __m128i *a1, __int64 a2, __m128i *a3)
{
  __int64 m128i_i64; // r14
  __int8 v5; // dl
  char v6; // al
  __int8 v7; // dl
  char v8; // al
  __int8 v9; // al
  __m128i v10; // [rsp+0h] [rbp-148h] BYREF
  __m128i v11[7]; // [rsp+10h] [rbp-138h] BYREF
  char v12; // [rsp+80h] [rbp-C8h]
  __m128i v13; // [rsp+90h] [rbp-B8h] BYREF
  __m128i v14[7]; // [rsp+A0h] [rbp-A8h] BYREF
  char v15; // [rsp+110h] [rbp-38h]

  m128i_i64 = (__int64)a3[1].m128i_i64;
  v10 = _mm_loadu_si128(a3);
  sub_9E6480(v11, a3 + 1);
  v5 = a3[8].m128i_i8[0];
  v6 = v12 & 0xFC;
  *a3 = _mm_loadu_si128(a1);
  v12 = v5 & 3 | v6;
  sub_9E7350(m128i_i64, (__int64)a1[1].m128i_i64);
  v7 = a1[8].m128i_i8[0];
  v8 = a3[8].m128i_i8[0] & 0xFE;
  v13 = _mm_load_si128(&v10);
  v9 = v7 & 1 | v8;
  a3[8].m128i_i8[0] = v9;
  a3[8].m128i_i8[0] = a1[8].m128i_i8[0] & 2 | v9 & 0xFD;
  sub_9E6480(v14, v11);
  v15 = v12 & 3 | v15 & 0xFC;
  sub_A069A0((__int64)a1, 0, 0xF0F0F0F0F0F0F0F1LL * ((a2 - (__int64)a1) >> 3), &v13);
  sub_9E5FA0((__int64)v14);
  sub_9E5FA0((__int64)v11);
}

