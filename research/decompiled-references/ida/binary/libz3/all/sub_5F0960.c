void __fastcall sub_5F0960(char *a1)
{
  void *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  _QWORD *v9; // rbp
  void *v10; // rdi
  char *v11; // rdi
  __int64 *v12; // rbp
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 *v20; // rbp
  __int64 *v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 *v24; // rbp
  __int64 *v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdi
  _QWORD *v28; // rbp
  void *v29; // rdi
  char *v30; // rdi
  __int64 *v31; // rbp
  __int64 *v32; // r12
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 *v38; // rbp
  __int64 *v39; // r12
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 *v42; // rbp
  __int64 *v43; // r12
  __int64 v44; // rsi
  __int64 v45; // rdi

  *(_QWORD *)a1 = &off_1C52738;
  v2 = *((void **)a1 + 45);
  if ( v2 )
    sub_186B220(v2);
  v3 = *((_QWORD *)a1 + 44);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *((_QWORD *)a1 + 43);
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = *((_QWORD *)a1 + 42);
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = *((_QWORD *)a1 + 41);
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = *((_QWORD *)a1 + 40);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = *((_QWORD *)a1 + 39);
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = *((_QWORD **)a1 + 34);
  while ( v9 )
  {
    v10 = v9;
    v9 = (_QWORD *)*v9;
    operator delete(v10, 0x18u);
  }
  memset(*((void **)a1 + 32), 0, 8LL * *((_QWORD *)a1 + 33));
  v11 = *((char **)a1 + 32);
  *((_QWORD *)a1 + 35) = 0;
  *((_QWORD *)a1 + 34) = 0;
  if ( v11 != a1 + 304 )
    operator delete(v11, 8LL * *((_QWORD *)a1 + 33));
  v12 = *((__int64 **)a1 + 31);
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
          v15 = *((_QWORD *)a1 + 30);
          v16 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v16 )
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
    v12 = *((__int64 **)a1 + 31);
    if ( v12 )
LABEL_27:
      sub_186B220(v12 - 1);
  }
  v17 = *((_QWORD *)a1 + 29);
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = *((_QWORD *)a1 + 28);
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v19 = *((_QWORD *)a1 + 27);
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  v20 = *((__int64 **)a1 + 26);
  if ( v20 )
  {
    v21 = &v20[*((unsigned int *)v20 - 1)];
    if ( v20 >= v21 )
      goto LABEL_42;
    do
    {
      while ( 1 )
      {
        v22 = *v20;
        if ( *v20 )
        {
          v23 = *((_QWORD *)a1 + 25);
          v16 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v16 )
            break;
        }
        if ( ++v20 >= v21 )
          goto LABEL_41;
      }
      sub_15D7BC0(v23, v22);
      ++v20;
    }
    while ( v20 < v21 );
LABEL_41:
    v20 = *((__int64 **)a1 + 26);
    if ( v20 )
LABEL_42:
      sub_186B220(v20 - 1);
  }
  v24 = *((__int64 **)a1 + 24);
  if ( v24 )
  {
    v25 = &v24[*((unsigned int *)v24 - 1)];
    if ( v24 >= v25 )
      goto LABEL_51;
    do
    {
      while ( 1 )
      {
        v26 = *v24;
        if ( *v24 )
        {
          v27 = *((_QWORD *)a1 + 23);
          v16 = (*(_DWORD *)(v26 + 8))-- == 1;
          if ( v16 )
            break;
        }
        if ( ++v24 >= v25 )
          goto LABEL_50;
      }
      sub_15D7BC0(v27, v26);
      ++v24;
    }
    while ( v24 < v25 );
LABEL_50:
    v24 = *((__int64 **)a1 + 24);
    if ( v24 )
LABEL_51:
      sub_186B220(v24 - 1);
  }
  v28 = *((_QWORD **)a1 + 17);
  while ( v28 )
  {
    v29 = v28;
    v28 = (_QWORD *)*v28;
    operator delete(v29, 0x18u);
  }
  memset(*((void **)a1 + 15), 0, 8LL * *((_QWORD *)a1 + 16));
  v30 = *((char **)a1 + 15);
  *((_QWORD *)a1 + 18) = 0;
  *((_QWORD *)a1 + 17) = 0;
  if ( v30 != a1 + 168 )
    operator delete(v30, 8LL * *((_QWORD *)a1 + 16));
  v31 = *((__int64 **)a1 + 14);
  if ( v31 )
  {
    v32 = &v31[*((unsigned int *)v31 - 1)];
    if ( v31 >= v32 )
      goto LABEL_64;
    do
    {
      while ( 1 )
      {
        v33 = *v31;
        if ( *v31 )
        {
          v34 = *((_QWORD *)a1 + 13);
          v16 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v16 )
            break;
        }
        if ( ++v31 >= v32 )
          goto LABEL_63;
      }
      sub_15D7BC0(v34, v33);
      ++v31;
    }
    while ( v31 < v32 );
LABEL_63:
    v31 = *((__int64 **)a1 + 14);
    if ( v31 )
LABEL_64:
      sub_186B220(v31 - 1);
  }
  v35 = *((_QWORD *)a1 + 12);
  if ( v35 )
    sub_186B220((void *)(v35 - 8));
  v36 = *((_QWORD *)a1 + 11);
  if ( v36 )
    sub_186B220((void *)(v36 - 8));
  v37 = *((_QWORD *)a1 + 10);
  if ( v37 )
    sub_186B220((void *)(v37 - 8));
  v38 = *((__int64 **)a1 + 9);
  if ( v38 )
  {
    v39 = &v38[*((unsigned int *)v38 - 1)];
    if ( v38 >= v39 )
      goto LABEL_79;
    do
    {
      while ( 1 )
      {
        v40 = *v38;
        if ( *v38 )
        {
          v41 = *((_QWORD *)a1 + 8);
          v16 = (*(_DWORD *)(v40 + 8))-- == 1;
          if ( v16 )
            break;
        }
        if ( ++v38 >= v39 )
          goto LABEL_78;
      }
      sub_15D7BC0(v41, v40);
      ++v38;
    }
    while ( v38 < v39 );
LABEL_78:
    v38 = *((__int64 **)a1 + 9);
    if ( v38 )
LABEL_79:
      sub_186B220(v38 - 1);
  }
  v42 = *((__int64 **)a1 + 7);
  if ( v42 )
  {
    v43 = &v42[*((unsigned int *)v42 - 1)];
    if ( v42 >= v43 )
      goto LABEL_88;
    do
    {
      while ( 1 )
      {
        v44 = *v42;
        if ( *v42 )
        {
          v45 = *((_QWORD *)a1 + 6);
          v16 = (*(_DWORD *)(v44 + 8))-- == 1;
          if ( v16 )
            break;
        }
        if ( ++v42 >= v43 )
          goto LABEL_87;
      }
      sub_15D7BC0(v45, v44);
      ++v42;
    }
    while ( v42 < v43 );
LABEL_87:
    v42 = *((__int64 **)a1 + 7);
    if ( v42 )
LABEL_88:
      sub_186B220(v42 - 1);
  }
  operator delete(a1, 0x180u);
}

