/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53758
// Address: 0x00053758

//----- (00053758) --------------------------------------------------------
int __fastcall sub_53758(int result, int a2)
{
  int v2; // r2
  int v3; // r1
  int v4; // r3

  v2 = *(_DWORD *)(a2 + 8);
  v3 = *(_DWORD *)(a2 + 12);
  v4 = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 8) = v2 + v4;
  *(_DWORD *)(result + 12) += v3 + __CFADD__(v2, v4);
  return result;
}
