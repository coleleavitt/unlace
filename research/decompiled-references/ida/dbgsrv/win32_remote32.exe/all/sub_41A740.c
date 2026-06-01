/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A740
// Address: 0x0041A740

//----- (0041A740) --------------------------------------------------------
int __stdcall sub_41A740(int a1, int a2)
{
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 12) != 0 ? *(_DWORD *)(a1 + 12) - 1 : 0;
  return 0;
}
