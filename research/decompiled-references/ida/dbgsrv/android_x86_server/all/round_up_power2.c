/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: round_up_power2
// Address: 0x0009DAD0

//----- (0009DAD0) --------------------------------------------------------
int __cdecl round_up_power2(int a1)
{
  unsigned int v1; // edx

  v1 = (a1 - 1)
     | ((unsigned int)(a1 - 1) >> 1)
     | (((a1 - 1) | ((unsigned int)(a1 - 1) >> 1)) >> 2)
     | (((a1 - 1) | ((unsigned int)(a1 - 1) >> 1) | (((a1 - 1) | ((unsigned int)(a1 - 1) >> 1)) >> 2)) >> 4)
     | (((a1 - 1)
       | ((unsigned int)(a1 - 1) >> 1)
       | (((a1 - 1) | ((unsigned int)(a1 - 1) >> 1)) >> 2)
       | (((a1 - 1) | ((unsigned int)(a1 - 1) >> 1) | (((a1 - 1) | ((unsigned int)(a1 - 1) >> 1)) >> 2)) >> 4)) >> 8);
  return (v1 | HIWORD(v1)) + 1;
}
