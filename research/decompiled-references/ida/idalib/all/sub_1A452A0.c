void __fastcall sub_1A452A0(__int64 a1)
{
  _QWORD *v2; // r14
  _QWORD *v3; // r12
  unsigned __int64 *v4; // rdi
  unsigned __int64 *v5; // r13
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rdx
  _QWORD *v9; // rbp
  _QWORD *v10; // rdi
  void *v11; // rdi
  void **v12; // rbp
  void **v13; // rdx
  void *v14; // rdi
  _QWORD *v15; // rdi
  __int64 v16; // rbp
  void *v17; // rdi
  __int64 v18; // r12
  __int64 v19; // rcx
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rbp
  _QWORD *v26; // r14
  _QWORD *v27; // r12
  unsigned __int64 *v28; // rdi
  unsigned __int64 *v29; // r13
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // rdx
  _QWORD *v32; // rdx
  _QWORD *v33; // rbp
  _QWORD *v34; // rdi
  void *v35; // rdi
  void **v36; // rbp
  void **v37; // rdx
  void *v38; // rdi
  _QWORD *v39; // rdi
  __int64 v40; // rcx
  unsigned __int64 *v41; // [rsp+0h] [rbp-48h]
  unsigned __int64 *v42; // [rsp+0h] [rbp-48h]
  _QWORD *v43; // [rsp+8h] [rbp-40h]
  void **v44; // [rsp+8h] [rbp-40h]
  _QWORD *v45; // [rsp+8h] [rbp-40h]
  void **v46; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD **)(a1 + 888);
  *(_QWORD *)a1 = &off_2BC7248;
  v3 = &v2[11 * *(unsigned int *)(a1 + 896)];
  if ( v2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v3 -= 11;
        v4 = (unsigned __int64 *)v3[8];
        v41 = (unsigned __int64 *)v3[9];
        v5 = v4;
        if ( v41 != v4 )
        {
          do
          {
            v6 = *v5;
            if ( *v5 )
            {
              v7 = v5[1];
              if ( v7 )
              {
                if ( v6 < v7 || v6 > v7 + 14848 )
                {
                  v8 = *(_QWORD **)(v6 + 528);
                  v9 = &v8[8 * (unsigned __int64)*(unsigned int *)(v6 + 536)];
                  if ( v8 != v9 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v9 -= 8;
                        v10 = (_QWORD *)v9[3];
                        if ( v10 == v9 + 5 )
                          break;
                        v43 = v8;
                        operator delete(v10);
                        v8 = v43;
                        if ( v43 == v9 )
                          goto LABEL_9;
                      }
                    }
                    while ( v8 != v9 );
LABEL_9:
                    v9 = *(_QWORD **)(v6 + 528);
                  }
                  if ( v9 != (_QWORD *)(v6 + 544) )
                    free(v9);
                  v11 = *(void **)(v6 + 416);
                  if ( v11 != (void *)(v6 + 432) )
                    free(v11);
                  v12 = (void **)(v6 + 384);
                  v13 = (void **)(v6 + 64);
                  do
                  {
                    while ( 1 )
                    {
                      v14 = *v12;
                      if ( *v12 == v12 + 2 )
                        break;
                      v44 = v13;
                      v12 -= 4;
                      operator delete(v14);
                      v13 = v44;
                      if ( v12 == v44 )
                        goto LABEL_17;
                    }
                    v12 -= 4;
                  }
                  while ( v13 != v12 );
LABEL_17:
                  operator delete((void *)v6, 0x3A0u);
                }
                else
                {
                  v19 = *(unsigned int *)(v7 + 14976);
                  *(_DWORD *)(v7 + 14976) = v19 + 1;
                  *(_QWORD *)(v7 + 8 * v19 + 14848) = v6;
                }
              }
            }
            v5 += 3;
          }
          while ( v41 != v5 );
          v4 = (unsigned __int64 *)v3[8];
        }
        if ( v4 )
          operator delete(v4);
        v15 = (_QWORD *)v3[2];
        if ( v15 == v3 + 4 )
          break;
        free(v15);
        if ( v2 == v3 )
          goto LABEL_24;
      }
    }
    while ( v2 != v3 );
LABEL_24:
    v3 = *(_QWORD **)(a1 + 888);
  }
  if ( v3 != (_QWORD *)(a1 + 904) )
    free(v3);
  v16 = *(_QWORD *)(a1 + 856);
  if ( v16 )
  {
    while ( 1 )
    {
      sub_1A3A740(a1 + 840, *(_QWORD **)(v16 + 24));
      v17 = *(void **)(v16 + 40);
      v18 = *(_QWORD *)(v16 + 16);
      if ( v17 == (void *)(v16 + 56) )
      {
        operator delete((void *)v16);
        if ( !v18 )
          break;
      }
      else
      {
        free(v17);
        operator delete((void *)v16);
        if ( !v18 )
          break;
      }
      v16 = v18;
    }
  }
  v20 = *(void **)(a1 + 792);
  if ( v20 != (void *)(a1 + 808) )
    free(v20);
  v21 = *(void **)(a1 + 744);
  if ( v21 != (void *)(a1 + 760) )
    free(v21);
  v22 = *(void **)(a1 + 712);
  if ( v22 != (void *)(a1 + 728) )
    operator delete(v22);
  v23 = *(void **)(a1 + 664);
  if ( v23 != (void *)(a1 + 680) )
    free(v23);
  sub_169D230(a1 + 488);
  v24 = *(_QWORD *)(a1 + 472);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
  v25 = *(_QWORD *)(a1 + 464);
  if ( v25 )
  {
    if ( *(_DWORD *)(v25 + 28) )
      free(*(void **)(v25 + 16));
    operator delete((void *)v25, 0x30u);
  }
  v26 = *(_QWORD **)(a1 + 64);
  v27 = &v26[11 * *(unsigned int *)(a1 + 72)];
  if ( v26 != v27 )
  {
    do
    {
      while ( 1 )
      {
        v27 -= 11;
        v28 = (unsigned __int64 *)v27[8];
        v42 = (unsigned __int64 *)v27[9];
        v29 = v28;
        if ( v42 != v28 )
        {
          do
          {
            v30 = *v29;
            if ( *v29 )
            {
              v31 = v29[1];
              if ( v31 )
              {
                if ( v30 < v31 || v30 > v31 + 14848 )
                {
                  v32 = *(_QWORD **)(v30 + 528);
                  v33 = &v32[8 * (unsigned __int64)*(unsigned int *)(v30 + 536)];
                  if ( v32 != v33 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v33 -= 8;
                        v34 = (_QWORD *)v33[3];
                        if ( v34 == v33 + 5 )
                          break;
                        v45 = v32;
                        operator delete(v34);
                        v32 = v45;
                        if ( v45 == v33 )
                          goto LABEL_58;
                      }
                    }
                    while ( v32 != v33 );
LABEL_58:
                    v33 = *(_QWORD **)(v30 + 528);
                  }
                  if ( v33 != (_QWORD *)(v30 + 544) )
                    free(v33);
                  v35 = *(void **)(v30 + 416);
                  if ( v35 != (void *)(v30 + 432) )
                    free(v35);
                  v36 = (void **)(v30 + 384);
                  v37 = (void **)(v30 + 64);
                  do
                  {
                    while ( 1 )
                    {
                      v38 = *v36;
                      if ( *v36 == v36 + 2 )
                        break;
                      v46 = v37;
                      v36 -= 4;
                      operator delete(v38);
                      v37 = v46;
                      if ( v36 == v46 )
                        goto LABEL_66;
                    }
                    v36 -= 4;
                  }
                  while ( v36 != v37 );
LABEL_66:
                  operator delete((void *)v30, 0x3A0u);
                }
                else
                {
                  v40 = *(unsigned int *)(v31 + 14976);
                  *(_DWORD *)(v31 + 14976) = v40 + 1;
                  *(_QWORD *)(v31 + 8 * v40 + 14848) = v30;
                }
              }
            }
            v29 += 3;
          }
          while ( v42 != v29 );
          v28 = (unsigned __int64 *)v27[8];
        }
        if ( v28 )
          operator delete(v28);
        v39 = (_QWORD *)v27[2];
        if ( v39 == v27 + 4 )
          break;
        free(v39);
        if ( v26 == v27 )
          goto LABEL_73;
      }
    }
    while ( v26 != v27 );
LABEL_73:
    v27 = *(_QWORD **)(a1 + 64);
  }
  if ( v27 != (_QWORD *)(a1 + 80) )
    free(v27);
  sub_1A3A450(a1 + 16, *(_QWORD *)(a1 + 32));
}
