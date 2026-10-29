__int64 *__fastcall sub_2B2E00(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 *v4; // rbp
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  void *v9; // rdi
  void *v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 *v18; // rbp
  __int64 *v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi
  void *v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  void *v26; // rdi
  void *v27; // rdi
  __int64 *v28; // rbp
  __int64 *v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rdi
  void *v33; // rdi
  __int64 *result; // rax
  void *v35; // rdi
  void *v36; // rdi

  v2 = a1[87];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[79];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (__int64 *)a1[78];
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 >= v5 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = a1[77];
          v8 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_12;
      }
      sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_12:
    v4 = (__int64 *)a1[78];
    if ( v4 )
LABEL_13:
      sub_186B220(v4 - 1);
  }
  v9 = (void *)a1[76];
  a1[70] = &off_1C62200;
  if ( v9 )
    sub_186B220(v9);
  v10 = (void *)a1[73];
  if ( v10 )
    sub_186B220(v10);
  v11 = a1[69];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = a1[68];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = a1[67];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = a1[66];
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = a1[65];
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = a1[64];
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = a1[62];
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = (__int64 *)a1[61];
  if ( v18 )
  {
    v19 = &v18[*((unsigned int *)v18 - 1)];
    if ( v18 >= v19 )
      goto LABEL_40;
    do
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( *v18 )
        {
          v21 = a1[60];
          v8 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v18 >= v19 )
          goto LABEL_39;
      }
      sub_15D7BC0(v21, v20);
      ++v18;
    }
    while ( v18 < v19 );
LABEL_39:
    v18 = (__int64 *)a1[61];
    if ( v18 )
LABEL_40:
      sub_186B220(v18 - 1);
  }
  v22 = (void *)a1[59];
  if ( v22 )
    sub_186B220(v22);
  v23 = a1[56];
  if ( v23 )
    sub_186B220((void *)(v23 - 8));
  v24 = a1[54];
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = a1[52];
  if ( v25 )
    sub_186B220((void *)(v25 - 8));
  v26 = (void *)a1[49];
  a1[4] = &off_1C63D10;
  if ( v26 )
    sub_186B220(v26);
  v27 = (void *)a1[48];
  if ( v27 )
    sub_186B220(v27);
  v28 = (__int64 *)a1[39];
  if ( v28 )
  {
    v29 = &v28[*((unsigned int *)v28 - 1)];
    if ( v28 >= v29 )
      goto LABEL_61;
    do
    {
      while ( 1 )
      {
        v30 = *v28;
        if ( *v28 )
        {
          v31 = a1[38];
          v8 = (*(_DWORD *)(v30 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v28 >= v29 )
          goto LABEL_60;
      }
      sub_15D7BC0(v31, v30);
      ++v28;
    }
    while ( v28 < v29 );
LABEL_60:
    v28 = (__int64 *)a1[39];
    if ( v28 )
LABEL_61:
      sub_186B220(v28 - 1);
  }
  v32 = a1[37];
  if ( v32 )
    sub_186B220((void *)(v32 - 8));
  v33 = (void *)a1[8];
  result = qword_1C7A350;
  a1[4] = qword_1C7A350;
  if ( v33 )
    result = (__int64 *)sub_186B220(v33);
  v35 = (void *)a1[5];
  if ( v35 )
    result = (__int64 *)sub_186B220(v35);
  v36 = (void *)a1[1];
  if ( v36 )
    return (__int64 *)sub_186B220(v36);
  return result;
}

