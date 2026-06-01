/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481AF0
// Address: 0x00481AF0

//----- (00481AF0) --------------------------------------------------------
void __usercall sub_481AF0(double a1@<st0>)
{
  double v1; // [esp+0h] [ebp-8h] BYREF

  v1 = a1;
  sub_481B0E((__m128d)_mm_loadl_epi64((const __m128i *)&v1), a1);
}
