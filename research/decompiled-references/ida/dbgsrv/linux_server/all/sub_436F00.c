/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_436F00
// Address: 0x0000000000436F00

//----- (0000000000436F00) ----------------------------------------------------
__int64 __fastcall sub_436F00(
        __m128i *a1,
        __int64 a2,
        const char *a3,
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
  _QWORD v15[9]; // [rsp+0h] [rbp-48h] BYREF

  v15[3] = __readfsqword(0x28u);
  if ( a1 )
  {
    sub_441540((__int64)a1, *(double *)a5.m128_u64, a6, a7, a8, a9, a10, a11, a12);
    a1->m128i_i8[0] = 2;
    a1->m128i_i64[1] = 0;
  }
  v15[0] = &off_4C2C28;
  v15[1] = a2;
  return sub_43A9B0(a1, a3, a4, (__int64)v15, a5, a6, a7, a8, a9, a10, a11, a12);
}
// 436F55: variable 'a9' is possibly undefined
// 436F55: variable 'a10' is possibly undefined
// 4C2C28: using guessed type __int64 (__fastcall *off_4C2C28)();
