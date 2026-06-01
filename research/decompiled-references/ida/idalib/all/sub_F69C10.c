unsigned __int64 __fastcall sub_F69C10(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  __m128i v7; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+10h] [rbp-18h]
  int v9; // [rsp+18h] [rbp-10h]

  v7.m128i_i64[0] = a2;
  v5 = *a1;
  v7.m128i_i64[1] = a3;
  v8 = a4;
  v9 = a5;
  return sub_F68800(&v7, v5, a3, a4, a5);
}
