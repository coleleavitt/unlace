/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A5D70
// Address: 0x080A5D70

//----- (080A5D70) --------------------------------------------------------
int __cdecl sub_80A5D70(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 144);
  *(_BYTE *)(result + 452) = 1;
  return result;
}
