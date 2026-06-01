void __fastcall sub_B1FA70(__m128 *a1, __int64 a2, _BYTE *a3, __int64 a4, unsigned __int8 *a5, _BYTE *a6, __int64 a7)
{
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  _BYTE *v9; // [rsp+0h] [rbp-20h] BYREF
  double v10[3]; // [rsp+8h] [rbp-18h] BYREF

  v9 = a3;
  *(_QWORD *)&v10[1] = a2;
  *(_QWORD *)&v10[0] = a5;
  v7 = _mm_loadh_ps((const double *)&v9);
  v9 = (_BYTE *)a4;
  *a1 = v7;
  a1[4].m128_u64[1] = (unsigned __int64)&a1[5].m128_u64[1];
  v8 = _mm_loadh_ps(v10);
  v9 = a6;
  a1[1] = v8;
  a1[3].m128_i32[0] = 0;
  a1[5].m128_u64[0] = 0x800000000LL;
  a1[2] = _mm_loadh_ps((const double *)&a7);
  sub_B1F6B0(a2, (__int64)&a1[3], 0x800000000LL, a4, a5, a6, a7);
}

