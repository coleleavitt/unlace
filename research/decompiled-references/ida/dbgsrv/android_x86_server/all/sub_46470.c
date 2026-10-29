/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46470
// Address: 0x00046470

//----- (00046470) --------------------------------------------------------
int __cdecl sub_46470(_DWORD *a1, int a2)
{
  char *v2; // ecx

  if ( a1[2] )
    v2 = (char *)a1[1];
  else
    v2 = byte_EF875;
  *(_DWORD *)(a2 + 4) = qmkdir(v2, a1[6]);
  return 0;
}
