/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A574
// Address: 0x000000000008A574

//----- (000000000008A574) ----------------------------------------------------
void __fastcall sub_8A574(__int64 *a1)
{
  __int64 v2; // x0
  char *v3; // x20
  unsigned __int64 v4; // x21
  __int64 v5; // x22
  unsigned __int64 i; // x23
  char *v7; // x24
  void *v8; // x0
  unsigned __int64 v9; // x8
  int v10; // w20
  void *v11; // x0
  void **v12; // x0
  unsigned __int64 v13; // x20
  __int64 v14; // x21
  unsigned __int64 v15; // x22
  void *v16; // x8
  void **v17; // x23

  v2 = *a1;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *a1 = 0;
  }
  v3 = (char *)a1[13];
  *(_OWORD *)(a1 + 11) = 0u;
  *(_OWORD *)(a1 + 9) = 0u;
  *(_OWORD *)(a1 + 7) = 0u;
  *(_OWORD *)(a1 + 5) = 0u;
  *(_OWORD *)(a1 + 3) = 0u;
  *(_OWORD *)(a1 + 1) = 0u;
  if ( v3 )
  {
    v4 = a1[14];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 1; ; ++i )
      {
        v7 = &v3[v5];
        v8 = *(void **)&v3[v5 + 16];
        if ( v8 )
        {
          *((_QWORD *)v7 + 3) = 0;
          qfree(v8);
          *((_QWORD *)v7 + 2) = 0;
          *(_QWORD *)&v3[v5 + 32] = 0;
        }
        if ( i >= v4 )
          break;
        v3 = (char *)a1[13];
        v5 += 120;
      }
      v3 = (char *)a1[13];
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
  v12 = (void **)a1[32];
  if ( v12 )
  {
    v13 = a1[33];
    if ( v13 )
    {
      v14 = 0;
      v15 = 1;
      v16 = *v12;
      if ( *v12 )
        goto LABEL_22;
      while ( v15 < v13 )
      {
        v12 = (void **)a1[32];
        ++v15;
        v14 += 3;
        v16 = v12[v14];
        if ( v16 )
        {
LABEL_22:
          v17 = &v12[v14];
          v12[v14 + 1] = nullptr;
          qfree(v16);
          *v17 = nullptr;
          v17[2] = nullptr;
        }
      }
      v12 = (void **)a1[32];
    }
    a1[33] = 0;
    qfree(v12);
    a1[32] = 0;
    a1[34] = 0;
  }
}
