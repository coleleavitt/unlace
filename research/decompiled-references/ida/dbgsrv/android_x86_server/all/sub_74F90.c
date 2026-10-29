/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74F90
// Address: 0x00074F90

//----- (00074F90) --------------------------------------------------------
int __cdecl sub_74F90(int a1, int a2)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 88) = a2;
  return result;
}
