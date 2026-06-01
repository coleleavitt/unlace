/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42CD4
// Address: 0x00042CD4

//----- (00042CD4) --------------------------------------------------------
_DWORD *__fastcall sub_42CD4(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v6; // r3
  _BOOL4 v7; // r0

  v6 = (_DWORD *)(a1 + 4);
  v7 = a2 || a3 == v6 || a4[4] < a3[4];
  sub_8132C((_DWORD *)v7, a4, a3, v6);
  ++*(_DWORD *)(a1 + 20);
  return a4;
}
