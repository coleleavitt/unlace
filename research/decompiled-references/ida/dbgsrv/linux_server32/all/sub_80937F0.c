/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80937F0
// Address: 0x080937F0

//----- (080937F0) --------------------------------------------------------
int __cdecl sub_80937F0(int a1, int a2)
{
  int v2; // edx

  v2 = *(_DWORD *)(a1 + 108);
  *(_DWORD *)(a1 + 108) = a2;
  return v2;
}
