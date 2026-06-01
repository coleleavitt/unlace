void __fastcall sub_115B160(__int64 *a1)
{
  void (__fastcall *v2)(__int64 *, __int64 *, __int64); // rax
  void (__fastcall *v3)(__int64 *, __int64 *, __int64); // rax
  __int64 v4; // r13
  __int64 v5; // rbx
  char *v6; // r15
  char *v7; // rbp
  __int64 v8; // r13
  __int64 v9; // rbx
  void **v10; // rdi
  void **v11; // r14
  void **v12; // rbp
  __int64 v13; // r13
  __int64 v14; // rbx
  void *v15; // rdi
  void *v16; // rdi
  void **v17; // r14
  void **v18; // rbp
  void *v19; // rdi
  void *v20; // rdi
  void **v21; // rax
  void **v22; // r14
  void **v23; // [rsp+8h] [rbp-40h]

  v2 = (void (__fastcall *)(__int64 *, __int64 *, __int64))a1[40];
  if ( v2 )
    v2(a1 + 38, a1 + 38, 3);
  v3 = (void (__fastcall *)(__int64 *, __int64 *, __int64))a1[36];
  if ( v3 )
    v3(a1 + 34, a1 + 34, 3);
  v4 = a1[12];
  v5 = v4 + 160LL * *((unsigned int *)a1 + 26);
  if ( v4 != v5 )
  {
    while ( 1 )
    {
      v5 -= 160;
      v6 = *(char **)(v5 + 32);
      v7 = &v6[96 * *(unsigned int *)(v5 + 40)];
      if ( v6 != v7 )
        break;
LABEL_11:
      if ( v6 != (char *)(v5 + 48) )
        free(v6);
      if ( *(_QWORD *)v5 == v5 + 16 )
      {
        if ( v4 == v5 )
        {
LABEL_15:
          v5 = a1[12];
          goto LABEL_16;
        }
      }
      else
      {
        operator delete(*(void **)v5);
        if ( v4 == v5 )
          goto LABEL_15;
      }
    }
    while ( 1 )
    {
      v7 -= 96;
      if ( v7[80] )
        goto LABEL_63;
      while ( *(char **)v7 == v7 + 16 )
      {
        if ( v6 == v7 )
        {
LABEL_10:
          v6 = *(char **)(v5 + 32);
          goto LABEL_11;
        }
        v7 -= 96;
        if ( v7[80] )
        {
LABEL_63:
          v21 = *((void ***)v7 + 4);
          v22 = &v21[4 * *((unsigned int *)v7 + 10)];
          if ( v21 != v22 )
          {
            do
            {
              while ( 1 )
              {
                v22 -= 4;
                if ( *v22 == v22 + 2 )
                  break;
                v23 = v21;
                operator delete(*v22);
                v21 = v23;
                if ( v23 == v22 )
                  goto LABEL_66;
              }
            }
            while ( v21 != v22 );
LABEL_66:
            v21 = *((void ***)v7 + 4);
          }
          if ( v21 != (void **)(v7 + 48) )
            free(v21);
        }
      }
      operator delete(*(void **)v7);
      if ( v6 == v7 )
        goto LABEL_10;
    }
  }
LABEL_16:
  if ( (__int64 *)v5 != a1 + 14 )
    free((void *)v5);
  v8 = a1[3];
  v9 = v8 + 56LL * *((unsigned int *)a1 + 8);
  if ( v8 != v9 )
  {
    do
    {
      while ( 1 )
      {
        v9 -= 56;
        v10 = *(void ***)(v9 + 32);
        v11 = *(void ***)(v9 + 40);
        v12 = v10;
        if ( v11 != v10 )
        {
          do
          {
            while ( *v12 != v12 + 2 )
            {
              operator delete(*v12);
              v12 += 4;
              if ( v11 == v12 )
                goto LABEL_22;
            }
            v12 += 4;
          }
          while ( v11 != v12 );
LABEL_22:
          v10 = *(void ***)(v9 + 32);
        }
        if ( v10 )
          operator delete(v10);
        if ( *(_QWORD *)v9 == v9 + 16 )
          break;
        operator delete(*(void **)v9);
        if ( v8 == v9 )
          goto LABEL_27;
      }
    }
    while ( v8 != v9 );
LABEL_27:
    v9 = a1[3];
  }
  if ( (__int64 *)v9 != a1 + 5 )
    free((void *)v9);
  v13 = a1[1];
  v14 = *a1;
  if ( v13 != *a1 )
  {
    do
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v14 + 184) )
        {
          v15 = *(void **)(v14 + 152);
          if ( v15 != (void *)(v14 + 168) )
            operator delete(v15);
        }
        v16 = *(void **)(v14 + 120);
        if ( v16 != (void *)(v14 + 136) )
          operator delete(v16);
        v17 = *(void ***)(v14 + 104);
        v18 = *(void ***)(v14 + 96);
        if ( v17 != v18 )
        {
          do
          {
            while ( *v18 != v18 + 2 )
            {
              operator delete(*v18);
              v18 += 4;
              if ( v18 == v17 )
                goto LABEL_39;
            }
            v18 += 4;
          }
          while ( v17 != v18 );
LABEL_39:
          v18 = *(void ***)(v14 + 96);
        }
        if ( v18 )
          operator delete(v18);
        v19 = *(void **)(v14 + 64);
        if ( v19 != (void *)(v14 + 80) )
          operator delete(v19);
        v20 = *(void **)(v14 + 32);
        if ( v20 != (void *)(v14 + 48) )
          operator delete(v20);
        if ( *(_QWORD *)v14 == v14 + 16 )
          break;
        operator delete(*(void **)v14);
        v14 += 192;
        if ( v13 == v14 )
          goto LABEL_48;
      }
      v14 += 192;
    }
    while ( v13 != v14 );
LABEL_48:
    v14 = *a1;
  }
  if ( v14 )
    operator delete((void *)v14);
}

