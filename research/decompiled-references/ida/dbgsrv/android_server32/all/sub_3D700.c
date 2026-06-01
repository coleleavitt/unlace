/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D700
// Address: 0x0003D700

//----- (0003D700) --------------------------------------------------------
_DWORD *__fastcall sub_3D700(_DWORD *a1)
{
  _DWORD *v1; // r5
  unsigned __int8 *v2; // r0
  void **v3; // r6
  unsigned int v4; // r7
  _DWORD *v5; // r1
  unsigned int v6; // r5
  int i; // r4
  void *v8; // r0
  void *v9; // r0
  void *v10; // r0
  void *v11; // r0
  void *v12; // r0
  void *v13; // r0
  void *v14; // r0
  void *v15; // r0
  void *v16; // r0
  _DWORD *v18; // [sp+4h] [bp-Ch]
  _DWORD *v19; // [sp+8h] [bp-8h]

  v1 = a1;
  sub_38F58(a1);
  v1[26] = 0;
  v2 = (unsigned __int8 *)v1[58];
  v3 = (void **)(v1 + 58);
  if ( v2 )
  {
    v4 = v1[59];
    v5 = v1 + 59;
    if ( v4 )
    {
      v18 = v1 + 59;
      v19 = v1;
      v6 = 1;
      for ( i = 0; ; i += 24 )
      {
        free_idcv(&v2[i]);
        if ( v6 >= v4 )
          break;
        ++v6;
        v2 = (unsigned __int8 *)*v3;
      }
      v2 = (unsigned __int8 *)*v3;
      v1 = v19;
      v5 = v18;
    }
    *v5 = 0;
    qfree(v2);
    *v3 = nullptr;
    v1[60] = 0;
  }
  v8 = (void *)v1[54];
  if ( v8 )
  {
    v1[55] = 0;
    qfree(v8);
    v1[54] = 0;
    v1[56] = 0;
  }
  v9 = (void *)v1[51];
  if ( v9 )
  {
    v1[52] = 0;
    qfree(v9);
    v1[51] = 0;
    v1[53] = 0;
  }
  v10 = (void *)v1[48];
  if ( v10 )
  {
    v1[49] = 0;
    qfree(v10);
    v1[48] = 0;
    v1[50] = 0;
  }
  v11 = (void *)v1[45];
  if ( v11 )
  {
    v1[46] = 0;
    qfree(v11);
    v1[45] = 0;
    v1[47] = 0;
  }
  v12 = (void *)v1[42];
  if ( v12 )
  {
    v1[43] = 0;
    qfree(v12);
    v1[42] = 0;
    v1[44] = 0;
  }
  v13 = (void *)v1[39];
  if ( v13 )
  {
    v1[40] = 0;
    qfree(v13);
    v1[39] = 0;
    v1[41] = 0;
  }
  v14 = (void *)v1[36];
  if ( v14 )
  {
    v1[37] = 0;
    qfree(v14);
    v1[36] = 0;
    v1[38] = 0;
  }
  v15 = (void *)v1[33];
  if ( v15 )
  {
    v1[34] = 0;
    qfree(v15);
    v1[33] = 0;
    v1[35] = 0;
  }
  sub_1B3BC((char **)v1 + 23);
  sub_1B3BC((char **)v1 + 20);
  sub_1B3BC((char **)v1 + 17);
  v16 = (void *)v1[6];
  if ( v16 )
  {
    v1[7] = 0;
    qfree(v16);
    v1[8] = 0;
    v1[6] = 0;
  }
  return v1;
}
