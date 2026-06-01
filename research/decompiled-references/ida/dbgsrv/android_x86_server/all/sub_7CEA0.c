/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7CEA0
// Address: 0x0007CEA0

//----- (0007CEA0) --------------------------------------------------------
int __cdecl sub_7CEA0(int a1, int a2)
{
  *(_DWORD *)(a1 + 244) = a2;
  *(_DWORD *)(a2 + 208) = a1 + 100;
  return a2;
}
