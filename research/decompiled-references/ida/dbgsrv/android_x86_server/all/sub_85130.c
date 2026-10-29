/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85130
// Address: 0x00085130

//----- (00085130) --------------------------------------------------------
int __cdecl sub_85130(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 144);
  *(_BYTE *)(result + 388) = 1;
  return result;
}
