__int64 __fastcall sub_B99620(_QWORD *a1)
{
  unsigned int *v1; // rax
  int v3; // ebp
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rdx
  int i; // r12d
  __int64 v13; // r12
  __int64 v14; // rbp
  __int64 v15; // rdi
  _QWORD **v16; // rbp
  _QWORD **v17; // r12
  _QWORD *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // rax

  v1 = (unsigned int *)a1[5];
  if ( !v1 )
    goto LABEL_12;
  v3 = *(v1 - 1);
  if ( !v3 )
    goto LABEL_12;
  v4 = a1[4];
  v5 = *v1;
  v6 = 8 * v5;
  v7 = v4 + 8 * v5;
  if ( v4 )
  {
    v8 = 8LL * *(unsigned int *)(v4 - 4);
    v9 = v4 + v8;
    if ( v8 != v6 )
      goto LABEL_5;
    *(_DWORD *)(v4 - 4) = v5;
  }
  else
  {
    v9 = 0;
    if ( v6 )
    {
      do
      {
LABEL_5:
        v10 = *(_QWORD *)(v9 - 8);
        v9 -= 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      while ( v7 != v9 );
      v11 = a1[4];
      v1 = (unsigned int *)a1[5];
      if ( v11 )
        *(_DWORD *)(v11 - 4) = v5;
      if ( !v1 )
        goto LABEL_10;
    }
  }
  *(v1 - 1) = 0;
LABEL_10:
  for ( i = 0; i != v3; ++i )
    sub_180C2E0(a1 + 6);
LABEL_12:
  v13 = a1[4];
  if ( v13 )
  {
    v14 = v13 + 8LL * *(unsigned int *)(v13 - 4);
    if ( v13 == v14 )
      goto LABEL_16;
    do
    {
      v15 = *(_QWORD *)(v14 - 8);
      v14 -= 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    while ( v13 != v14 );
    v14 = a1[4];
    if ( v14 )
LABEL_16:
      *(_DWORD *)(v14 - 4) = 0;
  }
  v16 = (_QWORD **)a1[61];
  if ( v16 )
  {
    v17 = &v16[*((unsigned int *)v16 - 1)];
    if ( v16 == v17 )
      goto LABEL_25;
    do
    {
      v18 = *v16;
      if ( *v16 )
      {
        v19 = v18[5];
        if ( v19 )
          sub_186B220((void *)(v19 - 8));
        sub_186B220(v18);
      }
      ++v16;
    }
    while ( v17 != v16 );
    v17 = (_QWORD **)a1[61];
    if ( v17 )
LABEL_25:
      *((_DWORD *)v17 - 1) = 0;
  }
  v20 = a1[65];
  if ( v20 )
    *(_DWORD *)(v20 - 4) = 0;
  v21 = a1[66];
  if ( v21 )
    *(_DWORD *)(v21 - 4) = 0;
  v22 = a1[67];
  if ( v22 )
    *(_DWORD *)(v22 - 4) = 0;
  v23 = a1[68];
  if ( v23 )
    *(_DWORD *)(v23 - 4) = 0;
  v24 = a1 + 204;
  do
  {
    v25 = v24 - 128;
    do
    {
      *v25 = 0;
      v25 += 4;
      *(v25 - 2) = 0;
    }
    while ( v25 != v24 );
    v24 = v25 + 128;
  }
  while ( v25 + 128 != a1 + 8396 );
  v26 = a1 + 205;
  do
  {
    v27 = v26 - 128;
    do
    {
      *v27 = 0;
      v27 += 4;
      *(v27 - 2) = 0;
    }
    while ( v26 != v27 );
    v26 += 128;
  }
  while ( a1 + 8397 != v26 );
  memset(a1 + 8268, 0, 0x8000u);
  return sub_180C1C0(a1 + 71);
}

