void __fastcall sub_B957F0(_QWORD *a1)
{
  __int64 *v1; // rbp
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 *v7; // rbp
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 *v13; // rbp
  __int64 *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 *v17; // rbp
  __int64 *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 *v21; // rbp
  __int64 *v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdi
  void *v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi

  v1 = (__int64 *)a1[30];
  *a1 = off_1C73240;
  if ( v1 )
  {
    v3 = &v1[*((unsigned int *)v1 - 1)];
    if ( v1 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v1;
        if ( *v1 )
        {
          v5 = a1[29];
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v1 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v1;
    }
    while ( v1 < v3 );
LABEL_8:
    v1 = (__int64 *)a1[30];
    if ( v1 )
LABEL_9:
      sub_186B220(v1 - 1);
  }
  v7 = (__int64 *)a1[28];
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = a1[27];
          v6 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_17;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_17:
    v7 = (__int64 *)a1[28];
    if ( v7 )
LABEL_18:
      sub_186B220(v7 - 1);
  }
  v11 = a1[26];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = a1[25];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = (__int64 *)a1[24];
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
          v16 = a1[23];
          v6 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v6 )
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
    v13 = (__int64 *)a1[24];
    if ( v13 )
LABEL_31:
      sub_186B220(v13 - 1);
  }
  v17 = (__int64 *)a1[22];
  if ( v17 )
  {
    v18 = &v17[*((unsigned int *)v17 - 1)];
    if ( v17 >= v18 )
      goto LABEL_40;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = a1[21];
          v6 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v17 >= v18 )
          goto LABEL_39;
      }
      sub_15D7BC0(v20, v19);
      ++v17;
    }
    while ( v17 < v18 );
LABEL_39:
    v17 = (__int64 *)a1[22];
    if ( v17 )
LABEL_40:
      sub_186B220(v17 - 1);
  }
  v21 = (__int64 *)a1[20];
  if ( v21 )
  {
    v22 = &v21[*((unsigned int *)v21 - 1)];
    if ( v21 >= v22 )
      goto LABEL_49;
    do
    {
      while ( 1 )
      {
        v23 = *v21;
        if ( *v21 )
        {
          v24 = a1[19];
          v6 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v21 >= v22 )
          goto LABEL_48;
      }
      sub_15D7BC0(v24, v23);
      ++v21;
    }
    while ( v21 < v22 );
LABEL_48:
    v21 = (__int64 *)a1[20];
    if ( v21 )
LABEL_49:
      sub_186B220(v21 - 1);
  }
  v25 = (void *)a1[16];
  if ( v25 )
    sub_186B220(v25);
  v26 = a1[5];
  *a1 = off_1C70148;
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
  v27 = a1[4];
  if ( v27 )
    sub_186B220((void *)(v27 - 8));
  operator delete(a1, 0x138u);
}

