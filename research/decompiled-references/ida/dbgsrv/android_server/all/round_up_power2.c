/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: round_up_power2
// Address: 0x00000000000AD514

//----- (00000000000AD514) ----------------------------------------------------
__int64 __fastcall round_up_power2(int a1)
{
  unsigned int v1; // w8
  unsigned int v2; // w8

  v1 = (a1 - 1) | ((unsigned int)(a1 - 1) >> 1) | (((a1 - 1) | ((unsigned int)(a1 - 1) >> 1)) >> 2);
  v2 = v1 | (v1 >> 4) | ((v1 | (v1 >> 4)) >> 8);
  return (v2 | HIWORD(v2)) + 1;
}
