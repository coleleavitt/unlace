/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40C270
// Address: 0x000000000040C270

//----- (000000000040C270) ----------------------------------------------------
__int64 __fastcall sub_40C270(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rdi
  char *v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbp
  char *v7; // rax
  void *v8; // rdi
  void *v9; // rdi
  char *v10; // rdx
  __int64 v11; // r12
  __int64 j; // rbp
  char *v13; // rax
  void *v14; // rdi

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
        for ( i = 0; i != v5; ++i )
        {
          v7 = &v4[24 * i];
          v8 = *(void **)v7;
          if ( *(_QWORD *)v7 )
          {
            *((_QWORD *)v7 + 1) = 0;
            j__free(v8);
            v4 = (char *)a1[87];
          }
        }
      }
      a1[88] = 0;
      j__free(v4);
      a1[87] = 0;
      a1[89] = 0;
    }
    v9 = (void *)a1[90];
    if ( v9 )
    {
      a1[91] = 0;
      j__free(v9);
      a1[90] = 0;
      a1[92] = 0;
    }
    v10 = (char *)a1[93];
    if ( v10 )
    {
      v11 = a1[94];
      if ( v11 )
      {
        for ( j = 0; j != v11; ++j )
        {
          v13 = &v10[24 * j];
          v14 = *(void **)v13;
          if ( *(_QWORD *)v13 )
          {
            *((_QWORD *)v13 + 1) = 0;
            j__free(v14);
            v10 = (char *)a1[93];
          }
        }
      }
      a1[94] = 0;
      j__free(v10);
      a1[93] = 0;
      a1[95] = 0;
    }
  }
  a1[83] = 0;
  return nullsub_9(0);
}
// 45A740: using guessed type __int64 __fastcall nullsub_9(_QWORD);
