void __fastcall sub_7A08D0(char **a1)
{
  char *v2; // rdi
  __int64 v3; // r12
  char *i; // rbp
  char *v5; // r14
  char *v6; // rdx
  __int64 v7; // r15
  __int64 j; // rbx
  char *v9; // rax
  void *v10; // rdi
  char *v11; // [rsp+8h] [rbp-40h]

  v2 = *a1;
  if ( v2 )
  {
    v11 = a1[1];
    if ( v11 )
    {
      v3 = 0;
      for ( i = nullptr; i != v11; ++i )
      {
        v5 = &v2[v3];
        v6 = *(char **)&v2[v3];
        if ( v6 )
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
                qfree(v10);
                v6 = *(char **)v5;
              }
            }
          }
          *((_QWORD *)v5 + 1) = 0;
          qfree(v6);
          v2 = *a1;
        }
        v3 += 56;
      }
    }
    a1[1] = nullptr;
    qfree(v2);
  }
}
