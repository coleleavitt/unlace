void __fastcall sub_789880(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  void *v12; // rdi
  __int64 *v13; // rbx
  __int64 *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  void *v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r14
  void *v30; // r12
  __int64 v31; // rsi

  *a1 = &off_1C54720;
  v2 = a1[35];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = (__int64 *)a1[33];
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 >= v4 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = a1[32];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_10;
      }
      sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_10:
    v3 = (__int64 *)a1[33];
    if ( v3 )
LABEL_11:
      sub_186B220(v3 - 1);
  }
  v8 = (__int64 *)a1[31];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_20;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a1[30];
          v7 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_19;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_19:
    v8 = (__int64 *)a1[31];
    if ( v8 )
LABEL_20:
      sub_186B220(v8 - 1);
  }
  v12 = (void *)a1[21];
  if ( v12 )
    sub_186B220(v12);
  v13 = (__int64 *)a1[20];
  if ( v13 )
  {
    v14 = &v13[*((unsigned int *)v13 - 1)];
    if ( v13 >= v14 )
      goto LABEL_31;
    do
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( *v13 )
        {
          v16 = a1[19];
          v7 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v13 >= v14 )
          goto LABEL_30;
      }
      sub_15D7BC0(v16, v15);
      ++v13;
    }
    while ( v13 < v14 );
LABEL_30:
    v13 = (__int64 *)a1[20];
    if ( v13 )
LABEL_31:
      sub_186B220(v13 - 1);
  }
  v17 = a1[18];
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = (void *)a1[15];
  if ( v18 )
    sub_186B220(v18);
  v19 = (void *)a1[12];
  if ( v19 )
    sub_186B220(v19);
  v20 = a1[11];
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  v21 = a1[10];
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 6);
  sub_182CBA0(v22, a1 + 8);
  v23 = a1[5];
  if ( v23 )
  {
    v24 = *(unsigned int *)(v23 - 4);
    if ( (_DWORD)v24 )
    {
      v25 = v23 + 16 * v24;
      do
      {
        v26 = v23;
        v23 += 16;
        sub_15D0DF0(v26);
      }
      while ( v23 != v25 );
      v23 = a1[5];
    }
    sub_186B220((void *)(v23 - 8));
  }
  v27 = a1[4];
  if ( v27 )
  {
    v28 = *(unsigned int *)(v27 - 4);
    if ( (_DWORD)v28 )
    {
      v29 = v27 + 32 * v28;
      do
      {
        v30 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v27);
        v31 = v27 + 16;
        v27 += 32;
        sub_182CBA0(v30, v31);
      }
      while ( v27 != v29 );
      v27 = a1[4];
    }
    sub_186B220((void *)(v27 - 8));
  }
  operator delete(a1, 0x130u);
}

