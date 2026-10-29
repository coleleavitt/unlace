/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43A9B0
// Address: 0x000000000043A9B0

//----- (000000000043A9B0) ----------------------------------------------------
__int64 __fastcall sub_43A9B0(
        __m128i *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v14; // rbx
  int v15; // eax
  char v16; // bp
  double v17; // xmm4_8
  double v18; // xmm5_8
  unsigned int v19; // r14d
  double v20; // xmm4_8
  double v21; // xmm5_8
  char v23[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v14 = sub_438630();
  v15 = sub_438760(v14);
  v16 = v15;
  sub_485490(v23, 16, "___idcexec%d", v15);
  v19 = sub_43A520(
          v23,
          a2,
          a3,
          a4,
          0,
          *(double *)a5.m128_u64,
          *(double *)a6.m128_u64,
          *(double *)a7.m128_u64,
          a8,
          v17,
          v18,
          a11,
          a12);
  if ( (_BYTE)v19 )
    v19 = sub_447320(a1, v23, nullptr, 0, a3, a4, a5, a6, a7, a8, v20, v21, a11, a12);
  sub_4387F0(v14, v16);
  return v19;
}
// 43AA18: variable 'v17' is possibly undefined
// 43AA18: variable 'v18' is possibly undefined
// 43AA62: variable 'v20' is possibly undefined
// 43AA62: variable 'v21' is possibly undefined
