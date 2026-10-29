/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74F70
// Address: 0x00074F70

//----- (00074F70) --------------------------------------------------------
int __cdecl sub_74F70(int a1, int a2)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 84);
  *(_DWORD *)(a1 + 84) = a2;
  return result;
}
