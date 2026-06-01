/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8075030
// Address: 0x08075030

//----- (08075030) --------------------------------------------------------
int __cdecl sub_8075030(_DWORD *a1)
{
  int v1; // edx
  void *v2; // eax
  int v3; // ecx

  v1 = a1[51];
  v2 = (void *)a1[50];
  v3 = v1 + 1;
  if ( a1[52] < (unsigned int)(v1 + 1) )
  {
    v2 = sub_80CF920((int)(a1 + 50), v2, v1 + 1, 0x10u);
    v1 = a1[51];
    a1[50] = v2;
    v3 = v1 + 1;
  }
  a1[51] = v3;
  *((_DWORD *)v2 + 4 * v1) = a1[28];
  return 0;
}
