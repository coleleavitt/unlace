void __fastcall sub_5CA410(char **a1)
{
  char *v2; // rdi
  char *v3; // r14
  __int64 v4; // r13
  char *i; // r12
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi
  char *v9; // rdi
  char *v10; // rdx
  char *v11; // r12
  char *j; // rbx
  char *v13; // rax
  void *v14; // rdi

  v2 = a1[8];
  if ( v2 )
  {
    v3 = a1[9];
    if ( v3 )
    {
      v4 = 0;
      for ( i = nullptr; i != v3; ++i )
      {
        v6 = &v2[v4];
        v7 = *(void **)&v2[v4 + 24];
        if ( v7 )
        {
          *((_QWORD *)v6 + 4) = 0;
          qfree(v7);
        }
        v8 = *(void **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v6 + 1) = 0;
          qfree(v8);
        }
        v2 = a1[8];
        v4 += 56;
      }
    }
    a1[9] = nullptr;
    qfree(v2);
  }
  v9 = a1[4];
  if ( v9 )
  {
    a1[5] = nullptr;
    qfree(v9);
  }
  v10 = *a1;
  if ( *a1 )
  {
    v11 = a1[1];
    if ( v11 )
    {
      for ( j = nullptr; j != v11; ++j )
      {
        v13 = &v10[24 * (_QWORD)j];
        v14 = *(void **)v13;
        if ( *(_QWORD *)v13 )
        {
          *((_QWORD *)v13 + 1) = 0;
          qfree(v14);
          v10 = *a1;
        }
      }
    }
    a1[1] = nullptr;
    qfree(v10);
  }
}

