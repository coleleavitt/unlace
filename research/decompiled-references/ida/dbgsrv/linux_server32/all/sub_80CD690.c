/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CD690
// Address: 0x080CD690

//----- (080CD690) --------------------------------------------------------
size_t __cdecl sub_80CD690(int a1, void *ptr, int n)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 <= 1 )
    return sub_80CEE00(*(FILE **)(a1 + 4), ptr, n);
  return sub_80CD240(a1, ptr, n);
}
