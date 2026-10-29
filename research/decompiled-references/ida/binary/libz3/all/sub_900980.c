void __fastcall sub_900980(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  bool v4; // zf
  void *v5; // rdi
  __int64 *v6; // rbp
  __int64 *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  __int64 *v12; // rbp
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdi
  char *v16; // r13
  __int64 v17; // r12
  __int64 v18; // rbp
  char *v19; // r12
  __int64 v20; // rdi
  __int64 v21; // rdi
  char *v22; // r13
  __int64 v23; // r12
  __int64 v24; // rbp
  char *v25; // r12
  __int64 v26; // rdi
  __int64 *v27; // rbp
  __int64 *v28; // r12
  __int64 v29; // rsi
  __int64 v30; // rdi
  void *v31; // rdi
  __int64 *v32; // rbp
  __int64 *v33; // r12
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rdi

  v2 = a1[47];
  *a1 = off_1C6F538;
  if ( v2 )
  {
    v3 = a1[48];
    v4 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v3, v2);
  }
  v5 = (void *)a1[44];
  if ( v5 )
    sub_186B220(v5);
  v6 = (__int64 *)a1[42];
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 >= v7 )
      goto LABEL_14;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = a1[41];
          v4 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v6 >= v7 )
          goto LABEL_13;
      }
      sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( v6 < v7 );
LABEL_13:
    v6 = (__int64 *)a1[42];
    if ( v6 )
LABEL_14:
      sub_186B220(v6 - 1);
  }
  v10 = (void *)a1[40];
  a1[34] = &off_1C62200;
  if ( v10 )
    sub_186B220(v10);
  v11 = (void *)a1[37];
  if ( v11 )
    sub_186B220(v11);
  v12 = (__int64 *)a1[32];
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 >= v13 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = a1[31];
          v4 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_26;
      }
      sub_15D7BC0(v15, v14);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_26:
    v12 = (__int64 *)a1[32];
    if ( v12 )
LABEL_27:
      sub_186B220(v12 - 1);
  }
  v16 = (char *)a1[28];
  if ( v16 )
  {
    v17 = *((unsigned int *)a1 + 58);
    if ( (_DWORD)v17 )
    {
      v18 = a1[28];
      v19 = &v16[32 * v17];
      do
      {
        while ( 1 )
        {
          v20 = *(_QWORD *)(v18 + 16);
          if ( v20 )
            sub_186B220((void *)(v20 - 8));
          v21 = *(_QWORD *)(v18 + 8);
          if ( !v21 )
            break;
          v18 += 32;
          sub_186B220((void *)(v21 - 8));
          if ( v19 == (char *)v18 )
            goto LABEL_35;
        }
        v18 += 32;
      }
      while ( (char *)v18 != v19 );
    }
LABEL_35:
    sub_186B220(v16);
  }
  v22 = (char *)a1[25];
  if ( v22 )
  {
    v23 = *((unsigned int *)a1 + 52);
    if ( (_DWORD)v23 )
    {
      v24 = a1[25];
      v25 = &v22[16 * v23];
      do
      {
        while ( 1 )
        {
          v26 = *(_QWORD *)(v24 + 8);
          if ( !v26 )
            break;
          v24 += 16;
          sub_186B220((void *)(v26 - 8));
          if ( v25 == (char *)v24 )
            goto LABEL_41;
        }
        v24 += 16;
      }
      while ( (char *)v24 != v25 );
    }
LABEL_41:
    sub_186B220(v22);
  }
  v27 = (__int64 *)a1[24];
  if ( v27 )
  {
    v28 = &v27[*((unsigned int *)v27 - 1)];
    if ( v27 >= v28 )
      goto LABEL_50;
    do
    {
      while ( 1 )
      {
        v29 = *v27;
        if ( *v27 )
        {
          v30 = a1[23];
          v4 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v27 >= v28 )
          goto LABEL_49;
      }
      sub_15D7BC0(v30, v29);
      ++v27;
    }
    while ( v27 < v28 );
LABEL_49:
    v27 = (__int64 *)a1[24];
    if ( v27 )
LABEL_50:
      sub_186B220(v27 - 1);
  }
  v31 = (void *)a1[19];
  if ( v31 )
    sub_186B220(v31);
  v32 = (__int64 *)a1[18];
  if ( v32 )
  {
    v33 = &v32[*((unsigned int *)v32 - 1)];
    if ( v32 >= v33 )
      goto LABEL_61;
    do
    {
      while ( 1 )
      {
        v34 = *v32;
        if ( *v32 )
        {
          v35 = a1[17];
          v4 = (*(_DWORD *)(v34 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v32 >= v33 )
          goto LABEL_60;
      }
      sub_15D7BC0(v35, v34);
      ++v32;
    }
    while ( v32 < v33 );
LABEL_60:
    v32 = (__int64 *)a1[18];
    if ( v32 )
LABEL_61:
      sub_186B220(v32 - 1);
  }
  sub_180C0E0(a1 + 9);
  v36 = a1[8];
  if ( v36 )
    sub_186B220((void *)(v36 - 8));
  v37 = a1[7];
  if ( v37 )
    sub_186B220((void *)(v37 - 8));
  v38 = a1[5];
  *a1 = off_1C70148;
  if ( v38 )
    sub_186B220((void *)(v38 - 8));
  v39 = a1[4];
  if ( v39 )
    sub_186B220((void *)(v39 - 8));
  operator delete(a1, 0x190u);
}

