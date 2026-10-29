/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C250
// Address: 0x0004C250

//----- (0004C250) --------------------------------------------------------
int __fastcall sub_4C250(int result, int a2)
{
  int v2; // r3
  int v3; // r4
  int v4; // r2
  int v5; // r1

  v2 = *(_DWORD *)(result + 8);
  v3 = *(_DWORD *)(a2 + 8);
  v4 = *(_DWORD *)(result + 12);
  v5 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(result + 8) = v2 + v3;
  *(_DWORD *)(result + 12) = v4 + __CFADD__(v2, v3) + v5;
  return result;
}
