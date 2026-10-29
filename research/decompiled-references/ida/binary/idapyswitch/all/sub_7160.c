void __fastcall sub_7160(char **a1)
{
  char *v2; // rdi
  char *v3; // r14
  char *i; // r12
  char *v5; // rbp
  char *v6; // rdx
  __int64 v7; // r15
  __int64 j; // rbx
  char *v9; // rax
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; ++i )
      {
        v5 = &v2[96 * (_QWORD)i];
        v6 = *((char **)v5 + 8);
        if ( v6 )
        {
          v7 = *((_QWORD *)v5 + 9);
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
                v6 = *((char **)v5 + 8);
              }
            }
          }
          *((_QWORD *)v5 + 9) = 0;
          j__free(v6);
        }
        v11 = *((void **)v5 + 5);
        if ( v11 )
        {
          *((_QWORD *)v5 + 6) = 0;
          j__free(v11);
        }
        v12 = *((void **)v5 + 2);
        if ( v12 )
        {
          *((_QWORD *)v5 + 3) = 0;
          j__free(v12);
        }
        v2 = *a1;
      }
    }
    a1[1] = nullptr;
    j__free(v2);
  }
}

