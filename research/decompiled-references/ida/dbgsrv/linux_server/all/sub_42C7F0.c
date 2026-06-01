/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C7F0
// Address: 0x000000000042C7F0

//----- (000000000042C7F0) ----------------------------------------------------
__int64 __fastcall sub_42C7F0(
        __m128i *a1,
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

  if ( *(_QWORD *)(a2 + 8) == 3 )
  {
    v11 = s1;
    if ( a1[3].m128i_i64[0] )
      v11 = (const char *)a1[2].m128i_i64[1];
    *(_QWORD *)(a2 + 8) = (unsigned int)sub_443F90((__int64)a1, v11, a1 + 4, 0, a3, a4, a5, a6, a7, a8, a9, a10) == 0;
    return 0;
  }
  else
  {
    sub_479F30(0, "setattr");
    return sub_479EB0(0x38u);
  }
}
