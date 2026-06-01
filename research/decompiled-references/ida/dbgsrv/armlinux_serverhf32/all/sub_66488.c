/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66488
// Address: 0x00066488

//----- (00066488) --------------------------------------------------------
int __fastcall sub_66488(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // kr08_8

  v3 = ((__PAIR64__(a2 >> 27, 32 * a2) - a2) << 9) + a2;
  return (1000LL * a3 + a1 + __PAIR64__(v3 >> 26, 1015872 * a2) - v3 + a2) % 0xF4240;
}
