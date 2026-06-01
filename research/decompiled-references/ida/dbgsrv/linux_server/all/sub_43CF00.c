/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43CF00
// Address: 0x000000000043CF00

//----- (000000000043CF00) ----------------------------------------------------
unsigned __int64 __fastcall sub_43CF00(__m128i *a1, __m128i *a2)
{
  __m128i v2; // xmm1
  __m128i v3; // xmm0
  unsigned __int64 v5; // [rsp+28h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  if ( !a1 || !a2 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(2657);
    BUG();
  }
  v2 = _mm_loadu_si128(a1);
  v3 = _mm_loadu_si128(a1 + 1);
  *a1 = _mm_loadu_si128(a2);
  a1[1] = _mm_loadu_si128(a2 + 1);
  *a2 = v2;
  a2[1] = v3;
  return v5 - __readfsqword(0x28u);
}
// 4C94E1: using guessed type char byte_4C94E1;
