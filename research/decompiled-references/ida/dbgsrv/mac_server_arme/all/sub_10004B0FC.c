/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004B0FC
// Address: 0x000000010004B0FC

//----- (000000010004B0FC) ----------------------------------------------------
void __fastcall sub_10004B0FC(__int64 *a1)
{
  __int64 v2; // x0
  void *v3; // x0
  __int64 v4; // x20
  __int64 v5; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  void *v8; // x0
  unsigned __int64 v9; // x8
  int v10; // w20
  void *v11; // x0
  void *v12; // x0
  __int64 v13; // x20
  __int64 v14; // x21
  __int64 v15; // x8
  void *v16; // x0
  _QWORD *v17; // x22

  v2 = *a1;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *a1 = 0;
  }
  *(_OWORD *)(a1 + 11) = 0u;
  *(_OWORD *)(a1 + 9) = 0u;
  *(_OWORD *)(a1 + 7) = 0u;
  *(_OWORD *)(a1 + 5) = 0u;
  *(_OWORD *)(a1 + 3) = 0u;
  *(_OWORD *)(a1 + 1) = 0u;
  v3 = (void *)a1[13];
  if ( v3 )
  {
    v4 = a1[14];
    if ( v4 )
    {
      v5 = 0;
      do
      {
        v6 = a1[13];
        v7 = v6 + v5;
        v8 = *(void **)(v6 + v5 + 16);
        if ( v8 )
        {
          *(_QWORD *)(v7 + 24) = 0;
          qfree(v8);
          *(_QWORD *)(v7 + 16) = 0;
          *(_QWORD *)(v6 + v5 + 32) = 0;
        }
        v5 += 120;
        --v4;
      }
      while ( v4 );
      v3 = (void *)a1[13];
    }
    a1[14] = 0;
    qfree(v3);
    a1[13] = 0;
    a1[15] = 0;
  }
  if ( a1[30] )
  {
    v9 = 0;
    v10 = 1;
    do
    {
      qfree(*(void **)(a1[29] + 72 * v9 + 56));
      v9 = v10++;
    }
    while ( a1[30] > v9 );
  }
  v11 = (void *)a1[16];
  if ( v11 )
  {
    a1[17] = 0;
    qfree(v11);
    a1[16] = 0;
    a1[18] = 0;
  }
  v12 = (void *)a1[32];
  if ( v12 )
  {
    v13 = a1[33];
    if ( v13 )
    {
      v14 = 0;
      do
      {
        v15 = a1[32];
        v16 = *(void **)(v15 + v14);
        if ( v16 )
        {
          v17 = (_QWORD *)(v15 + v14);
          *(_QWORD *)(v15 + v14 + 8) = 0;
          qfree(v16);
          *v17 = 0;
          v17[2] = 0;
        }
        v14 += 24;
        --v13;
      }
      while ( v13 );
      v12 = (void *)a1[32];
    }
    a1[33] = 0;
    qfree(v12);
    a1[32] = 0;
    a1[34] = 0;
  }
}
