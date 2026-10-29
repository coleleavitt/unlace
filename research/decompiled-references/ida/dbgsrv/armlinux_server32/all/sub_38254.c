/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38254
// Address: 0x00038254

//----- (00038254) --------------------------------------------------------
int __fastcall sub_38254(_DWORD *a1)
{
  _DWORD *v2; // r6
  _DWORD *v3; // r0
  size_t v4; // r8
  _DWORD *v5; // r5
  unsigned int v6; // r0
  int v7; // r3
  void *v8; // r1
  void *v9; // r0
  void *v11; // r0
  const void *v12; // r1

  v2 = sub_808A4(0x10u);
  *v2 = 1;
  v2[3] = 0;
  v3 = sub_808A4(0xCu);
  v4 = a1[7];
  v5 = v3;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  if ( v4 )
  {
    v11 = sub_77FEC(v4);
    v12 = (const void *)a1[6];
    *v5 = v11;
    v5[2] = v4;
    memcpy(v11, v12, v4);
    v5[1] = v4;
  }
  v6 = a1[50];
  v7 = a1[49];
  v2[2] = v5;
  v8 = (void *)a1[48];
  if ( v7 + 1 > v6 )
  {
    v9 = sub_78018((int)(a1 + 48), v8, v7 + 1, 4u);
    v7 = a1[49];
    v8 = v9;
    a1[48] = v9;
  }
  *((_DWORD *)v8 + v7) = v2;
  ++a1[49];
  return 0;
}
