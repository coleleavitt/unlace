__int64 __fastcall sub_1BDEA00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD v7[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+18h] [rbp-30h] BYREF
  __m128i v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+30h] [rbp-18h]

  v8 = a3;
  v7[0] = a4;
  v9.m128i_i64[1] = (__int64)v7;
  v7[1] = a5;
  v9.m128i_i64[0] = a1;
  v10 = &v8;
  return sub_1BDDF50(a1, a2, (unsigned int)a6, &v9, a5, a6);
}
