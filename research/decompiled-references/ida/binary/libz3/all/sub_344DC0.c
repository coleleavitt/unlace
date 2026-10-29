void __fastcall sub_344DC0(_QWORD *a1)
{
  __int64 *v2; // rbp
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 *v7; // rbp
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  void *v11; // rdi
  char *v12; // r15
  __int64 v13; // rax
  char *v14; // rbp
  char *v15; // r14
  void *v16; // r12
  char *v17; // rsi
  __int64 v18; // rdi
  void (__fastcall ***v19)(void *); // rbp
  void *v20; // rbp
  void *v21; // rbp
  __int64 *v22; // rbp
  __int64 *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 *v26; // rbp
  __int64 *v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rdi

  v2 = (__int64 *)a1[29];
  *a1 = &off_1C649D8;
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = a1[28];
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = (__int64 *)a1[29];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = (__int64 *)a1[27];
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
          v10 = a1[26];
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
    v7 = (__int64 *)a1[27];
    if ( v7 )
LABEL_18:
      sub_186B220(v7 - 1);
  }
  v11 = (void *)a1[23];
  if ( v11 )
    sub_186B220(v11);
  v12 = (char *)a1[20];
  if ( v12 )
  {
    v13 = *((unsigned int *)a1 + 42);
    if ( (_DWORD)v13 )
    {
      v14 = (char *)a1[20];
      v15 = &v12[40 * v13];
      do
      {
        v16 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v14 + 8);
        v17 = v14 + 24;
        v14 += 40;
        sub_182CBA0(v16, v17);
      }
      while ( v14 != v15 );
    }
    sub_186B220(v12);
  }
  *a1 = qword_1C64158;
  sub_18572D0(a1 + 19);
  v18 = a1[18];
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v19 = (void (__fastcall ***)(void *))a1[17];
  if ( v19 )
  {
    v6 = (*((_DWORD *)v19 + 4))-- == 1;
    if ( v6 )
    {
      (**v19)(v19);
      sub_186B220(v19);
    }
  }
  v20 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 13);
  sub_182CBA0(v20, a1 + 15);
  v21 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 9);
  sub_182CBA0(v21, a1 + 11);
  v22 = (__int64 *)a1[8];
  if ( v22 )
  {
    v23 = &v22[*((unsigned int *)v22 - 1)];
    if ( v22 >= v23 )
      goto LABEL_39;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = a1[7];
          v6 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v22 >= v23 )
          goto LABEL_38;
      }
      sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( v22 < v23 );
LABEL_38:
    v22 = (__int64 *)a1[8];
    if ( v22 )
LABEL_39:
      sub_186B220(v22 - 1);
  }
  v26 = (__int64 *)a1[6];
  if ( v26 )
  {
    v27 = &v26[*((unsigned int *)v26 - 1)];
    if ( v26 >= v27 )
      goto LABEL_48;
    do
    {
      while ( 1 )
      {
        v28 = *v26;
        if ( *v26 )
        {
          v29 = a1[5];
          v6 = (*(_DWORD *)(v28 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v26 >= v27 )
          goto LABEL_47;
      }
      sub_15D7BC0(v29, v28);
      ++v26;
    }
    while ( v26 < v27 );
LABEL_47:
    v26 = (__int64 *)a1[6];
    if ( v26 )
LABEL_48:
      sub_186B220(v26 - 1);
  }
  operator delete(a1, 0xF0u);
}

