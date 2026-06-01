/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_25EB2
// Address: 0x00025EB2

//----- (00025EB2) --------------------------------------------------------
_DWORD *__fastcall sub_25EB2(_DWORD *a1, int *a2)
{
  int v4; // r0
  int v5; // r1
  _DWORD *v6; // r7
  size_t v7; // r4
  void *v8; // r0
  int *v9; // r4
  size_t v10; // r6
  void *v11; // r0
  _DWORD *v12; // r6
  _DWORD *v13; // r5
  _DWORD **v14; // r7
  _DWORD *v15; // r4
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  bool v18; // zf
  int v19; // r1
  int *v20; // r5
  signed int v21; // r0
  size_t v22; // r5
  void *v23; // r0
  size_t v24; // r2
  signed int v25; // r0
  size_t v26; // r5
  void *v27; // r0
  size_t v28; // r6
  size_t v30; // [sp+8h] [bp-10h]
  _DWORD *v31; // [sp+Ch] [bp-Ch]
  int *v32; // [sp+14h] [bp-4h]

  v4 = *a2;
  v5 = a2[1];
  *a1 = v4;
  a1[1] = v5;
  a1[2] = 0;
  a1 += 3;
  *a1 = 0;
  a1[1] = 0;
  v6 = a1 - 3;
  v7 = a2[3];
  if ( v7 )
  {
    v8 = qalloc_or_throw(a2[3]);
    v6[2] = v8;
    v6[4] = v7;
    qmemcpy(v8, (const void *)a2[2], v7);
    v6[3] = v7;
  }
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v9 = a2;
  v10 = a2[6];
  v32 = v9;
  v31 = v6;
  if ( v10 )
  {
    v11 = qalloc_or_throw(v10);
    v6[7] = v10;
    v6[5] = v11;
    qmemcpy(v11, (const void *)v9[5], v10);
    v6[6] = v10;
  }
  v12 = v6 + 9;
  v6[8] = v6 + 9;
  v6[9] = 0;
  v6[10] = 0;
  v13 = v9 + 9;
  v14 = (_DWORD **)(v6 + 8);
  v15 = (_DWORD *)v9[8];
  while ( v15 != v13 )
  {
    sub_26034(v14, v12, v15 + 4, (int)(v15 + 4));
    v16 = (_DWORD *)v15[1];
    if ( v16 )
    {
      do
      {
        v15 = v16;
        v16 = (_DWORD *)*v16;
      }
      while ( v16 );
    }
    else
    {
      v17 = v15 + 2;
      v18 = *(_DWORD *)v15[2] == (_DWORD)v15;
      v15 = (_DWORD *)v15[2];
      if ( !v18 )
      {
        do
        {
          v19 = *v17;
          v17 = (_DWORD *)(*v17 + 8);
          v15 = *(_DWORD **)(v19 + 8);
        }
        while ( *v15 != v19 );
      }
    }
  }
  v31[11] = 0;
  v31[12] = 0;
  v31[13] = 0;
  v20 = v32;
  v21 = v32[12];
  if ( v21 )
  {
    v22 = v32[12];
    v23 = qalloc_or_throw(v21);
    v24 = v22;
    v30 = v22;
    v31[13] = v22;
    v31[11] = v23;
    v20 = v32;
    qmemcpy(v23, (const void *)v32[11], v24);
    v31[12] = v30;
  }
  v31[14] = 0;
  v31[15] = 0;
  v31[16] = 0;
  v25 = v20[15];
  if ( v25 )
  {
    v26 = v20[15];
    v27 = qalloc_or_throw(v25);
    v28 = v26;
    v31[16] = v26;
    v31[14] = v27;
    v20 = v32;
    qmemcpy(v27, (const void *)v32[14], v28);
    v31[15] = v28;
  }
  v31[17] = v20[17];
  return v31;
}
