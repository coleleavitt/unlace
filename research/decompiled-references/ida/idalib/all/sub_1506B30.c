void __fastcall sub_1506B30(_QWORD *a1)
{
  void **v1; // r14
  char *v2; // rdi
  int v3; // eax
  __int64 v4; // r13
  _QWORD *v5; // r14
  void **v6; // rbp
  char *v7; // rdi
  int v8; // eax
  __int64 v9; // r13
  _QWORD *v10; // r15
  void **v11; // rbp
  char *v12; // rdi
  int v13; // eax
  __int64 v14; // r13
  _QWORD *v15; // r15
  void **v16; // rbp
  char *v17; // rdi
  int v18; // eax
  __int64 v19; // r13
  _QWORD *v20; // r15
  void **v21; // rbp
  char *v22; // rdi
  int v23; // eax
  __int64 v24; // r14
  __int64 v25; // r15
  _QWORD *v26; // rbx
  _DWORD *v27; // rbp
  char *v28; // rdi
  int v29; // edx
  __int64 v30; // r12
  __int64 v31; // r13
  _QWORD *v32; // r14
  char **v33; // r15
  __int64 v34; // rbx
  int v35; // ecx
  char *v36; // rdx
  __int64 v37; // rbp
  __int64 v38; // rbx
  _QWORD *v39; // rax
  __int64 v40; // r8
  __int64 v41; // [rsp+0h] [rbp-128h]
  __int64 v42; // [rsp+8h] [rbp-120h]
  void **v43; // [rsp+10h] [rbp-118h]
  __int64 v44; // [rsp+18h] [rbp-110h]
  __int64 v45; // [rsp+20h] [rbp-108h]
  void **v46; // [rsp+28h] [rbp-100h]
  __int64 v47; // [rsp+30h] [rbp-F8h]
  __int64 v48; // [rsp+38h] [rbp-F0h]
  void **v49; // [rsp+40h] [rbp-E8h]
  _QWORD *v50; // [rsp+48h] [rbp-E0h]
  __int64 v51; // [rsp+50h] [rbp-D8h]
  __int64 v52; // [rsp+58h] [rbp-D0h]
  __int64 v53; // [rsp+60h] [rbp-C8h]
  void **v54; // [rsp+68h] [rbp-C0h]
  _QWORD *v55; // [rsp+70h] [rbp-B8h]
  __int64 v56; // [rsp+78h] [rbp-B0h]
  __int64 v57; // [rsp+80h] [rbp-A8h]
  void **v58; // [rsp+88h] [rbp-A0h]
  _QWORD *v59; // [rsp+90h] [rbp-98h]
  __int64 v60; // [rsp+98h] [rbp-90h]
  _QWORD *v61; // [rsp+A0h] [rbp-88h]
  __int64 v62; // [rsp+A8h] [rbp-80h]
  _QWORD *v63; // [rsp+B0h] [rbp-78h]
  __int64 v64; // [rsp+B8h] [rbp-70h]
  __int64 v65; // [rsp+C0h] [rbp-68h]
  _DWORD *v66; // [rsp+C8h] [rbp-60h]
  __int64 v67; // [rsp+D0h] [rbp-58h]
  void **v68; // [rsp+D8h] [rbp-50h]
  _QWORD *v69; // [rsp+E0h] [rbp-48h]
  __int64 v70; // [rsp+E8h] [rbp-40h]

  v1 = (void **)a1[1];
  if ( v1 )
  {
    v2 = (char *)*v1;
    if ( *((_DWORD *)v1 + 3) )
    {
      v3 = *((_DWORD *)v1 + 2);
      if ( v3 )
      {
        v43 = v1;
        v4 = 0;
        v41 = 8LL * (unsigned int)(v3 - 1) + 8;
        do
        {
          v5 = *(_QWORD **)&v2[v4];
          if ( v5 && v5 != (_QWORD *)-8LL )
          {
            v6 = (void **)v5[2];
            v42 = *v5 + 25LL;
            if ( v6 )
            {
              v7 = (char *)*v6;
              if ( *((_DWORD *)v6 + 3) )
              {
                v8 = *((_DWORD *)v6 + 2);
                if ( v8 )
                {
                  v50 = v5;
                  v46 = (void **)v5[2];
                  v44 = 8LL * (unsigned int)(v8 - 1) + 8;
                  v51 = v4;
                  v9 = 0;
                  do
                  {
                    v10 = *(_QWORD **)&v7[v9];
                    if ( v10 && v10 != (_QWORD *)-8LL )
                    {
                      v11 = (void **)v10[2];
                      v45 = *v10 + 25LL;
                      if ( v11 )
                      {
                        v12 = (char *)*v11;
                        if ( *((_DWORD *)v11 + 3) )
                        {
                          v13 = *((_DWORD *)v11 + 2);
                          if ( v13 )
                          {
                            v55 = v10;
                            v49 = (void **)v10[2];
                            v47 = 8LL * (unsigned int)(v13 - 1) + 8;
                            v56 = v9;
                            v14 = 0;
                            do
                            {
                              v15 = *(_QWORD **)&v12[v14];
                              if ( v15 && v15 != (_QWORD *)-8LL )
                              {
                                v16 = (void **)v15[2];
                                v48 = *v15 + 25LL;
                                if ( v16 )
                                {
                                  v17 = (char *)*v16;
                                  if ( *((_DWORD *)v16 + 3) )
                                  {
                                    v18 = *((_DWORD *)v16 + 2);
                                    if ( v18 )
                                    {
                                      v59 = v15;
                                      v54 = (void **)v15[2];
                                      v52 = 8LL * (unsigned int)(v18 - 1) + 8;
                                      v60 = v14;
                                      v19 = 0;
                                      do
                                      {
                                        v20 = *(_QWORD **)&v17[v19];
                                        if ( v20 && v20 != (_QWORD *)-8LL )
                                        {
                                          v21 = (void **)v20[2];
                                          v53 = *v20 + 25LL;
                                          if ( v21 )
                                          {
                                            v22 = (char *)*v21;
                                            if ( *((_DWORD *)v21 + 3) )
                                            {
                                              v23 = *((_DWORD *)v21 + 2);
                                              if ( v23 )
                                              {
                                                v58 = (void **)v20[2];
                                                v24 = 0;
                                                v62 = v19;
                                                v61 = v20;
                                                v25 = 8LL * (unsigned int)(v23 - 1) + 8;
                                                do
                                                {
                                                  v26 = *(_QWORD **)&v22[v24];
                                                  if ( v26 && v26 != (_QWORD *)-8LL )
                                                  {
                                                    v27 = (_DWORD *)v26[2];
                                                    v57 = *v26 + 25LL;
                                                    if ( v27 )
                                                    {
                                                      v28 = *(char **)v27;
                                                      if ( v27[3] )
                                                      {
                                                        v29 = v27[2];
                                                        if ( v29 )
                                                        {
                                                          v63 = v26;
                                                          v30 = 0;
                                                          v64 = v25;
                                                          v31 = 8LL * (unsigned int)(v29 - 1) + 8;
                                                          v65 = v24;
                                                          do
                                                          {
                                                            v32 = *(_QWORD **)&v28[v30];
                                                            if ( v32 && v32 != (_QWORD *)-8LL )
                                                            {
                                                              v33 = (char **)v32[2];
                                                              v34 = *v32 + 25LL;
                                                              if ( v33 )
                                                              {
                                                                if ( *((_DWORD *)v33 + 3) )
                                                                {
                                                                  v35 = *((_DWORD *)v33 + 2);
                                                                  if ( v35 )
                                                                  {
                                                                    v36 = *v33;
                                                                    v66 = v27;
                                                                    v67 = *v32 + 25LL;
                                                                    v37 = 0;
                                                                    v38 = 8LL * (unsigned int)(v35 - 1) + 8;
                                                                    do
                                                                    {
                                                                      v39 = *(_QWORD **)&v36[v37];
                                                                      if ( v39 && v39 != (_QWORD *)-8LL )
                                                                      {
                                                                        v40 = *v39 + 25LL;
                                                                        if ( v39[2] )
                                                                        {
                                                                          v70 = *v39 + 25LL;
                                                                          v69 = *(_QWORD **)&v36[v37];
                                                                          v68 = (void **)v39[2];
                                                                          sub_1506A80(v68);
                                                                          operator delete(v68, 0x18u);
                                                                          v40 = v70;
                                                                          v39 = v69;
                                                                        }
                                                                        operator delete(v39, v40, 8);
                                                                        v36 = *v33;
                                                                      }
                                                                      v37 += 8;
                                                                    }
                                                                    while ( v38 != v37 );
                                                                    v27 = v66;
                                                                    v34 = v67;
                                                                  }
                                                                }
                                                                free(*v33);
                                                                operator delete(v33, 0x18u);
                                                              }
                                                              operator delete(v32, v34, 8);
                                                              v28 = *(char **)v27;
                                                            }
                                                            v30 += 8;
                                                          }
                                                          while ( v31 != v30 );
                                                          v26 = v63;
                                                          v25 = v64;
                                                          v24 = v65;
                                                        }
                                                      }
                                                      free(v28);
                                                      operator delete(v27, 0x18u);
                                                    }
                                                    operator delete(v26, v57, 8);
                                                    v22 = (char *)*v58;
                                                  }
                                                  v24 += 8;
                                                }
                                                while ( v25 != v24 );
                                                v20 = v61;
                                                v21 = v58;
                                                v19 = v62;
                                              }
                                            }
                                            free(v22);
                                            operator delete(v21, 0x18u);
                                          }
                                          operator delete(v20, v53, 8);
                                          v17 = (char *)*v54;
                                        }
                                        v19 += 8;
                                      }
                                      while ( v52 != v19 );
                                      v15 = v59;
                                      v16 = v54;
                                      v14 = v60;
                                    }
                                  }
                                  free(v17);
                                  operator delete(v16, 0x18u);
                                }
                                operator delete(v15, v48, 8);
                                v12 = (char *)*v49;
                              }
                              v14 += 8;
                            }
                            while ( v47 != v14 );
                            v10 = v55;
                            v11 = v49;
                            v9 = v56;
                          }
                        }
                        free(v12);
                        operator delete(v11, 0x18u);
                      }
                      operator delete(v10, v45, 8);
                      v7 = (char *)*v46;
                    }
                    v9 += 8;
                  }
                  while ( v44 != v9 );
                  v5 = v50;
                  v6 = v46;
                  v4 = v51;
                }
              }
              free(v7);
              operator delete(v6, 0x18u);
            }
            operator delete(v5, v42, 8);
            v2 = (char *)*v43;
          }
          v4 += 8;
        }
        while ( v41 != v4 );
        v1 = v43;
      }
    }
    free(v2);
    operator delete(v1, 0x18u);
  }
}
