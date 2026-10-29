void __fastcall sub_61CD80(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  void *v7; // rdi
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  void *v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  char *v16; // r13
  __int64 v17; // r12
  __int64 v18; // rbx
  char *v19; // r12
  __int64 v20; // rdi

  v2 = (__int64 *)a1[26];
  *a1 = &off_1C528F0;
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
          v5 = a1[25];
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
    v2 = (__int64 *)a1[26];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = (void *)a1[22];
  if ( v7 )
    sub_186B220(v7);
  v8 = (__int64 *)a1[20];
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
          v11 = a1[19];
          v6 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v6 )
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
    v8 = (__int64 *)a1[20];
    if ( v8 )
LABEL_20:
      sub_186B220(v8 - 1);
  }
  v12 = (void *)a1[16];
  if ( v12 )
    sub_186B220(v12);
  v13 = a1[15];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = a1[14];
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = a1[13];
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = (char *)a1[10];
  if ( v16 )
  {
    v17 = *((unsigned int *)a1 + 22);
    if ( (_DWORD)v17 )
    {
      v18 = a1[10];
      v19 = &v16[16 * v17];
      do
      {
        while ( 1 )
        {
          v20 = *(_QWORD *)(v18 + 8);
          if ( !v20 )
            break;
          v18 += 16;
          sub_186B220((void *)(v20 - 8));
          if ( v19 == (char *)v18 )
            goto LABEL_34;
        }
        v18 += 16;
      }
      while ( (char *)v18 != v19 );
    }
LABEL_34:
    sub_186B220(v16);
  }
  operator delete(a1, 0xD8u);
}

