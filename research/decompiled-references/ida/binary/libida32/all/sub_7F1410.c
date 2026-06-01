void __fastcall sub_7F1410(__int64 a1)
{
  void *v2; // rdi
  void **v3; // rbx
  void *v4; // rdi
  char **v5; // r12
  char *v6; // rdi
  char *v7; // r13
  char *v8; // rbp
  void **v9; // rbx
  void *v10; // rdi
  char *v11; // rbx
  void *v12; // rdi
  char **v13; // r15
  char *v14; // rdi
  char *v15; // r14
  char *i; // rbx
  __int64 v17; // rax

  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree(v2);
  }
  if ( !*(_BYTE *)a1 )
  {
    v5 = *(char ***)(a1 + 8);
    if ( !v5 )
      return;
    v6 = *v5;
    if ( *v5 )
    {
      v7 = v5[1];
      if ( v7 )
      {
        v8 = nullptr;
        while ( 1 )
        {
          v11 = &v6[40 * (_QWORD)v8];
          v12 = *((void **)v11 + 2);
          if ( v12 )
          {
            *((_QWORD *)v11 + 3) = 0;
            qfree(v12);
          }
          if ( *v11 )
            break;
          v13 = *((char ***)v11 + 1);
          if ( v13 )
          {
            v14 = *v13;
            if ( *v13 )
            {
              v15 = v13[1];
              if ( v15 )
              {
                for ( i = nullptr; i != v15; ++i )
                {
                  v17 = 5LL * (_QWORD)i;
                  sub_7F1410(&v14[8 * v17]);
                  v14 = *v13;
                }
              }
              v13[1] = nullptr;
              qfree(v14);
            }
            ++v8;
            qfree(v13);
            v6 = *v5;
            if ( v7 == v8 )
              goto LABEL_28;
          }
          else
          {
LABEL_17:
            ++v8;
            v6 = *v5;
            if ( v7 == v8 )
              goto LABEL_28;
          }
        }
        v9 = *((void ***)v11 + 1);
        if ( v9 )
        {
          v10 = *v9;
          if ( *v9 )
          {
            v9[1] = nullptr;
            qfree(v10);
          }
          qfree(v9);
        }
        goto LABEL_17;
      }
LABEL_28:
      v5[1] = nullptr;
      qfree(v6);
    }
    qfree(v5);
    return;
  }
  v3 = *(void ***)(a1 + 8);
  if ( v3 )
  {
    v4 = *v3;
    if ( *v3 )
    {
      v3[1] = nullptr;
      qfree(v4);
    }
    qfree(v3);
  }
}

