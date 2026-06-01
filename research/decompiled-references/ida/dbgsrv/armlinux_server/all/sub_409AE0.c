/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_409AE0
// Address: 0x0000000000409AE0

//----- (0000000000409AE0) ----------------------------------------------------
__int64 __fastcall sub_409AE0(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // x0
  void *v5; // x0
  char *v6; // x1
  __int64 v7; // x22
  __int64 v8; // x20
  __int64 i; // x21
  void *v10; // x0
  char *v11; // x1
  void *v12; // x0
  char *v13; // x1
  __int64 v14; // x22
  __int64 v15; // x20
  __int64 j; // x21
  void *v17; // x0
  char *v18; // x1
  __int64 v19; // x1
  int v20; // w1

  (*(void (__fastcall **)(__int64 *))(*a1 + 112))(a1);
  if ( a2 )
    *a2 = 0x500000000LL;
  v4 = a1[83];
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v5 = (void *)a1[84];
    if ( v5 )
    {
      a1[85] = 0;
      j__free(v5);
      a1[84] = 0;
      a1[86] = 0;
    }
    v6 = (char *)a1[87];
    if ( v6 )
    {
      v7 = a1[88];
      if ( v7 )
      {
        v8 = 0;
        for ( i = 0; i != v7; ++i )
        {
          v10 = *(void **)&v6[v8];
          v11 = &v6[v8];
          if ( v10 )
          {
            *((_QWORD *)v11 + 1) = 0;
            j__free(v10);
          }
          v8 += 24;
          v6 = (char *)a1[87];
        }
      }
      a1[88] = 0;
      j__free(v6);
      a1[87] = 0;
      a1[89] = 0;
    }
    v12 = (void *)a1[90];
    if ( v12 )
    {
      a1[91] = 0;
      j__free(v12);
      a1[90] = 0;
      a1[92] = 0;
    }
    v13 = (char *)a1[93];
    if ( v13 )
    {
      v14 = a1[94];
      if ( v14 )
      {
        v15 = 0;
        for ( j = 0; j != v14; ++j )
        {
          v17 = *(void **)&v13[v15];
          v18 = &v13[v15];
          if ( v17 )
          {
            *((_QWORD *)v18 + 1) = 0;
            j__free(v17);
          }
          v15 += 24;
          v13 = (char *)a1[93];
        }
      }
      a1[94] = 0;
      j__free(v13);
      a1[93] = 0;
      a1[95] = 0;
    }
  }
  v19 = *a1;
  a1[83] = 0;
  (*(void (__fastcall **)(__int64 *))(v19 + 592))(a1);
  if ( *((_DWORD *)a1 + 195) == -1 || *((_DWORD *)a1 + 196) == -1 )
    goto LABEL_27;
  v20 = a1[85];
  if ( !a1[85] )
    v20 = *((_DWORD *)a1 + 194);
  if ( v20 <= 0 )
  {
LABEL_27:
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(30016);
  }
  nullsub_9(1);
  return 1;
}
// 461A18: using guessed type __int64 __fastcall nullsub_9(_QWORD);
// 52451C: using guessed type char under_debugger;
