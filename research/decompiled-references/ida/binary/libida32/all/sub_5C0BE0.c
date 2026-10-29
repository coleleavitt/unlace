void __fastcall sub_5C0BE0(char **a1)
{
  char *v2; // rdi
  char *v3; // r14
  char *i; // rbp
  void *v5; // rdi
  char *v6; // rbx
  char v7; // al
  char *v8; // rdx
  __int64 v9; // r15
  __int64 j; // r12
  char *v11; // rax
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; ++i )
      {
        v6 = &v2[96 * (_QWORD)i];
        v7 = v6[89];
        if ( v7 == 2 )
        {
          v8 = *((char **)v6 + 3);
          if ( v8 )
          {
            v9 = *((_QWORD *)v6 + 4);
            if ( v9 )
            {
              for ( j = 0; j != v9; ++j )
              {
                v11 = &v8[40 * j];
                v12 = *(void **)v11;
                if ( *(_QWORD *)v11 )
                {
                  *((_QWORD *)v11 + 1) = 0;
                  qfree(v12);
                  v8 = *((char **)v6 + 3);
                }
              }
            }
            *((_QWORD *)v6 + 4) = 0;
            qfree(v8);
          }
        }
        else if ( v7 == 1 )
        {
          v13 = *((void **)v6 + 7);
          if ( v13 )
          {
            *((_QWORD *)v6 + 8) = 0;
            qfree(v13);
          }
          v14 = *((void **)v6 + 3);
          if ( v14 )
          {
            *((_QWORD *)v6 + 4) = 0;
            qfree(v14);
          }
        }
        v5 = *(void **)v6;
        v6[89] = 0;
        if ( v5 )
        {
          *((_QWORD *)v6 + 1) = 0;
          qfree(v5);
        }
        v2 = *a1;
      }
    }
    a1[1] = nullptr;
    qfree(v2);
  }
}

