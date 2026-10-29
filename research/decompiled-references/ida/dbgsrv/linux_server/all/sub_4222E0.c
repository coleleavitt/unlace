/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4222E0
// Address: 0x00000000004222E0

//----- (00000000004222E0) ----------------------------------------------------
__int64 __fastcall sub_4222E0(
        __int64 a1,
        char *a2,
        __int64 a3,
        __int64 *a4,
        _BYTE *a5,
        char a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        char *s,
        unsigned int a16)
{
  int v16; // ebx
  double v17; // xmm4_8
  double v18; // xmm5_8
  __int64 v20[5]; // [rsp+0h] [rbp-28h] BYREF

  v20[1] = __readfsqword(0x28u);
  v16 = sub_4559B0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, s, a16, v20);
  if ( v16 > 0
    && v20[0]
    && !(unsigned __int8)sub_4217E0(a1, v20[0], 0, a7, a8, *(double *)a9.m128_u64, a10, v17, v18, a13, a14) )
  {
    v16 = -2;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, 0);
  }
  return (unsigned int)v16;
}
// 422327: variable 'v17' is possibly undefined
// 422327: variable 'v18' is possibly undefined
