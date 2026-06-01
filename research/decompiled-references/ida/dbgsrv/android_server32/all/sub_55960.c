/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55960
// Address: 0x00055960

//----- (00055960) --------------------------------------------------------
int __fastcall sub_55960(int a1, int a2)
{
  int v2; // r2

  v2 = *(_DWORD *)(a1 + 100);
  *(_DWORD *)(a1 + 100) = a2;
  return v2;
}
