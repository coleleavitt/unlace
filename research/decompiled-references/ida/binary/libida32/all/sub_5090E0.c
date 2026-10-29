void __fastcall sub_5090E0(_QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // r13
  __int64 i; // r12
  char *v5; // rbx
  void *v6; // rdi
  __int64 v7; // rax
  void *v8; // rdi
  void *v9; // rdi
  char *v10; // rdi
  __int64 v11; // r13
  __int64 j; // r12
  char *v13; // rbx
  void *v14; // rdi
  __int64 v15; // rax
  void *v16; // rdi

  if ( a1 )
  {
    v2 = (char *)a1[11];
    if ( v2 )
    {
      v3 = a1[12];
      if ( v3 )
      {
        for ( i = 0; i != v3; ++i )
        {
          v5 = &v2[64 * i];
          v6 = *((void **)v5 + 4);
          if ( v6 )
          {
            *((_QWORD *)v5 + 5) = 0;
            qfree(v6);
          }
          v7 = *((_QWORD *)v5 + 3);
          if ( v7 )
            --*(_DWORD *)(v7 + 12);
          v8 = *(void **)v5;
          if ( *(_QWORD *)v5 )
          {
            *((_QWORD *)v5 + 1) = 0;
            qfree(v8);
          }
          v2 = (char *)a1[11];
        }
      }
      a1[12] = 0;
      qfree(v2);
    }
    v9 = (void *)a1[5];
    if ( v9 )
    {
      a1[6] = 0;
      qfree(v9);
    }
    v10 = (char *)a1[2];
    if ( v10 )
    {
      v11 = a1[3];
      if ( v11 )
      {
        for ( j = 0; j != v11; ++j )
        {
          v13 = &v10[64 * j];
          v14 = *((void **)v13 + 4);
          if ( v14 )
          {
            *((_QWORD *)v13 + 5) = 0;
            qfree(v14);
          }
          v15 = *((_QWORD *)v13 + 3);
          if ( v15 )
            --*(_DWORD *)(v15 + 12);
          v16 = *(void **)v13;
          if ( *(_QWORD *)v13 )
          {
            *((_QWORD *)v13 + 1) = 0;
            qfree(v16);
          }
          v10 = (char *)a1[2];
        }
      }
      a1[3] = 0;
      qfree(v10);
    }
    operator delete(a1, 0x90u);
  }
}

