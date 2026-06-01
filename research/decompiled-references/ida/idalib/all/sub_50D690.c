void __fastcall sub_50D690(_QWORD *a1)
{
  _QWORD *v1; // r15
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  _QWORD *v4; // r13
  _QWORD *v5; // r14
  _QWORD *v6; // r12
  _QWORD *v7; // rdx
  void *v8; // rdi
  void *v9; // rdi
  _QWORD *v10; // r12
  void *v11; // rdi
  _QWORD *v12; // rbp
  void *v13; // rdi
  _QWORD *v14; // r12
  void *v15; // rdi
  _QWORD *v16; // rbx
  void *v17; // rdi
  _QWORD *v18; // r12
  void *v19; // rdi
  _QWORD *v20; // rbx
  void *v21; // rdi
  _QWORD *v22; // rbx
  void *v23; // rdi
  _QWORD *v24; // rbx
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
                                    sub_50D690(v6[3]);
                                    v7 = v6;
                                    v6 = (_QWORD *)v6[2];
                                    v8 = (void *)v7[4];
                                    if ( v8 )
                                    {
                                      v7[5] = 0;
                                      v28 = v7;
                                      qfree(v8);
                                      v7 = v28;
                                    }
                                    operator delete(v7, 0x40u);
                                  }
                                  v9 = (void *)v5[4];
                                  v10 = (_QWORD *)v5[2];
                                  if ( v9 )
                                  {
                                    v5[5] = 0;
                                    qfree(v9);
                                  }
                                  operator delete(v5, 0x40u);
                                  if ( !v10 )
                                    break;
                                  v5 = v10;
                                }
                              }
                              v17 = (void *)v4[4];
                              v18 = (_QWORD *)v4[2];
                              if ( v17 )
                              {
                                v4[5] = 0;
                                qfree(v17);
                              }
                              operator delete(v4, 0x40u);
                              if ( !v18 )
                                break;
                              v4 = v18;
                            }
                          }
                          v13 = (void *)v3[4];
                          v14 = (_QWORD *)v3[2];
                          if ( v13 )
                          {
                            v3[5] = 0;
                            qfree(v13);
                          }
                          operator delete(v3, 0x40u);
                          if ( !v14 )
                            break;
                          v3 = v14;
                        }
                      }
                      v11 = (void *)v2[4];
                      v12 = (_QWORD *)v2[2];
                      if ( v11 )
                      {
                        v2[5] = 0;
                        qfree(v11);
                      }
                      operator delete(v2, 0x40u);
                      if ( !v12 )
                        break;
                      v2 = v12;
                    }
                  }
                  v15 = (void *)v1[4];
                  v16 = (_QWORD *)v1[2];
                  if ( v15 )
                  {
                    v1[5] = 0;
                    qfree(v15);
                  }
                  operator delete(v1, 0x40u);
                  if ( !v16 )
                    break;
                  v1 = v16;
                }
              }
              v19 = (void *)v26[4];
              v20 = (_QWORD *)v26[2];
              if ( v19 )
              {
                v26[5] = 0;
                qfree(v19);
              }
              operator delete(v26, 0x40u);
              if ( !v20 )
                break;
              v26 = v20;
            }
          }
          v21 = (void *)v25[4];
          v22 = (_QWORD *)v25[2];
          if ( v21 )
          {
            v25[5] = 0;
            qfree(v21);
          }
          operator delete(v25, 0x40u);
          if ( !v22 )
            break;
          v25 = v22;
        }
      }
      v23 = (void *)v27[4];
      v24 = (_QWORD *)v27[2];
      if ( v23 )
      {
        v27[5] = 0;
        qfree(v23);
      }
      operator delete(v27, 0x40u);
      if ( !v24 )
        break;
      v27 = v24;
    }
  }
}
