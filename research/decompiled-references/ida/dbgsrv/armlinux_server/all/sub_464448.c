/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_464448
// Address: 0x0000000000464448

//----- (0000000000464448) ----------------------------------------------------
void __fastcall sub_464448(__int64 *a1)
{
  char *v2; // x1
  __int64 v3; // x22
  __int64 v4; // x19
  __int64 i; // x21
  void *v6; // x0
  char *v7; // x1
  char *v8; // x0
  __int64 v9; // x23
  __int64 v10; // x22
  __int64 j; // x21
  char *v12; // x19
  void *v13; // x0
  void *v14; // x0
  void *v15; // x0
  void *v16; // x0
  char *v17; // x0
  __int64 v18; // x22
  __int64 v19; // x21
  __int64 k; // x19
  char *v21; // x1
  void *v22; // x0

  sub_4642F0(a1);
  v2 = (char *)a1[32];
  if ( v2 )
  {
    v3 = a1[33];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = *(void **)&v2[v4];
        v7 = &v2[v4];
        if ( v6 )
        {
          *((_QWORD *)v7 + 1) = 0;
          j__free(v6);
        }
        v4 += 24;
        v2 = (char *)a1[32];
      }
    }
    a1[33] = 0;
    j__free(v2);
  }
  v8 = (char *)a1[29];
  if ( v8 )
  {
    v9 = a1[30];
    if ( v9 )
    {
      v10 = 0;
      for ( j = 0; j != v9; ++j )
      {
        v12 = &v8[v10];
        v13 = *(void **)&v8[v10 + 24];
        if ( v13 )
        {
          *((_QWORD *)v12 + 4) = 0;
          j__free(v13);
        }
        v14 = *(void **)v12;
        if ( *(_QWORD *)v12 )
        {
          *((_QWORD *)v12 + 1) = 0;
          j__free(v14);
        }
        v10 += 72;
        v8 = (char *)a1[29];
      }
    }
    a1[30] = 0;
    j__free(v8);
  }
  v15 = (void *)a1[24];
  if ( v15 )
  {
    a1[25] = 0;
    j__free(v15);
  }
  v16 = (void *)a1[16];
  if ( v16 )
  {
    a1[17] = 0;
    j__free(v16);
  }
  v17 = (char *)a1[13];
  if ( v17 )
  {
    v18 = a1[14];
    if ( v18 )
    {
      v19 = 0;
      for ( k = 0; k != v18; ++k )
      {
        v21 = &v17[v19];
        v22 = *(void **)&v17[v19 + 16];
        if ( v22 )
        {
          *((_QWORD *)v21 + 3) = 0;
          j__free(v22);
        }
        v19 += 120;
        v17 = (char *)a1[13];
      }
    }
    a1[14] = 0;
    j__free(v17);
  }
}
