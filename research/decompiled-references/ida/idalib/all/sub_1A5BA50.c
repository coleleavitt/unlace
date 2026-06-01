void __fastcall sub_1A5BA50(__int64 a1, __int64 *a2, __int32 a3, __int64 a4)
{
  __m128i v4; // xmm1
  __int64 v5; // r9
  __m128i v6; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v7; // [rsp+10h] [rbp-D8h] BYREF
  _QWORD v8[3]; // [rsp+20h] [rbp-C8h] BYREF
  char v9; // [rsp+38h] [rbp-B0h] BYREF
  __int128 v10; // [rsp+78h] [rbp-70h]
  __int64 v11; // [rsp+88h] [rbp-60h]
  __int64 v12; // [rsp+90h] [rbp-58h]
  __m128i v13; // [rsp+98h] [rbp-50h]
  __int64 v14; // [rsp+A8h] [rbp-40h]
  __int64 v15; // [rsp+B0h] [rbp-38h]
  __int64 v16; // [rsp+B8h] [rbp-30h]
  __int64 v17; // [rsp+C0h] [rbp-28h]

  v6.m128i_i64[0] = a4;
  v6.m128i_i32[2] = a3;
  sub_B85890(&v7, a4);
  v4 = _mm_load_si128(&v6);
  v8[1] = &v9;
  v8[2] = 0x800000000LL;
  v10 = 0;
  v14 = v7;
  v13 = v4;
  v12 = a1;
  v17 = 0x101010000LL;
  v8[0] = 0;
  v11 = 0;
  v15 = 0;
  v16 = 15;
  sub_1A395A0((__int64)v8);
  BYTE4(v17) = 0;
  WORD1(v17) = 0;
  sub_1A49A10(a1, (__int64)v8, a2, 0, 0, v5, 0.0, *(double *)v4.m128i_i64);
  sub_1A399A0((__int64)v8, (__int64)v8);
  sub_169D230((__int64)v8);
}
