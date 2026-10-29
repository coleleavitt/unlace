void __fastcall sub_5C2E80(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  char *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rbx
  char *v10; // r12
  void *v11; // rdi
  void *v12; // rdi
  __int64 v13; // rdi
  __int64 *v14; // rbx
  __int64 *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi

  v2 = (__int64 *)a1[18];
  *a1 = &off_1C52508;
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = a1[17];
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = (__int64 *)a1[18];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = (char *)a1[14];
  if ( v7 )
  {
    v8 = *((unsigned int *)a1 + 30);
    if ( (_DWORD)v8 )
    {
      v9 = a1[14];
      v10 = &v7[24 * v8];
      do
      {
        while ( 1 )
        {
          v11 = *(void **)(v9 + 16);
          if ( !v11 )
            break;
          sub_186B220(v11);
          v9 += 24;
          if ( v10 == (char *)v9 )
            goto LABEL_15;
        }
        v9 += 24;
      }
      while ( (char *)v9 != v10 );
    }
LABEL_15:
    sub_186B220(v7);
  }
  v12 = (void *)a1[11];
  if ( v12 )
    sub_186B220(v12);
  v13 = a1[10];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = (__int64 *)a1[9];
  if ( v14 )
  {
    v15 = &v14[*((unsigned int *)v14 - 1)];
    if ( v14 >= v15 )
      goto LABEL_28;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = a1[8];
          v6 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_27;
      }
      sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_27:
    v14 = (__int64 *)a1[9];
    if ( v14 )
LABEL_28:
      sub_186B220(v14 - 1);
  }
  v18 = a1[7];
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v19 = a1[6];
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  operator delete(a1, 0xA8u);
}

