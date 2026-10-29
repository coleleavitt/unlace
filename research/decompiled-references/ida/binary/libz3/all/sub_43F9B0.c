void __fastcall sub_43F9B0(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rdi
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 *v12; // rbx
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdi

  v2 = (__int64 *)a1[39];
  *a1 = &off_1C4E8B0;
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
          v5 = a1[38];
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
    v2 = (__int64 *)a1[39];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = a1[37];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = (__int64 *)a1[33];
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
          v11 = a1[32];
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
    v8 = (__int64 *)a1[33];
    if ( v8 )
LABEL_20:
      sub_186B220(v8 - 1);
  }
  v12 = (__int64 *)a1[30];
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 >= v13 )
      goto LABEL_29;
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = a1[29];
          v6 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_28;
      }
      sub_15D7BC0(v15, v14);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_28:
    v12 = (__int64 *)a1[30];
    if ( v12 )
LABEL_29:
      sub_186B220(v12 - 1);
  }
  v16 = (void *)a1[28];
  a1[22] = &off_1C62200;
  if ( v16 )
    sub_186B220(v16);
  v17 = (void *)a1[25];
  if ( v17 )
    sub_186B220(v17);
  v18 = (void *)a1[21];
  a1[15] = &off_1C62200;
  if ( v18 )
    sub_186B220(v18);
  v19 = (void *)a1[18];
  if ( v19 )
    sub_186B220(v19);
  v20 = a1[3];
  if ( v20 )
  {
    v21 = a1[4];
    v6 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v21, v20);
  }
  operator delete(a1, 0x140u);
}

