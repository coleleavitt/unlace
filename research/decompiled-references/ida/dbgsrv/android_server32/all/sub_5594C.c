/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5594C
// Address: 0x0005594C

//----- (0005594C) --------------------------------------------------------
int __fastcall sub_5594C(int a1, int a2)
{
  int v2; // r2

  v2 = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(a1 + 92) = a2;
  return v2;
}
