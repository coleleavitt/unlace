__m128 *__fastcall sub_22580F0(__m128 *a1, double *a2, _QWORD **a3)
{
  double v3; // r15
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r14
  __m128 v9; // xmm0
  double v10[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = a2[11];
  v4 = *((_QWORD *)a2 + 13);
  v5 = *((_QWORD *)a2 + 15);
  v6 = *((_QWORD *)a2 + 14);
  v7 = *((_QWORD *)a2 + 12);
  sub_2253560(a1, a3);
  a1[3].m128_u64[1] = v4;
  v10[0] = v3;
  a1[3].m128_u64[0] = v7;
  a1[4].m128_u64[0] = v6;
  v9 = _mm_loadh_ps(v10);
  a1[4].m128_u64[1] = v5;
  a1[2] = v9;
  a1[5].m128_i8[0] = 0;
  return a1;
}
