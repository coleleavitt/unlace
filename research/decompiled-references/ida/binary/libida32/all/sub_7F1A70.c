void __fastcall sub_7F1A70(__int64 a1)
{
  void **v1; // rbx
  void *v2; // rdi
  char **v3; // r13
  char *v4; // rdi
  char *v5; // rbp
  void **v6; // rbx
  void *v7; // rdi
  char *v8; // rbx
  void *v9; // rdi
  char **v10; // r12
  char *v11; // rdi
  char *v12; // r15
  char *i; // rbx
  char *v14; // r14
  void *v15; // rdi
  char *v16; // [rsp+8h] [rbp-40h]

  if ( !*(_BYTE *)a1 )
  {
    v3 = *(char ***)(a1 + 8);
    if ( !v3 )
      return;
    v4 = *v3;
    if ( *v3 )
    {
      v16 = v3[1];
      if ( v16 )
      {
        v5 = nullptr;
        while ( 1 )
        {
          v8 = &v4[40 * (_QWORD)v5];
          v9 = *((void **)v8 + 2);
          if ( v9 )
          {
            *((_QWORD *)v8 + 3) = 0;
            qfree(v9);
          }
          if ( *v8 )
            break;
          v10 = *((char ***)v8 + 1);
          if ( v10 )
          {
            v11 = *v10;
            if ( *v10 )
            {
              v12 = v10[1];
              if ( v12 )
              {
                for ( i = nullptr; i != v12; ++i )
                {
                  v14 = &v11[40 * (_QWORD)i];
                  v15 = *((void **)v14 + 2);
                  if ( v15 )
                  {
                    *((_QWORD *)v14 + 3) = 0;
                    qfree(v15);
                  }
                  sub_7F1A70(v14);
                  v11 = *v10;
                }
              }
              v10[1] = nullptr;
              qfree(v11);
            }
            ++v5;
            qfree(v10);
            v4 = *v3;
            if ( v16 == v5 )
              goto LABEL_28;
          }
          else
          {
LABEL_15:
            v4 = *v3;
            if ( v16 == ++v5 )
              goto LABEL_28;
          }
        }
        v6 = *((void ***)v8 + 1);
        if ( v6 )
        {
          v7 = *v6;
          if ( *v6 )
          {
            v6[1] = nullptr;
            qfree(v7);
          }
          qfree(v6);
        }
        goto LABEL_15;
      }
LABEL_28:
      v3[1] = nullptr;
      qfree(v4);
    }
    qfree(v3);
    return;
  }
  v1 = *(void ***)(a1 + 8);
  if ( v1 )
  {
    v2 = *v1;
    if ( *v1 )
    {
      v1[1] = nullptr;
      qfree(v2);
    }
    qfree(v1);
  }
}

