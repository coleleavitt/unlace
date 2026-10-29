/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D25E
// Address: 0x0003D25E

//----- (0003D25E) --------------------------------------------------------
int __fastcall sub_3D25E(_DWORD *a1)
{
  unsigned int v2; // r1
  unsigned int v3; // r2
  unsigned int *v4; // r6
  void **v5; // r5
  void *v6; // r0

  v2 = a1[52];
  v3 = v2 + 1;
  v4 = a1 + 52;
  v5 = (void **)(a1 + 51);
  if ( a1[53] >= v2 + 1 )
  {
    v6 = *v5;
  }
  else
  {
    v6 = qvector_reserve((int)(a1 + 51), *v5, v3, 0x10u);
    *v5 = v6;
    v2 = *v4;
    v3 = *v4 + 1;
  }
  *v4 = v3;
  *((_DWORD *)v6 + 4 * v2) = a1[29];
  return 0;
}
