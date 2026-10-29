/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5474C
// Address: 0x0005474C

//----- (0005474C) --------------------------------------------------------
int __fastcall sub_5474C(int result, int a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 12) &= *(_DWORD *)(a2 + 12);
  *(_DWORD *)(result + 8) &= v2;
  return result;
}
