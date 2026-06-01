__int64 __fastcall sub_B971C0(_QWORD *a1)
{
  __int64 *v1; // rbp
  __int64 result; // rax
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 *v8; // rbp
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 *v14; // rbp
  __int64 *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 *v18; // rbp
  __int64 *v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 *v22; // rbp
  __int64 *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  void *v26; // rdi

  v1 = (__int64 *)a1[21];
  if ( v1 )
  {
    result = *((unsigned int *)v1 - 1);
    v4 = &v1[result];
    if ( v1 >= v4 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v5 = *v1;
        if ( *v1 )
        {
          v6 = a1[20];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v1 >= v4 )
          goto LABEL_8;
      }
      result = sub_15D7BC0(v6, v5);
      ++v1;
    }
    while ( v1 < v4 );
LABEL_8:
    v1 = (__int64 *)a1[21];
    if ( v1 )
LABEL_9:
      result = sub_186B220(v1 - 1);
  }
  v8 = (__int64 *)a1[19];
  if ( v8 )
  {
    result = *((unsigned int *)v8 - 1);
    v9 = &v8[result];
    if ( v8 >= v9 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a1[18];
          v7 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_17;
      }
      result = sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_17:
    v8 = (__int64 *)a1[19];
    if ( v8 )
LABEL_18:
      result = sub_186B220(v8 - 1);
  }
  v12 = a1[17];
  if ( v12 )
    result = sub_186B220((void *)(v12 - 8));
  v13 = a1[16];
  if ( v13 )
    result = sub_186B220((void *)(v13 - 8));
  v14 = (__int64 *)a1[15];
  if ( v14 )
  {
    result = *((unsigned int *)v14 - 1);
    v15 = &v14[result];
    if ( v14 >= v15 )
      goto LABEL_31;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = a1[14];
          v7 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_30;
      }
      result = sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_30:
    v14 = (__int64 *)a1[15];
    if ( v14 )
LABEL_31:
      result = sub_186B220(v14 - 1);
  }
  v18 = (__int64 *)a1[13];
  if ( v18 )
  {
    result = *((unsigned int *)v18 - 1);
    v19 = &v18[result];
    if ( v18 >= v19 )
      goto LABEL_40;
    do
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( *v18 )
        {
          v21 = a1[12];
          v7 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v18 >= v19 )
          goto LABEL_39;
      }
      result = sub_15D7BC0(v21, v20);
      ++v18;
    }
    while ( v18 < v19 );
LABEL_39:
    v18 = (__int64 *)a1[13];
    if ( v18 )
LABEL_40:
      result = sub_186B220(v18 - 1);
  }
  v22 = (__int64 *)a1[11];
  if ( v22 )
  {
    result = *((unsigned int *)v22 - 1);
    v23 = &v22[result];
    if ( v22 >= v23 )
      goto LABEL_49;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = a1[10];
          v7 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v22 >= v23 )
          goto LABEL_48;
      }
      result = sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( v22 < v23 );
LABEL_48:
    v22 = (__int64 *)a1[11];
    if ( v22 )
LABEL_49:
      result = sub_186B220(v22 - 1);
  }
  v26 = (void *)a1[7];
  if ( v26 )
    return sub_186B220(v26);
  return result;
}

