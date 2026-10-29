/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AA010
// Address: 0x080AA010

//----- (080AA010) --------------------------------------------------------
int __cdecl sub_80AA010(int a1, int a2)
{
  *(_DWORD *)(a1 + 244) = a2;
  *(_DWORD *)(a2 + 248) = a1 + 100;
  return a1 + 100;
}
