/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38ACC
// Address: 0x00038ACC

//----- (00038ACC) --------------------------------------------------------
int __fastcall sub_38ACC(int a1, int a2)
{
  *(_DWORD *)(a2 + 8) = rotate_left(
                          *(_DWORD *)(a1 + 8),
                          *(_DWORD *)(a1 + 32),
                          *(_DWORD *)(a1 + 56),
                          *(_DWORD *)(a1 + 80));
  return 0;
}
