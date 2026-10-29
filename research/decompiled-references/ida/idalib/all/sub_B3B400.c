__int64 __fastcall sub_B3B400(__m128 *a1, __int64 a2, __int64 a3)
{
  double v4[3]; // [rsp+0h] [rbp-18h] BYREF

  *(_QWORD *)&v4[0] = a3;
  *(_QWORD *)&v4[1] = a2;
  a1[1].m128_i32[0] = 0;
  *a1 = _mm_loadh_ps(v4);
  return sub_B433F0(a2, &a1[1]);
}
