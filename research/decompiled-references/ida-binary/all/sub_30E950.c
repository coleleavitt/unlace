void __fastcall sub_30E950(void *a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 i; // r13
  void **v8; // r8
  __int64 v9; // rax
  volatile signed __int32 *v10; // rcx
  volatile signed __int32 *v11; // rdx
  __int64 v12; // r13
  volatile signed __int32 *v13; // rax
  __int64 v14; // rbp
  volatile signed __int32 *v15; // rax
  __int64 v16; // r12
  volatile signed __int32 *v17; // rax
  __int64 v18; // rbx
  volatile signed __int32 *v19; // rax
  __int64 v20; // r13
  volatile signed __int32 *v21; // rax
  __int64 v22; // rbx
  volatile signed __int32 *v23; // rax
  void *v24; // rbx
  volatile signed __int32 *v25; // rax
  void *v26; // rbx
  void *v27; // [rsp+0h] [rbp-58h]
  void *v28; // [rsp+8h] [rbp-50h]
  __int64 v29; // [rsp+10h] [rbp-48h]
  void **v30; // [rsp+10h] [rbp-48h]
  __int64 v31; // [rsp+10h] [rbp-48h]
  __int64 v32; // [rsp+10h] [rbp-48h]
  __int64 v33; // [rsp+18h] [rbp-40h]

  v28 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v27 = *((void **)v28 + 3);
      if ( v27 )
      {
        while ( 1 )
        {
          v1 = *((_QWORD *)v27 + 3);
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
                      v4 = *(_QWORD *)(v3 + 24);
                      if ( v4 )
                      {
                        while ( 1 )
                        {
                          v5 = *(_QWORD *)(v4 + 24);
                          if ( v5 )
                          {
                            while ( 1 )
                            {
                              v6 = *(_QWORD *)(v5 + 24);
                              if ( v6 )
                              {
                                while ( 1 )
                                {
                                  for ( i = *(_QWORD *)(v6 + 24); i; v6 = v31 )
                                  {
                                    v29 = v6;
                                    sub_30E950(*(_QWORD *)(i + 24));
                                    v8 = (void **)i;
                                    v9 = v29;
                                    i = *(_QWORD *)(i + 16);
                                    v10 = (volatile signed __int32 *)v8[4];
                                    if ( v10 && !_InterlockedSub(v10, 1u) )
                                    {
                                      v33 = v29;
                                      v30 = v8;
                                      free(v8[4]);
                                      v9 = v33;
                                      v8 = v30;
                                    }
                                    v31 = v9;
                                    operator delete(v8, 0x40u);
                                  }
                                  v11 = *(volatile signed __int32 **)(v6 + 32);
                                  v12 = *(_QWORD *)(v6 + 16);
                                  if ( v11 && !_InterlockedSub(v11, 1u) )
                                  {
                                    v32 = v6;
                                    free(*(void **)(v6 + 32));
                                    v6 = v32;
                                  }
                                  operator delete((void *)v6, 0x40u);
                                  if ( !v12 )
                                    break;
                                  v6 = v12;
                                }
                              }
                              v19 = *(volatile signed __int32 **)(v5 + 32);
                              v20 = *(_QWORD *)(v5 + 16);
                              if ( v19 && !_InterlockedSub(v19, 1u) )
                                free(*(void **)(v5 + 32));
                              operator delete((void *)v5, 0x40u);
                              if ( !v20 )
                                break;
                              v5 = v20;
                            }
                          }
                          v15 = *(volatile signed __int32 **)(v4 + 32);
                          v16 = *(_QWORD *)(v4 + 16);
                          if ( v15 && !_InterlockedSub(v15, 1u) )
                            free(*(void **)(v4 + 32));
                          operator delete((void *)v4, 0x40u);
                          if ( !v16 )
                            break;
                          v4 = v16;
                        }
                      }
                      v13 = *(volatile signed __int32 **)(v3 + 32);
                      v14 = *(_QWORD *)(v3 + 16);
                      if ( v13 && !_InterlockedSub(v13, 1u) )
                        free(*(void **)(v3 + 32));
                      operator delete((void *)v3, 0x40u);
                      if ( !v14 )
                        break;
                      v3 = v14;
                    }
                  }
                  v17 = *(volatile signed __int32 **)(v2 + 32);
                  v18 = *(_QWORD *)(v2 + 16);
                  if ( v17 && !_InterlockedSub(v17, 1u) )
                    free(*(void **)(v2 + 32));
                  operator delete((void *)v2, 0x40u);
                  if ( !v18 )
                    break;
                  v2 = v18;
                }
              }
              v21 = *(volatile signed __int32 **)(v1 + 32);
              v22 = *(_QWORD *)(v1 + 16);
              if ( v21 && !_InterlockedSub(v21, 1u) )
                free(*(void **)(v1 + 32));
              operator delete((void *)v1, 0x40u);
              if ( !v22 )
                break;
              v1 = v22;
            }
          }
          v23 = *((volatile signed __int32 **)v27 + 4);
          v24 = *((void **)v27 + 2);
          if ( v23 && !_InterlockedSub(v23, 1u) )
            free(*((void **)v27 + 4));
          operator delete(v27, 0x40u);
          if ( !v24 )
            break;
          v27 = v24;
        }
      }
      v25 = *((volatile signed __int32 **)v28 + 4);
      v26 = *((void **)v28 + 2);
      if ( v25 )
      {
        if ( !_InterlockedSub(v25, 1u) )
          free(*((void **)v28 + 4));
      }
      operator delete(v28, 0x40u);
      if ( !v26 )
        break;
      v28 = v26;
    }
  }
}
