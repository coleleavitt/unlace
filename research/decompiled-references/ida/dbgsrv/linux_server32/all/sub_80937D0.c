/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80937D0
// Address: 0x080937D0

//----- (080937D0) --------------------------------------------------------
int __cdecl sub_80937D0(int a1, int a2)
{
  int v2; // edx

  v2 = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 88) = a2;
  return v2;
}
