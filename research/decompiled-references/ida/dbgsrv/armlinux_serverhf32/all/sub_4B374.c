/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B374
// Address: 0x0004B374

//----- (0004B374) --------------------------------------------------------
void *__fastcall sub_4B374(unsigned int a1)
{
  size_t v1; // r4
  void *v2; // r0

  if ( a1 >= 0x40000000 )
    sub_8397C();
  v1 = 4 * a1;
  v2 = sub_805CC(4 * a1);
  return memset(v2, 0, v1);
}
