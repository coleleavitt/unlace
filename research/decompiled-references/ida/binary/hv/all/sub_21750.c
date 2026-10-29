void __fastcall sub_21750(char **a1)
{
  char *v2; // rdi
  char *v3; // r13
  char *i; // rbp
  char *v5; // r15
  char *v6; // rdx
  __int64 v7; // r14
  __int64 j; // rbx
  char *v9; // rax
  void *v10; // rdi

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; ++i )
      {
        v5 = &v2[24 * (_QWORD)i];
        v6 = *(char **)v5;
        if ( *(_QWORD *)v5 )
        {
          v7 = *((_QWORD *)v5 + 1);
          if ( v7 )
          {
            for ( j = 0; j != v7; ++j )
            {
              v9 = &v6[24 * j];
              v10 = *(void **)v9;
              if ( *(_QWORD *)v9 )
              {
                *((_QWORD *)v9 + 1) = 0;
                j__free(v10);
                v6 = *(char **)v5;
              }
            }
          }
          *((_QWORD *)v5 + 1) = 0;
          j__free(v6);
          v2 = *a1;
        }
      }
    }
    a1[1] = nullptr;
    j__free(v2);
  }
}

