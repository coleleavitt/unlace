/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BCD8
// Address: 0x0008BCD8

//----- (0008BCD8) --------------------------------------------------------
void **__fastcall sub_8BCD8(void **a1)
{
  void **v2; // r0
  void **v3; // r3

  v3 = a1 + 2;
  v2 = (void **)*a1;
  if ( v2 != v3 )
    sub_809EC(v2);
  return a1;
}
