void __fastcall sub_79B7C0(_QWORD *a1)
{
  _QWORD *v1; // r15
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  _QWORD *v4; // r13
  _QWORD *v5; // r14
  _QWORD *v6; // r12
  _QWORD *v7; // rax
  void *v8; // rdi
  _QWORD *v9; // r12
  void *v10; // rdi
  _QWORD *v11; // rbp
  void *v12; // rdi
  _QWORD *v13; // r12
  void *v14; // rdi
  _QWORD *v15; // rbx
  void *v16; // rdi
  _QWORD *v17; // r12
  void *v18; // rdi
  _QWORD *v19; // rbx
  void *v20; // rdi
  _QWORD *v21; // rbx
  void *v22; // rdi
  _QWORD *v23; // rbx
  void *v24; // rdi
  _QWORD *v25; // [rsp+0h] [rbp-58h]
  _QWORD *v26; // [rsp+8h] [rbp-50h]
  _QWORD *v27; // [rsp+10h] [rbp-48h]
  _QWORD *v28; // [rsp+18h] [rbp-40h]

  v27 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v25 = (_QWORD *)v27[3];
      if ( v25 )
      {
        while ( 1 )
        {
          v26 = (_QWORD *)v25[3];
          if ( v26 )
          {
            while ( 1 )
            {
              v1 = (_QWORD *)v26[3];
              if ( v1 )
              {
                while ( 1 )
                {
                  v2 = (_QWORD *)v1[3];
                  if ( v2 )
                  {
                    while ( 1 )
                    {
                      v3 = (_QWORD *)v2[3];
                      if ( v3 )
                      {
                        while ( 1 )
                        {
                          v4 = (_QWORD *)v3[3];
                          if ( v4 )
                          {
                            while ( 1 )
                            {
                              v5 = (_QWORD *)v4[3];
                              if ( v5 )
                              {
                                while ( 1 )
                                {
                                  v6 = (_QWORD *)v5[3];
                                  while ( v6 )
                                  {
                                    sub_79B7C0(v6[3]);
                                    v7 = v6;
                                    v6 = (_QWORD *)v6[2];
                                    v28 = v7;
                                    free_idcv(v7 + 7);
                                    v8 = (void *)v28[4];
                                    if ( v8 )
                                    {
                                      v28[5] = 0;
                                      qfree(v8);
                                    }
                                    operator delete(v28, 0x58u);
                                  }
                                  v9 = (_QWORD *)v5[2];
                                  free_idcv(v5 + 7);
                                  v10 = (void *)v5[4];
                                  if ( v10 )
                                  {
                                    v5[5] = 0;
                                    qfree(v10);
                                  }
                                  operator delete(v5, 0x58u);
                                  if ( !v9 )
                                    break;
                                  v5 = v9;
                                }
                              }
                              v17 = (_QWORD *)v4[2];
                              free_idcv(v4 + 7);
                              v18 = (void *)v4[4];
                              if ( v18 )
                              {
                                v4[5] = 0;
                                qfree(v18);
                              }
                              operator delete(v4, 0x58u);
                              if ( !v17 )
                                break;
                              v4 = v17;
                            }
                          }
                          v13 = (_QWORD *)v3[2];
                          free_idcv(v3 + 7);
                          v14 = (void *)v3[4];
                          if ( v14 )
                          {
                            v3[5] = 0;
                            qfree(v14);
                          }
                          operator delete(v3, 0x58u);
                          if ( !v13 )
                            break;
                          v3 = v13;
                        }
                      }
                      v11 = (_QWORD *)v2[2];
                      free_idcv(v2 + 7);
                      v12 = (void *)v2[4];
                      if ( v12 )
                      {
                        v2[5] = 0;
                        qfree(v12);
                      }
                      operator delete(v2, 0x58u);
                      if ( !v11 )
                        break;
                      v2 = v11;
                    }
                  }
                  v15 = (_QWORD *)v1[2];
                  free_idcv(v1 + 7);
                  v16 = (void *)v1[4];
                  if ( v16 )
                  {
                    v1[5] = 0;
                    qfree(v16);
                  }
                  operator delete(v1, 0x58u);
                  if ( !v15 )
                    break;
                  v1 = v15;
                }
              }
              v19 = (_QWORD *)v26[2];
              free_idcv(v26 + 7);
              v20 = (void *)v26[4];
              if ( v20 )
              {
                v26[5] = 0;
                qfree(v20);
              }
              operator delete(v26, 0x58u);
              if ( !v19 )
                break;
              v26 = v19;
            }
          }
          v21 = (_QWORD *)v25[2];
          free_idcv(v25 + 7);
          v22 = (void *)v25[4];
          if ( v22 )
          {
            v25[5] = 0;
            qfree(v22);
          }
          operator delete(v25, 0x58u);
          if ( !v21 )
            break;
          v25 = v21;
        }
      }
      v23 = (_QWORD *)v27[2];
      free_idcv(v27 + 7);
      v24 = (void *)v27[4];
      if ( v24 )
      {
        v27[5] = 0;
        qfree(v24);
      }
      operator delete(v27, 0x58u);
      if ( !v23 )
        break;
      v27 = v23;
    }
  }
}
