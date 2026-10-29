unsigned __int64 __fastcall sub_B9A8C0(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9)
{
  unsigned __int64 v11; // rbp
  __m128i v12; // xmm0
  unsigned __int64 v13; // rbx
  __m128i v14; // xmm0
  __m128i v16; // [rsp+0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+18h] [rbp-30h]

  v16.m128i_i64[0] = a6;
  v17 = a5;
  v11 = a8 & 0xFFFFFFFFFFFFFFF8LL;
  v12 = (__m128i)_mm_loadh_ps((const double *)v16.m128i_i64);
  if ( (a8 & 7) != 0 )
    v11 = 0;
  v16 = v12;
  v13 = sub_B902D0(88, a1, a2, 0);
  sub_B725B0(v13, 0x3Fu, a2, a7);
  v14 = _mm_load_si128(&v16);
  *(_QWORD *)(v13 + 40) = v11;
  *(_QWORD *)(v13 + 48) = 0;
  *(_DWORD *)(v13 + 56) = a3;
  *(_QWORD *)v13 = &off_2C03438;
  *(_DWORD *)(v13 + 60) = a4;
  *(_DWORD *)(v13 + 64) = a9;
  *(__m128i *)(v13 + 72) = v14;
  return v13;
}
