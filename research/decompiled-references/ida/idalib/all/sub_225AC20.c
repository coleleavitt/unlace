__m128 *__fastcall sub_225AC20(__m128 *a1, _QWORD *a2, _QWORD **a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r14
  __int64 v6; // r15
  double v7; // rdx
  __m128 v9; // xmm0
  double v10[2]; // [rsp+8h] [rbp-50h] BYREF
  _QWORD **v11; // [rsp+18h] [rbp-40h]

  v3 = a2[5];
  v4 = a2[4];
  v5 = a2[3];
  v11 = a3;
  v6 = sub_228BB60(a2);
  *(_QWORD *)&v10[1] = sub_228BB70(a2);
  v10[0] = v7;
  sub_2253560(a1, v11);
  a1[3].m128_u64[0] = v6;
  a1[3].m128_u64[1] = v5;
  v9 = _mm_loadh_ps(v10);
  a1[4].m128_u64[0] = v4;
  a1[4].m128_u64[1] = v3;
  a1[2] = v9;
  a1[5].m128_i8[0] = 0;
  return a1;
}
