void __fastcall sub_426940(_QWORD *a1, const char *a2)
{
  _QWORD *v2; // r15
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *v5; // r13
  _QWORD *v6; // r14
  _QWORD *v7; // r12
  _QWORD *v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rdi
  _QWORD *v11; // r12
  __int64 v12; // rdi
  _QWORD *v13; // rbp
  __int64 v14; // rdi
  _QWORD *v15; // r12
  __int64 v16; // rdi
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  _QWORD *v19; // r12
  __int64 v20; // rdi
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  _QWORD *v23; // rbx
  __int64 v24; // rdi
  _QWORD *v25; // rbx
  _QWORD *v26; // [rsp+0h] [rbp-58h]
  _QWORD *v27; // [rsp+8h] [rbp-50h]
  _QWORD *v28; // [rsp+10h] [rbp-48h]
  _QWORD *v29; // [rsp+18h] [rbp-40h]

  v28 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v26 = (_QWORD *)v28[3];
      if ( v26 )
      {
        while ( 1 )
        {
          v27 = (_QWORD *)v26[3];
          if ( v27 )
          {
            while ( 1 )
            {
              v2 = (_QWORD *)v27[3];
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
                              if ( v6 )
                              {
                                while ( 1 )
                                {
                                  v7 = (_QWORD *)v6[3];
                                  while ( v7 )
                                  {
                                    sub_426940(v7[3]);
                                    v8 = v7;
                                    v7 = (_QWORD *)v7[2];
                                    v9 = v8[4];
                                    if ( v9 )
                                    {
                                      v8[5] = 0;
                                      v29 = v8;
                                      qfree(v9, a2);
                                      v8 = v29;
                                    }
                                    a2 = (_BYTE *)off_50;
                                    operator delete(v8, 0x50u);
                                  }
                                  v10 = v6[4];
                                  v11 = (_QWORD *)v6[2];
                                  if ( v10 )
                                  {
                                    v6[5] = 0;
                                    qfree(v10, a2);
                                  }
                                  a2 = (_BYTE *)off_50;
                                  operator delete(v6, 0x50u);
                                  if ( !v11 )
                                    break;
                                  v6 = v11;
                                }
                              }
                              v18 = v5[4];
                              v19 = (_QWORD *)v5[2];
                              if ( v18 )
                              {
                                v5[5] = 0;
                                qfree(v18, a2);
                              }
                              a2 = (_BYTE *)off_50;
                              operator delete(v5, 0x50u);
                              if ( !v19 )
                                break;
                              v5 = v19;
                            }
                          }
                          v14 = v4[4];
                          v15 = (_QWORD *)v4[2];
                          if ( v14 )
                          {
                            v4[5] = 0;
                            qfree(v14, a2);
                          }
                          a2 = (_BYTE *)off_50;
                          operator delete(v4, 0x50u);
                          if ( !v15 )
                            break;
                          v4 = v15;
                        }
                      }
                      v12 = v3[4];
                      v13 = (_QWORD *)v3[2];
                      if ( v12 )
                      {
                        v3[5] = 0;
                        qfree(v12, a2);
                      }
                      a2 = (_BYTE *)off_50;
                      operator delete(v3, 0x50u);
                      if ( !v13 )
                        break;
                      v3 = v13;
                    }
                  }
                  v16 = v2[4];
                  v17 = (_QWORD *)v2[2];
                  if ( v16 )
                  {
                    v2[5] = 0;
                    qfree(v16, a2);
                  }
                  a2 = (_BYTE *)off_50;
                  operator delete(v2, 0x50u);
                  if ( !v17 )
                    break;
                  v2 = v17;
                }
              }
              v20 = v27[4];
              v21 = (_QWORD *)v27[2];
              if ( v20 )
              {
                v27[5] = 0;
                qfree(v20, a2);
              }
              a2 = (_BYTE *)off_50;
              operator delete(v27, 0x50u);
              if ( !v21 )
                break;
              v27 = v21;
            }
          }
          v22 = v26[4];
          v23 = (_QWORD *)v26[2];
          if ( v22 )
          {
            v26[5] = 0;
            qfree(v22, a2);
          }
          a2 = (_BYTE *)off_50;
          operator delete(v26, 0x50u);
          if ( !v23 )
            break;
          v26 = v23;
        }
      }
      v24 = v28[4];
      v25 = (_QWORD *)v28[2];
      if ( v24 )
      {
        v28[5] = 0;
        qfree(v24, a2);
      }
      a2 = (_BYTE *)off_50;
      operator delete(v28, 0x50u);
      if ( !v25 )
        break;
      v28 = v25;
    }
  }
}
