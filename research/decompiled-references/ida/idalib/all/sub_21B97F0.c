void __fastcall sub_21B97F0(__m128 *a1, __int64 a2, __int64 a3)
{
  double v3[3]; // [rsp+0h] [rbp-18h] BYREF

  *(_QWORD *)&v3[0] = a3;
  *(_QWORD *)&v3[1] = a2;
  *a1 = _mm_loadh_ps(v3);
}
