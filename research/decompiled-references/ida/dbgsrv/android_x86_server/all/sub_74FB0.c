/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74FB0
// Address: 0x00074FB0

//----- (00074FB0) --------------------------------------------------------
int __cdecl sub_74FB0(int a1, int a2)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(a1 + 92) = a2;
  return result;
}
