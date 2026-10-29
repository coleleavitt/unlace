/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1A26E
// Address: 0x0001A26E

//----- (0001A26E) --------------------------------------------------------
int __fastcall sub_1A26E(int a1, _DWORD *a2)
{
  int v2; // r0

  a2[1] = *(_DWORD *)(a1 + 4);
  v2 = *(_DWORD *)(a1 + 4);
  *a2 = 2;
  a2[2] = v2;
  return 0;
}
