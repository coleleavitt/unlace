/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B504
// Address: 0x0004B504

//----- (0004B504) --------------------------------------------------------
void *__fastcall sub_4B504(unsigned int a1)
{
  size_t v1; // r4
  void *v2; // r0

  if ( a1 >= 0x40000000 )
    sub_83C64();
  v1 = 4 * a1;
  v2 = sub_808A4(4 * a1);
  return memset(v2, 0, v1);
}
