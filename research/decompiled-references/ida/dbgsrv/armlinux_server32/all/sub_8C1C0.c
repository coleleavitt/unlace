/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C1C0
// Address: 0x0008C1C0

//----- (0008C1C0) --------------------------------------------------------
void **__fastcall sub_8C1C0(void **a1)
{
  void **v2; // r0
  void **v3; // r3

  v3 = a1 + 2;
  v2 = (void **)*a1;
  if ( v2 != v3 )
    sub_809EC(v2);
  return a1;
}
