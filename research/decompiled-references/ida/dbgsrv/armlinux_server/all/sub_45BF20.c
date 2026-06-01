/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45BF20
// Address: 0x000000000045BF20

//----- (000000000045BF20) ----------------------------------------------------
void __fastcall sub_45BF20(__int64 a1)
{
  char *v2; // x1
  __int64 v3; // x22
  __int64 v4; // x20
  __int64 i; // x21
  void *v6; // x0
  char *v7; // x1
  void *v8; // x0
  char *v9; // x1
  __int64 v10; // x22
  __int64 v11; // x20
  __int64 j; // x21
  void *v13; // x0
  char *v14; // x1
  void *v15; // x0

  v2 = *(char **)(a1 + 72);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 80);
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
        v2 = *(char **)(a1 + 72);
      }
    }
    *(_QWORD *)(a1 + 80) = 0;
    j__free(v2);
  }
  v8 = *(void **)(a1 + 48);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    j__free(v8);
  }
  v9 = *(char **)(a1 + 24);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 32);
    if ( v10 )
    {
      v11 = 0;
      for ( j = 0; j != v10; ++j )
      {
        v13 = *(void **)&v9[v11];
        v14 = &v9[v11];
        if ( v13 )
        {
          *((_QWORD *)v14 + 1) = 0;
          j__free(v13);
        }
        v11 += 24;
        v9 = *(char **)(a1 + 24);
      }
    }
    *(_QWORD *)(a1 + 32) = 0;
    j__free(v9);
  }
  v15 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j__free(v15);
  }
}
