void __fastcall sub_76AAD0(char **a1)
{
  char *v2; // rdx
  char *v3; // r12
  char *i; // rbx
  char *v5; // rax
  void *v6; // rdi
  char *v7; // rdx
  char *v8; // r12
  char *j; // rbx
  char *v10; // rax
  void *v11; // rdi

  v2 = a1[3];
  if ( v2 )
  {
    v3 = a1[4];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; ++i )
      {
        v5 = &v2[24 * (_QWORD)i];
        v6 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          qfree(v6);
          v2 = a1[3];
        }
      }
    }
    a1[4] = nullptr;
    qfree(v2);
  }
  v7 = *a1;
  if ( *a1 )
  {
    v8 = a1[1];
    if ( v8 )
    {
      for ( j = nullptr; j != v8; ++j )
      {
        v10 = &v7[24 * (_QWORD)j];
        v11 = *(void **)v10;
        if ( *(_QWORD *)v10 )
        {
          *((_QWORD *)v10 + 1) = 0;
          qfree(v11);
          v7 = *a1;
        }
      }
    }
    a1[1] = nullptr;
    qfree(v7);
  }
}

