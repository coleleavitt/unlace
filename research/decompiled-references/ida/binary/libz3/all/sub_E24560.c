void __fastcall sub_E24560(__int64 a1)
{
  void *v1; // r12
  __int64 v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  void *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  char *v11; // r14
  __int64 v12; // r13
  __int64 v13; // rbx
  char *v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 *v17; // rbx
  __int64 v18; // rax
  __int64 *v19; // r13
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  __int64 v23; // rsi
  __int64 v24; // rdi
  void (__fastcall ***v25)(void *); // rbx
  void (__fastcall ***v26)(void *); // rbx
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 *v29; // rbx
  __int64 *v30; // r13
  __int64 v31; // rsi
  __int64 v32; // rdi

  v1 = (void *)(a1 - 72);
  *(_QWORD *)(a1 - 72) = &off_1C761F8;
  *(_QWORD *)a1 = off_1C763E0;
  v3 = *(_QWORD *)(a1 + 200);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *(void **)(a1 + 192);
  *(_QWORD *)(a1 + 144) = &off_1C62200;
  if ( v4 )
    sub_186B220(v4);
  v5 = *(void **)(a1 + 168);
  if ( v5 )
    sub_186B220(v5);
  v6 = *(_QWORD *)(a1 + 128);
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = *(_QWORD *)(a1 + 120);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = *(void **)(a1 + 96);
  if ( v8 )
    sub_186B220(v8);
  v9 = *(_QWORD *)(a1 + 88);
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = *(_QWORD *)(a1 + 80);
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = *(char **)(a1 + 56);
  if ( v11 )
  {
    v12 = *(unsigned int *)(a1 + 64);
    if ( (_DWORD)v12 )
    {
      v13 = *(_QWORD *)(a1 + 56);
      v14 = &v11[16 * v12];
      do
      {
        while ( 1 )
        {
          v15 = *(_QWORD *)(v13 + 8);
          if ( !v15 )
            break;
          v13 += 16;
          sub_186B220((void *)(v15 - 8));
          if ( v14 == (char *)v13 )
            goto LABEL_22;
        }
        v13 += 16;
      }
      while ( (char *)v13 != v14 );
    }
LABEL_22:
    sub_186B220(v11);
  }
  v16 = *(_QWORD *)(a1 + 48);
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = *(__int64 **)(a1 + 40);
  if ( v17 )
  {
    v18 = *((unsigned int *)v17 - 1);
    if ( (_DWORD)v18 )
    {
      v19 = &v17[5 * v18];
      do
      {
        v23 = v17[2];
        if ( v23 )
        {
          v24 = v17[3];
          v22 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v22 )
            sub_15D7BC0(v24, v23);
        }
        v20 = *v17;
        if ( *v17 )
        {
          v21 = v17[1];
          v22 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v22 )
            sub_15D7BC0(v21, v20);
        }
        v17 += 5;
      }
      while ( v17 != v19 );
      v17 = *(__int64 **)(a1 + 40);
    }
    sub_186B220(v17 - 1);
  }
  v25 = *(void (__fastcall ****)(void *))(a1 + 32);
  if ( v25 )
  {
    v22 = (*((_DWORD *)v25 + 12))-- == 1;
    if ( v22 )
    {
      (**v25)(v25);
      sub_186B220(v25);
    }
  }
  *(_QWORD *)a1 = qword_1C77178;
  *(_QWORD *)(a1 - 72) = qword_1C76FE8;
  sub_18572D0((void *)(a1 + 8));
  v26 = *(void (__fastcall ****)(void *))(a1 - 16);
  *(_QWORD *)(a1 - 72) = qword_1C63FB0;
  if ( v26 )
  {
    v22 = (*((_DWORD *)v26 + 2))-- == 1;
    if ( v22 )
    {
      (**v26)(v26);
      sub_186B220(v26);
    }
  }
  v27 = *(_QWORD *)(a1 - 40);
  if ( v27 )
  {
    v28 = *(_QWORD *)(a1 - 32);
    v22 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v28, v27);
  }
  v29 = *(__int64 **)(a1 - 48);
  if ( v29 )
  {
    v30 = &v29[*((unsigned int *)v29 - 1)];
    if ( v29 >= v30 )
      goto LABEL_54;
    do
    {
      while ( 1 )
      {
        v31 = *v29;
        if ( *v29 )
        {
          v32 = *(_QWORD *)(a1 - 56);
          v22 = (*(_DWORD *)(v31 + 8))-- == 1;
          if ( v22 )
            break;
        }
        if ( ++v29 >= v30 )
          goto LABEL_53;
      }
      sub_15D7BC0(v32, v31);
      ++v29;
    }
    while ( v29 < v30 );
LABEL_53:
    v29 = *(__int64 **)(a1 - 48);
    if ( v29 )
LABEL_54:
      sub_186B220(v29 - 1);
  }
  operator delete(v1, 0x120u);
}

