/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8181C
// Address: 0x0008181C

//----- (0008181C) --------------------------------------------------------
bool __fastcall sub_8181C(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // r0

  v2 = *a1;
  return v2 > a2 || a2 > v2 + *(_DWORD *)(v2 - 12);
}
