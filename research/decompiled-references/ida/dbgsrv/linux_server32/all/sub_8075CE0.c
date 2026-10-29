/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8075CE0
// Address: 0x08075CE0

//----- (08075CE0) --------------------------------------------------------
int __cdecl sub_8075CE0(_DWORD *a1)
{
  int v1; // edx
  int v2; // edi
  void *v3; // eax

  v1 = a1[36];
  v2 = a1[28];
  v3 = (void *)a1[35];
  if ( a1[37] < (unsigned int)(v1 + 1) )
  {
    v3 = sub_80CF920((int)(a1 + 35), v3, v1 + 1, 4u);
    v1 = a1[36];
    a1[35] = v3;
  }
  *((_DWORD *)v3 + v1) = v2;
  ++a1[36];
  return 0;
}
