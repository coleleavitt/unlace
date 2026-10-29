unsigned __int64 __fastcall sub_BA97C0(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  unsigned __int64 v10; // rbx
  __m128i si128; // xmm0
  int v12; // eax
  __m128i v14[3]; // [rsp+0h] [rbp-38h] BYREF

  v14[0] = (__m128i)_mm_loadh_ps((const double *)&a7);
  v10 = sub_B902D0(96, a1, a2, 0);
  sub_B725B0(v10, 0xEu, a2, a4);
  si128 = _mm_load_si128(v14);
  *(_DWORD *)(v10 + 36) = a3;
  *(__m128i *)(v10 + 48) = si128;
  *(_QWORD *)v10 = &off_2C03E60;
  v12 = a8;
  *(_OWORD *)(v10 + 64) = 0;
  *(_DWORD *)(v10 + 40) = v12;
  *(_OWORD *)(v10 + 80) = 0;
  return v10;
}
