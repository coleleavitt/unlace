/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CCA2
// Address: 0x0004CCA2

//----- (0004CCA2) --------------------------------------------------------
int __fastcall sub_4CCA2(int a1)
{
  int v1; // r5
  int v2; // r2

  v2 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v2 + v1;
  *(_DWORD *)(a1 + 12) += (v1 >> 31) + __CFADD__(v2, v1);
  return sub_4CCB0(a1);
}
// 4CCA6: variable 'v1' is possibly undefined
// 4CCB0: using guessed type int __fastcall sub_4CCB0(_DWORD);
