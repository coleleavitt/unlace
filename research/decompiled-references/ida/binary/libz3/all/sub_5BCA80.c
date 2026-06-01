void __fastcall sub_5BCA80(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  bool v4; // zf
  void *v5; // rdi
  char *v6; // r13
  __int64 v7; // r12
  __int64 v8; // rbx
  char *v9; // r12
  __int64 v10; // rdi
  char *v11; // r13
  __int64 v12; // r12
  __int64 v13; // rbx
  char *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rdi
  void *v20; // rdi
  __int64 *v21; // rbx
  __int64 *v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdi

  v2 = a1[21];
  *a1 = &off_1C52498;
  if ( v2 )
  {
    v3 = a1[22];
    v4 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v3, v2);
  }
  v5 = (void *)a1[18];
  if ( v5 )
    sub_186B220(v5);
  v6 = (char *)a1[15];
  if ( v6 )
  {
    v7 = *((unsigned int *)a1 + 32);
    if ( (_DWORD)v7 )
    {
      v8 = a1[15];
      v9 = &v6[16 * v7];
      do
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)(v8 + 8);
          if ( !v10 )
            break;
          v8 += 16;
          sub_186B220((void *)(v10 - 8));
          if ( v9 == (char *)v8 )
            goto LABEL_11;
        }
        v8 += 16;
      }
      while ( v9 != (char *)v8 );
    }
LABEL_11:
    sub_186B220(v6);
  }
  v11 = (char *)a1[12];
  if ( v11 )
  {
    v12 = *((unsigned int *)a1 + 26);
    if ( (_DWORD)v12 )
    {
      v13 = a1[12];
      v14 = &v11[32 * v12];
      do
      {
        while ( 1 )
        {
          v15 = *(_QWORD *)(v13 + 16);
          if ( !v15 )
            break;
          v13 += 32;
          sub_186B220((void *)(v15 - 8));
          if ( v14 == (char *)v13 )
            goto LABEL_17;
        }
        v13 += 32;
      }
      while ( v14 != (char *)v13 );
    }
LABEL_17:
    sub_186B220(v11);
  }
  v16 = a1[11];
  if ( v16 )
  {
    v17 = *(unsigned int *)(v16 - 4);
    if ( (_DWORD)v17 )
    {
      v18 = v16 + 16 * v17;
      do
      {
        while ( 1 )
        {
          v19 = *(_QWORD *)(v16 + 8);
          if ( !v19 )
            break;
          v16 += 16;
          sub_186B220((void *)(v19 - 8));
          if ( v18 == v16 )
          {
            v16 = a1[11];
            goto LABEL_24;
          }
        }
        v16 += 16;
      }
      while ( v16 != v18 );
      v16 = a1[11];
    }
LABEL_24:
    sub_186B220((void *)(v16 - 8));
  }
  v20 = (void *)a1[8];
  if ( v20 )
    sub_186B220(v20);
  v21 = (__int64 *)a1[7];
  if ( v21 )
  {
    v22 = &v21[*((unsigned int *)v21 - 1)];
    if ( v21 >= v22 )
      goto LABEL_35;
    do
    {
      while ( 1 )
      {
        v23 = *v21;
        if ( *v21 )
        {
          v24 = a1[6];
          v4 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v21 >= v22 )
          goto LABEL_34;
      }
      sub_15D7BC0(v24, v23);
      ++v21;
    }
    while ( v21 < v22 );
LABEL_34:
    v21 = (__int64 *)a1[7];
    if ( v21 )
LABEL_35:
      sub_186B220(v21 - 1);
  }
  operator delete(a1, 0xB8u);
}

