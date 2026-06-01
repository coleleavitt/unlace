void __fastcall sub_399100(_QWORD *a1)
{
  _QWORD *v1; // r15
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  _QWORD *v4; // r12
  __int64 v5; // r13
  __int64 v6; // r14
  _QWORD **v7; // rcx
  __int64 v8; // r14
  __int64 v9; // r12
  _QWORD *v10; // rbp
  void *v11; // rdi
  __int64 v12; // r12
  void *i; // rax
  void *v14; // rdi
  __int64 v15; // rbx
  _QWORD *v16; // rbp
  void *v17; // rdi
  __int64 v18; // r13
  _QWORD *v19; // r14
  void *v20; // rdi
  __int64 v21; // rbx
  _QWORD *v22; // rbp
  void *v23; // rdi
  __int64 v24; // rbx
  _QWORD *v25; // rbp
  void *v26; // rdi
  __int64 v27; // rbx
  _QWORD *v28; // rbp
  void *v29; // rdi
  _QWORD *v30; // [rsp+0h] [rbp-58h]
  _QWORD *v31; // [rsp+8h] [rbp-50h]
  _QWORD *v32; // [rsp+10h] [rbp-48h]
  void *v33; // [rsp+18h] [rbp-40h]
  void *v34; // [rsp+18h] [rbp-40h]
  _QWORD *v35; // [rsp+18h] [rbp-40h]

  v32 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v30 = (_QWORD *)v32[3];
      if ( v30 )
      {
        while ( 1 )
        {
          v31 = (_QWORD *)v30[3];
          if ( v31 )
          {
            while ( 1 )
            {
              v1 = (_QWORD *)v31[3];
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
                              v5 = v4[3];
                              if ( v5 )
                              {
                                while ( 1 )
                                {
                                  v6 = *(_QWORD *)(v5 + 24);
                                  while ( v6 )
                                  {
                                    sub_399100(*(_QWORD *)(v6 + 24));
                                    v7 = (_QWORD **)v6;
                                    v6 = *(_QWORD *)(v6 + 16);
                                    v33 = v7;
                                    sub_398830(v7[7]);
                                    operator delete(v33, 0x70u);
                                  }
                                  v8 = *(_QWORD *)(v5 + 16);
                                  sub_398830(*(_QWORD **)(v5 + 56));
                                  operator delete((void *)v5, 0x70u);
                                  if ( !v8 )
                                    break;
                                  v5 = v8;
                                }
                              }
                              v18 = v4[7];
                              v19 = (_QWORD *)v4[2];
                              while ( v18 )
                              {
                                sub_398830(*(_QWORD **)(v18 + 24));
                                v20 = (void *)v18;
                                v18 = *(_QWORD *)(v18 + 16);
                                operator delete(v20, 0x30u);
                              }
                              operator delete(v4, 0x70u);
                              if ( !v19 )
                                break;
                              v4 = v19;
                            }
                          }
                          v12 = v3[7];
                          for ( i = (void *)v3[2]; v12; i = v34 )
                          {
                            v34 = i;
                            sub_398830(*(_QWORD **)(v12 + 24));
                            v14 = (void *)v12;
                            v12 = *(_QWORD *)(v12 + 16);
                            operator delete(v14, 0x30u);
                          }
                          v35 = i;
                          operator delete(v3, 0x70u);
                          if ( !v35 )
                            break;
                          v3 = v35;
                        }
                      }
                      v9 = v2[7];
                      v10 = (_QWORD *)v2[2];
                      while ( v9 )
                      {
                        sub_398830(*(_QWORD **)(v9 + 24));
                        v11 = (void *)v9;
                        v9 = *(_QWORD *)(v9 + 16);
                        operator delete(v11, 0x30u);
                      }
                      operator delete(v2, 0x70u);
                      if ( !v10 )
                        break;
                      v2 = v10;
                    }
                  }
                  v15 = v1[7];
                  v16 = (_QWORD *)v1[2];
                  while ( v15 )
                  {
                    sub_398830(*(_QWORD **)(v15 + 24));
                    v17 = (void *)v15;
                    v15 = *(_QWORD *)(v15 + 16);
                    operator delete(v17, 0x30u);
                  }
                  operator delete(v1, 0x70u);
                  if ( !v16 )
                    break;
                  v1 = v16;
                }
              }
              v21 = v31[7];
              v22 = (_QWORD *)v31[2];
              while ( v21 )
              {
                sub_398830(*(_QWORD **)(v21 + 24));
                v23 = (void *)v21;
                v21 = *(_QWORD *)(v21 + 16);
                operator delete(v23, 0x30u);
              }
              operator delete(v31, 0x70u);
              if ( !v22 )
                break;
              v31 = v22;
            }
          }
          v24 = v30[7];
          v25 = (_QWORD *)v30[2];
          while ( v24 )
          {
            sub_398830(*(_QWORD **)(v24 + 24));
            v26 = (void *)v24;
            v24 = *(_QWORD *)(v24 + 16);
            operator delete(v26, 0x30u);
          }
          operator delete(v30, 0x70u);
          if ( !v25 )
            break;
          v30 = v25;
        }
      }
      v27 = v32[7];
      v28 = (_QWORD *)v32[2];
      while ( v27 )
      {
        sub_398830(*(_QWORD **)(v27 + 24));
        v29 = (void *)v27;
        v27 = *(_QWORD *)(v27 + 16);
        operator delete(v29, 0x30u);
      }
      operator delete(v32, 0x70u);
      if ( !v28 )
        break;
      v32 = v28;
    }
  }
}
