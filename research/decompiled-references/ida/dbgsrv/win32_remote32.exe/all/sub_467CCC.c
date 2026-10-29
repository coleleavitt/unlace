/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467CCC
// Address: 0x00467CCC

//----- (00467CCC) --------------------------------------------------------
int __cdecl sub_467CCC(int a1, int a2, int a3)
{
  if ( *(int *)(a3 + 4) > 128 )
    return *(_DWORD *)(a1 + 8);
  else
    return *(char *)(a1 + 8);
}
