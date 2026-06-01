/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_819CC
// Address: 0x000819CC

//----- (000819CC) --------------------------------------------------------
bool __fastcall sub_819CC(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // r0

  v2 = *a1;
  return v2 > a2 || a2 > v2 + *(_DWORD *)(v2 - 12);
}
