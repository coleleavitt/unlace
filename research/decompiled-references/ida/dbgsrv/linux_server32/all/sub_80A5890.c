/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A5890
// Address: 0x080A5890

//----- (080A5890) --------------------------------------------------------
int __cdecl sub_80A5890(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 244);
  *(_BYTE *)(result + 452) = 1;
  return result;
}
