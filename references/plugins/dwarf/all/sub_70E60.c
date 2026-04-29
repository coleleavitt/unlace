void __fastcall sub_70E60(_QWORD *a1)
{
  _QWORD *v1; // r15
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  _QWORD *v4; // rbp
  _QWORD *v5; // r13
  char *v6; // r14
  char *v7; // r8
  _QWORD *v8; // r14
  _QWORD *v9; // rbp
  _QWORD *v10; // rbp
  _QWORD *v11; // rbx
  _QWORD *v12; // rbx
  _QWORD *v13; // rbx
  _QWORD *v14; // rbx
  _QWORD *v15; // [rsp+0h] [rbp-58h]
  _QWORD *v16; // [rsp+8h] [rbp-50h]
  _QWORD *v17; // [rsp+10h] [rbp-48h]
  void *v18; // [rsp+18h] [rbp-40h]
  _QWORD *v19; // [rsp+18h] [rbp-40h]

  v17 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v15 = (_QWORD *)v17[3];
      if ( v15 )
      {
        while ( 1 )
        {
          v16 = (_QWORD *)v15[3];
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
                                  v6 = (char *)v5[3];
                                  while ( v6 )
                                  {
                                    sub_70E60(*((_QWORD *)v6 + 3));
                                    v7 = v6;
                                    v6 = *((char **)v6 + 2);
                                    v18 = v7;
                                    clear_tinfo_t(v7 + 48);
                                    operator delete(v18, 0x38u);
                                  }
                                  v8 = (_QWORD *)v5[2];
                                  clear_tinfo_t(v5 + 6);
                                  operator delete(v5, 0x38u);
                                  if ( !v8 )
                                    break;
                                  v5 = v8;
                                }
                              }
                              v19 = (_QWORD *)v4[2];
                              clear_tinfo_t(v4 + 6);
                              operator delete(v4, 0x38u);
                              if ( !v19 )
                                break;
                              v4 = v19;
                            }
                          }
                          v10 = (_QWORD *)v3[2];
                          clear_tinfo_t(v3 + 6);
                          operator delete(v3, 0x38u);
                          if ( !v10 )
                            break;
                          v3 = v10;
                        }
                      }
                      v9 = (_QWORD *)v2[2];
                      clear_tinfo_t(v2 + 6);
                      operator delete(v2, 0x38u);
                      if ( !v9 )
                        break;
                      v2 = v9;
                    }
                  }
                  v11 = (_QWORD *)v1[2];
                  clear_tinfo_t(v1 + 6);
                  operator delete(v1, 0x38u);
                  if ( !v11 )
                    break;
                  v1 = v11;
                }
              }
              v12 = (_QWORD *)v16[2];
              clear_tinfo_t(v16 + 6);
              operator delete(v16, 0x38u);
              if ( !v12 )
                break;
              v16 = v12;
            }
          }
          v13 = (_QWORD *)v15[2];
          clear_tinfo_t(v15 + 6);
          operator delete(v15, 0x38u);
          if ( !v13 )
            break;
          v15 = v13;
        }
      }
      v14 = (_QWORD *)v17[2];
      clear_tinfo_t(v17 + 6);
      operator delete(v17, 0x38u);
      if ( !v14 )
        break;
      v17 = v14;
    }
  }
}
