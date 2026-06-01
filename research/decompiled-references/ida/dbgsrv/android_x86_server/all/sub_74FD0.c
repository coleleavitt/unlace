/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74FD0
// Address: 0x00074FD0

//----- (00074FD0) --------------------------------------------------------
int __cdecl sub_74FD0(int a1, int a2)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 96) = a2;
  return result;
}
