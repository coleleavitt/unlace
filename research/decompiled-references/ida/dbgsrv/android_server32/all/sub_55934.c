/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55934
// Address: 0x00055934

//----- (00055934) --------------------------------------------------------
int __fastcall sub_55934(int a1, int a2)
{
  int v2; // r2

  v2 = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 80) = a2;
  return v2;
}
