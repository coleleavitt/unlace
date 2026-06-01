/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8072AA0
// Address: 0x08072AA0

//----- (08072AA0) --------------------------------------------------------
int __cdecl sub_8072AA0(int a1, int a2)
{
  *(_DWORD *)(a2 + 4) = sub_80C44F0(
                          *(_DWORD *)(a1 + 4),
                          *(_DWORD *)(a1 + 24),
                          *(_DWORD *)(a1 + 44),
                          *(_DWORD *)(a1 + 64));
  return 0;
}
