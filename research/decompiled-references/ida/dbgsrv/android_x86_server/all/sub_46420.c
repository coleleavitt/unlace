/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46420
// Address: 0x00046420

//----- (00046420) --------------------------------------------------------
int __cdecl sub_46420(_DWORD *a1, int a2)
{
  char *v2; // eax
  char *v3; // ecx

  v2 = byte_EF875;
  v3 = byte_EF875;
  if ( a1[2] )
    v3 = (char *)a1[1];
  if ( a1[7] )
    v2 = (char *)a1[6];
  *(_DWORD *)(a2 + 4) = qrename(v3, v2);
  return 0;
}
