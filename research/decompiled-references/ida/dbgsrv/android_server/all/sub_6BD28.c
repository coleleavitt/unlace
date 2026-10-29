/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BD28
// Address: 0x000000000006BD28

//----- (000000000006BD28) ----------------------------------------------------
void __fastcall sub_6BD28(__int64 a1)
{
  void *v2; // x0
  char *v3; // x0
  unsigned __int64 v4; // x20
  __int64 v5; // x21
  unsigned __int64 i; // x22
  void *v7; // x0
  void *v8; // x0

  v2 = *(void **)(a1 + 112);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 120) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 112) = 0;
    *(_QWORD *)(a1 + 128) = 0;
  }
  sub_6C8CC((char **)(a1 + 88));
  v3 = *(char **)(a1 + 64);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 72);
    if ( v4 )
    {
      v5 = 0;
      for ( i = 1; ; ++i )
      {
        free_idcv((__int64 *)&v3[v5]);
        if ( i >= v4 )
          break;
        v3 = *(char **)(a1 + 64);
        v5 += 32;
      }
      v3 = *(char **)(a1 + 64);
    }
    *(_QWORD *)(a1 + 72) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 80) = 0;
  }
  v7 = *(void **)(a1 + 32);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  v8 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v8);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
