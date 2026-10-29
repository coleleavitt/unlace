__int64 __fastcall sub_6F8160(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // r8
  double v15; // xmm4_8
  double v16; // xmm5_8
  double v17; // xmm4_8
  double v18; // xmm5_8

  v12 = a3 + 16;
  v13 = sub_F487E0(*(_QWORD *)(a2 + 32));
  if ( (unsigned __int8)sub_6F74E0(
                          a1,
                          *(_QWORD *)(a2 + 32),
                          v13 * ((v12 != 0) + (v12 - (unsigned __int64)(v12 != 0)) / v13),
                          v13,
                          v14,
                          a4,
                          a5,
                          a6,
                          a7,
                          v15,
                          v16,
                          a10,
                          a11) )
    return sub_6ED600(a1, *(_QWORD *)(a3 + 8), 0, a4, a5, a6, a7, v17, v18, a10, a11);
  else
    return 0;
}

