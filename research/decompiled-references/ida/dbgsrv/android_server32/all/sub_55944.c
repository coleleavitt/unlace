/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55944
// Address: 0x00055944

//----- (00055944) --------------------------------------------------------
int __fastcall sub_55944(int a1, int a2)
{
  int v2; // r2

  v2 = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 88) = a2;
  return v2;
}
