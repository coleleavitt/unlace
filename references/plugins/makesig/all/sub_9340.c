void __fastcall sub_9340(void *a1)
{
  __int64 v1; // r15
  __int64 v2; // rbx
  __int64 v3; // r12
  void *v4; // rbp
  __int64 v5; // r13
  __int64 v6; // r14
  void **v7; // r8
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rbp
  __int64 v11; // rbx
  void *v12; // rbx
  void *v13; // rbx
  void *v14; // rbx
  void *v15; // [rsp+0h] [rbp-58h]
  void *v16; // [rsp+8h] [rbp-50h]
  void *v17; // [rsp+10h] [rbp-48h]
  void **v18; // [rsp+18h] [rbp-40h]
  void *v19; // [rsp+18h] [rbp-40h]

  v17 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v15 = *((void **)v17 + 3);
      if ( v15 )
      {
        while ( 1 )
        {
          v16 = *((void **)v15 + 3);
          if ( v16 )
          {
            while ( 1 )
            {
              v1 = *((_QWORD *)v16 + 3);
              if ( v1 )
              {
                while ( 1 )
                {
                  v2 = *(_QWORD *)(v1 + 24);
                  if ( v2 )
                  {
                    while ( 1 )
                    {
                      v3 = *(_QWORD *)(v2 + 24);
                      if ( v3 )
                      {
                        while ( 1 )
                        {
                          v4 = *(void **)(v3 + 24);
                          if ( v4 )
                          {
                            while ( 1 )
                            {
                              v5 = *((_QWORD *)v4 + 3);
                              if ( v5 )
                              {
                                while ( 1 )
                                {
                                  v6 = *(_QWORD *)(v5 + 24);
                                  while ( v6 )
                                  {
                                    sub_9340(*(_QWORD *)(v6 + 24));
                                    v7 = (void **)v6;
                                    v6 = *(_QWORD *)(v6 + 16);
                                    v18 = v7;
                                    sub_8120(v7[7]);
                                    operator delete(v18, 0x58u);
                                  }
                                  v8 = *(_QWORD *)(v5 + 16);
                                  sub_8120(*(void **)(v5 + 56));
                                  operator delete((void *)v5, 0x58u);
                                  if ( !v8 )
                                    break;
                                  v5 = v8;
                                }
                              }
                              v19 = *((void **)v4 + 2);
                              sub_8120(*((void **)v4 + 7));
                              operator delete(v4, 0x58u);
                              if ( !v19 )
                                break;
                              v4 = v19;
                            }
                          }
                          v10 = *(_QWORD *)(v3 + 16);
                          sub_8120(*(void **)(v3 + 56));
                          operator delete((void *)v3, 0x58u);
                          if ( !v10 )
                            break;
                          v3 = v10;
                        }
                      }
                      v9 = *(_QWORD *)(v2 + 16);
                      sub_8120(*(void **)(v2 + 56));
                      operator delete((void *)v2, 0x58u);
                      if ( !v9 )
                        break;
                      v2 = v9;
                    }
                  }
                  v11 = *(_QWORD *)(v1 + 16);
                  sub_8120(*(void **)(v1 + 56));
                  operator delete((void *)v1, 0x58u);
                  if ( !v11 )
                    break;
                  v1 = v11;
                }
              }
              v12 = *((void **)v16 + 2);
              sub_8120(*((void **)v16 + 7));
              operator delete(v16, 0x58u);
              if ( !v12 )
                break;
              v16 = v12;
            }
          }
          v13 = *((void **)v15 + 2);
          sub_8120(*((void **)v15 + 7));
          operator delete(v15, 0x58u);
          if ( !v13 )
            break;
          v15 = v13;
        }
      }
      v14 = *((void **)v17 + 2);
      sub_8120(*((void **)v17 + 7));
      operator delete(v17, 0x58u);
      if ( !v14 )
        break;
      v17 = v14;
    }
  }
}
