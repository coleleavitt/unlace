/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C670
// Address: 0x000000000042C670

//----- (000000000042C670) ----------------------------------------------------
__int64 __fastcall sub_42C670(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  __syscall_slong_t v10; // rbp
  double v11; // xmm4_8
  double v12; // xmm5_8

  v10 = sub_481D90();
  sub_441540(a10, a1, a2, a3, a4, v11, v12, a7, a8);
  *(_BYTE *)a10 = 9;
  *(_QWORD *)(a10 + 8) = v10;
  return 0;
}
// 42C684: variable 'v11' is possibly undefined
// 42C684: variable 'v12' is possibly undefined
