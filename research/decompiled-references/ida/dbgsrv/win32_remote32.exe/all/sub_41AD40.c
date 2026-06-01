/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41AD40
// Address: 0x0041AD40

//----- (0041AD40) --------------------------------------------------------
int __stdcall sub_41AD40(int a1, int a2)
{
  *(_DWORD *)(a2 + 8) = sub_45CC60(
                          *(_DWORD *)(a1 + 8),
                          *(_DWORD *)(a1 + 32),
                          *(_DWORD *)(a1 + 56),
                          *(_DWORD *)(a1 + 80));
  return 0;
}
