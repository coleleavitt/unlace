/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85110
// Address: 0x00085110

//----- (00085110) --------------------------------------------------------
int __cdecl sub_85110(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 244);
  *(_BYTE *)(result + 388) = 1;
  return result;
}
