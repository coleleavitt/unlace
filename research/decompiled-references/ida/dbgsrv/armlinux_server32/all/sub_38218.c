/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38218
// Address: 0x00038218

//----- (00038218) --------------------------------------------------------
int __fastcall sub_38218(_DWORD *a1)
{
  int v2; // r3
  int v3; // r5
  void *v4; // r1
  void *v5; // r0

  v2 = a1[37];
  v3 = a1[29];
  v4 = (void *)a1[36];
  if ( (unsigned int)(v2 + 1) > a1[38] )
  {
    v5 = sub_78018((int)(a1 + 36), v4, v2 + 1, 4u);
    v2 = a1[37];
    v4 = v5;
    a1[36] = v5;
  }
  *((_DWORD *)v4 + v2) = v3;
  ++a1[37];
  return 0;
}
