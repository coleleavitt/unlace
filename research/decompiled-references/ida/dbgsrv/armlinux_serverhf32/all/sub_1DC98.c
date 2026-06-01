/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1DC98
// Address: 0x0001DC98

//----- (0001DC98) --------------------------------------------------------
_DWORD *__fastcall sub_1DC98(int a1, int *a2, int a3, int a4)
{
  _DWORD *v8; // r0
  size_t v9; // r5
  int v10; // r2
  _DWORD *v11; // r7
  int v12; // r1
  int v13; // r2
  int *v14; // r5
  _DWORD *v15; // r9
  _DWORD *v16; // r0
  int v17; // r3
  _DWORD *v18; // r4
  size_t v19; // r8
  int v20; // r3
  int v21; // r1
  void *v23; // r0
  void *v24; // r0
  const void *v25; // r1

  v8 = sub_805CC(0x20u);
  v9 = a2[6];
  v10 = a2[4];
  v11 = v8;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v8[4] = v10;
  if ( v9 )
  {
    v24 = sub_77E84(v9);
    v25 = (const void *)a2[5];
    v11[5] = v24;
    v11[7] = v9;
    memcpy(v24, v25, v9);
    v11[6] = v9;
  }
  v12 = a2[3];
  v13 = *a2;
  v11[1] = a3;
  v11[2] = 0;
  v11[3] = 0;
  *v11 = v13;
  if ( v12 )
    v11[3] = sub_1DC98(a1, v12, v11, a4);
  v14 = (int *)a2[2];
  if ( v14 )
  {
    v15 = v11;
    do
    {
      v16 = sub_805CC(0x20u);
      v17 = v14[4];
      v18 = v16;
      v16[5] = 0;
      v16[6] = 0;
      v16[7] = 0;
      v16[4] = v17;
      v19 = v14[6];
      if ( v19 )
      {
        v23 = sub_77E84(v14[6]);
        v18[5] = v23;
        v18[7] = v19;
        memcpy(v23, (const void *)v14[5], v19);
        v18[6] = v19;
      }
      v20 = *v14;
      v18[2] = 0;
      v18[3] = 0;
      *v18 = v20;
      v15[2] = v18;
      v18[1] = v15;
      v21 = v14[3];
      if ( v21 )
        v18[3] = sub_1DC98(a1, v21, v18, a4);
      v14 = (int *)v14[2];
      v15 = v18;
    }
    while ( v14 );
  }
  return v11;
}
