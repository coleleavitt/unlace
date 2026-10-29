/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D46D0
// Address: 0x080D46D0

//----- (080D46D0) --------------------------------------------------------
int __cdecl sub_80D46D0(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(result + 12) = 0;
  return result;
}
