/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002B32C
// Address: 0x000000010002B32C

//----- (000000010002B32C) ----------------------------------------------------
_QWORD *__fastcall sub_10002B32C(_QWORD *a1)
{
  void *v2; // x0
  __int64 v3; // x20
  __int64 v4; // x21
  void *v5; // x0
  void *v6; // x0
  void *v7; // x0
  void *v8; // x0
  void *v9; // x0
  void *v10; // x0
  void *v11; // x0
  void *v12; // x0
  void *v13; // x0
  __int64 v14; // x20
  __int64 v15; // x21
  __int64 v16; // x8
  void *v17; // x0
  _QWORD *v18; // x22
  void *v19; // x0
  __int64 v20; // x20
  __int64 v21; // x21
  __int64 v22; // x8
  void *v23; // x0
  _QWORD *v24; // x22
  void *v25; // x0
  __int64 v26; // x20
  __int64 v27; // x21
  __int64 v28; // x8
  void *v29; // x0
  _QWORD *v30; // x22
  void *v31; // x0

  sub_1000235D0((__int64)a1);
  a1[23] = 0;
  v2 = (void *)a1[53];
  if ( v2 )
  {
    v3 = a1[54];
    if ( v3 )
    {
      v4 = 0;
      do
      {
        free_idcv((unsigned __int8 *)(a1[53] + v4));
        v4 += 32;
        --v3;
      }
      while ( v3 );
      v2 = (void *)a1[53];
    }
    a1[54] = 0;
    qfree(v2);
    a1[53] = 0;
    a1[55] = 0;
  }
  v5 = (void *)a1[49];
  if ( v5 )
  {
    a1[50] = 0;
    qfree(v5);
    a1[49] = 0;
    a1[51] = 0;
  }
  v6 = (void *)a1[46];
  if ( v6 )
  {
    a1[47] = 0;
    qfree(v6);
    a1[46] = 0;
    a1[48] = 0;
  }
  v7 = (void *)a1[43];
  if ( v7 )
  {
    a1[44] = 0;
    qfree(v7);
    a1[43] = 0;
    a1[45] = 0;
  }
  v8 = (void *)a1[40];
  if ( v8 )
  {
    a1[41] = 0;
    qfree(v8);
    a1[40] = 0;
    a1[42] = 0;
  }
  v9 = (void *)a1[37];
  if ( v9 )
  {
    a1[38] = 0;
    qfree(v9);
    a1[37] = 0;
    a1[39] = 0;
  }
  v10 = (void *)a1[34];
  if ( v10 )
  {
    a1[35] = 0;
    qfree(v10);
    a1[34] = 0;
    a1[36] = 0;
  }
  v11 = (void *)a1[31];
  if ( v11 )
  {
    a1[32] = 0;
    qfree(v11);
    a1[31] = 0;
    a1[33] = 0;
  }
  v12 = (void *)a1[28];
  if ( v12 )
  {
    a1[29] = 0;
    qfree(v12);
    a1[28] = 0;
    a1[30] = 0;
  }
  v13 = (void *)a1[20];
  if ( v13 )
  {
    v14 = a1[21];
    if ( v14 )
    {
      v15 = 0;
      do
      {
        v16 = a1[20];
        v17 = *(void **)(v16 + v15);
        if ( v17 )
        {
          v18 = (_QWORD *)(v16 + v15);
          *(_QWORD *)(v16 + v15 + 8) = 0;
          qfree(v17);
          *v18 = 0;
          v18[2] = 0;
        }
        v15 += 24;
        --v14;
      }
      while ( v14 );
      v13 = (void *)a1[20];
    }
    a1[21] = 0;
    qfree(v13);
    a1[20] = 0;
    a1[22] = 0;
  }
  v19 = (void *)a1[17];
  if ( v19 )
  {
    v20 = a1[18];
    if ( v20 )
    {
      v21 = 0;
      do
      {
        v22 = a1[17];
        v23 = *(void **)(v22 + v21);
        if ( v23 )
        {
          v24 = (_QWORD *)(v22 + v21);
          *(_QWORD *)(v22 + v21 + 8) = 0;
          qfree(v23);
          *v24 = 0;
          v24[2] = 0;
        }
        v21 += 24;
        --v20;
      }
      while ( v20 );
      v19 = (void *)a1[17];
    }
    a1[18] = 0;
    qfree(v19);
    a1[17] = 0;
    a1[19] = 0;
  }
  v25 = (void *)a1[14];
  if ( v25 )
  {
    v26 = a1[15];
    if ( v26 )
    {
      v27 = 0;
      do
      {
        v28 = a1[14];
        v29 = *(void **)(v28 + v27);
        if ( v29 )
        {
          v30 = (_QWORD *)(v28 + v27);
          *(_QWORD *)(v28 + v27 + 8) = 0;
          qfree(v29);
          *v30 = 0;
          v30[2] = 0;
        }
        v27 += 24;
        --v26;
      }
      while ( v26 );
      v25 = (void *)a1[14];
    }
    a1[15] = 0;
    qfree(v25);
    a1[14] = 0;
    a1[16] = 0;
  }
  v31 = (void *)a1[5];
  if ( v31 )
  {
    a1[6] = 0;
    qfree(v31);
    a1[5] = 0;
    a1[7] = 0;
  }
  return a1;
}
