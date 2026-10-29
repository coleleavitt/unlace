/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_424410
// Address: 0x0000000000424410

//----- (0000000000424410) ----------------------------------------------------
void __fastcall sub_424410(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rdi
  char *v4; // rdi
  __int64 v5; // r13
  __int64 i; // rbp
  char *v7; // rbx
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi

  v2 = a1[75];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (void *)a1[72];
  if ( v3 )
  {
    a1[73] = 0;
    j__free(v3);
  }
  v4 = (char *)a1[36];
  if ( v4 )
  {
    v5 = a1[37];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = &v4[96 * i];
        v8 = *((void **)v7 + 3);
        if ( v8 )
        {
          *((_QWORD *)v7 + 4) = 0;
          j__free(v8);
        }
        v9 = *(void **)v7;
        if ( *(_QWORD *)v7 )
        {
          *((_QWORD *)v7 + 1) = 0;
          j__free(v9);
        }
        v4 = (char *)a1[36];
      }
    }
    a1[37] = 0;
    j__free(v4);
  }
  v10 = (void *)a1[14];
  if ( v10 )
  {
    a1[15] = 0;
    j__free(v10);
  }
  v11 = (void *)a1[4];
  if ( v11 )
  {
    a1[5] = 0;
    j__free(v11);
  }
}
