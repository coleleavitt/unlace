/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C66C
// Address: 0x0006C66C

//----- (0006C66C) --------------------------------------------------------
int __fastcall sub_6C66C(unsigned int a1, unsigned int a2, unsigned int a3)
{
  return ((1000000LL * a2 + a1 + 1000 * (unsigned __int64)a3) % 0xF4240) & 0xFFFFF;
}
