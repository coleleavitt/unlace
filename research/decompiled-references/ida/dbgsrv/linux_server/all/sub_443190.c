/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_443190
// Address: 0x0000000000443190

//----- (0000000000443190) ----------------------------------------------------
unsigned __int64 __fastcall sub_443190(
        __int64 a1,
        int a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned __int64 v10; // rax
  double v11; // xmm4_8
  double v12; // xmm5_8
  unsigned __int8 v14[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v15; // [rsp+8h] [rbp-40h]
  __int64 v16; // [rsp+18h] [rbp-30h]
  unsigned __int64 v17; // [rsp+28h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 32);
  if ( v10 < a2 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(285);
    BUG();
  }
  if ( v10 - a2 != v10 )
  {
    v14[0] = 2;
    v16 = 0;
    v15 = 0;
    sub_442DA0(a1 + 24, v10 - a2, v14, 0.0, a4, a5, a6, a7, a8, a9, a10);
    sub_441540((__int64)v14, 0.0, a4, a5, a6, v11, v12, a9, a10);
  }
  return v17 - __readfsqword(0x28u);
}
// 4431E7: variable 'v11' is possibly undefined
// 4431E7: variable 'v12' is possibly undefined
// 4C94E1: using guessed type char byte_4C94E1;
