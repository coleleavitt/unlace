/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002DDF0
// Address: 0x000000010002DDF0

//----- (000000010002DDF0) ----------------------------------------------------
void __fastcall sub_10002DDF0(_QWORD *a1)
{
  void *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r15
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // r12
  void *v17; // rdi
  void *v18; // rdi
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // r12
  void *v22; // rdi
  void *v23; // rdi
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // r12
  void *v27; // rdi
  void *v28; // rdi

  sub_100026780((__int64)a1);
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
        free_idcv((unsigned __int8 *)(v4 + a1[53]));
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
          *(_QWORD *)(v16 + v15 + 8) = 0;
          qfree(v17);
          *(_QWORD *)(v16 + v15) = 0;
          *(_QWORD *)(v16 + v15 + 16) = 0;
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
  v18 = (void *)a1[17];
  if ( v18 )
  {
    v19 = a1[18];
    if ( v19 )
    {
      v20 = 0;
      do
      {
        v21 = a1[17];
        v22 = *(void **)(v21 + v20);
        if ( v22 )
        {
          *(_QWORD *)(v21 + v20 + 8) = 0;
          qfree(v22);
          *(_QWORD *)(v21 + v20) = 0;
          *(_QWORD *)(v21 + v20 + 16) = 0;
        }
        v20 += 24;
        --v19;
      }
      while ( v19 );
      v18 = (void *)a1[17];
    }
    a1[18] = 0;
    qfree(v18);
    a1[17] = 0;
    a1[19] = 0;
  }
  v23 = (void *)a1[14];
  if ( v23 )
  {
    v24 = a1[15];
    if ( v24 )
    {
      v25 = 0;
      do
      {
        v26 = a1[14];
        v27 = *(void **)(v26 + v25);
        if ( v27 )
        {
          *(_QWORD *)(v26 + v25 + 8) = 0;
          qfree(v27);
          *(_QWORD *)(v26 + v25) = 0;
          *(_QWORD *)(v26 + v25 + 16) = 0;
        }
        v25 += 24;
        --v24;
      }
      while ( v24 );
      v23 = (void *)a1[14];
    }
    a1[15] = 0;
    qfree(v23);
    a1[14] = 0;
    a1[16] = 0;
  }
  v28 = (void *)a1[5];
  if ( v28 )
  {
    a1[6] = 0;
    qfree(v28);
    a1[5] = 0;
    a1[7] = 0;
  }
}
