/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8076040
// Address: 0x08076040

//----- (08076040) --------------------------------------------------------
int __cdecl sub_8076040(_DWORD *a1)
{
  int v1; // edx
  void *v2; // eax
  int v3; // edx
  void *v4; // eax
  int v5; // edx
  int v6; // edi
  void *v7; // eax

  v1 = a1[36];
  v2 = (void *)a1[35];
  if ( a1[37] < (unsigned int)(v1 + 1) )
  {
    v2 = sub_80CF920((int)(a1 + 35), v2, v1 + 1, 4u);
    v1 = a1[36];
    a1[35] = v2;
  }
  *((_DWORD *)v2 + v1) = -1;
  v3 = a1[39];
  ++a1[36];
  v4 = (void *)a1[38];
  if ( a1[40] < (unsigned int)(v3 + 1) )
  {
    v4 = sub_80CF920((int)(a1 + 38), v4, v3 + 1, 4u);
    v3 = a1[39];
    a1[38] = v4;
  }
  *((_DWORD *)v4 + v3) = -1;
  v5 = a1[42];
  ++a1[39];
  v6 = a1[28];
  v7 = (void *)a1[41];
  if ( a1[43] < (unsigned int)(v5 + 1) )
  {
    v7 = sub_80CF920((int)(a1 + 41), v7, v5 + 1, 4u);
    v5 = a1[42];
    a1[41] = v7;
  }
  *((_DWORD *)v7 + v5) = v6;
  ++a1[42];
  return 0;
}
