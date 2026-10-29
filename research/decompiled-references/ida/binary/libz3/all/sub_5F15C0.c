void __fastcall sub_5F15C0(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 *v8; // rbp
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  void *v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 *v22; // rbp
  __int64 *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  char *v26; // r13
  __int64 v27; // rax
  __int64 v28; // rbp
  char *v29; // r12
  __int64 v30; // rdi
  void *v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  void *v34; // rdi
  __int64 v35; // rdi

  v2 = *(void **)(a1 + 360);
  if ( v2 && v2 != (void *)(a1 + 376) )
    sub_186B220(v2);
  v3 = *(_QWORD *)(a1 + 352);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *(_QWORD *)(a1 + 344);
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = *(_QWORD *)(a1 + 336);
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = *(_QWORD *)(a1 + 328);
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = *(_QWORD *)(a1 + 320);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = *(__int64 **)(a1 + 312);
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = *(_QWORD *)(a1 + 304);
          v12 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_21;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_21:
    v8 = *(__int64 **)(a1 + 312);
    if ( v8 )
LABEL_22:
      sub_186B220(v8 - 1);
  }
  v13 = *(_QWORD *)(a1 + 288);
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = *(_QWORD *)(a1 + 280);
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = *(_QWORD *)(a1 + 272);
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = *(_QWORD *)(a1 + 248);
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = *(_QWORD *)(a1 + 240);
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = *(void **)(a1 + 216);
  if ( v18 )
    sub_186B220(v18);
  v19 = *(_QWORD *)(a1 + 176);
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  v20 = *(_QWORD *)(a1 + 168);
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  v21 = *(_QWORD *)(a1 + 160);
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = *(__int64 **)(a1 + 152);
  if ( v22 )
  {
    v23 = &v22[*((unsigned int *)v22 - 1)];
    if ( v22 >= v23 )
      goto LABEL_49;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = *(_QWORD *)(a1 + 144);
          v12 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v22 >= v23 )
          goto LABEL_48;
      }
      sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( v22 < v23 );
LABEL_48:
    v22 = *(__int64 **)(a1 + 152);
    if ( v22 )
LABEL_49:
      sub_186B220(v22 - 1);
  }
  v26 = *(char **)(a1 + 120);
  if ( v26 )
  {
    v27 = *(unsigned int *)(a1 + 128);
    if ( (_DWORD)v27 )
    {
      v28 = *(_QWORD *)(a1 + 120);
      v29 = &v26[24 * v27];
      do
      {
        while ( 1 )
        {
          v30 = *(_QWORD *)(v28 + 8);
          if ( !v30 )
            break;
          v28 += 24;
          sub_186B220((void *)(v30 - 8));
          if ( v29 == (char *)v28 )
            goto LABEL_55;
        }
        v28 += 24;
      }
      while ( (char *)v28 != v29 );
    }
LABEL_55:
    sub_186B220(v26);
  }
  v31 = *(void **)(a1 + 72);
  if ( v31 )
    sub_186B220(v31);
  v32 = *(_QWORD *)(a1 + 64);
  if ( v32 )
    sub_186B220((void *)(v32 - 8));
  v33 = *(_QWORD *)(a1 + 56);
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  v34 = *(void **)(a1 + 32);
  if ( v34 )
    sub_186B220(v34);
  v35 = *(_QWORD *)(a1 + 24);
  if ( v35 )
    sub_186B220((void *)(v35 - 8));
}

