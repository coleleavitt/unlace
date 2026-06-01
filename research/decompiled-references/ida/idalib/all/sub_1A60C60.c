void __fastcall sub_1A60C60(void **a1)
{
  char *v1; // rax
  int v2; // edx
  __int64 v3; // r13
  __int64 v4; // r12
  _QWORD *v5; // rbx
  unsigned __int64 *v6; // rdi
  unsigned __int64 *v7; // r14
  unsigned __int64 *v8; // rbp
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  void *v14; // rdi
  void **v15; // rax
  void **v16; // rcx
  _QWORD *v17; // rdi
  __int64 v18; // rcx
  _QWORD *v19; // [rsp+0h] [rbp-68h]
  _QWORD *v20; // [rsp+8h] [rbp-60h]
  void **v21; // [rsp+8h] [rbp-60h]
  _QWORD *v22; // [rsp+10h] [rbp-58h]
  void **v23; // [rsp+10h] [rbp-58h]
  __int64 v24; // [rsp+18h] [rbp-50h]
  __int64 v25; // [rsp+20h] [rbp-48h]

  v1 = (char *)*a1;
  if ( *((_DWORD *)a1 + 3) && (v2 = *((_DWORD *)a1 + 2)) != 0 )
  {
    v3 = 0;
    v24 = 8LL * (unsigned int)(v2 - 1) + 8;
    do
    {
      v4 = *(_QWORD *)&v1[v3];
      if ( v4 != -8 && v4 )
      {
        v19 = *(_QWORD **)(v4 + 8);
        v25 = *(_QWORD *)v4 + 113LL;
        v5 = &v19[11 * *(unsigned int *)(v4 + 16)];
        if ( v19 != v5 )
        {
          do
          {
            while ( 1 )
            {
              v5 -= 11;
              v6 = (unsigned __int64 *)v5[8];
              v7 = (unsigned __int64 *)v5[9];
              v8 = v6;
              if ( v7 != v6 )
              {
                do
                {
                  v9 = *v8;
                  if ( *v8 )
                  {
                    v10 = v8[1];
                    if ( v10 )
                    {
                      if ( v9 < v10 || v9 > v10 + 14848 )
                      {
                        v11 = *(_QWORD **)(v9 + 528);
                        v12 = &v11[8 * (unsigned __int64)*(unsigned int *)(v9 + 536)];
                        if ( v11 != v12 )
                        {
                          do
                          {
                            while ( 1 )
                            {
                              v12 -= 8;
                              v13 = (_QWORD *)v12[3];
                              if ( v13 == v12 + 5 )
                                break;
                              v22 = v12;
                              v20 = v11;
                              operator delete(v13);
                              v11 = v20;
                              v12 = v22;
                              if ( v20 == v22 )
                                goto LABEL_15;
                            }
                          }
                          while ( v11 != v12 );
LABEL_15:
                          v12 = *(_QWORD **)(v9 + 528);
                        }
                        if ( v12 != (_QWORD *)(v9 + 544) )
                          free(v12);
                        v14 = *(void **)(v9 + 416);
                        if ( v14 != (void *)(v9 + 432) )
                          free(v14);
                        v15 = (void **)(v9 + 384);
                        v16 = (void **)(v9 + 64);
                        do
                        {
                          while ( *v15 != v15 + 2 )
                          {
                            v23 = v16;
                            v21 = v15;
                            operator delete(*v15);
                            v16 = v23;
                            v15 = v21 - 4;
                            if ( v21 - 4 == v23 )
                              goto LABEL_23;
                          }
                          v15 -= 4;
                        }
                        while ( v16 != v15 );
LABEL_23:
                        operator delete((void *)v9, 0x3A0u);
                      }
                      else
                      {
                        v18 = *(unsigned int *)(v10 + 14976);
                        *(_DWORD *)(v10 + 14976) = v18 + 1;
                        *(_QWORD *)(v10 + 8 * v18 + 14848) = v9;
                      }
                    }
                  }
                  v8 += 3;
                }
                while ( v7 != v8 );
                v6 = (unsigned __int64 *)v5[8];
              }
              if ( v6 )
                operator delete(v6);
              v17 = (_QWORD *)v5[2];
              if ( v17 == v5 + 4 )
                break;
              free(v17);
              if ( v19 == v5 )
                goto LABEL_30;
            }
          }
          while ( v19 != v5 );
LABEL_30:
          v5 = *(_QWORD **)(v4 + 8);
        }
        if ( v5 != (_QWORD *)(v4 + 24) )
          free(v5);
        operator delete(v4, v25, 8);
        v1 = (char *)*a1;
      }
      v3 += 8;
    }
    while ( v24 != v3 );
    free(v1);
  }
  else
  {
    free(*a1);
  }
}
