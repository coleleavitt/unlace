/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74F50
// Address: 0x00074F50

//----- (00074F50) --------------------------------------------------------
int __cdecl sub_74F50(int a1, int a2)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 80) = a2;
  return result;
}
