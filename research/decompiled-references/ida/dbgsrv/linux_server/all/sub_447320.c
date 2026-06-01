/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_447320
// Address: 0x0000000000447320

//----- (0000000000447320) ----------------------------------------------------
__int64 __fastcall sub_447320(
        __m128i *a1,
        const char *a2,
        unsigned __int8 *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  double v17; // xmm4_8
  double v18; // xmm5_8
  unsigned int v19; // ebx
  double v20; // xmm4_8
  double v21; // xmm5_8
  _QWORD v23[26]; // [rsp+10h] [rbp-D0h] BYREF

  v23[19] = __readfsqword(0x28u);
  sub_442B60((__int64)v23, a6, 0);
  v19 = sub_446390(v23, a2, 0, a4, a3, a1, a7, a8, a9, a10, v17, v18, a13, a14, a5);
  sub_442CC0((__int64)v23, *(double *)a7.m128_u64, a8, a9, a10, v20, v21, a13, a14);
  return v19;
}
// 447388: variable 'v17' is possibly undefined
// 447388: variable 'v18' is possibly undefined
// 447394: variable 'v20' is possibly undefined
// 447394: variable 'v21' is possibly undefined
