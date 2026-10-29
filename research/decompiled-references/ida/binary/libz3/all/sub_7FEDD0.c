char *__fastcall sub_7FEDD0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i v4[2]; // [rsp+0h] [rbp-28h] BYREF

  v2 = a1[22];
  v4[0].m128i_i64[1] = (__int64)a1;
  v4[0].m128i_i64[0] = v2;
  sub_7FEA60(a2 + 16, v4);
  v4[0].m128i_i64[1] = (__int64)a1;
  v4[0].m128i_i64[0] = a1[24];
  sub_7FEA60(a2 + 16, v4);
  v4[0].m128i_i64[1] = (__int64)a1;
  v4[0].m128i_i64[0] = a1[23];
  sub_7FEA60(a2 + 16, v4);
  v4[0].m128i_i64[1] = (__int64)a1;
  v4[0].m128i_i64[0] = a1[25];
  return sub_7FEA60(a2 + 16, v4);
}

