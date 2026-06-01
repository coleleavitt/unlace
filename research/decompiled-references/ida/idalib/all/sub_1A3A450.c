void __fastcall sub_1A3A450(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  int v3; // eax
  char *v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rbp
  _QWORD *v7; // r13
  _QWORD *v8; // rbx
  unsigned __int64 *v9; // rdi
  unsigned __int64 *v10; // r12
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rdx
  _QWORD *v14; // r15
  _QWORD *v15; // rdi
  void *v16; // rdi
  void **v17; // r15
  void **v18; // rdx
  void *v19; // rdi
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // [rsp+0h] [rbp-78h]
  unsigned __int64 *v23; // [rsp+8h] [rbp-70h]
  _QWORD *v24; // [rsp+10h] [rbp-68h]
  _QWORD *v25; // [rsp+18h] [rbp-60h]
  void **v26; // [rsp+18h] [rbp-60h]
  __int64 v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+30h] [rbp-48h]

  if ( a2 )
  {
    v2 = a2;
    do
    {
      sub_1A3A450(a1, *(_QWORD *)(v2 + 24));
      v28 = *(_QWORD *)(v2 + 16);
      if ( *(_DWORD *)(v2 + 52) )
      {
        v3 = *(_DWORD *)(v2 + 48);
        v4 = *(char **)(v2 + 40);
        if ( v3 )
        {
          v27 = v2;
          v29 = 8LL * (unsigned int)(v3 - 1) + 8;
          v5 = 0;
          do
          {
            v6 = *(_QWORD *)&v4[v5];
            if ( v6 != -8 && v6 )
            {
              v7 = *(_QWORD **)(v6 + 8);
              v22 = *(_QWORD *)v6 + 113LL;
              v8 = &v7[11 * *(unsigned int *)(v6 + 16)];
              if ( v7 != v8 )
              {
                do
                {
                  while ( 1 )
                  {
                    v8 -= 11;
                    v9 = (unsigned __int64 *)v8[8];
                    v23 = (unsigned __int64 *)v8[9];
                    v10 = v9;
                    if ( v23 != v9 )
                    {
                      v24 = v8;
                      do
                      {
                        v11 = *v10;
                        if ( *v10 )
                        {
                          v12 = v10[1];
                          if ( v12 )
                          {
                            if ( v11 < v12 || v11 > v12 + 14848 )
                            {
                              v13 = *(_QWORD **)(v11 + 528);
                              v14 = &v13[8 * (unsigned __int64)*(unsigned int *)(v11 + 536)];
                              if ( v13 != v14 )
                              {
                                do
                                {
                                  while ( 1 )
                                  {
                                    v14 -= 8;
                                    v15 = (_QWORD *)v14[3];
                                    if ( v15 == v14 + 5 )
                                      break;
                                    v25 = v13;
                                    operator delete(v15);
                                    v13 = v25;
                                    if ( v25 == v14 )
                                      goto LABEL_17;
                                  }
                                }
                                while ( v13 != v14 );
LABEL_17:
                                v14 = *(_QWORD **)(v11 + 528);
                              }
                              if ( v14 != (_QWORD *)(v11 + 544) )
                                free(v14);
                              v16 = *(void **)(v11 + 416);
                              if ( v16 != (void *)(v11 + 432) )
                                free(v16);
                              v17 = (void **)(v11 + 384);
                              v18 = (void **)(v11 + 64);
                              do
                              {
                                while ( 1 )
                                {
                                  v19 = *v17;
                                  if ( *v17 == v17 + 2 )
                                    break;
                                  v26 = v18;
                                  v17 -= 4;
                                  operator delete(v19);
                                  v18 = v26;
                                  if ( v17 == v26 )
                                    goto LABEL_25;
                                }
                                v17 -= 4;
                              }
                              while ( v18 != v17 );
LABEL_25:
                              operator delete((void *)v11, 0x3A0u);
                            }
                            else
                            {
                              v21 = *(unsigned int *)(v12 + 14976);
                              *(_DWORD *)(v12 + 14976) = v21 + 1;
                              *(_QWORD *)(v12 + 8 * v21 + 14848) = v11;
                            }
                          }
                        }
                        v10 += 3;
                      }
                      while ( v23 != v10 );
                      v8 = v24;
                      v9 = (unsigned __int64 *)v24[8];
                    }
                    if ( v9 )
                      operator delete(v9);
                    v20 = (_QWORD *)v8[2];
                    if ( v20 == v8 + 4 )
                      break;
                    free(v20);
                    if ( v7 == v8 )
                      goto LABEL_32;
                  }
                }
                while ( v7 != v8 );
LABEL_32:
                v8 = *(_QWORD **)(v6 + 8);
              }
              if ( v8 != (_QWORD *)(v6 + 24) )
                free(v8);
              operator delete(v6, v22, 8);
              v4 = *(char **)(v27 + 40);
            }
            v5 += 8;
          }
          while ( v29 != v5 );
          v2 = v27;
        }
      }
      else
      {
        v4 = *(char **)(v2 + 40);
      }
      free(v4);
      operator delete((void *)v2);
      v2 = v28;
    }
    while ( v28 );
  }
}
