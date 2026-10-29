/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B2EA
// Address: 0x0004B2EA

//----- (0004B2EA) --------------------------------------------------------
int __fastcall sub_4B2EA(int a1)
{
  int v1; // r5
  int v2; // r1

  v2 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v2 + 1;
  return sub_4B2F4(a1, v1 + __CFADD__(v2, 1) + *(_DWORD *)(a1 + 12));
}
// 4B2F2: variable 'v1' is possibly undefined
// 4B2F4: using guessed type int __fastcall sub_4B2F4(_DWORD, _DWORD);
