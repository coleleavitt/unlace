unsigned __int64 __fastcall sub_208B290(__int64 a1)
{
  double v2[3]; // [rsp+0h] [rbp-18h] BYREF

  *(_QWORD *)&v2[0] = a1 + 8;
  return _mm_loadh_ps(v2).m128_u64[0];
}
