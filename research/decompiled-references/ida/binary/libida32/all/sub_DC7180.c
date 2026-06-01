__int64 __fastcall sub_DC7180(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i v3; // rax
  __m128i v5; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v6[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = sub_21D4FB0(*(unsigned int *)(a2 + 8));
  v3.m128i_i64[0] = sub_D1E4A0(a1, v2);
  v5 = v3;
  sub_CDADA0((__int64)v6, a2);
  sub_CDAFD0((__int64)&v5, v6);
  sub_971860(v6);
  *(__m128i *)sub_DFD980(a1[22], 16) = _mm_load_si128(&v5);
  return 1;
}

