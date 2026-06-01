_DWORD *__fastcall sub_20FD450(_DWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r13
  const void **v5; // r14
  const void *v6; // r12
  size_t v7; // r15
  _DWORD *result; // rax
  __int64 v9; // rbx
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r13d
  __int64 *v15; // rcx
  __int64 *v16; // rax
  char *v17; // rdi
  __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rbp
  unsigned int v21; // eax
  __int64 v22; // rax
  char **v23; // rcx
  __m128i si128; // xmm0
  char *v25; // rdi
  int v26; // eax
  __int64 v27; // r15
  _QWORD *v28; // rbx
  void **v29; // r14
  char *v30; // rdi
  int v31; // eax
  __int64 v32; // r12
  _QWORD *v33; // r14
  void **v34; // rbx
  char *v35; // rdi
  int v36; // edx
  __int64 v37; // r13
  __int64 v38; // r12
  _QWORD *v39; // r14
  _DWORD *v40; // rbx
  char *v41; // rdi
  int v42; // edx
  __int64 v43; // rbp
  __int64 v44; // r15
  _QWORD *v45; // r12
  _DWORD *v46; // rdi
  __int64 v47; // rsi
  const void **v48; // [rsp+0h] [rbp-138h]
  _DWORD *v49; // [rsp+0h] [rbp-138h]
  __int64 *v50; // [rsp+8h] [rbp-130h]
  __int64 v51; // [rsp+8h] [rbp-130h]
  char **v52; // [rsp+10h] [rbp-128h]
  __int64 v53; // [rsp+20h] [rbp-118h]
  __int64 v54; // [rsp+28h] [rbp-110h]
  __int64 v56; // [rsp+40h] [rbp-F8h]
  __int64 v57; // [rsp+48h] [rbp-F0h]
  void **v58; // [rsp+50h] [rbp-E8h]
  void **v59; // [rsp+58h] [rbp-E0h]
  const void *v60; // [rsp+60h] [rbp-D8h]
  size_t v61; // [rsp+68h] [rbp-D0h]
  const void **v62; // [rsp+70h] [rbp-C8h]
  __int64 v63; // [rsp+78h] [rbp-C0h]
  __int64 v64; // [rsp+80h] [rbp-B8h]
  _QWORD *v65; // [rsp+88h] [rbp-B0h]
  __int64 v66; // [rsp+90h] [rbp-A8h]
  _QWORD *v67; // [rsp+98h] [rbp-A0h]
  __int64 v68; // [rsp+A0h] [rbp-98h]
  __int64 v69; // [rsp+A8h] [rbp-90h]
  __int64 *v70; // [rsp+B8h] [rbp-80h] BYREF
  void *ptr; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v72; // [rsp+C8h] [rbp-70h]
  _BYTE v73[104]; // [rsp+D0h] [rbp-68h] BYREF

  ptr = v73;
  v72 = 0x300000000LL;
  sub_2244850(a2, a3, &ptr, asc_22E1692, 6);
  v48 = (const void **)((char *)ptr + 16 * (unsigned int)v72);
  if ( ptr != v48 )
  {
    v4 = (__int64)a1;
    v5 = (const void **)ptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *v5;
        v7 = (size_t)v5[1];
        if ( !*(_QWORD *)(v4 + 8) )
        {
          v22 = operator new(0x18u);
          v23 = *(char ***)(v4 + 8);
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A9810);
          *(_QWORD *)v22 = 0;
          *(__m128i *)(v22 + 8) = si128;
          v52 = v23;
          *(_QWORD *)(v4 + 8) = v22;
          if ( v23 )
          {
            v25 = *v23;
            if ( *((_DWORD *)v23 + 3) )
            {
              v26 = *((_DWORD *)v23 + 2);
              if ( v26 )
              {
                v60 = v6;
                v62 = v5;
                v51 = 8LL * (unsigned int)(v26 - 1) + 8;
                v63 = v4;
                v61 = v7;
                v27 = 0;
                do
                {
                  v28 = *(_QWORD **)&v25[v27];
                  if ( v28 != (_QWORD *)-8LL && v28 )
                  {
                    v29 = (void **)v28[2];
                    v54 = *v28 + 25LL;
                    if ( v29 )
                    {
                      v30 = (char *)*v29;
                      if ( *((_DWORD *)v29 + 3) )
                      {
                        v31 = *((_DWORD *)v29 + 2);
                        if ( v31 )
                        {
                          v58 = (void **)v28[2];
                          v32 = 0;
                          v65 = v28;
                          v53 = 8LL * (unsigned int)(v31 - 1) + 8;
                          v66 = v27;
                          do
                          {
                            v33 = *(_QWORD **)&v30[v32];
                            if ( v33 != (_QWORD *)-8LL && v33 )
                            {
                              v34 = (void **)v33[2];
                              v56 = *v33 + 25LL;
                              if ( v34 )
                              {
                                v35 = (char *)*v34;
                                if ( *((_DWORD *)v34 + 3) )
                                {
                                  v36 = *((_DWORD *)v34 + 2);
                                  if ( v36 )
                                  {
                                    v67 = v33;
                                    v59 = (void **)v33[2];
                                    v37 = 8LL * (unsigned int)(v36 - 1) + 8;
                                    v68 = v32;
                                    v38 = 0;
                                    do
                                    {
                                      v39 = *(_QWORD **)&v35[v38];
                                      if ( v39 != (_QWORD *)-8LL && v39 )
                                      {
                                        v40 = (_DWORD *)v39[2];
                                        v57 = *v39 + 25LL;
                                        if ( v40 )
                                        {
                                          v41 = *(char **)v40;
                                          if ( v40[3] )
                                          {
                                            v42 = v40[2];
                                            if ( v42 )
                                            {
                                              v69 = v38;
                                              v43 = 0;
                                              v44 = 8LL * (unsigned int)(v42 - 1) + 8;
                                              do
                                              {
                                                v45 = *(_QWORD **)&v41[v43];
                                                if ( v45 && v45 != (_QWORD *)-8LL )
                                                {
                                                  v46 = (_DWORD *)v45[2];
                                                  v47 = *v45 + 25LL;
                                                  if ( v46 )
                                                  {
                                                    v64 = *v45 + 25LL;
                                                    sub_20FD2C0(v46);
                                                    v47 = v64;
                                                  }
                                                  operator delete(v45, v47, 8);
                                                  v41 = *(char **)v40;
                                                }
                                                v43 += 8;
                                              }
                                              while ( v43 != v44 );
                                              v38 = v69;
                                            }
                                          }
                                          free(v41);
                                          operator delete(v40, 0x18u);
                                        }
                                        operator delete(v39, v57, 8);
                                        v35 = (char *)*v59;
                                      }
                                      v38 += 8;
                                    }
                                    while ( v37 != v38 );
                                    v33 = v67;
                                    v34 = v59;
                                    v32 = v68;
                                  }
                                }
                                free(v35);
                                operator delete(v34, 0x18u);
                              }
                              operator delete(v33, v56, 8);
                              v30 = (char *)*v58;
                            }
                            v32 += 8;
                          }
                          while ( v53 != v32 );
                          v28 = v65;
                          v29 = v58;
                          v27 = v66;
                        }
                      }
                      free(v30);
                      operator delete(v29, 0x18u);
                    }
                    operator delete(v28, v54, 8);
                    v25 = *v52;
                  }
                  v27 += 8;
                }
                while ( v51 != v27 );
                v6 = v60;
                v7 = v61;
                v5 = v62;
                v4 = v63;
              }
            }
            free(v25);
            operator delete(v52, 0x18u);
          }
        }
        result = (_DWORD *)sub_20FD390(v4, (__int64)v6, v7);
        if ( !result )
          break;
        v5 += 2;
        v4 = (__int64)result;
        if ( v48 == v5 )
          goto LABEL_10;
      }
      v9 = *(_QWORD *)(v4 + 8);
      v10 = sub_2244B30(v6, v7);
      v11 = sub_2244CB0(v9, v6, v7, v10);
      v14 = v11;
      v15 = (__int64 *)(*(_QWORD *)v9 + 8LL * v11);
      if ( !*v15 )
        goto LABEL_15;
      if ( *v15 == -8 )
        break;
      sub_20FD350(&v70, v15, 0);
      v16 = v70;
LABEL_9:
      v5 += 2;
      result = (_DWORD *)(*v16 + 8);
      v4 = (__int64)result;
      if ( v48 == v5 )
      {
LABEL_10:
        v17 = (char *)ptr;
        goto LABEL_11;
      }
    }
    --*(_DWORD *)(v9 + 16);
LABEL_15:
    v50 = v15;
    v18 = sub_22300B0(v7 + 25, 8, v11, v15, v12, v13);
    v19 = v50;
    v20 = v18;
    if ( v7 )
    {
      memcpy((void *)(v18 + 24), v6, v7);
      v19 = v50;
    }
    *(_BYTE *)(v20 + v7 + 24) = 0;
    *(_QWORD *)v20 = v7;
    *(_DWORD *)(v20 + 8) = 103;
    *(_QWORD *)(v20 + 16) = 0;
    *v19 = v20;
    ++*(_DWORD *)(v9 + 12);
    v21 = sub_22450D0(v9, v14);
    sub_20FD350(&v70, (__int64 *)(*(_QWORD *)v9 + 8LL * v21), 0);
    v16 = v70;
    goto LABEL_9;
  }
  result = a1;
  v17 = (char *)ptr + 16 * (unsigned int)v72;
LABEL_11:
  if ( v17 != v73 )
  {
    v49 = result;
    free(v17);
    result = v49;
  }
  *result = a4;
  return result;
}
