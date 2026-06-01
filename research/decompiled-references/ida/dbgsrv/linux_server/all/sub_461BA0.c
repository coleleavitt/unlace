/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461BA0
// Address: 0x0000000000461BA0

//----- (0000000000461BA0) ----------------------------------------------------
__int64 __fastcall sub_461BA0(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v11; // rdi

  v11 = *(_QWORD *)(a1 + 480);
  if ( v11 )
    v11 -= 192;
  return sub_460E60(v11, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
