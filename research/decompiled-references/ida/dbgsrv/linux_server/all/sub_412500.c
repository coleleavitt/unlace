/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412500
// Address: 0x0000000000412500

//----- (0000000000412500) ----------------------------------------------------
__int64 __fastcall sub_412500(__int64 *a1)
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
  __int64 v15; // rax
  int v16; // edx

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
  v15 = *a1;
  a1[83] = 0;
  (*(void (__fastcall **)(__int64 *))(v15 + 592))(a1);
  if ( *((_DWORD *)a1 + 195) == -1 || *((_DWORD *)a1 + 196) == -1 )
    goto LABEL_26;
  v16 = a1[85];
  if ( !a1[85] )
    v16 = *((_DWORD *)a1 + 194);
  if ( v16 <= 0 )
  {
LABEL_26:
    if ( !byte_4C94E1 )
      sub_481AC0(30016);
    BUG();
  }
  return nullsub_9(1);
}
// 45A740: using guessed type __int64 __fastcall nullsub_9(_QWORD);
// 4C94E1: using guessed type char byte_4C94E1;
