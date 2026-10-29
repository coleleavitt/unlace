/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C7B0
// Address: 0x000000000042C7B0

//----- (000000000042C7B0) ----------------------------------------------------
__int64 __fastcall sub_42C7B0(
        __int64 a1,
        __m128i *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *v10; // rdx

  v10 = s1;
  if ( *(_QWORD *)(a1 + 48) )
    v10 = *(const char **)(a1 + 40);
  return sub_444A40(a2, a1, v10, 0, a3, a4, a5, a6, a7, a8, a9, a10);
}
