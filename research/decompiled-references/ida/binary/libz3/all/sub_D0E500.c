void __fastcall sub_D0E500(_QWORD *a1)
{
  _QWORD *v1; // r15
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  _QWORD *v4; // r12
  _QWORD *v5; // r13
  _QWORD *v6; // r14
  _QWORD *v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi
  _QWORD *v10; // r14
  _QWORD *v11; // rdi
  _QWORD *v12; // rbp
  _QWORD *v13; // rdi
  _QWORD *v14; // r12
  _QWORD *v15; // rdi
  _QWORD *v16; // rbx
  _QWORD *v17; // rdi
  _QWORD *v18; // r14
  _QWORD *v19; // rdi
  _QWORD *v20; // rbx
  _QWORD *v21; // rdi
  _QWORD *v22; // rbx
  _QWORD *v23; // rdi
  _QWORD *v24; // rbx
  _QWORD *v25; // [rsp+0h] [rbp-58h]
  _QWORD *v26; // [rsp+8h] [rbp-50h]
  _QWORD *v27; // [rsp+10h] [rbp-48h]
  _QWORD *v28; // [rsp+18h] [rbp-40h]

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
              v1 = (_QWORD *)v27[3];
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
                                    sub_D0E500(v6[3]);
                                    v7 = v6;
                                    v6 = (_QWORD *)v6[2];
                                    v8 = (_QWORD *)v7[4];
                                    if ( v8 != v7 + 6 )
                                    {
                                      v25 = v7;
                                      operator delete(v8, v7[6] + 1LL);
                                      v7 = v25;
                                    }
                                    operator delete(v7, 0x48u);
                                  }
                                  v9 = (_QWORD *)v5[4];
                                  v10 = (_QWORD *)v5[2];
                                  if ( v9 != v5 + 6 )
                                    operator delete(v9, v5[6] + 1LL);
                                  operator delete(v5, 0x48u);
                                  if ( !v10 )
                                    break;
                                  v5 = v10;
                                }
                              }
                              v17 = (_QWORD *)v4[4];
                              v18 = (_QWORD *)v4[2];
                              if ( v17 != v4 + 6 )
                                operator delete(v17, v4[6] + 1LL);
                              operator delete(v4, 0x48u);
                              if ( !v18 )
                                break;
                              v4 = v18;
                            }
                          }
                          v13 = (_QWORD *)v3[4];
                          v14 = (_QWORD *)v3[2];
                          if ( v13 != v3 + 6 )
                            operator delete(v13, v3[6] + 1LL);
                          operator delete(v3, 0x48u);
                          if ( !v14 )
                            break;
                          v3 = v14;
                        }
                      }
                      v11 = (_QWORD *)v2[4];
                      v12 = (_QWORD *)v2[2];
                      if ( v11 != v2 + 6 )
                        operator delete(v11, v2[6] + 1LL);
                      operator delete(v2, 0x48u);
                      if ( !v12 )
                        break;
                      v2 = v12;
                    }
                  }
                  v15 = (_QWORD *)v1[4];
                  v16 = (_QWORD *)v1[2];
                  if ( v15 != v1 + 6 )
                    operator delete(v15, v1[6] + 1LL);
                  operator delete(v1, 0x48u);
                  if ( !v16 )
                    break;
                  v1 = v16;
                }
              }
              v19 = (_QWORD *)v27[4];
              v20 = (_QWORD *)v27[2];
              if ( v19 != v27 + 6 )
                operator delete(v19, v27[6] + 1LL);
              operator delete(v27, 0x48u);
              if ( !v20 )
                break;
              v27 = v20;
            }
          }
          v21 = (_QWORD *)v26[4];
          v22 = (_QWORD *)v26[2];
          if ( v21 != v26 + 6 )
            operator delete(v21, v26[6] + 1LL);
          operator delete(v26, 0x48u);
          if ( !v22 )
            break;
          v26 = v22;
        }
      }
      v23 = (_QWORD *)v28[4];
      v24 = (_QWORD *)v28[2];
      if ( v23 != v28 + 6 )
        operator delete(v23, v28[6] + 1LL);
      operator delete(v28, 0x48u);
      if ( !v24 )
        break;
      v28 = v24;
    }
  }
}

