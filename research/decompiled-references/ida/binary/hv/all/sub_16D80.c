void __fastcall sub_16D80(_QWORD *a1)
{
  __int64 v2; // rdi
  char *v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  char *v6; // rax
  void *v7; // rdi
  char *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 j; // r12
  char *v12; // rbx
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi

  *a1 = &off_15F250;
  v2 = a1[1];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (char *)a1[13];
  a1[2] = 0;
  if ( v3 )
  {
    v4 = a1[14];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = &v3[24 * i];
        v7 = *(void **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v6 + 1) = 0;
          j__free(v7);
          v3 = (char *)a1[13];
        }
      }
    }
    a1[14] = 0;
    j__free(v3);
  }
  v8 = (char *)a1[10];
  if ( v8 )
  {
    v9 = a1[11];
    if ( v9 )
    {
      v10 = 0;
      for ( j = 0; j != v9; ++j )
      {
        v12 = &v8[v10];
        v13 = *(void **)&v8[v10 + 24];
        if ( v13 )
        {
          *((_QWORD *)v12 + 4) = 0;
          j__free(v13);
        }
        v14 = *(void **)v12;
        if ( *(_QWORD *)v12 )
        {
          *((_QWORD *)v12 + 1) = 0;
          j__free(v14);
        }
        v8 = (char *)a1[10];
        v10 += 56;
      }
    }
    a1[11] = 0;
    j__free(v8);
  }
  v15 = (void *)a1[7];
  if ( v15 )
  {
    a1[8] = 0;
    j__free(v15);
  }
  v16 = (void *)a1[4];
  if ( v16 )
  {
    a1[5] = 0;
    j__free(v16);
  }
}

