void __fastcall sub_BCFAE0(__int64 a1)
{
  char *v2; // r13
  __int64 v3; // rax
  __int64 v4; // rbx
  char *v5; // r12
  __int64 v6; // rdi
  char *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rbx
  char *v10; // r12
  __int64 v11; // rdi
  char *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rbx
  char *v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 *v25; // rbx
  __int64 *v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rdi
  void *v30; // rdi
  __int64 v31; // rdi

  v2 = *(char **)(a1 + 184);
  if ( v2 )
  {
    v3 = *(unsigned int *)(a1 + 192);
    if ( (_DWORD)v3 )
    {
      v4 = *(_QWORD *)(a1 + 184);
      v5 = &v2[24 * v3];
      do
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)(v4 + 16);
          if ( !v6 )
            break;
          v4 += 24;
          sub_186B220((void *)(v6 - 8));
          if ( v5 == (char *)v4 )
            goto LABEL_6;
        }
        v4 += 24;
      }
      while ( (char *)v4 != v5 );
    }
LABEL_6:
    sub_186B220(v2);
  }
  v7 = *(char **)(a1 + 160);
  if ( v7 )
  {
    v8 = *(unsigned int *)(a1 + 168);
    if ( (_DWORD)v8 )
    {
      v9 = *(_QWORD *)(a1 + 160);
      v10 = &v7[24 * v8];
      do
      {
        while ( 1 )
        {
          v11 = *(_QWORD *)(v9 + 16);
          if ( !v11 )
            break;
          v9 += 24;
          sub_186B220((void *)(v11 - 8));
          if ( v10 == (char *)v9 )
            goto LABEL_12;
        }
        v9 += 24;
      }
      while ( (char *)v9 != v10 );
    }
LABEL_12:
    sub_186B220(v7);
  }
  v12 = *(char **)(a1 + 136);
  if ( v12 )
  {
    v13 = *(unsigned int *)(a1 + 144);
    if ( (_DWORD)v13 )
    {
      v14 = *(_QWORD *)(a1 + 136);
      v15 = &v12[24 * v13];
      do
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(v14 + 16);
          if ( !v16 )
            break;
          v14 += 24;
          sub_186B220((void *)(v16 - 8));
          if ( v15 == (char *)v14 )
            goto LABEL_18;
        }
        v14 += 24;
      }
      while ( (char *)v14 != v15 );
    }
LABEL_18:
    sub_186B220(v12);
  }
  v17 = *(_QWORD *)(a1 + 128);
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = *(_QWORD *)(a1 + 120);
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v19 = *(_QWORD *)(a1 + 112);
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  v20 = *(_QWORD *)(a1 + 104);
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  v21 = *(_QWORD *)(a1 + 96);
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = *(_QWORD *)(a1 + 88);
  if ( v22 )
    sub_186B220((void *)(v22 - 8));
  v23 = *(_QWORD *)(a1 + 80);
  if ( v23 )
    sub_186B220((void *)(v23 - 8));
  v24 = *(_QWORD *)(a1 + 72);
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = *(__int64 **)(a1 + 64);
  if ( v25 )
  {
    v26 = &v25[*((unsigned int *)v25 - 1)];
    if ( v25 >= v26 )
      goto LABEL_43;
    do
    {
      while ( 1 )
      {
        v27 = *v25;
        if ( *v25 )
        {
          v28 = *(_QWORD *)(a1 + 56);
          if ( (*(_DWORD *)(v27 + 8))-- == 1 )
            break;
        }
        if ( ++v25 >= v26 )
          goto LABEL_42;
      }
      sub_15D7BC0(v28, v27);
      ++v25;
    }
    while ( v25 < v26 );
LABEL_42:
    v25 = *(__int64 **)(a1 + 64);
    if ( v25 )
LABEL_43:
      sub_186B220(v25 - 1);
  }
  v30 = *(void **)(a1 + 32);
  if ( v30 )
    sub_186B220(v30);
  v31 = *(_QWORD *)(a1 + 24);
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
}

