void ***__fastcall sub_223F7C0(void ***a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  void **v6; // rax
  void **v7; // rbx
  _QWORD *v9; // r14
  char *v10; // rdi
  char *v11; // rdi
  int v12; // eax
  __int64 v13; // r15
  char *v14; // rdi
  int v15; // eax
  __int64 v16; // r14
  _QWORD *v17; // rbx
  void **v18; // r12
  void **v19; // rbp
  void *v20; // r13
  void **v21; // rdi
  __int64 *v22; // rbp
  __int64 v23; // r13
  char *v24; // r15
  char *v25; // r12
  char *v26; // r15
  char *v27; // rdi
  char *v28; // rcx
  __int64 v29; // r12
  void *v30; // rdi
  __int64 **v31; // r12
  void **v32; // r13
  void **v33; // rbx
  void *v34; // rbp
  void **v35; // rdi
  __int64 *v36; // rbp
  __int64 v37; // rbx
  char *v38; // r13
  char *v39; // r15
  char *v40; // rdi
  char *v41; // r12
  __int64 v42; // r14
  void *v43; // rdi
  __int64 v44; // [rsp+8h] [rbp-A0h]
  __int64 *v45; // [rsp+8h] [rbp-A0h]
  _QWORD *v46; // [rsp+10h] [rbp-98h]
  _QWORD *v47; // [rsp+10h] [rbp-98h]
  __int64 v48; // [rsp+18h] [rbp-90h]
  __int64 **v49; // [rsp+18h] [rbp-90h]
  char *v50; // [rsp+20h] [rbp-88h]
  void **v52; // [rsp+30h] [rbp-78h]
  __int64 v53; // [rsp+38h] [rbp-70h]
  __int64 v54; // [rsp+40h] [rbp-68h]
  __int64 *v55; // [rsp+48h] [rbp-60h]
  __int64 v56; // [rsp+50h] [rbp-58h]
  __int64 v57; // [rsp+58h] [rbp-50h]
  char *v58; // [rsp+60h] [rbp-48h]
  _QWORD *v59; // [rsp+68h] [rbp-40h]

  v6 = (void **)operator new(0x18u);
  *(_OWORD *)v6 = 0;
  v7 = v6;
  v6[2] = nullptr;
  v52 = v6;
  if ( (unsigned __int8)sub_223F410((__m128i **)v6, a2, a3, a4) )
  {
    *a1 = v7;
  }
  else
  {
    *a1 = nullptr;
    v9 = *v52;
    v59 = v52[1];
    if ( v59 != *v52 )
    {
      do
      {
        v10 = (char *)v9[4];
        if ( v10 != (char *)(v9 + 6) )
          operator delete(v10);
        v11 = (char *)v9[1];
        if ( *((_DWORD *)v9 + 5) )
        {
          v12 = *((_DWORD *)v9 + 4);
          if ( v12 )
          {
            v46 = v9;
            v44 = 0;
            v56 = 8LL * (unsigned int)(v12 - 1) + 8;
            do
            {
              v13 = *(_QWORD *)&v11[v44];
              if ( v13 != -8 && v13 )
              {
                v14 = *(char **)(v13 + 8);
                v53 = *(_QWORD *)v13 + 33LL;
                if ( *(_DWORD *)(v13 + 20) )
                {
                  v15 = *(_DWORD *)(v13 + 16);
                  if ( v15 )
                  {
                    v48 = v13;
                    v16 = 0;
                    v57 = 8LL * (unsigned int)(v15 - 1) + 8;
                    do
                    {
                      v17 = *(_QWORD **)&v14[v16];
                      if ( v17 && v17 != (_QWORD *)-8LL )
                      {
                        v18 = (void **)v17[5];
                        v19 = (void **)v17[4];
                        v54 = *v17 + 57LL;
                        if ( v18 != v19 )
                        {
                          do
                          {
                            while ( 1 )
                            {
                              v20 = *v19;
                              if ( !*v19 )
                                break;
                              v21 = (void **)*v19;
                              v19 += 2;
                              sub_22339F0(v21);
                              operator delete(v20, 0x10u);
                              if ( v18 == v19 )
                                goto LABEL_20;
                            }
                            v19 += 2;
                          }
                          while ( v18 != v19 );
LABEL_20:
                          v19 = (void **)v17[4];
                        }
                        if ( v19 )
                          operator delete(v19);
                        v22 = (__int64 *)v17[1];
                        v55 = (__int64 *)v17[2];
                        if ( v55 != v22 )
                        {
                          do
                          {
                            v23 = *v22;
                            if ( *v22 )
                            {
                              v24 = *(char **)(v23 + 56);
                              v25 = &v24[40 * *(unsigned int *)(v23 + 64)];
                              if ( v24 != v25 )
                              {
                                v50 = *(char **)(v23 + 56);
                                v26 = &v24[40 * *(unsigned int *)(v23 + 64)];
                                do
                                {
                                  while ( 1 )
                                  {
                                    v26 -= 40;
                                    v27 = *((char **)v26 + 2);
                                    if ( v27 != v26 + 40 )
                                      free(v27);
                                    v28 = *(char **)v26;
                                    v29 = *(_QWORD *)v26 + 80LL * *((unsigned int *)v26 + 2);
                                    if ( *(_QWORD *)v26 != v29 )
                                    {
                                      do
                                      {
                                        while ( 1 )
                                        {
                                          v29 -= 80;
                                          v30 = *(void **)(v29 + 8);
                                          if ( v30 == (void *)(v29 + 24) )
                                            break;
                                          v58 = v28;
                                          free(v30);
                                          v28 = v58;
                                          if ( v58 == (char *)v29 )
                                            goto LABEL_32;
                                        }
                                      }
                                      while ( v28 != (char *)v29 );
LABEL_32:
                                      v28 = *(char **)v26;
                                    }
                                    if ( v28 == v26 + 16 )
                                      break;
                                    free(v28);
                                    if ( v50 == v26 )
                                      goto LABEL_35;
                                  }
                                }
                                while ( v50 != v26 );
LABEL_35:
                                v25 = *(char **)(v23 + 56);
                              }
                              if ( v25 != (char *)(v23 + 72) )
                                free(v25);
                              if ( *(_QWORD *)v23 != v23 + 16 )
                                operator delete(*(void **)v23);
                              operator delete((void *)v23, 0x70u);
                            }
                            ++v22;
                          }
                          while ( v55 != v22 );
                          v22 = (__int64 *)v17[1];
                        }
                        if ( v22 )
                          operator delete(v22);
                        operator delete(v17, v54, 8);
                        v14 = *(char **)(v48 + 8);
                      }
                      v16 += 8;
                    }
                    while ( v57 != v16 );
                    v13 = v48;
                  }
                }
                free(v14);
                operator delete(v13, v53, 8);
                v11 = (char *)v46[1];
              }
              v44 += 8;
            }
            while ( v56 != v44 );
            v9 = v46;
          }
        }
        free(v11);
        v31 = (__int64 **)*v9;
        if ( *v9 )
        {
          v32 = (void **)v31[4];
          v33 = (void **)v31[3];
          if ( v32 != v33 )
          {
            do
            {
              while ( 1 )
              {
                v34 = *v33;
                if ( !*v33 )
                  break;
                v35 = (void **)*v33;
                v33 += 2;
                sub_22339F0(v35);
                operator delete(v34, 0x10u);
                if ( v33 == v32 )
                  goto LABEL_55;
              }
              v33 += 2;
            }
            while ( v32 != v33 );
LABEL_55:
            v33 = (void **)v31[3];
          }
          if ( v33 )
            operator delete(v33);
          v36 = *v31;
          v45 = v31[1];
          if ( v45 != *v31 )
          {
            v47 = v9;
            v49 = v31;
            do
            {
              v37 = *v36;
              if ( *v36 )
              {
                v38 = *(char **)(v37 + 56);
                v39 = &v38[40 * *(unsigned int *)(v37 + 64)];
                if ( v38 != v39 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v39 -= 40;
                      v40 = *((char **)v39 + 2);
                      if ( v40 != v39 + 40 )
                        free(v40);
                      v41 = *(char **)v39;
                      v42 = *(_QWORD *)v39 + 80LL * *((unsigned int *)v39 + 2);
                      if ( *(_QWORD *)v39 != v42 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v42 -= 80;
                            v43 = *(void **)(v42 + 8);
                            if ( v43 == (void *)(v42 + 24) )
                              break;
                            free(v43);
                            if ( v41 == (char *)v42 )
                              goto LABEL_67;
                          }
                        }
                        while ( v41 != (char *)v42 );
LABEL_67:
                        v41 = *(char **)v39;
                      }
                      if ( v41 == v39 + 16 )
                        break;
                      free(v41);
                      if ( v38 == v39 )
                        goto LABEL_70;
                    }
                  }
                  while ( v38 != v39 );
LABEL_70:
                  v39 = *(char **)(v37 + 56);
                }
                if ( v39 != (char *)(v37 + 72) )
                  free(v39);
                if ( *(_QWORD *)v37 != v37 + 16 )
                  operator delete(*(void **)v37);
                operator delete((void *)v37, 0x70u);
              }
              ++v36;
            }
            while ( v45 != v36 );
            v31 = v49;
            v9 = v47;
            v36 = *v49;
          }
          if ( v36 )
            operator delete(v36);
          operator delete(v31, 0x30u);
        }
        v9 += 9;
      }
      while ( v59 != v9 );
      v9 = *v52;
    }
    if ( v9 )
      operator delete(v9);
    operator delete(v52, 0x18u);
  }
  return a1;
}
