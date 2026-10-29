/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439928
// Address: 0x0000000000439928

//----- (0000000000439928) ----------------------------------------------------
void __fastcall sub_439928(_QWORD *a1)
{
  char *v2; // x0
  __int64 v3; // x21
  __int64 i; // x20
  __int64 *v5; // x0
  void *v6; // x0
  void *v7; // x0
  void *v8; // x0
  void *v9; // x0
  void *v10; // x0
  void *v11; // x0
  void *v12; // x0
  void *v13; // x0
  char *v14; // x1
  __int64 v15; // x22
  __int64 v16; // x20
  __int64 j; // x21
  void *v18; // x0
  char *v19; // x1
  char *v20; // x1
  __int64 v21; // x22
  __int64 v22; // x20
  __int64 k; // x21
  void *v24; // x0
  char *v25; // x1
  char *v26; // x1
  __int64 v27; // x22
  __int64 v28; // x20
  __int64 m; // x21
  void *v30; // x0
  char *v31; // x1
  void *v32; // x0

  sub_435D18((__int64)a1);
  v2 = (char *)a1[53];
  a1[23] = 0;
  if ( v2 )
  {
    v3 = a1[54];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (__int64 *)&v2[32 * i];
        sub_448310(v5);
        v2 = (char *)a1[53];
      }
    }
    a1[54] = 0;
    j__free(v2);
  }
  v6 = (void *)a1[49];
  if ( v6 )
  {
    a1[50] = 0;
    j__free(v6);
  }
  v7 = (void *)a1[46];
  if ( v7 )
  {
    a1[47] = 0;
    j__free(v7);
  }
  v8 = (void *)a1[43];
  if ( v8 )
  {
    a1[44] = 0;
    j__free(v8);
  }
  v9 = (void *)a1[40];
  if ( v9 )
  {
    a1[41] = 0;
    j__free(v9);
  }
  v10 = (void *)a1[37];
  if ( v10 )
  {
    a1[38] = 0;
    j__free(v10);
  }
  v11 = (void *)a1[34];
  if ( v11 )
  {
    a1[35] = 0;
    j__free(v11);
  }
  v12 = (void *)a1[31];
  if ( v12 )
  {
    a1[32] = 0;
    j__free(v12);
  }
  v13 = (void *)a1[28];
  if ( v13 )
  {
    a1[29] = 0;
    j__free(v13);
  }
  v14 = (char *)a1[20];
  if ( v14 )
  {
    v15 = a1[21];
    if ( v15 )
    {
      v16 = 0;
      for ( j = 0; j != v15; ++j )
      {
        v18 = *(void **)&v14[v16];
        v19 = &v14[v16];
        if ( v18 )
        {
          *((_QWORD *)v19 + 1) = 0;
          j__free(v18);
        }
        v16 += 24;
        v14 = (char *)a1[20];
      }
    }
    a1[21] = 0;
    j__free(v14);
  }
  v20 = (char *)a1[17];
  if ( v20 )
  {
    v21 = a1[18];
    if ( v21 )
    {
      v22 = 0;
      for ( k = 0; k != v21; ++k )
      {
        v24 = *(void **)&v20[v22];
        v25 = &v20[v22];
        if ( v24 )
        {
          *((_QWORD *)v25 + 1) = 0;
          j__free(v24);
        }
        v22 += 24;
        v20 = (char *)a1[17];
      }
    }
    a1[18] = 0;
    j__free(v20);
  }
  v26 = (char *)a1[14];
  if ( v26 )
  {
    v27 = a1[15];
    if ( v27 )
    {
      v28 = 0;
      for ( m = 0; m != v27; ++m )
      {
        v30 = *(void **)&v26[v28];
        v31 = &v26[v28];
        if ( v30 )
        {
          *((_QWORD *)v31 + 1) = 0;
          j__free(v30);
        }
        v28 += 24;
        v26 = (char *)a1[14];
      }
    }
    a1[15] = 0;
    j__free(v26);
  }
  v32 = (void *)a1[5];
  if ( v32 )
  {
    a1[6] = 0;
    j__free(v32);
  }
}
