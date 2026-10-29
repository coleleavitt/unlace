/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BB8C
// Address: 0x0008BB8C

//----- (0008BB8C) --------------------------------------------------------
void **__fastcall sub_8BB8C(void **a1)
{
  void **v2; // r0
  void **v3; // r3

  v3 = a1 + 2;
  v2 = (void **)*a1;
  if ( v2 != v3 )
    sub_80648(v2);
  return a1;
}
