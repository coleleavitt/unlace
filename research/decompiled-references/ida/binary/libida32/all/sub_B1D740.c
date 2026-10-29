__int64 __fastcall sub_B1D740(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, __int64 a7, char a8)
{
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  __m128 v11; // xmm0
  __int64 v12; // [rsp+0h] [rbp-20h] BYREF
  double v13[3]; // [rsp+8h] [rbp-18h] BYREF

  *(_QWORD *)&v13[0] = a3;
  *(_QWORD *)&v13[1] = a2;
  v12 = a6;
  v8 = _mm_loadh_ps(v13);
  *(_QWORD *)&v13[0] = a4;
  *(__m128 *)a1 = v8;
  *(_BYTE *)(a1 + 60) = a8;
  v9 = _mm_loadh_ps((const double *)&v12);
  *(_WORD *)(a1 + 61) = 0;
  *(__m128 *)(a1 + 16) = v9;
  *(_DWORD *)(a1 + 56) = a5;
  v11 = _mm_loadh_ps((const double *)&v12);
  *(_QWORD *)(a1 + 64) = a1 + 88;
  *(__m128 *)(a1 + 32) = v11;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 16;
  return a1 + 88;
}

