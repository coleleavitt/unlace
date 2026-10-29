/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C740
// Address: 0x000000000042C740

//----- (000000000042C740) ----------------------------------------------------
__int64 __fastcall sub_42C740(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *v11; // rsi

  v11 = s1;
  if ( *(_QWORD *)(a1 + 48) )
    v11 = *(const char **)(a1 + 40);
  *(_QWORD *)(a2 + 8) = (unsigned int)sub_446260(a1, v11, a3, a4, a5, a6, a7, a8, a9, a10) == 0;
  return 0;
}
