/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437A30
// Address: 0x00437A30

//----- (00437A30) --------------------------------------------------------
int __cdecl sub_437A30(int a1, int a2)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 112) = a2;
  return result;
}
