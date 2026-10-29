__int64 __fastcall sub_C295E0(_QWORD *a1)
{
  __int64 *v1; // rbp
  __int64 result; // rax
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 *v19; // rbp
  __int64 *v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 *v23; // rbp
  __int64 *v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 *v27; // rbp
  __int64 *v28; // r12
  __int64 v29; // rsi
  __int64 v30; // rdi
  void *v31; // rdi
  void *v32; // rdi
  void *v33; // rdi

  v1 = (__int64 *)a1[28];
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
          v6 = a1[27];
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
    v1 = (__int64 *)a1[28];
    if ( v1 )
LABEL_9:
      result = sub_186B220(v1 - 1);
  }
  v8 = a1[25];
  if ( v8 )
  {
    v9 = a1[26];
    v7 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v7 )
      result = sub_15D7BC0(v9, v8);
  }
  v10 = a1[23];
  if ( v10 )
  {
    v11 = a1[24];
    v7 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v7 )
      result = sub_15D7BC0(v11, v10);
  }
  v12 = a1[21];
  if ( v12 )
  {
    v13 = a1[22];
    v7 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v7 )
      result = sub_15D7BC0(v13, v12);
  }
  v14 = a1[19];
  if ( v14 )
  {
    v15 = a1[20];
    v7 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v7 )
      result = sub_15D7BC0(v15, v14);
  }
  v16 = a1[18];
  if ( v16 )
    result = sub_186B220((void *)(v16 - 8));
  v17 = a1[17];
  if ( v17 )
    result = sub_186B220((void *)(v17 - 8));
  v18 = a1[16];
  if ( v18 )
    result = sub_186B220((void *)(v18 - 8));
  v19 = (__int64 *)a1[15];
  if ( v19 )
  {
    result = *((unsigned int *)v19 - 1);
    v20 = &v19[result];
    if ( v19 >= v20 )
      goto LABEL_36;
    do
    {
      while ( 1 )
      {
        v21 = *v19;
        if ( *v19 )
        {
          v22 = a1[14];
          v7 = (*(_DWORD *)(v21 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v19 >= v20 )
          goto LABEL_35;
      }
      result = sub_15D7BC0(v22, v21);
      ++v19;
    }
    while ( v19 < v20 );
LABEL_35:
    v19 = (__int64 *)a1[15];
    if ( v19 )
LABEL_36:
      result = sub_186B220(v19 - 1);
  }
  v23 = (__int64 *)a1[13];
  if ( v23 )
  {
    result = *((unsigned int *)v23 - 1);
    v24 = &v23[result];
    if ( v23 >= v24 )
      goto LABEL_45;
    do
    {
      while ( 1 )
      {
        v25 = *v23;
        if ( *v23 )
        {
          v26 = a1[12];
          v7 = (*(_DWORD *)(v25 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v23 >= v24 )
          goto LABEL_44;
      }
      result = sub_15D7BC0(v26, v25);
      ++v23;
    }
    while ( v23 < v24 );
LABEL_44:
    v23 = (__int64 *)a1[13];
    if ( v23 )
LABEL_45:
      result = sub_186B220(v23 - 1);
  }
  v27 = (__int64 *)a1[11];
  if ( v27 )
  {
    result = *((unsigned int *)v27 - 1);
    v28 = &v27[result];
    if ( v27 >= v28 )
      goto LABEL_54;
    do
    {
      while ( 1 )
      {
        v29 = *v27;
        if ( *v27 )
        {
          v30 = a1[10];
          v7 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v27 >= v28 )
          goto LABEL_53;
      }
      result = sub_15D7BC0(v30, v29);
      ++v27;
    }
    while ( v27 < v28 );
LABEL_53:
    v27 = (__int64 *)a1[11];
    if ( v27 )
LABEL_54:
      result = sub_186B220(v27 - 1);
  }
  v31 = (void *)a1[7];
  if ( v31 )
    result = sub_186B220(v31);
  v32 = (void *)a1[4];
  if ( v32 )
    result = sub_186B220(v32);
  v33 = (void *)a1[1];
  if ( v33 )
    return sub_186B220(v33);
  return result;
}

