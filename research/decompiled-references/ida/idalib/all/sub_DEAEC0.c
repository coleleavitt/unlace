__int64 __fastcall sub_DEAEC0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i v3; // rax
  __m128i v5; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v6[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = sub_21F8CF0(*(unsigned int *)(a2 + 8));
  v3.m128i_i64[0] = sub_D421E0(a1, v2);
  v5 = v3;
  sub_CFEAE0((__int64)v6, a2);
  sub_CFED10((__int64)&v5, v6);
  sub_9955A0(v6);
  *(__m128i *)sub_E216C0(a1[22], 16) = _mm_load_si128(&v5);
  return 1;
}
