void __fastcall sub_9035C0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  __int64 *v9; // rbp
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 *v13; // rbp
  __int64 *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  __int64 v20; // rdi
  void *v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 *v24; // rbp
  __int64 *v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rdi

  *a1 = &off_1C56130;
  v2 = a1[43];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[42];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[41];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[40];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[38];
  if ( v6 )
  {
    v7 = a1[39];
    v8 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v7, v6);
  }
  v9 = (__int64 *)a1[37];
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 >= v10 )
      goto LABEL_20;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = a1[36];
          v8 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_19;
      }
      sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_19:
    v9 = (__int64 *)a1[37];
    if ( v9 )
LABEL_20:
      sub_186B220(v9 - 1);
  }
  v13 = (__int64 *)a1[35];
  if ( v13 )
  {
    v14 = &v13[*((unsigned int *)v13 - 1)];
    if ( v13 >= v14 )
      goto LABEL_29;
    do
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( *v13 )
        {
          v16 = a1[34];
          v8 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v13 >= v14 )
          goto LABEL_28;
      }
      sub_15D7BC0(v16, v15);
      ++v13;
    }
    while ( v13 < v14 );
LABEL_28:
    v13 = (__int64 *)a1[35];
    if ( v13 )
LABEL_29:
      sub_186B220(v13 - 1);
  }
  v17 = (void *)a1[31];
  if ( v17 )
    sub_186B220(v17);
  v18 = (void *)a1[28];
  if ( v18 )
    sub_186B220(v18);
  v19 = (void *)a1[25];
  if ( v19 )
    sub_186B220(v19);
  v20 = a1[24];
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  v21 = (void *)a1[14];
  if ( v21 )
    sub_186B220(v21);
  v22 = a1[13];
  if ( v22 )
    sub_186B220((void *)(v22 - 8));
  v23 = a1[11];
  if ( v23 )
    sub_186B220((void *)(v23 - 8));
  v24 = (__int64 *)a1[9];
  if ( v24 )
  {
    v25 = &v24[*((unsigned int *)v24 - 1)];
    if ( v24 >= v25 )
      goto LABEL_52;
    do
    {
      while ( 1 )
      {
        v26 = *v24;
        if ( *v24 )
        {
          v27 = a1[8];
          v8 = (*(_DWORD *)(v26 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v24 >= v25 )
          goto LABEL_51;
      }
      sub_15D7BC0(v27, v26);
      ++v24;
    }
    while ( v24 < v25 );
LABEL_51:
    v24 = (__int64 *)a1[9];
    if ( v24 )
LABEL_52:
      sub_186B220(v24 - 1);
  }
  v28 = a1[7];
  if ( v28 )
    sub_186B220((void *)(v28 - 8));
  operator delete(a1, 0x168u);
}

