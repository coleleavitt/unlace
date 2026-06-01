/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: round_down_power2
// Address: 0x000720EA

//----- (000720EA) --------------------------------------------------------
unsigned int __fastcall round_down_power2(unsigned int a1)
{
  unsigned int v1; // r0
  unsigned int v2; // r0

  v1 = (((a1 >> 1) | a1) >> 2) | (a1 >> 1) | a1;
  v2 = (((v1 >> 4) | v1) >> 8) | (v1 >> 4) | v1;
  return (HIWORD(v2) | v2) - ((HIWORD(v2) | v2) >> 1);
}
