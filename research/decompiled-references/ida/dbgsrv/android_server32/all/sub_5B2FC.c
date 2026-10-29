/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5B2FC
// Address: 0x0005B2FC

//----- (0005B2FC) --------------------------------------------------------
int __fastcall sub_5B2FC(int a1, int a2)
{
  int result; // r0

  *(_DWORD *)(a1 + 244) = a2;
  result = a1 + 100;
  *(_DWORD *)(a2 + 208) = result;
  return result;
}
