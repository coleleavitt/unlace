/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_407408
// Address: 0x0000000000407408

//----- (0000000000407408) ----------------------------------------------------
__int64 __fastcall sub_407408(_QWORD *a1)
{
  __int64 v2; // x0
  void *v3; // x0
  char *v4; // x1
  __int64 v5; // x22
  __int64 v6; // x20
  __int64 i; // x21
  void *v8; // x0
  char *v9; // x1
  void *v10; // x0
  char *v11; // x1
  __int64 v12; // x22
  __int64 v13; // x20
  __int64 j; // x21
  void *v15; // x0
  char *v16; // x1

  v2 = a1[83];
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = (void *)a1[84];
    if ( v3 )
    {
      a1[85] = 0;
      j__free(v3);
      a1[84] = 0;
      a1[86] = 0;
    }
    v4 = (char *)a1[87];
    if ( v4 )
    {
      v5 = a1[88];
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
          v4 = (char *)a1[87];
        }
      }
      a1[88] = 0;
      j__free(v4);
      a1[87] = 0;
      a1[89] = 0;
    }
    v10 = (void *)a1[90];
    if ( v10 )
    {
      a1[91] = 0;
      j__free(v10);
      a1[90] = 0;
      a1[92] = 0;
    }
    v11 = (char *)a1[93];
    if ( v11 )
    {
      v12 = a1[94];
      if ( v12 )
      {
        v13 = 0;
        for ( j = 0; j != v12; ++j )
        {
          v15 = *(void **)&v11[v13];
          v16 = &v11[v13];
          if ( v15 )
          {
            *((_QWORD *)v16 + 1) = 0;
            j__free(v15);
          }
          v13 += 24;
          v11 = (char *)a1[93];
        }
      }
      a1[94] = 0;
      j__free(v11);
      a1[93] = 0;
      a1[95] = 0;
    }
  }
  a1[83] = 0;
  return nullsub_9(0);
}
// 407408: could not find valid save-restore pair for x21
// 461A18: using guessed type __int64 __fastcall nullsub_9(_QWORD);
