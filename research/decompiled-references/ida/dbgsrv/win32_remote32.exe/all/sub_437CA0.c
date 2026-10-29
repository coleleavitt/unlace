/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437CA0
// Address: 0x00437CA0

//----- (00437CA0) --------------------------------------------------------
int __cdecl sub_437CA0(int a1, int a2)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(a1 + 92) = a2;
  return result;
}
