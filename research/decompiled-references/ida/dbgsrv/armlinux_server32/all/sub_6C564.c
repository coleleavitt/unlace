/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C564
// Address: 0x0006C564

//----- (0006C564) --------------------------------------------------------
unsigned int __fastcall sub_6C564(unsigned int a1)
{
  unsigned int v1; // r0
  unsigned int v2; // r0

  v1 = a1 | (a1 >> 1) | ((a1 | (a1 >> 1)) >> 2);
  v2 = v1 | (v1 >> 4) | ((v1 | (v1 >> 4)) >> 8);
  return (v2 | HIWORD(v2)) - ((v2 | HIWORD(v2)) >> 1);
}
