/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BF04
// Address: 0x0006BF04

//----- (0006BF04) --------------------------------------------------------
int __fastcall sub_6BF04(int a1)
{
  _DWORD *v2; // r5

  v2 = operator new(8u);
  sub_6FB60(v2);
  *v2 = &off_DA994;
  v2[1] = a1;
  return sub_6FBA4();
}
// DA994: using guessed type _UNKNOWN *off_DA994;
