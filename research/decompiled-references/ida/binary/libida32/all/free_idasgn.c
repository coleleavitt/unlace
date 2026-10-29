void __fastcall free_idasgn(_QWORD *a1)
{
  void (*v2)(void); // rax
  _QWORD *v3; // rbp
  void **v4; // r12
  void *v5; // rdi
  void *v6; // rdi
  char *v7; // rdi
  __int64 v8; // r12
  char *j; // rbp
  char *v10; // r14
  void *v11; // rdi
  void *v12; // rdi
  char *v13; // rcx
  __int64 v14; // r13
  __int64 k; // r15
  char *v16; // rax
  void *v17; // rdi
  void *v18; // rdi
  void **v19; // r14
  void *v20; // rdi
  void *v21; // r15
  void *i; // r12
  __int64 v23; // r13
  void *v24; // rdi
  char **ptr; // [rsp+0h] [rbp-48h]
  char *v26; // [rsp+8h] [rbp-40h]

  if ( a1 )
  {
    v2 = (void (*)(void))a1[11];
    if ( v2 )
      v2();
    v3 = (_QWORD *)a1[10];
    if ( v3 )
    {
      if ( *(_BYTE *)v3 )
      {
        v4 = (void **)v3[1];
        if ( v4 )
        {
          v5 = *v4;
          if ( *v4 )
          {
            v4[1] = nullptr;
            qfree(v5);
          }
          qfree(v4);
        }
      }
      else
      {
        v19 = (void **)v3[1];
        if ( v19 )
        {
          v20 = *v19;
          if ( *v19 )
          {
            v21 = v19[1];
            if ( v21 )
            {
              for ( i = nullptr; i != v21; i = (char *)i + 1 )
              {
                v23 = (__int64)v20 + 40 * (_QWORD)i;
                v24 = *(void **)(v23 + 16);
                if ( v24 )
                {
                  *(_QWORD *)(v23 + 24) = 0;
                  qfree(v24);
                }
                sub_7F1A70(v23);
                v20 = *v19;
              }
            }
            v19[1] = nullptr;
            qfree(v20);
          }
          qfree(v19);
        }
      }
      operator delete(v3, 0x10u);
    }
    v6 = (void *)a1[7];
    if ( v6 )
    {
      a1[8] = 0;
      qfree(v6);
      a1[7] = 0;
      a1[9] = 0;
    }
    ptr = (char **)a1[6];
    if ( ptr )
    {
      v7 = *ptr;
      if ( *ptr )
      {
        v26 = ptr[1];
        if ( v26 )
        {
          v8 = 0;
          for ( j = nullptr; j != v26; ++j )
          {
            v10 = &v7[v8];
            v11 = *(void **)&v7[v8 + 72];
            if ( v11 )
            {
              *((_QWORD *)v10 + 10) = 0;
              qfree(v11);
            }
            v12 = *((void **)v10 + 4);
            if ( v12 )
            {
              *((_QWORD *)v10 + 5) = 0;
              qfree(v12);
            }
            v13 = *((char **)v10 + 1);
            if ( v13 )
            {
              v14 = *((_QWORD *)v10 + 2);
              if ( v14 )
              {
                for ( k = 0; k != v14; ++k )
                {
                  v16 = &v13[32 * k];
                  v17 = *(void **)v16;
                  if ( *(_QWORD *)v16 )
                  {
                    *((_QWORD *)v16 + 1) = 0;
                    qfree(v17);
                    v13 = *((char **)v10 + 1);
                  }
                }
              }
              *((_QWORD *)v10 + 2) = 0;
              qfree(v13);
            }
            v8 += 104;
            v7 = *ptr;
          }
        }
        ptr[1] = nullptr;
        qfree(v7);
      }
      qfree(ptr);
      v18 = (void *)a1[7];
      if ( v18 )
      {
        a1[8] = 0;
        qfree(v18);
      }
    }
    operator delete(a1, 0x60u);
  }
}

