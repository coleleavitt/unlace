__int64 __fastcall sub_900360(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 *v10; // rbp
  __int64 *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 *v14; // rbp
  __int64 *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  __int64 v21; // rdi
  void *v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 *v25; // rbp
  __int64 *v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rdi

  result = (__int64)&off_1C56130;
  *a1 = &off_1C56130;
  v3 = a1[43];
  if ( v3 )
    result = sub_186B220((void *)(v3 - 8));
  v4 = a1[42];
  if ( v4 )
    result = sub_186B220((void *)(v4 - 8));
  v5 = a1[41];
  if ( v5 )
    result = sub_186B220((void *)(v5 - 8));
  v6 = a1[40];
  if ( v6 )
    result = sub_186B220((void *)(v6 - 8));
  v7 = a1[38];
  if ( v7 )
  {
    v8 = a1[39];
    v9 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v9 )
      result = sub_15D7BC0(v8, v7);
  }
  v10 = (__int64 *)a1[37];
  if ( v10 )
  {
    result = *((unsigned int *)v10 - 1);
    v11 = &v10[result];
    if ( v10 >= v11 )
      goto LABEL_20;
    do
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 )
        {
          v13 = a1[36];
          v9 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v10 >= v11 )
          goto LABEL_19;
      }
      result = sub_15D7BC0(v13, v12);
      ++v10;
    }
    while ( v10 < v11 );
LABEL_19:
    v10 = (__int64 *)a1[37];
    if ( v10 )
LABEL_20:
      result = sub_186B220(v10 - 1);
  }
  v14 = (__int64 *)a1[35];
  if ( v14 )
  {
    result = *((unsigned int *)v14 - 1);
    v15 = &v14[result];
    if ( v14 >= v15 )
      goto LABEL_29;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = a1[34];
          v9 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_28;
      }
      result = sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_28:
    v14 = (__int64 *)a1[35];
    if ( v14 )
LABEL_29:
      result = sub_186B220(v14 - 1);
  }
  v18 = (void *)a1[31];
  if ( v18 )
    result = sub_186B220(v18);
  v19 = (void *)a1[28];
  if ( v19 )
    result = sub_186B220(v19);
  v20 = (void *)a1[25];
  if ( v20 )
    result = sub_186B220(v20);
  v21 = a1[24];
  if ( v21 )
    result = sub_186B220((void *)(v21 - 8));
  v22 = (void *)a1[14];
  if ( v22 )
    result = sub_186B220(v22);
  v23 = a1[13];
  if ( v23 )
    result = sub_186B220((void *)(v23 - 8));
  v24 = a1[11];
  if ( v24 )
    result = sub_186B220((void *)(v24 - 8));
  v25 = (__int64 *)a1[9];
  if ( v25 )
  {
    result = *((unsigned int *)v25 - 1);
    v26 = &v25[result];
    if ( v25 >= v26 )
      goto LABEL_52;
    do
    {
      while ( 1 )
      {
        v27 = *v25;
        if ( *v25 )
        {
          v28 = a1[8];
          v9 = (*(_DWORD *)(v27 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v25 >= v26 )
          goto LABEL_51;
      }
      result = sub_15D7BC0(v28, v27);
      ++v25;
    }
    while ( v25 < v26 );
LABEL_51:
    v25 = (__int64 *)a1[9];
    if ( v25 )
LABEL_52:
      result = sub_186B220(v25 - 1);
  }
  v29 = a1[7];
  if ( v29 )
    return sub_186B220((void *)(v29 - 8));
  return result;
}

