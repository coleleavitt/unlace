void __fastcall sub_7EB860(char **a1)
{
  char *v1; // rax
  char *i; // r13
  char *v4; // rbp
  char *v5; // rdi
  __int64 v6; // r12
  __int64 j; // r15
  char *v8; // rbx
  void *v9; // rdi
  void *v10; // rdi
  char *v11; // [rsp+0h] [rbp-40h]

  v1 = *a1;
  if ( *a1 )
  {
    v11 = a1[1];
    if ( v11 )
    {
      for ( i = nullptr; i != v11; ++i )
      {
        v4 = &v1[24 * (_QWORD)i];
        v5 = *(char **)v4;
        if ( *(_QWORD *)v4 )
        {
          v6 = *((_QWORD *)v4 + 1);
          if ( v6 )
          {
            for ( j = 0; j != v6; ++j )
            {
              v8 = &v5[80 * j];
              v9 = *((void **)v8 + 5);
              if ( v9 )
              {
                *((_QWORD *)v8 + 6) = 0;
                qfree(v9);
              }
              v10 = *((void **)v8 + 2);
              if ( v10 )
              {
                *((_QWORD *)v8 + 3) = 0;
                qfree(v10);
              }
              v5 = *(char **)v4;
            }
          }
          *((_QWORD *)v4 + 1) = 0;
          qfree(v5);
          v1 = *a1;
        }
      }
    }
    a1[1] = nullptr;
    qfree(v1);
  }
}
