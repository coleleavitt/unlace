__int64 __fastcall sub_B4D310(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128 v6; // xmm0
  __m128 v8; // xmm0
  __m128i si128; // xmm0
  __int64 v10; // [rsp+0h] [rbp-20h] BYREF
  double v11[3]; // [rsp+8h] [rbp-18h] BYREF

  v10 = a3;
  *(_QWORD *)&v11[1] = a2;
  *(_QWORD *)&v11[0] = a5;
  v6 = _mm_loadh_ps((const double *)&v10);
  v10 = a4;
  *(__m128 *)a1 = v6;
  *(_QWORD *)(a1 + 88) = a1 + 104;
  v8 = _mm_loadh_ps(v11);
  *(_QWORD *)(a1 + 32) = a6;
  *(__m128 *)(a1 + 16) = v8;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  *(_QWORD *)(a1 + 40) = 0;
  *(__m128i *)(a1 + 56) = si128;
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 96) = 0x800000000LL;
  return 0x800000000LL;
}
