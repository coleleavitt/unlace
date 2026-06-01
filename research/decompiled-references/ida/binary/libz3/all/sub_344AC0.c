__int64 __fastcall sub_344AC0(__int64 a1)
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
  __int64 result; // rax
  __int64 *v23; // rbp
  __int64 *v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 *v27; // rbp
  __int64 *v28; // r12
  __int64 v29; // rsi
  __int64 v30; // rdi

  v2 = *(__int64 **)(a1 + 232);
  *(_QWORD *)a1 = &off_1C649D8;
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
          v5 = *(_QWORD *)(a1 + 224);
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
    v2 = *(__int64 **)(a1 + 232);
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = *(__int64 **)(a1 + 216);
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
          v10 = *(_QWORD *)(a1 + 208);
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
    v7 = *(__int64 **)(a1 + 216);
    if ( v7 )
LABEL_18:
      sub_186B220(v7 - 1);
  }
  v11 = *(void **)(a1 + 184);
  if ( v11 )
    sub_186B220(v11);
  v12 = *(char **)(a1 + 160);
  if ( v12 )
  {
    v13 = *(unsigned int *)(a1 + 168);
    if ( (_DWORD)v13 )
    {
      v14 = *(char **)(a1 + 160);
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
  *(_QWORD *)a1 = qword_1C64158;
  sub_18572D0((void *)(a1 + 152));
  v18 = *(_QWORD *)(a1 + 144);
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v19 = *(void (__fastcall ****)(void *))(a1 + 136);
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
  sub_182CBA0(qword_1C7F2C0, a1 + 104);
  sub_182CBA0(v20, a1 + 120);
  v21 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 72);
  result = sub_182CBA0(v21, a1 + 88);
  v23 = *(__int64 **)(a1 + 64);
  if ( v23 )
  {
    result = *((unsigned int *)v23 - 1);
    v24 = &v23[result];
    if ( v23 >= v24 )
      goto LABEL_39;
    do
    {
      while ( 1 )
      {
        v25 = *v23;
        if ( *v23 )
        {
          v26 = *(_QWORD *)(a1 + 56);
          v6 = (*(_DWORD *)(v25 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v23 >= v24 )
          goto LABEL_38;
      }
      result = sub_15D7BC0(v26, v25);
      ++v23;
    }
    while ( v23 < v24 );
LABEL_38:
    v23 = *(__int64 **)(a1 + 64);
    if ( v23 )
LABEL_39:
      result = sub_186B220(v23 - 1);
  }
  v27 = *(__int64 **)(a1 + 48);
  if ( v27 )
  {
    result = *((unsigned int *)v27 - 1);
    v28 = &v27[result];
    if ( v27 >= v28 )
      return sub_186B220(v27 - 1);
    do
    {
      while ( 1 )
      {
        v29 = *v27;
        if ( *v27 )
        {
          v30 = *(_QWORD *)(a1 + 40);
          v6 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v27 >= v28 )
          goto LABEL_47;
      }
      result = sub_15D7BC0(v30, v29);
      ++v27;
    }
    while ( v27 < v28 );
LABEL_47:
    v27 = *(__int64 **)(a1 + 48);
    if ( v27 )
      return sub_186B220(v27 - 1);
  }
  return result;
}

