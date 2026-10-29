void ***__fastcall sub_223FD50(void ***a1, __int64 *a2, __int64 a3)
{
  void **v5; // rax
  void **v6; // r15
  _QWORD *v7; // r14
  char *v8; // rdi
  char *v9; // rdi
  int v10; // eax
  __int64 v11; // r15
  char *v12; // rdi
  int v13; // eax
  __int64 v14; // r14
  _QWORD *v15; // rbx
  void **v16; // r12
  void **v17; // rbp
  void *v18; // r13
  void **v19; // rdi
  __int64 *v20; // rbp
  __int64 v21; // r13
  char *v22; // r15
  char *v23; // r12
  char *v24; // r15
  char *v25; // rdi
  char *v26; // rcx
  __int64 v27; // r12
  void *v28; // rdi
  __int64 **v29; // r12
  void **v30; // r13
  void **v31; // rbx
  void *v32; // rbp
  void **v33; // rdi
  __int64 *v34; // rbp
  __int64 v35; // rbx
  char *v36; // r13
  char *v37; // r15
  char *v38; // rdi
  char *v39; // r12
  __int64 v40; // r14
  void *v41; // rdi
  _BYTE *v42; // rdi
  __int64 v44; // [rsp+8h] [rbp-F0h]
  __int64 *v45; // [rsp+8h] [rbp-F0h]
  _QWORD *v46; // [rsp+10h] [rbp-E8h]
  _QWORD *v47; // [rsp+10h] [rbp-E8h]
  __int64 v48; // [rsp+18h] [rbp-E0h]
  __int64 **v49; // [rsp+18h] [rbp-E0h]
  char *v50; // [rsp+20h] [rbp-D8h]
  void **v51; // [rsp+28h] [rbp-D0h]
  __int64 v52; // [rsp+30h] [rbp-C8h]
  __int64 v53; // [rsp+38h] [rbp-C0h]
  __int64 *v54; // [rsp+40h] [rbp-B8h]
  __int64 v55; // [rsp+48h] [rbp-B0h]
  __int64 v56; // [rsp+50h] [rbp-A8h]
  char *v57; // [rsp+58h] [rbp-A0h]
  _QWORD *v58; // [rsp+68h] [rbp-90h]
  void *v59[2]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v60[16]; // [rsp+80h] [rbp-78h] BYREF
  void **v61; // [rsp+90h] [rbp-68h] BYREF
  __int16 v62; // [rsp+B0h] [rbp-48h]

  v59[1] = nullptr;
  v59[0] = v60;
  v60[0] = 0;
  v5 = (void **)operator new(0x18u);
  *(_OWORD *)v5 = 0;
  v6 = v5;
  v5[2] = nullptr;
  v51 = v5;
  if ( !(unsigned __int8)sub_223F410((__m128i **)v5, a2, a3, v59) )
  {
    v7 = *v51;
    v58 = v51[1];
    if ( v58 != *v51 )
    {
      do
      {
        v8 = (char *)v7[4];
        if ( v8 != (char *)(v7 + 6) )
          operator delete(v8);
        v9 = (char *)v7[1];
        if ( *((_DWORD *)v7 + 5) )
        {
          v10 = *((_DWORD *)v7 + 4);
          if ( v10 )
          {
            v46 = v7;
            v44 = 0;
            v55 = 8LL * (unsigned int)(v10 - 1) + 8;
            do
            {
              v11 = *(_QWORD *)&v9[v44];
              if ( v11 != -8 && v11 )
              {
                v12 = *(char **)(v11 + 8);
                v52 = *(_QWORD *)v11 + 33LL;
                if ( *(_DWORD *)(v11 + 20) )
                {
                  v13 = *(_DWORD *)(v11 + 16);
                  if ( v13 )
                  {
                    v48 = v11;
                    v14 = 0;
                    v56 = 8LL * (unsigned int)(v13 - 1) + 8;
                    do
                    {
                      v15 = *(_QWORD **)&v12[v14];
                      if ( v15 && v15 != (_QWORD *)-8LL )
                      {
                        v16 = (void **)v15[5];
                        v17 = (void **)v15[4];
                        v53 = *v15 + 57LL;
                        if ( v16 != v17 )
                        {
                          do
                          {
                            while ( 1 )
                            {
                              v18 = *v17;
                              if ( !*v17 )
                                break;
                              v19 = (void **)*v17;
                              v17 += 2;
                              sub_22339F0(v19);
                              operator delete(v18, 0x10u);
                              if ( v16 == v17 )
                                goto LABEL_18;
                            }
                            v17 += 2;
                          }
                          while ( v16 != v17 );
LABEL_18:
                          v17 = (void **)v15[4];
                        }
                        if ( v17 )
                          operator delete(v17);
                        v20 = (__int64 *)v15[1];
                        v54 = (__int64 *)v15[2];
                        if ( v54 != v20 )
                        {
                          do
                          {
                            v21 = *v20;
                            if ( *v20 )
                            {
                              v22 = *(char **)(v21 + 56);
                              v23 = &v22[40 * *(unsigned int *)(v21 + 64)];
                              if ( v22 != v23 )
                              {
                                v50 = *(char **)(v21 + 56);
                                v24 = &v22[40 * *(unsigned int *)(v21 + 64)];
                                do
                                {
                                  while ( 1 )
                                  {
                                    v24 -= 40;
                                    v25 = *((char **)v24 + 2);
                                    if ( v25 != v24 + 40 )
                                      free(v25);
                                    v26 = *(char **)v24;
                                    v27 = *(_QWORD *)v24 + 80LL * *((unsigned int *)v24 + 2);
                                    if ( *(_QWORD *)v24 != v27 )
                                    {
                                      do
                                      {
                                        while ( 1 )
                                        {
                                          v27 -= 80;
                                          v28 = *(void **)(v27 + 8);
                                          if ( v28 == (void *)(v27 + 24) )
                                            break;
                                          v57 = v26;
                                          free(v28);
                                          v26 = v57;
                                          if ( v57 == (char *)v27 )
                                            goto LABEL_30;
                                        }
                                      }
                                      while ( v26 != (char *)v27 );
LABEL_30:
                                      v26 = *(char **)v24;
                                    }
                                    if ( v26 == v24 + 16 )
                                      break;
                                    free(v26);
                                    if ( v50 == v24 )
                                      goto LABEL_33;
                                  }
                                }
                                while ( v50 != v24 );
LABEL_33:
                                v23 = *(char **)(v21 + 56);
                              }
                              if ( v23 != (char *)(v21 + 72) )
                                free(v23);
                              if ( *(_QWORD *)v21 != v21 + 16 )
                                operator delete(*(void **)v21);
                              operator delete((void *)v21, 0x70u);
                            }
                            ++v20;
                          }
                          while ( v54 != v20 );
                          v20 = (__int64 *)v15[1];
                        }
                        if ( v20 )
                          operator delete(v20);
                        operator delete(v15, v53, 8);
                        v12 = *(char **)(v48 + 8);
                      }
                      v14 += 8;
                    }
                    while ( v56 != v14 );
                    v11 = v48;
                  }
                }
                free(v12);
                operator delete(v11, v52, 8);
                v9 = (char *)v46[1];
              }
              v44 += 8;
            }
            while ( v55 != v44 );
            v7 = v46;
          }
        }
        free(v9);
        v29 = (__int64 **)*v7;
        if ( *v7 )
        {
          v30 = (void **)v29[4];
          v31 = (void **)v29[3];
          if ( v30 != v31 )
          {
            do
            {
              while ( 1 )
              {
                v32 = *v31;
                if ( !*v31 )
                  break;
                v33 = (void **)*v31;
                v31 += 2;
                sub_22339F0(v33);
                operator delete(v32, 0x10u);
                if ( v31 == v30 )
                  goto LABEL_53;
              }
              v31 += 2;
            }
            while ( v30 != v31 );
LABEL_53:
            v31 = (void **)v29[3];
          }
          if ( v31 )
            operator delete(v31);
          v34 = *v29;
          v45 = v29[1];
          if ( v45 != *v29 )
          {
            v47 = v7;
            v49 = v29;
            do
            {
              v35 = *v34;
              if ( *v34 )
              {
                v36 = *(char **)(v35 + 56);
                v37 = &v36[40 * *(unsigned int *)(v35 + 64)];
                if ( v36 != v37 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v37 -= 40;
                      v38 = *((char **)v37 + 2);
                      if ( v38 != v37 + 40 )
                        free(v38);
                      v39 = *(char **)v37;
                      v40 = *(_QWORD *)v37 + 80LL * *((unsigned int *)v37 + 2);
                      if ( *(_QWORD *)v37 != v40 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v40 -= 80;
                            v41 = *(void **)(v40 + 8);
                            if ( v41 == (void *)(v40 + 24) )
                              break;
                            free(v41);
                            if ( v39 == (char *)v40 )
                              goto LABEL_65;
                          }
                        }
                        while ( v39 != (char *)v40 );
LABEL_65:
                        v39 = *(char **)v37;
                      }
                      if ( v39 == v37 + 16 )
                        break;
                      free(v39);
                      if ( v36 == v37 )
                        goto LABEL_68;
                    }
                  }
                  while ( v36 != v37 );
LABEL_68:
                  v37 = *(char **)(v35 + 56);
                }
                if ( v37 != (char *)(v35 + 72) )
                  free(v37);
                if ( *(_QWORD *)v35 != v35 + 16 )
                  operator delete(*(void **)v35);
                operator delete((void *)v35, 0x70u);
              }
              ++v34;
            }
            while ( v45 != v34 );
            v29 = v49;
            v7 = v47;
            v34 = *v49;
          }
          if ( v34 )
            operator delete(v34);
          operator delete(v29, 0x30u);
        }
        v7 += 9;
      }
      while ( v58 != v7 );
      v7 = *v51;
    }
    if ( v7 )
      operator delete(v7);
    operator delete(v51, 0x18u);
    v62 = 260;
    v61 = v59;
    sub_2221AD0((__int64)&v61, 1u);
  }
  v42 = v59[0];
  *a1 = v6;
  if ( v42 != v60 )
    operator delete(v42);
  return a1;
}
