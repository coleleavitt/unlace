/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5593C
// Address: 0x0005593C

//----- (0005593C) --------------------------------------------------------
int __fastcall sub_5593C(int a1, int a2)
{
  int v2; // r2

  v2 = *(_DWORD *)(a1 + 84);
  *(_DWORD *)(a1 + 84) = a2;
  return v2;
}
