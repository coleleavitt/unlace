/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41AD10
// Address: 0x0041AD10

//----- (0041AD10) --------------------------------------------------------
int __stdcall sub_41AD10(int a1, int a2)
{
  if ( *(_DWORD *)(a1 + 12) )
    *(_DWORD *)(a2 + 8) = **(char **)(a1 + 8);
  else
    *(_DWORD *)(a2 + 8) = 0;
  return 0;
}
