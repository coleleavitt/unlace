/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4553E0
// Address: 0x00000000004553E0

//----- (00000000004553E0) ----------------------------------------------------
__int64 __fastcall sub_4553E0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  double v14; // xmm0_8
  double v15; // xmm4_8
  double v16; // xmm5_8
  char v18; // [rsp+0h] [rbp-8h]

  v14 = sub_410EA0((int)"REXEC: %s\n", a10, a11, a12, a13, a14, a1, a2, a3, a4, a5, a6, a7, a8, v18);
  return sub_485680(a10, a10, v14, a2, a3, a4, v15, v16, a7, a8);
}
// 4553ED: variable 'v18' is possibly undefined
// 4553F6: variable 'v15' is possibly undefined
// 4553F6: variable 'v16' is possibly undefined
