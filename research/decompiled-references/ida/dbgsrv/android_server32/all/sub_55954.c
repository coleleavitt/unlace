/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55954
// Address: 0x00055954

//----- (00055954) --------------------------------------------------------
int __fastcall sub_55954(int a1, int a2)
{
  int v2; // r2

  v2 = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 96) = a2;
  return v2;
}
