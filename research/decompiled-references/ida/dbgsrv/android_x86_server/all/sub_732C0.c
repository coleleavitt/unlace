/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_732C0
// Address: 0x000732C0

//----- (000732C0) --------------------------------------------------------
int __cdecl sub_732C0(int a1, int a2)
{
  int v3; // edx

  v3 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) &= *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 4) &= v3;
  return a1;
}
