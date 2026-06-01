void __fastcall sub_223C180(__int64 a1)
{
  _QWORD *v1; // r14
  char *v2; // rdi
  char *v3; // rdi
  int v4; // eax
  __int64 v5; // r15
  char *v6; // rdi
  int v7; // eax
  __int64 v8; // r14
  _QWORD *v9; // rbx
  void **v10; // r12
  void **v11; // rbp
  void *v12; // r13
  void **v13; // rdi
  __int64 *v14; // rbp
  __int64 v15; // r13
  char *v16; // r15
  char *v17; // r12
  char *v18; // r15
  char *v19; // rdi
  char *v20; // rcx
  __int64 v21; // r12
  void *v22; // rdi
  void *v23; // rbx
  void **v24; // r12
  void **v25; // rbp
  void *v26; // r13
  void **v27; // rdi
  __int64 *v28; // rbp
  __int64 v29; // r13
  char *v30; // r15
  char *v31; // r12
  char *v32; // rdi
  char *v33; // rdx
  __int64 v34; // rax
  void *v35; // rdi
  __int64 v36; // [rsp+0h] [rbp-98h]
  __int64 *v37; // [rsp+0h] [rbp-98h]
  _QWORD *v38; // [rsp+8h] [rbp-90h]
  __int64 v39; // [rsp+8h] [rbp-90h]
  __int64 v40; // [rsp+10h] [rbp-88h]
  char *v41; // [rsp+10h] [rbp-88h]
  char *v42; // [rsp+18h] [rbp-80h]
  _QWORD *v43; // [rsp+20h] [rbp-78h]
  __int64 v44; // [rsp+28h] [rbp-70h]
  __int64 v45; // [rsp+30h] [rbp-68h]
  __int64 *v46; // [rsp+38h] [rbp-60h]
  __int64 v47; // [rsp+40h] [rbp-58h]
  __int64 v48; // [rsp+48h] [rbp-50h]
  char *v49; // [rsp+50h] [rbp-48h]

  v1 = *(_QWORD **)a1;
  v43 = *(_QWORD **)(a1 + 8);
  if ( v43 != *(_QWORD **)a1 )
  {
    do
    {
      v2 = (char *)v1[4];
      if ( v2 != (char *)(v1 + 6) )
        operator delete(v2);
      v3 = (char *)v1[1];
      if ( *((_DWORD *)v1 + 5) )
      {
        v4 = *((_DWORD *)v1 + 4);
        if ( v4 )
        {
          v36 = 0;
          v38 = v1;
          v47 = 8LL * (unsigned int)(v4 - 1) + 8;
          do
          {
            v5 = *(_QWORD *)&v3[v36];
            if ( v5 != -8 && v5 )
            {
              v6 = *(char **)(v5 + 8);
              v44 = *(_QWORD *)v5 + 33LL;
              if ( *(_DWORD *)(v5 + 20) )
              {
                v7 = *(_DWORD *)(v5 + 16);
                if ( v7 )
                {
                  v40 = v5;
                  v8 = 0;
                  v48 = 8LL * (unsigned int)(v7 - 1) + 8;
                  do
                  {
                    v9 = *(_QWORD **)&v6[v8];
                    if ( v9 && v9 != (_QWORD *)-8LL )
                    {
                      v10 = (void **)v9[5];
                      v11 = (void **)v9[4];
                      v45 = *v9 + 57LL;
                      if ( v10 != v11 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v12 = *v11;
                            if ( !*v11 )
                              break;
                            v13 = (void **)*v11;
                            v11 += 2;
                            sub_22339F0(v13);
                            operator delete(v12, 0x10u);
                            if ( v10 == v11 )
                              goto LABEL_17;
                          }
                          v11 += 2;
                        }
                        while ( v10 != v11 );
LABEL_17:
                        v11 = (void **)v9[4];
                      }
                      if ( v11 )
                        operator delete(v11);
                      v14 = (__int64 *)v9[1];
                      v46 = (__int64 *)v9[2];
                      if ( v46 != v14 )
                      {
                        do
                        {
                          v15 = *v14;
                          if ( *v14 )
                          {
                            v16 = *(char **)(v15 + 56);
                            v17 = &v16[40 * *(unsigned int *)(v15 + 64)];
                            if ( v16 != v17 )
                            {
                              v42 = *(char **)(v15 + 56);
                              v18 = &v16[40 * *(unsigned int *)(v15 + 64)];
                              do
                              {
                                while ( 1 )
                                {
                                  v18 -= 40;
                                  v19 = *((char **)v18 + 2);
                                  if ( v19 != v18 + 40 )
                                    free(v19);
                                  v20 = *(char **)v18;
                                  v21 = *(_QWORD *)v18 + 80LL * *((unsigned int *)v18 + 2);
                                  if ( *(_QWORD *)v18 != v21 )
                                  {
                                    do
                                    {
                                      while ( 1 )
                                      {
                                        v21 -= 80;
                                        v22 = *(void **)(v21 + 8);
                                        if ( v22 == (void *)(v21 + 24) )
                                          break;
                                        v49 = v20;
                                        free(v22);
                                        v20 = v49;
                                        if ( v49 == (char *)v21 )
                                          goto LABEL_29;
                                      }
                                    }
                                    while ( v20 != (char *)v21 );
LABEL_29:
                                    v20 = *(char **)v18;
                                  }
                                  if ( v20 == v18 + 16 )
                                    break;
                                  free(v20);
                                  if ( v42 == v18 )
                                    goto LABEL_32;
                                }
                              }
                              while ( v42 != v18 );
LABEL_32:
                              v17 = *(char **)(v15 + 56);
                            }
                            if ( v17 != (char *)(v15 + 72) )
                              free(v17);
                            if ( *(_QWORD *)v15 != v15 + 16 )
                              operator delete(*(void **)v15);
                            operator delete((void *)v15, 0x70u);
                          }
                          ++v14;
                        }
                        while ( v46 != v14 );
                        v14 = (__int64 *)v9[1];
                      }
                      if ( v14 )
                        operator delete(v14);
                      operator delete(v9, v45, 8);
                      v6 = *(char **)(v40 + 8);
                    }
                    v8 += 8;
                  }
                  while ( v48 != v8 );
                  v5 = v40;
                }
              }
              free(v6);
              operator delete(v5, v44, 8);
              v3 = (char *)v38[1];
            }
            v36 += 8;
          }
          while ( v47 != v36 );
          v1 = v38;
        }
      }
      free(v3);
      v23 = (void *)*v1;
      if ( *v1 )
      {
        v24 = *((void ***)v23 + 4);
        v25 = *((void ***)v23 + 3);
        if ( v24 != v25 )
        {
          do
          {
            while ( 1 )
            {
              v26 = *v25;
              if ( !*v25 )
                break;
              v27 = (void **)*v25;
              v25 += 2;
              sub_22339F0(v27);
              operator delete(v26, 0x10u);
              if ( v25 == v24 )
                goto LABEL_52;
            }
            v25 += 2;
          }
          while ( v24 != v25 );
LABEL_52:
          v25 = *((void ***)v23 + 3);
        }
        if ( v25 )
          operator delete(v25);
        v28 = *(__int64 **)v23;
        v37 = *((__int64 **)v23 + 1);
        if ( v37 != *(__int64 **)v23 )
        {
          do
          {
            v29 = *v28;
            if ( *v28 )
            {
              v30 = *(char **)(v29 + 56);
              v31 = &v30[40 * *(unsigned int *)(v29 + 64)];
              if ( v30 != v31 )
              {
                do
                {
                  while ( 1 )
                  {
                    v31 -= 40;
                    v32 = *((char **)v31 + 2);
                    if ( v32 != v31 + 40 )
                      free(v32);
                    v33 = *(char **)v31;
                    v34 = *(_QWORD *)v31 + 80LL * *((unsigned int *)v31 + 2);
                    if ( *(_QWORD *)v31 != v34 )
                    {
                      do
                      {
                        while ( 1 )
                        {
                          v34 -= 80;
                          v35 = *(void **)(v34 + 8);
                          if ( v35 == (void *)(v34 + 24) )
                            break;
                          v41 = v33;
                          v39 = v34;
                          free(v35);
                          v34 = v39;
                          v33 = v41;
                          if ( v41 == (char *)v39 )
                            goto LABEL_63;
                        }
                      }
                      while ( v33 != (char *)v34 );
LABEL_63:
                      v33 = *(char **)v31;
                    }
                    if ( v33 == v31 + 16 )
                      break;
                    free(v33);
                    if ( v30 == v31 )
                      goto LABEL_66;
                  }
                }
                while ( v30 != v31 );
LABEL_66:
                v31 = *(char **)(v29 + 56);
              }
              if ( v31 != (char *)(v29 + 72) )
                free(v31);
              if ( *(_QWORD *)v29 != v29 + 16 )
                operator delete(*(void **)v29);
              operator delete((void *)v29, 0x70u);
            }
            ++v28;
          }
          while ( v37 != v28 );
          v28 = *(__int64 **)v23;
        }
        if ( v28 )
          operator delete(v28);
        operator delete(v23, 0x30u);
      }
      v1 += 9;
    }
    while ( v43 != v1 );
    v1 = *(_QWORD **)a1;
  }
  if ( v1 )
    operator delete(v1);
}
