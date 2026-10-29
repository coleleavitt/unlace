void __fastcall sub_E24260(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  void *v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  char *v10; // r13
  __int64 v11; // r12
  __int64 v12; // rbx
  char *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 *v16; // rbx
  __int64 v17; // rax
  __int64 *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  bool v21; // zf
  __int64 v22; // rsi
  __int64 v23; // rdi
  void (__fastcall ***v24)(void *); // rbx
  void (__fastcall ***v25)(void *); // rbx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 *v28; // rbx
  __int64 *v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rdi

  *a1 = &off_1C761F8;
  a1[9] = off_1C763E0;
  v2 = a1[34];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = (void *)a1[33];
  a1[27] = &off_1C62200;
  if ( v3 )
    sub_186B220(v3);
  v4 = (void *)a1[30];
  if ( v4 )
    sub_186B220(v4);
  v5 = a1[25];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[24];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = (void *)a1[21];
  if ( v7 )
    sub_186B220(v7);
  v8 = a1[20];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = a1[19];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = (char *)a1[16];
  if ( v10 )
  {
    v11 = *((unsigned int *)a1 + 34);
    if ( (_DWORD)v11 )
    {
      v12 = a1[16];
      v13 = &v10[16 * v11];
      do
      {
        while ( 1 )
        {
          v14 = *(_QWORD *)(v12 + 8);
          if ( !v14 )
            break;
          v12 += 16;
          sub_186B220((void *)(v14 - 8));
          if ( v13 == (char *)v12 )
            goto LABEL_22;
        }
        v12 += 16;
      }
      while ( (char *)v12 != v13 );
    }
LABEL_22:
    sub_186B220(v10);
  }
  v15 = a1[15];
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = (__int64 *)a1[14];
  if ( v16 )
  {
    v17 = *((unsigned int *)v16 - 1);
    if ( (_DWORD)v17 )
    {
      v18 = &v16[5 * v17];
      do
      {
        v22 = v16[2];
        if ( v22 )
        {
          v23 = v16[3];
          v21 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v21 )
            sub_15D7BC0(v23, v22);
        }
        v19 = *v16;
        if ( *v16 )
        {
          v20 = v16[1];
          v21 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v21 )
            sub_15D7BC0(v20, v19);
        }
        v16 += 5;
      }
      while ( v16 != v18 );
      v16 = (__int64 *)a1[14];
    }
    sub_186B220(v16 - 1);
  }
  v24 = (void (__fastcall ***)(void *))a1[13];
  if ( v24 )
  {
    v21 = (*((_DWORD *)v24 + 12))-- == 1;
    if ( v21 )
    {
      (**v24)(v24);
      sub_186B220(v24);
    }
  }
  a1[9] = qword_1C77178;
  *a1 = qword_1C76FE8;
  sub_18572D0(a1 + 10);
  v25 = (void (__fastcall ***)(void *))a1[7];
  *a1 = qword_1C63FB0;
  if ( v25 )
  {
    v21 = (*((_DWORD *)v25 + 2))-- == 1;
    if ( v21 )
    {
      (**v25)(v25);
      sub_186B220(v25);
    }
  }
  v26 = a1[4];
  if ( v26 )
  {
    v27 = a1[5];
    v21 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v27, v26);
  }
  v28 = (__int64 *)a1[3];
  if ( v28 )
  {
    v29 = &v28[*((unsigned int *)v28 - 1)];
    if ( v28 >= v29 )
      goto LABEL_54;
    do
    {
      while ( 1 )
      {
        v30 = *v28;
        if ( *v28 )
        {
          v31 = a1[2];
          v21 = (*(_DWORD *)(v30 + 8))-- == 1;
          if ( v21 )
            break;
        }
        if ( ++v28 >= v29 )
          goto LABEL_53;
      }
      sub_15D7BC0(v31, v30);
      ++v28;
    }
    while ( v28 < v29 );
LABEL_53:
    v28 = (__int64 *)a1[3];
    if ( v28 )
LABEL_54:
      sub_186B220(v28 - 1);
  }
  operator delete(a1, 0x120u);
}

