void __fastcall sub_112BEE0(__int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  void *v4; // rdi
  void *v5; // rdi
  void **v6; // rdi
  void **v7; // r14
  void **v8; // r12
  void *v9; // rdi
  void *v10; // rdi
  void (__fastcall *v11)(__int64, __int64, __int64); // rax
  void (__fastcall *v12)(__int64, __int64, __int64); // rax
  __int64 v13; // r15
  char *v14; // r13
  char *v15; // rbp
  __int64 v16; // r13
  __int64 v17; // rbp
  void **v18; // rdi
  void **v19; // r14
  void **v20; // r12
  __int64 v21; // r13
  __int64 v22; // r12
  void *v23; // rdi
  void *v24; // rdi
  void **v25; // r14
  void **v26; // rbp
  void *v27; // rdi
  void *v28; // rdi
  void *v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdi
  void **v39; // r12
  void **v40; // rbp
  void **v41; // r12
  void **v42; // rbp
  void **v43; // r12
  void **v44; // rbp
  void *v45; // rdi
  void **v46; // r14
  void **v47; // r12
  __int64 v48; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 2176);
  *(_QWORD *)a1 = &off_2C36398;
  v3 = v2 + 192LL * *(unsigned int *)(a1 + 2184);
  if ( v2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v3 -= 192;
        if ( *(_BYTE *)(v3 + 184) )
        {
          v4 = *(void **)(v3 + 152);
          if ( v4 != (void *)(v3 + 168) )
            operator delete(v4);
        }
        v5 = *(void **)(v3 + 120);
        if ( v5 != (void *)(v3 + 136) )
          operator delete(v5);
        v6 = *(void ***)(v3 + 96);
        v7 = *(void ***)(v3 + 104);
        v8 = v6;
        if ( v7 != v6 )
        {
          do
          {
            while ( *v8 != v8 + 2 )
            {
              operator delete(*v8);
              v8 += 4;
              if ( v7 == v8 )
                goto LABEL_10;
            }
            v8 += 4;
          }
          while ( v7 != v8 );
LABEL_10:
          v6 = *(void ***)(v3 + 96);
        }
        if ( v6 )
          operator delete(v6);
        v9 = *(void **)(v3 + 64);
        if ( v9 != (void *)(v3 + 80) )
          operator delete(v9);
        v10 = *(void **)(v3 + 32);
        if ( v10 != (void *)(v3 + 48) )
          operator delete(v10);
        if ( *(_QWORD *)v3 == v3 + 16 )
          break;
        operator delete(*(void **)v3);
        if ( v2 == v3 )
          goto LABEL_19;
      }
    }
    while ( v2 != v3 );
LABEL_19:
    v3 = *(_QWORD *)(a1 + 2176);
  }
  if ( v3 != a1 + 2192 )
    free((void *)v3);
  v11 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 2160);
  if ( v11 )
    v11(a1 + 2144, a1 + 2144, 3);
  v12 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 2128);
  if ( v12 )
    v12(a1 + 2112, a1 + 2112, 3);
  v48 = *(_QWORD *)(a1 + 1936);
  v13 = v48 + 160LL * *(unsigned int *)(a1 + 1944);
  if ( v48 != v13 )
  {
    while ( 1 )
    {
      v13 -= 160;
      v14 = *(char **)(v13 + 32);
      v15 = &v14[96 * *(unsigned int *)(v13 + 40)];
      if ( v14 != v15 )
        break;
LABEL_32:
      if ( v14 != (char *)(v13 + 48) )
        free(v14);
      if ( *(_QWORD *)v13 == v13 + 16 )
      {
        if ( v48 == v13 )
        {
LABEL_36:
          v13 = *(_QWORD *)(a1 + 1936);
          goto LABEL_37;
        }
      }
      else
      {
        operator delete(*(void **)v13);
        if ( v48 == v13 )
          goto LABEL_36;
      }
    }
    while ( 1 )
    {
      v15 -= 96;
      if ( v15[80] )
        goto LABEL_130;
      while ( *(char **)v15 == v15 + 16 )
      {
        if ( v14 == v15 )
        {
LABEL_31:
          v14 = *(char **)(v13 + 32);
          goto LABEL_32;
        }
        v15 -= 96;
        if ( v15[80] )
        {
LABEL_130:
          v46 = *((void ***)v15 + 4);
          v47 = &v46[4 * *((unsigned int *)v15 + 10)];
          if ( v46 != v47 )
          {
            do
            {
              while ( 1 )
              {
                v47 -= 4;
                if ( *v47 == v47 + 2 )
                  break;
                operator delete(*v47);
                if ( v46 == v47 )
                  goto LABEL_133;
              }
            }
            while ( v46 != v47 );
LABEL_133:
            v46 = *((void ***)v15 + 4);
          }
          if ( v46 != (void **)(v15 + 48) )
            free(v46);
        }
      }
      operator delete(*(void **)v15);
      if ( v14 == v15 )
        goto LABEL_31;
    }
  }
LABEL_37:
  if ( v13 != a1 + 1952 )
    free((void *)v13);
  v16 = *(_QWORD *)(a1 + 1864);
  v17 = v16 + 56LL * *(unsigned int *)(a1 + 1872);
  if ( v16 != v17 )
  {
    do
    {
      while ( 1 )
      {
        v17 -= 56;
        v18 = *(void ***)(v17 + 32);
        v19 = *(void ***)(v17 + 40);
        v20 = v18;
        if ( v19 != v18 )
        {
          do
          {
            while ( *v20 != v20 + 2 )
            {
              operator delete(*v20);
              v20 += 4;
              if ( v19 == v20 )
                goto LABEL_43;
            }
            v20 += 4;
          }
          while ( v19 != v20 );
LABEL_43:
          v18 = *(void ***)(v17 + 32);
        }
        if ( v18 )
          operator delete(v18);
        if ( *(_QWORD *)v17 == v17 + 16 )
          break;
        operator delete(*(void **)v17);
        if ( v16 == v17 )
          goto LABEL_48;
      }
    }
    while ( v16 != v17 );
LABEL_48:
    v17 = *(_QWORD *)(a1 + 1864);
  }
  if ( v17 != a1 + 1880 )
    free((void *)v17);
  v21 = *(_QWORD *)(a1 + 1848);
  v22 = *(_QWORD *)(a1 + 1840);
  if ( v21 != v22 )
  {
    do
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v22 + 184) )
        {
          v23 = *(void **)(v22 + 152);
          if ( v23 != (void *)(v22 + 168) )
            operator delete(v23);
        }
        v24 = *(void **)(v22 + 120);
        if ( v24 != (void *)(v22 + 136) )
          operator delete(v24);
        v25 = *(void ***)(v22 + 104);
        v26 = *(void ***)(v22 + 96);
        if ( v25 != v26 )
        {
          do
          {
            while ( *v26 != v26 + 2 )
            {
              operator delete(*v26);
              v26 += 4;
              if ( v26 == v25 )
                goto LABEL_60;
            }
            v26 += 4;
          }
          while ( v25 != v26 );
LABEL_60:
          v26 = *(void ***)(v22 + 96);
        }
        if ( v26 )
          operator delete(v26);
        v27 = *(void **)(v22 + 64);
        if ( v27 != (void *)(v22 + 80) )
          operator delete(v27);
        v28 = *(void **)(v22 + 32);
        if ( v28 != (void *)(v22 + 48) )
          operator delete(v28);
        if ( *(_QWORD *)v22 == v22 + 16 )
          break;
        operator delete(*(void **)v22);
        v22 += 192;
        if ( v21 == v22 )
          goto LABEL_69;
      }
      v22 += 192;
    }
    while ( v21 != v22 );
LABEL_69:
    v22 = *(_QWORD *)(a1 + 1840);
  }
  if ( v22 )
    operator delete((void *)v22);
  v29 = *(void **)(a1 + 1760);
  if ( v29 != (void *)(a1 + 1776) )
    operator delete(v29);
  v30 = *(_QWORD *)(a1 + 1744);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
  v31 = *(_QWORD *)(a1 + 1736);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
  v32 = *(_QWORD *)(a1 + 1728);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
  v33 = *(_QWORD *)(a1 + 1720);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
  v34 = *(_QWORD *)(a1 + 1712);
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8LL))(v34);
  v35 = *(_QWORD *)(a1 + 1704);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
  v36 = *(_QWORD *)(a1 + 1696);
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
  v37 = *(_QWORD *)(a1 + 1688);
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
  v38 = *(_QWORD *)(a1 + 1680);
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 8LL))(v38);
  v39 = *(void ***)(a1 + 1152);
  v40 = &v39[4 * *(unsigned int *)(a1 + 1160)];
  if ( v39 != v40 )
  {
    do
    {
      while ( 1 )
      {
        v40 -= 4;
        if ( *v40 == v40 + 2 )
          break;
        operator delete(*v40);
        if ( v39 == v40 )
          goto LABEL_95;
      }
    }
    while ( v39 != v40 );
LABEL_95:
    v40 = *(void ***)(a1 + 1152);
  }
  if ( v40 != (void **)(a1 + 1168) )
    free(v40);
  v41 = *(void ***)(a1 + 624);
  v42 = &v41[4 * *(unsigned int *)(a1 + 632)];
  if ( v41 != v42 )
  {
    do
    {
      while ( 1 )
      {
        v42 -= 4;
        if ( *v42 == v42 + 2 )
          break;
        operator delete(*v42);
        if ( v41 == v42 )
          goto LABEL_101;
      }
    }
    while ( v41 != v42 );
LABEL_101:
    v42 = *(void ***)(a1 + 624);
  }
  if ( v42 != (void **)(a1 + 640) )
    free(v42);
  v43 = *(void ***)(a1 + 96);
  v44 = &v43[4 * *(unsigned int *)(a1 + 104)];
  if ( v43 != v44 )
  {
    do
    {
      while ( 1 )
      {
        v44 -= 4;
        if ( *v44 == v44 + 2 )
          break;
        operator delete(*v44);
        if ( v43 == v44 )
          goto LABEL_107;
      }
    }
    while ( v43 != v44 );
LABEL_107:
    v44 = *(void ***)(a1 + 96);
  }
  if ( v44 != (void **)(a1 + 112) )
    free(v44);
  v45 = *(void **)(a1 + 16);
  if ( v45 != (void *)(a1 + 32) )
    operator delete(v45);
}
