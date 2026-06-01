/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69BE8
// Address: 0x0000000000069BE8

//----- (0000000000069BE8) ----------------------------------------------------
void __fastcall sub_69BE8(__int64 a1)
{
  void *v2; // x0
  char *v3; // x20
  unsigned __int64 v4; // x21
  __int64 v5; // x22
  unsigned __int64 i; // x23
  char *v7; // x24
  void *v8; // x0
  void *v9; // x0
  char *v10; // x0
  unsigned __int64 v11; // x20
  __int64 v12; // x21
  unsigned __int64 j; // x22

  v2 = *(void **)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  v3 = *(char **)(a1 + 88);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 96);
    if ( v4 )
    {
      v5 = 0;
      for ( i = 1; ; ++i )
      {
        v7 = &v3[v5];
        v8 = *(void **)&v3[v5 + 8];
        if ( v8 )
        {
          *((_QWORD *)v7 + 2) = 0;
          qfree(v8);
          *((_QWORD *)v7 + 1) = 0;
          *(_QWORD *)&v3[v5 + 24] = 0;
        }
        if ( i >= v4 )
          break;
        v3 = *(char **)(a1 + 88);
        v5 += 32;
      }
      v3 = *(char **)(a1 + 88);
    }
    *(_QWORD *)(a1 + 96) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 104) = 0;
  }
  v9 = *(void **)(a1 + 112);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 120) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 112) = 0;
    *(_QWORD *)(a1 + 128) = 0;
  }
  v10 = *(char **)(a1 + 64);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 72);
    if ( v11 )
    {
      v12 = 0;
      for ( j = 1; ; ++j )
      {
        free_idcv((__int64 *)&v10[v12]);
        if ( j >= v11 )
          break;
        v10 = *(char **)(a1 + 64);
        v12 += 32;
      }
      v10 = *(char **)(a1 + 64);
    }
    *(_QWORD *)(a1 + 72) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 80) = 0;
  }
  *(_DWORD *)(a1 + 24) = 0;
}
