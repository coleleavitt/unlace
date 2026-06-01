void __fastcall sub_3BD080(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  void **v4; // rdi
  char *v5; // r13
  __int64 v6; // r14
  __int64 v7; // rbp
  char *v8; // r14
  __int64 v9; // rdi
  void **v10; // rdi
  _QWORD *v11; // rbp
  __int64 v12; // rax
  _QWORD *v13; // r13
  void *v14; // rdi
  _QWORD *v15; // rbp
  __int64 v16; // rax
  _QWORD *v17; // r13
  void *v18; // rdi
  __int64 v19; // rdi
  void *v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  char *v23; // r14
  __int64 v24; // r13
  __int64 v25; // rbp
  char *v26; // r13
  __int64 v27; // rdi
  _QWORD *v28; // rdi

  v2 = a1[6];
  *a1 = &off_1C4E480;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 3088);
    if ( v3 )
      sub_186B220((void *)(v3 - 8));
    v4 = *(void ***)(v2 + 3056);
    if ( v4 )
    {
      sub_3BCC50(v4);
      sub_186B220((void *)(*(_QWORD *)(v2 + 3056) - 8LL));
    }
    v5 = *(char **)(v2 + 3032);
    if ( v5 )
    {
      v6 = *(unsigned int *)(v2 + 3040);
      if ( (_DWORD)v6 )
      {
        v7 = *(_QWORD *)(v2 + 3032);
        v8 = &v5[16 * v6];
        do
        {
          while ( 1 )
          {
            v9 = *(_QWORD *)(v7 + 8);
            if ( !v9 )
              break;
            v7 += 16;
            sub_186B220((void *)(v9 - 8));
            if ( (char *)v7 == v8 )
              goto LABEL_11;
          }
          v7 += 16;
        }
        while ( (char *)v7 != v8 );
      }
LABEL_11:
      sub_186B220(v5);
    }
    v10 = *(void ***)(v2 + 3024);
    if ( v10 )
    {
      sub_3BCC50(v10);
      sub_186B220((void *)(*(_QWORD *)(v2 + 3024) - 8LL));
    }
    sub_2334C0((__int64 *)(v2 + 3008));
    sub_2334C0((__int64 *)(v2 + 2992));
    sub_2334C0((__int64 *)(v2 + 2976));
    *(_QWORD *)(v2 + 2424) = &off_1C4CA80;
    sub_267D20((_QWORD *)(v2 + 2424));
    sub_3BEED0(v2 + 2296);
    v11 = *(_QWORD **)(v2 + 2272);
    if ( v11 )
    {
      v12 = *((unsigned int *)v11 - 1);
      if ( (_DWORD)v12 )
      {
        v13 = &v11[v12];
        do
        {
          while ( *v11 )
          {
            v14 = (void *)(*v11++ - 8LL);
            sub_186B220(v14);
            if ( v13 == v11 )
              goto LABEL_19;
          }
          ++v11;
        }
        while ( v13 != v11 );
LABEL_19:
        v11 = *(_QWORD **)(v2 + 2272);
      }
      sub_186B220(v11 - 1);
    }
    v15 = *(_QWORD **)(v2 + 2256);
    if ( v15 )
    {
      v16 = *((unsigned int *)v15 - 1);
      if ( (_DWORD)v16 )
      {
        v17 = &v15[v16];
        do
        {
          while ( *v15 )
          {
            v18 = (void *)(*v15++ - 8LL);
            sub_186B220(v18);
            if ( v15 == v17 )
              goto LABEL_26;
          }
          ++v15;
        }
        while ( v17 != v15 );
LABEL_26:
        v15 = *(_QWORD **)(v2 + 2256);
      }
      sub_186B220(v15 - 1);
    }
    v19 = *(_QWORD *)(v2 + 2248);
    if ( v19 )
      sub_186B220((void *)(v19 - 8));
    sub_8E4B60(v2 + 2216);
    sub_233E40(v2 + 1592);
    sub_233E40(v2 + 1560);
    sub_2334C0((__int64 *)(v2 + 1424));
    v20 = *(void **)(v2 + 1400);
    if ( v20 )
      sub_186B220(v20);
    v21 = *(_QWORD *)(v2 + 1384);
    if ( v21 )
      sub_186B220((void *)(v21 - 8));
    v22 = *(_QWORD *)(v2 + 1376);
    if ( v22 )
      sub_186B220((void *)(v22 - 8));
    v23 = *(char **)(v2 + 1352);
    if ( v23 )
    {
      v24 = *(unsigned int *)(v2 + 1360);
      if ( (_DWORD)v24 )
      {
        v25 = *(_QWORD *)(v2 + 1352);
        v26 = &v23[16 * v24];
        do
        {
          while ( 1 )
          {
            v27 = *(_QWORD *)(v25 + 8);
            if ( !v27 )
              break;
            v25 += 16;
            sub_186B220((void *)(v27 - 8));
            if ( v26 == (char *)v25 )
              goto LABEL_41;
          }
          v25 += 16;
        }
        while ( v26 != (char *)v25 );
      }
LABEL_41:
      sub_186B220(v23);
    }
    sub_3BF120(v2 + 24);
    sub_186B220((void *)v2);
  }
  v28 = (_QWORD *)a1[2];
  *a1 = qword_1C65108;
  if ( v28 != a1 + 4 )
    operator delete(v28, a1[4] + 1LL);
}

