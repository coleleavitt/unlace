/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37A50
// Address: 0x00037A50

//----- (00037A50) --------------------------------------------------------
int __fastcall sub_37A50(_DWORD *a1)
{
  int v2; // r3
  void *v3; // r1
  unsigned int v4; // r2
  void *v5; // r0
  int v6; // r5

  v2 = a1[52];
  v3 = (void *)a1[51];
  v4 = v2 + 1;
  if ( (unsigned int)(v2 + 1) > a1[53] )
  {
    v5 = sub_77EB0((int)(a1 + 51), v3, v4, 0x10u);
    v2 = a1[52];
    v3 = v5;
    a1[51] = v5;
    v4 = v2 + 1;
  }
  v6 = a1[29];
  a1[52] = v4;
  *((_DWORD *)v3 + 4 * v2) = v6;
  return 0;
}
