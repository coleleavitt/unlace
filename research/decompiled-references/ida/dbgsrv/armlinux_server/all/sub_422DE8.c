/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_422DE8
// Address: 0x0000000000422DE8

//----- (0000000000422DE8) ----------------------------------------------------
void __fastcall sub_422DE8(__int64 a1)
{
  char *v2; // x1
  __int64 v3; // x22
  __int64 v4; // x19
  __int64 i; // x20
  void *v6; // x0
  char *v7; // x1
  void *v8; // x0

  v2 = *(char **)(a1 + 48);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 56);
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
        v4 += 40;
        v2 = *(char **)(a1 + 48);
      }
    }
    *(_QWORD *)(a1 + 56) = 0;
    j__free(v2);
  }
  v8 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j__free(v8);
  }
}
