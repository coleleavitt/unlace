/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_455080
// Address: 0x0000000000455080

//----- (0000000000455080) ----------------------------------------------------
void __fastcall sub_455080(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0
  char *v4; // x1
  __int64 v5; // x21
  __int64 v6; // x19
  __int64 i; // x20
  void *v8; // x0
  char *v9; // x1
  char *v10; // x0
  __int64 v11; // x25
  __int64 v12; // x23
  __int64 j; // x24
  char *v14; // x1
  char *v15; // x21
  __int64 v16; // x26
  __int64 v17; // x19
  __int64 k; // x20
  void *v19; // x0
  char *v20; // x1
  void *v21; // x0

  sub_455008(a1, 1);
  sub_452D88(a1);
  sub_452C60((void **)(a1 + 704));
  v2 = *(void **)(a1 + 312);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 320) = 0;
    j__free(v2);
  }
  v3 = *(void **)(a1 + 264);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 272) = 0;
    j__free(v3);
  }
  v4 = *(char **)(a1 + 240);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 248);
    if ( v5 )
    {
      v6 = 0;
      for ( i = 0; i != v5; ++i )
      {
        v8 = *(void **)&v4[v6];
        v9 = &v4[v6];
        if ( v8 )
        {
          *((_QWORD *)v9 + 1) = 0;
          j__free(v8);
        }
        v6 += 24;
        v4 = *(char **)(a1 + 240);
      }
    }
    *(_QWORD *)(a1 + 248) = 0;
    j__free(v4);
  }
  sub_452930(a1 + 88);
  v10 = *(char **)(a1 + 56);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      v12 = 0;
      for ( j = 0; j != v11; ++j )
      {
        v14 = *(char **)&v10[v12];
        v15 = &v10[v12];
        if ( v14 )
        {
          v16 = *((_QWORD *)v15 + 1);
          if ( v16 )
          {
            v17 = 0;
            for ( k = 0; k != v16; ++k )
            {
              v19 = *(void **)&v14[v17];
              v20 = &v14[v17];
              if ( v19 )
              {
                *((_QWORD *)v20 + 1) = 0;
                j__free(v19);
              }
              v17 += 24;
              v14 = *(char **)v15;
            }
          }
          *((_QWORD *)v15 + 1) = 0;
          j__free(v14);
        }
        v12 += 56;
        v10 = *(char **)(a1 + 56);
      }
    }
    *(_QWORD *)(a1 + 64) = 0;
    j__free(v10);
  }
  v21 = *(void **)(a1 + 32);
  if ( v21 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    j__free(v21);
  }
}
