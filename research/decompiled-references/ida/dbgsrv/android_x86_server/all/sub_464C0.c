/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_464C0
// Address: 0x000464C0

//----- (000464C0) --------------------------------------------------------
int __cdecl sub_464C0(int a1, int a2)
{
  *(_DWORD *)(a2 + 4) = rotate_left(
                          *(_DWORD *)(a1 + 4),
                          *(_DWORD *)(a1 + 24),
                          *(_DWORD *)(a1 + 44),
                          *(_DWORD *)(a1 + 64));
  return 0;
}
