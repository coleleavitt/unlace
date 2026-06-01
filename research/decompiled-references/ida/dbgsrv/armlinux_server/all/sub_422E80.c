/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_422E80
// Address: 0x0000000000422E80

//----- (0000000000422E80) ----------------------------------------------------
void __fastcall sub_422E80(__int64 a1)
{
  void *v2; // x0
  char *v3; // x1
  __int64 v4; // x22
  __int64 v5; // x19
  __int64 i; // x20
  void *v7; // x0
  char *v8; // x1
  void *v9; // x0

  v2 = *(void **)(a1 + 48);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    j__free(v2);
  }
  v3 = *(char **)(a1 + 24);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = *(void **)&v3[v5];
        v8 = &v3[v5];
        if ( v7 )
        {
          *((_QWORD *)v8 + 1) = 0;
          j__free(v7);
        }
        v5 += 40;
        v3 = *(char **)(a1 + 24);
      }
    }
    *(_QWORD *)(a1 + 32) = 0;
    j__free(v3);
  }
  v9 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j__free(v9);
  }
}
