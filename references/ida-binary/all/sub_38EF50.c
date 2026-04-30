__int64 __fastcall sub_38EF50(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  double v10; // xmm4_8
  double v11; // xmm5_8
  char v13; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  sub_2D1510(a1, a2);
  sub_38D740((__int64)a2, a1, &v13, 0.0, a4, a5, a6, v10, v11, a9, a10);
  return a1;
}
