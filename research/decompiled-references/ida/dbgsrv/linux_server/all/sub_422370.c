/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_422370
// Address: 0x0000000000422370

//----- (0000000000422370) ----------------------------------------------------
__int64 __fastcall sub_422370(
        __int64 a1,
        __int64 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // r12d

  if ( (unsigned int)sub_4211A0(a1, a2, 0, a3, a4, a5, a6, a7, a8, a9, a10) == 1 )
  {
    v10 = 1;
    if ( (unsigned __int8)sub_456050(a1, a2) )
      return (unsigned int)-6;
    else
      sub_4561A0(a1, a2);
  }
  else
  {
    return (unsigned int)-5;
  }
  return v10;
}
