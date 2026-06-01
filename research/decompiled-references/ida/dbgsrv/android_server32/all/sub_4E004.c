/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E004
// Address: 0x0004E004

//----- (0004E004) --------------------------------------------------------
int __fastcall sub_4E004(int a1, int a2)
{
  int v2; // r2

  v2 = *(_DWORD *)(a1 + 492);
  *(_DWORD *)(a1 + 492) = a2;
  return v2;
}
