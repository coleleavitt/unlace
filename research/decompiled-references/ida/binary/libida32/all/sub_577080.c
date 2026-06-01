void __fastcall sub_577080(_QWORD *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rsi
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  char *v8; // rdi
  char *v9; // r14
  _QWORD *v10; // r13
  __int64 v11; // rdx
  char *v12; // rdi
  char *v13; // rbp
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  _QWORD *v16; // rdi
  _QWORD *v17; // r12
  _QWORD *v18; // r15
  void *v19; // rdi
  _QWORD *v20; // [rsp+8h] [rbp-60h]
  _QWORD *ptr; // [rsp+10h] [rbp-58h]
  _QWORD *v22; // [rsp+18h] [rbp-50h]
  _QWORD *v23; // [rsp+20h] [rbp-48h]

  v1 = a1[531];
  v2 = (_QWORD *)a1[530];
  v23 = v2;
  if ( 8 * v1 )
  {
    do
    {
      v3 = (_QWORD *)*v23;
      v22 = (_QWORD *)*v23;
      if ( *v23 )
      {
        v4 = v3[531];
        v5 = (_QWORD *)v3[530];
        v20 = v5;
        if ( 8 * v4 )
        {
          do
          {
            v6 = (_QWORD *)*v20;
            ptr = (_QWORD *)*v20;
            if ( *v20 )
            {
              v7 = v6[531];
              v8 = (char *)v6[530];
              v9 = v8;
              if ( 8 * v7 )
              {
                do
                {
                  v10 = *(_QWORD **)v9;
                  if ( *(_QWORD *)v9 )
                  {
                    v11 = v10[531];
                    v12 = (char *)v10[530];
                    v13 = v12;
                    if ( 8 * v11 )
                    {
                      do
                      {
                        v14 = *(_QWORD **)v13;
                        if ( *(_QWORD *)v13 )
                        {
                          v15 = v14[531];
                          v16 = (_QWORD *)v14[530];
                          v17 = v16;
                          if ( 8 * v15 )
                          {
                            do
                            {
                              v18 = (_QWORD *)*v17;
                              if ( *v17 )
                              {
                                sub_577080(*v17);
                                v19 = (void *)v18[530];
                                if ( v19 )
                                {
                                  v18[531] = 0;
                                  qfree(v19);
                                }
                                qfree(v18);
                                v16 = (_QWORD *)v14[530];
                                v15 = v14[531];
                              }
                              ++v17;
                            }
                            while ( v17 != &v16[v15] );
                          }
                          if ( v16 )
                          {
                            v14[531] = 0;
                            qfree(v16);
                          }
                          qfree(v14);
                          v12 = (char *)v10[530];
                          v11 = v10[531];
                        }
                        v13 += 8;
                      }
                      while ( v13 != &v12[8 * v11] );
                    }
                    if ( v12 )
                    {
                      v10[531] = 0;
                      qfree(v12);
                    }
                    qfree(v10);
                    v8 = (char *)ptr[530];
                    v7 = ptr[531];
                  }
                  v9 += 8;
                }
                while ( v9 != &v8[8 * v7] );
              }
              if ( v8 )
              {
                ptr[531] = 0;
                qfree(v8);
              }
              qfree(ptr);
              v5 = (_QWORD *)v22[530];
              v4 = v22[531];
            }
            ++v20;
          }
          while ( v20 != &v5[v4] );
        }
        if ( v5 )
        {
          v22[531] = 0;
          qfree(v5);
        }
        qfree(v22);
        v2 = (_QWORD *)a1[530];
        v1 = a1[531];
      }
      ++v23;
    }
    while ( v23 != &v2[v1] );
  }
  if ( v2 )
  {
    a1[531] = 0;
    qfree(v2);
    a1[530] = 0;
    a1[532] = 0;
  }
}

