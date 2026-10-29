__int64 __fastcall sub_7F0420(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  void *v6; // rdi
  __int64 *v7; // rbp
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 *v20; // rbp
  __int64 *v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 *v24; // rbp
  __int64 result; // rax
  __int64 *v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rdi
  void *v29; // rdi
  void *v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdi

  v2 = a1[113];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[112];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[110];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[108];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  sub_180C0E0(a1 + 103);
  v6 = (void *)a1[100];
  if ( v6 )
    sub_186B220(v6);
  v7 = (__int64 *)a1[99];
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_19;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = a1[98];
          v11 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_18;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_18:
    v7 = (__int64 *)a1[99];
    if ( v7 )
LABEL_19:
      sub_186B220(v7 - 1);
  }
  v12 = a1[95];
  a1[29] = &off_1C4CA60;
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = a1[93];
  if ( v13 )
  {
    v14 = a1[94];
    v11 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v14, v13);
  }
  v15 = a1[91];
  if ( v15 )
  {
    v16 = a1[92];
    v11 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v16, v15);
  }
  v17 = a1[89];
  if ( v17 )
  {
    v18 = a1[90];
    v11 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v18, v17);
  }
  a1[70] = &qword_1C637E8;
  sub_15841B0(a1 + 70);
  a1[50] = &qword_1C637E8;
  sub_15841B0(a1 + 50);
  v19 = a1[49];
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  sub_15841B0(a1 + 29);
  v20 = (__int64 *)a1[22];
  a1[9] = &off_1C61E18;
  if ( v20 )
  {
    v21 = &v20[*((unsigned int *)v20 - 1)];
    if ( v20 >= v21 )
      goto LABEL_41;
    do
    {
      while ( 1 )
      {
        v22 = *v20;
        if ( *v20 )
        {
          v23 = a1[21];
          v11 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v20 >= v21 )
          goto LABEL_40;
      }
      sub_15D7BC0(v23, v22);
      ++v20;
    }
    while ( v20 < v21 );
LABEL_40:
    v20 = (__int64 *)a1[22];
    if ( v20 )
LABEL_41:
      sub_186B220(v20 - 1);
  }
  v24 = (__int64 *)a1[18];
  result = (__int64)&off_1C54950;
  a1[9] = &off_1C54950;
  if ( v24 )
  {
    result = *((unsigned int *)v24 - 1);
    v26 = &v24[result];
    if ( v24 >= v26 )
      goto LABEL_50;
    do
    {
      while ( 1 )
      {
        v27 = *v24;
        if ( *v24 )
        {
          v28 = a1[17];
          v11 = (*(_DWORD *)(v27 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v24 >= v26 )
          goto LABEL_49;
      }
      result = sub_15D7BC0(v28, v27);
      ++v24;
    }
    while ( v24 < v26 );
LABEL_49:
    v24 = (__int64 *)a1[18];
    if ( v24 )
LABEL_50:
      result = sub_186B220(v24 - 1);
  }
  v29 = (void *)a1[14];
  if ( v29 )
    result = sub_186B220(v29);
  v30 = (void *)a1[11];
  if ( v30 )
    result = sub_186B220(v30);
  v31 = a1[7];
  if ( v31 )
  {
    v32 = a1[8];
    v11 = (*(_DWORD *)(v31 + 8))-- == 1;
    if ( v11 )
      result = sub_15D7BC0(v32, v31);
  }
  v33 = a1[5];
  if ( v33 )
  {
    v34 = a1[6];
    v11 = (*(_DWORD *)(v33 + 8))-- == 1;
    if ( v11 )
      return sub_15D7BC0(v34, v33);
  }
  return result;
}

