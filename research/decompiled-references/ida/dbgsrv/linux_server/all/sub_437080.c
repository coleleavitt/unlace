/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437080
// Address: 0x0000000000437080

//----- (0000000000437080) ----------------------------------------------------
__int64 __fastcall sub_437080(
        __m128i *a1,
        const char *a2,
        unsigned __int8 *a3,
        int a4,
        __int64 a5,
        int a6,
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
  _QWORD v20[11]; // [rsp+0h] [rbp-58h] BYREF

  v20[3] = __readfsqword(0x28u);
  *(double *)a7.m128_u64 = off_4C7FB0(11, (unsigned int)v20, (unsigned int)&off_4C7FB0, a4, a5, a6);
  v20[1] = v20[0];
  v20[0] = &off_4C2C28;
  return sub_447320(a1, a2, a3, a4, a5, (__int64)v20, a7, a8, a9, a10, v17, v18, a13, a14);
}
// 4370E8: variable 'v17' is possibly undefined
// 4370E8: variable 'v18' is possibly undefined
// 4C2C28: using guessed type __int64 (__fastcall *off_4C2C28)();
// 4C7FB0: using guessed type double (*off_4C7FB0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, ...);
