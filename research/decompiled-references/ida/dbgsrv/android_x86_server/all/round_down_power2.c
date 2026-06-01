/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: round_down_power2
// Address: 0x0009DB10

//----- (0009DB10) --------------------------------------------------------
unsigned int __cdecl round_down_power2(unsigned int a1)
{
  unsigned int v1; // edx

  v1 = a1
     | (a1 >> 1)
     | ((a1 | (a1 >> 1)) >> 2)
     | ((a1 | (a1 >> 1) | ((a1 | (a1 >> 1)) >> 2)) >> 4)
     | ((a1 | (a1 >> 1) | ((a1 | (a1 >> 1)) >> 2) | ((a1 | (a1 >> 1) | ((a1 | (a1 >> 1)) >> 2)) >> 4)) >> 8);
  return (v1 | HIWORD(v1)) - ((v1 | HIWORD(v1)) >> 1);
}
