void __fastcall sub_32420(_QWORD *a1)
{
  _QWORD *v1; // r14
  _QWORD *v2; // r15
  _QWORD *v3; // rbx
  _QWORD *v4; // r12
  _QWORD *v5; // rbp
  _QWORD *v6; // rax
  _QWORD *i; // r13
  void *v8; // rdi
  _QWORD *v9; // r13
  _QWORD *v10; // rbp
  _QWORD *v11; // rbp
  _QWORD *v12; // rbx
  _QWORD *v13; // rbx
  _QWORD *v14; // rbx
  _QWORD *v15; // rbx
  _QWORD *v16; // [rsp+8h] [rbp-50h]
  _QWORD *v17; // [rsp+10h] [rbp-48h]
  _QWORD *v18; // [rsp+18h] [rbp-40h]
  _QWORD *v19; // [rsp+18h] [rbp-40h]

  v17 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v16 = (_QWORD *)v17[3];
      if ( v16 )
      {
        while ( 1 )
        {
          v1 = (_QWORD *)v16[3];
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
                              if ( v6 )
                              {
                                while ( 1 )
                                {
                                  for ( i = (_QWORD *)v6[3]; i; v6 = v18 )
                                  {
                                    v18 = v6;
                                    sub_32420(i[3]);
                                    v8 = i;
                                    i = (_QWORD *)i[2];
                                    operator delete(v8, 0x38u);
                                  }
                                  v9 = (_QWORD *)v6[2];
                                  operator delete(v6, 0x38u);
                                  if ( !v9 )
                                    break;
                                  v6 = v9;
                                }
                              }
                              v19 = (_QWORD *)v5[2];
                              operator delete(v5, 0x38u);
                              if ( !v19 )
                                break;
                              v5 = v19;
                            }
                          }
                          v11 = (_QWORD *)v4[2];
                          operator delete(v4, 0x38u);
                          if ( !v11 )
                            break;
                          v4 = v11;
                        }
                      }
                      v10 = (_QWORD *)v3[2];
                      operator delete(v3, 0x38u);
                      if ( !v10 )
                        break;
                      v3 = v10;
                    }
                  }
                  v12 = (_QWORD *)v2[2];
                  operator delete(v2, 0x38u);
                  if ( !v12 )
                    break;
                  v2 = v12;
                }
              }
              v13 = (_QWORD *)v1[2];
              operator delete(v1, 0x38u);
              if ( !v13 )
                break;
              v1 = v13;
            }
          }
          v14 = (_QWORD *)v16[2];
          operator delete(v16, 0x38u);
          if ( !v14 )
            break;
          v16 = v14;
        }
      }
      v15 = (_QWORD *)v17[2];
      operator delete(v17, 0x38u);
      if ( !v15 )
        break;
      v17 = v15;
    }
  }
}

