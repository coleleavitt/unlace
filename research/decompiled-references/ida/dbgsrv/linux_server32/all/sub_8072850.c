/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8072850
// Address: 0x08072850

//----- (08072850) --------------------------------------------------------
int __cdecl sub_8072850(int a1, int a2)
{
  *(_DWORD *)(a2 + 4) = (*(_DWORD *)(a1 + 8) == 0) + *(_DWORD *)(a1 + 8) - 1;
  return 0;
}
