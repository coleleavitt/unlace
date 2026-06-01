__int64 __fastcall sub_C096E0(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  void *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // r12
  void *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r12
  void *v10; // rdi
  char *v11; // rdi
  __int64 result; // rax
  char *v13; // rbx
  char *v14; // r12
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi

  v2 = a1[1];
  v3 = v2 + 24LL * *((unsigned int *)a1 + 4);
  if ( v2 != v3 )
  {
    while ( *(_DWORD *)(v2 + 4) != 2 )
    {
      v2 += 24;
      if ( v3 == v2 )
        goto LABEL_11;
    }
    if ( v3 != v2 )
    {
      do
      {
        sub_182EF00(*a1, *(_QWORD *)(v2 + 16));
        v4 = *(void **)(v2 + 16);
        if ( v4 )
          sub_186B220(v4);
        do
          v2 += 24;
        while ( v3 != v2 && *(_DWORD *)(v2 + 4) != 2 );
      }
      while ( v2 != a1[1] + 24LL * *((unsigned int *)a1 + 4) );
    }
  }
LABEL_11:
  v5 = a1[4];
  v6 = v5 + 24LL * *((unsigned int *)a1 + 10);
  if ( v5 != v6 )
  {
    while ( *(_DWORD *)(v5 + 4) != 2 )
    {
      v5 += 24;
      if ( v6 == v5 )
        goto LABEL_21;
    }
    if ( v6 != v5 )
    {
      do
      {
        sub_182EF00(*a1, *(_QWORD *)(v5 + 16));
        v7 = *(void **)(v5 + 16);
        if ( v7 )
          sub_186B220(v7);
        do
          v5 += 24;
        while ( v6 != v5 && *(_DWORD *)(v5 + 4) != 2 );
      }
      while ( v5 != a1[4] + 24LL * *((unsigned int *)a1 + 10) );
    }
  }
LABEL_21:
  v8 = a1[7];
  v9 = v8 + 24LL * *((unsigned int *)a1 + 16);
  if ( v8 != v9 )
  {
    while ( *(_DWORD *)(v8 + 4) != 2 )
    {
      v8 += 24;
      if ( v9 == v8 )
        goto LABEL_31;
    }
    if ( v9 != v8 )
    {
      do
      {
        sub_182EF00(*a1, *(_QWORD *)(v8 + 16));
        v10 = *(void **)(v8 + 16);
        if ( v10 )
          sub_186B220(v10);
        do
          v8 += 24;
        while ( v9 != v8 && *(_DWORD *)(v8 + 4) != 2 );
      }
      while ( v8 != a1[7] + 24LL * *((unsigned int *)a1 + 16) );
    }
  }
LABEL_31:
  v11 = (char *)a1[10];
  result = 3LL * *((unsigned int *)a1 + 22);
  v13 = v11;
  v14 = &v11[24 * *((unsigned int *)a1 + 22)];
  if ( v11 != v14 )
  {
    while ( *((_DWORD *)v13 + 1) != 2 )
    {
      v13 += 24;
      if ( v14 == v13 )
        goto LABEL_41;
    }
    if ( v14 != v13 )
    {
      do
      {
        sub_182EF00(*a1, *((_QWORD *)v13 + 2));
        v15 = *((void **)v13 + 2);
        if ( v15 )
          sub_186B220(v15);
        do
          v13 += 24;
        while ( v14 != v13 && *((_DWORD *)v13 + 1) != 2 );
        v11 = (char *)a1[10];
        result = (__int64)&v11[24 * *((unsigned int *)a1 + 22)];
      }
      while ( v13 != (char *)result );
    }
  }
LABEL_41:
  if ( v11 )
    result = sub_186B220(v11);
  v16 = (void *)a1[7];
  if ( v16 )
    result = sub_186B220(v16);
  v17 = (void *)a1[4];
  if ( v17 )
    result = sub_186B220(v17);
  v18 = (void *)a1[1];
  if ( v18 )
    return sub_186B220(v18);
  return result;
}

