__int64 __fastcall sub_9564E0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 *v4; // rbp
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  __int64 v9; // rdi
  __int64 v10; // rdi
  void (__fastcall *v11)(_QWORD *, _QWORD *, __int64); // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  void *v14; // rdi
  __int64 *v15; // rbp
  __int64 *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 *v27; // rbp
  __int64 *v28; // r12
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 *v31; // rbp
  __int64 result; // rax
  __int64 *v33; // r12
  __int64 v34; // rsi
  __int64 v35; // rdi
  void *v36; // rdi
  void *v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdi
  void *v42; // rdi
  void *v43; // rdi
  void *v44; // rdi

  v2 = a1[134];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[133];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (__int64 *)a1[132];
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
          v7 = a1[131];
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
    v4 = (__int64 *)a1[132];
    if ( v4 )
LABEL_13:
      sub_186B220(v4 - 1);
  }
  v9 = a1[130];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = a1[129];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[127];
  if ( v11 )
    v11(a1 + 125, a1 + 125, 3);
  v12 = a1[123];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = a1[121];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  sub_180C0E0(a1 + 116);
  v14 = (void *)a1[113];
  if ( v14 )
    sub_186B220(v14);
  v15 = (__int64 *)a1[112];
  if ( v15 )
  {
    v16 = &v15[*((unsigned int *)v15 - 1)];
    if ( v15 >= v16 )
      goto LABEL_34;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = a1[111];
          v8 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v15 >= v16 )
          goto LABEL_33;
      }
      sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( v15 < v16 );
LABEL_33:
    v15 = (__int64 *)a1[112];
    if ( v15 )
LABEL_34:
      sub_186B220(v15 - 1);
  }
  v19 = a1[108];
  a1[42] = &off_1C4CA60;
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  v20 = a1[106];
  if ( v20 )
  {
    v21 = a1[107];
    v8 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v21, v20);
  }
  v22 = a1[104];
  if ( v22 )
  {
    v23 = a1[105];
    v8 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v23, v22);
  }
  v24 = a1[102];
  if ( v24 )
  {
    v25 = a1[103];
    v8 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v25, v24);
  }
  a1[83] = &qword_1C637E8;
  sub_15841B0(a1 + 83);
  a1[63] = &qword_1C637E8;
  sub_15841B0(a1 + 63);
  v26 = a1[62];
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
  sub_15841B0(a1 + 42);
  v27 = (__int64 *)a1[35];
  a1[22] = &off_1C61E18;
  if ( v27 )
  {
    v28 = &v27[*((unsigned int *)v27 - 1)];
    if ( v27 >= v28 )
      goto LABEL_56;
    do
    {
      while ( 1 )
      {
        v29 = *v27;
        if ( *v27 )
        {
          v30 = a1[34];
          v8 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v27 >= v28 )
          goto LABEL_55;
      }
      sub_15D7BC0(v30, v29);
      ++v27;
    }
    while ( v27 < v28 );
LABEL_55:
    v27 = (__int64 *)a1[35];
    if ( v27 )
LABEL_56:
      sub_186B220(v27 - 1);
  }
  v31 = (__int64 *)a1[31];
  result = (__int64)&off_1C54950;
  a1[22] = &off_1C54950;
  if ( v31 )
  {
    result = *((unsigned int *)v31 - 1);
    v33 = &v31[result];
    if ( v31 >= v33 )
      goto LABEL_65;
    do
    {
      while ( 1 )
      {
        v34 = *v31;
        if ( *v31 )
        {
          v35 = a1[30];
          v8 = (*(_DWORD *)(v34 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v31 >= v33 )
          goto LABEL_64;
      }
      result = sub_15D7BC0(v35, v34);
      ++v31;
    }
    while ( v31 < v33 );
LABEL_64:
    v31 = (__int64 *)a1[31];
    if ( v31 )
LABEL_65:
      result = sub_186B220(v31 - 1);
  }
  v36 = (void *)a1[27];
  if ( v36 )
    result = sub_186B220(v36);
  v37 = (void *)a1[24];
  if ( v37 )
    result = sub_186B220(v37);
  v38 = a1[20];
  if ( v38 )
  {
    v39 = a1[21];
    v8 = (*(_DWORD *)(v38 + 8))-- == 1;
    if ( v8 )
      result = sub_15D7BC0(v39, v38);
  }
  v40 = a1[18];
  if ( v40 )
  {
    v41 = a1[19];
    v8 = (*(_DWORD *)(v40 + 8))-- == 1;
    if ( v8 )
      result = sub_15D7BC0(v41, v40);
  }
  v42 = (void *)a1[13];
  if ( v42 )
    result = sub_186B220(v42);
  v43 = (void *)a1[10];
  if ( v43 )
    result = sub_186B220(v43);
  v44 = (void *)a1[7];
  if ( v44 )
    return sub_186B220(v44);
  return result;
}

