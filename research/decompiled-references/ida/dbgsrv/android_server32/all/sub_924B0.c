/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_924B0
// Address: 0x000924B0

//----- (000924B0) --------------------------------------------------------
void **__fastcall sub_924B0(void **a1)
{
  void **v2; // r0
  void **v3; // r1

  v3 = a1 + 3;
  v2 = (void **)*a1;
  if ( v2 != v3 )
    free(v2);
  return a1;
}
