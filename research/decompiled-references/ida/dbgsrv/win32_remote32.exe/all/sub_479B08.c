/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479B08
// Address: 0x00479B08

//----- (00479B08) --------------------------------------------------------
int __cdecl sub_479B08(int *a1)
{
  int v1; // edi
  int v2; // edx

  v1 = *a1;
  v2 = a1[1];
  if ( (((unsigned int)v2 >> 20) & 0x7FF) != 0x7FF )
    return 0;
  if ( !(v2 & 0xFFFFF | v1) )
    return 1;
  if ( v2 < 0 && !v1 && (v2 & 0xFFFFF) == 0x80000 )
    return 4;
  if ( (v2 & 0x80000) != 0 )
    return 2;
  return 3;
}
