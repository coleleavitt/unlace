/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlsize
// Address: 0x000AB830

//----- (000AB830) --------------------------------------------------------
int __cdecl qlsize(int a1)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 < 2 )
    return qfsize(*(FILE **)(a1 + 4));
  return *(_DWORD *)(a1 + 8);
}
