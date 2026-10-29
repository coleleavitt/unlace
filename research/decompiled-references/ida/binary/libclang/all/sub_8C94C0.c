__int64 __fastcall sub_8C94C0(__int64 a1)
{
  _QWORD *v2; // r13
  _QWORD *i; // rbx
  __int64 v4; // r12
  __int64 v5; // rdx
  void (__fastcall *v6)(_QWORD, __int64); // rax
  void *v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rbx
  char *v10; // rbx
  char *v11; // r12
  void *v12; // rdi
  void *v13; // rdi
  __int64 v14; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // r12
  void *v17; // rdi
  __int64 *v18; // r13
  __int64 *v19; // r12
  __int64 v20; // r14
  void *v21; // rdi
  void *v22; // rdi
  void **v23; // r15
  void **v24; // rbx
  void *v25; // rdi
  void *v26; // rdi
  __int64 v27; // rax
  _QWORD *v28; // r12
  _QWORD *v29; // r13
  __int64 v30; // r14
  void *v31; // rdi
  void *v32; // rdi
  void **v33; // r15
  void **v34; // rbx
  void *v35; // rdi
  void *v36; // rdi
  _QWORD *v38; // rbx
  _QWORD *v39; // r12
  _QWORD *v40; // r13
  _QWORD *v41; // rdi
  _QWORD *v42; // rdi
  _QWORD *v43; // rdi
  _QWORD *v44; // rax

  v2 = *(_QWORD **)(a1 + 232);
  for ( i = *(_QWORD **)(a1 + 224); v2 != i; ++i )
  {
    v4 = *i;
    if ( *(_BYTE *)(*i + 27LL) )
    {
      v5 = *(_QWORD *)(v4 + 32);
      v6 = *(void (__fastcall **)(_QWORD, __int64))(v5 + 64);
      if ( v6 )
        v6(*i, v4 + *(unsigned int *)(v5 + 16) + 40);
      *(_BYTE *)(v4 + 27) = 0;
    }
  }
  if ( *(_DWORD *)(a1 + 280) )
  {
    v38 = *(_QWORD **)(a1 + 272);
    v39 = &v38[2 * *(unsigned int *)(a1 + 288)];
    if ( v38 != v39 )
    {
      while ( *v38 == -4096 || *v38 == -8192 )
      {
        v38 += 2;
        if ( v39 == v38 )
          goto LABEL_8;
      }
      while ( v39 != v38 )
      {
        v40 = (_QWORD *)v38[1];
        if ( v40 )
        {
          operator delete();
          operator delete();
          operator delete();
          v41 = (_QWORD *)v40[61];
          if ( v41 != v40 + 63 )
            free(v41);
          v42 = (_QWORD *)v40[35];
          if ( v42 != v40 + 37 )
            free(v42);
          v43 = (_QWORD *)v40[1];
          if ( v43 != v40 + 3 )
            free(v43);
        }
        v44 = v38 + 2;
        if ( v38 + 2 == v39 )
          break;
        while ( 1 )
        {
          v38 = v44;
          if ( *v44 != -4096 && *v44 != -8192 )
            break;
          v44 += 2;
          if ( v39 == v44 )
            goto LABEL_8;
        }
      }
    }
  }
LABEL_8:
  operator delete();
  operator delete();
  operator delete();
  v7 = *(void **)(a1 + 224);
  if ( v7 )
    operator delete(v7, *(_QWORD *)(a1 + 240) - (_QWORD)v7);
  v8 = *(_QWORD *)(a1 + 144);
  v9 = v8 + 8LL * *(unsigned int *)(a1 + 152);
  while ( v9 != v8 )
  {
    v8 += 8;
    operator delete();
  }
  v10 = *(char **)(a1 + 192);
  v11 = &v10[16 * *(unsigned int *)(a1 + 200)];
  if ( v10 != v11 )
  {
    do
    {
      v10 += 16;
      operator delete();
    }
    while ( v11 != v10 );
    v11 = *(char **)(a1 + 192);
  }
  if ( v11 != (char *)(a1 + 208) )
    free(v11);
  v12 = *(void **)(a1 + 144);
  if ( v12 != (void *)(a1 + 160) )
    free(v12);
  operator delete();
  v13 = *(void **)(a1 + 80);
  if ( v13 )
    operator delete(v13, *(_QWORD *)(a1 + 96) - (_QWORD)v13);
  v14 = *(unsigned int *)(a1 + 72);
  if ( (_DWORD)v14 )
  {
    v15 = *(_QWORD **)(a1 + 56);
    v16 = &v15[4 * v14];
    do
    {
      if ( *v15 != -4096 && *v15 != -8192 )
      {
        v17 = (void *)v15[1];
        if ( v17 )
          operator delete(v17, v15[3] - (_QWORD)v17);
      }
      v15 += 4;
    }
    while ( v16 != v15 );
  }
  operator delete();
  v18 = *(__int64 **)(a1 + 40);
  v19 = *(__int64 **)(a1 + 32);
  if ( v18 != v19 )
  {
    do
    {
      v20 = *v19;
      if ( *v19 )
      {
        v21 = *(void **)(v20 + 448);
        if ( v21 != (void *)(v20 + 464) )
          free(v21);
        operator delete();
        v22 = *(void **)(v20 + 376);
        if ( v22 != (void *)(v20 + 392) )
          free(v22);
        v23 = *(void ***)(v20 + 72);
        v24 = &v23[18 * *(unsigned int *)(v20 + 80)];
        if ( v23 != v24 )
        {
          do
          {
            v24 -= 18;
            if ( *v24 != v24 + 2 )
              free(*v24);
          }
          while ( v23 != v24 );
          v24 = *(void ***)(v20 + 72);
        }
        if ( v24 != (void **)(v20 + 88) )
          free(v24);
        v25 = *(void **)(v20 + 48);
        if ( v25 )
          operator delete(v25, *(_QWORD *)(v20 + 64) - (_QWORD)v25);
        v26 = *(void **)(v20 + 24);
        if ( v26 )
          operator delete(v26, *(_QWORD *)(v20 + 40) - (_QWORD)v26);
        operator delete((void *)v20, 0x200u);
      }
      *v19++ = 0;
    }
    while ( v18 != v19 );
    v19 = *(__int64 **)(a1 + 32);
  }
  if ( v19 )
    operator delete(v19, *(_QWORD *)(a1 + 48) - (_QWORD)v19);
  v27 = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)v27 )
  {
    v28 = *(_QWORD **)(a1 + 8);
    v29 = &v28[2 * v27];
    do
    {
      if ( *v28 != -8192 && *v28 != -4096 )
      {
        v30 = v28[1];
        if ( v30 )
        {
          v31 = *(void **)(v30 + 448);
          if ( v31 != (void *)(v30 + 464) )
            free(v31);
          operator delete();
          v32 = *(void **)(v30 + 376);
          if ( v32 != (void *)(v30 + 392) )
            free(v32);
          v33 = *(void ***)(v30 + 72);
          v34 = &v33[18 * *(unsigned int *)(v30 + 80)];
          if ( v33 != v34 )
          {
            do
            {
              v34 -= 18;
              if ( *v34 != v34 + 2 )
                free(*v34);
            }
            while ( v33 != v34 );
            v34 = *(void ***)(v30 + 72);
          }
          if ( v34 != (void **)(v30 + 88) )
            free(v34);
          v35 = *(void **)(v30 + 48);
          if ( v35 )
            operator delete(v35, *(_QWORD *)(v30 + 64) - (_QWORD)v35);
          v36 = *(void **)(v30 + 24);
          if ( v36 )
            operator delete(v36, *(_QWORD *)(v30 + 40) - (_QWORD)v36);
          operator delete((void *)v30, 0x200u);
        }
        v28[1] = 0;
      }
      v28 += 2;
    }
    while ( v29 != v28 );
  }
  return operator delete();
}

