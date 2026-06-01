/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: round_up_power2
// Address: 0x000720D0

//----- (000720D0) --------------------------------------------------------
int __fastcall round_up_power2(int a1)
{
  unsigned int v1; // r0
  unsigned int v2; // r0

  v1 = ((((unsigned int)(a1 - 1) >> 1) | (a1 - 1)) >> 2) | ((unsigned int)(a1 - 1) >> 1) | (a1 - 1);
  v2 = (((v1 >> 4) | v1) >> 8) | (v1 >> 4) | v1;
  return (HIWORD(v2) | v2) + 1;
}
