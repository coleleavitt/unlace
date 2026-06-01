/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CD6E0
// Address: 0x080CD6E0

//----- (080CD6E0) --------------------------------------------------------
int __cdecl sub_80CD6E0(int *a1)
{
  if ( !a1 )
    return -1;
  if ( *a1 <= 1 )
    return sub_80C7DB0(a1[1]);
  return a1[2];
}
