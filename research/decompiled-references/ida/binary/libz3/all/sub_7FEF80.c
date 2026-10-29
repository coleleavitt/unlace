char *__fastcall sub_7FEF80(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __m128i v9[2]; // [rsp+0h] [rbp-28h] BYREF

  v2 = a1[10];
  v9[0].m128i_i64[1] = (__int64)a1;
  v9[0].m128i_i64[0] = v2;
  sub_7FEA60(a2 + 16, v9);
  v3 = a1[7];
  v9[0].m128i_i64[1] = (__int64)a1;
  v9[0].m128i_i64[0] = v3;
  sub_7FEA60(a2 + 16, v9);
  v4 = a1[8];
  v9[0].m128i_i64[1] = (__int64)a1;
  v9[0].m128i_i64[0] = v4;
  sub_7FEA60(a2 + 16, v9);
  v5 = a1[5];
  v9[0].m128i_i64[1] = (__int64)a1;
  v9[0].m128i_i64[0] = v5;
  sub_7FEA60(a2 + 16, v9);
  v6 = a1[6];
  v9[0].m128i_i64[1] = (__int64)a1;
  v9[0].m128i_i64[0] = v6;
  sub_7FEA60(a2 + 16, v9);
  v7 = a1[9];
  v9[0].m128i_i64[1] = (__int64)a1;
  v9[0].m128i_i64[0] = v7;
  return sub_7FEA60(a2 + 16, v9);
}

