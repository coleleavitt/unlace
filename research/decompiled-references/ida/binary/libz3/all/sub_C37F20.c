__int64 __fastcall sub_C37F20(__int64 a1)
{
  void *v2; // rbx
  void *v3; // rbx
  void *v4; // rbx
  __int64 result; // rax
  char *v6; // r15
  __int64 v7; // rax
  char *v8; // rbx
  char *v9; // r14
  void *v10; // r13
  void *v11; // r13
  char *v12; // rsi
  char *v13; // r15
  __int64 v14; // rax
  char *v15; // rbx
  char *v16; // r14
  void *v17; // r13
  void *v18; // r13
  char *v19; // rsi
  __int64 *v20; // rbx
  __int64 *v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdi
  bool v24; // zf
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 *v29; // rbx
  __int64 *v30; // r12
  __int64 v31; // rsi
  __int64 v32; // rdi

  v2 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 224);
  sub_182CBA0(v2, a1 + 240);
  v3 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 192);
  sub_182CBA0(v3, a1 + 208);
  v4 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 160);
  result = sub_182CBA0(v4, a1 + 176);
  v6 = *(char **)(a1 + 136);
  if ( v6 )
  {
    v7 = *(unsigned int *)(a1 + 144);
    if ( (_DWORD)v7 )
    {
      v8 = *(char **)(a1 + 136);
      v9 = &v6[80 * v7];
      do
      {
        v10 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v8 + 48);
        sub_182CBA0(v10, v8 + 64);
        v11 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v8 + 16);
        v12 = v8 + 32;
        v8 += 80;
        sub_182CBA0(v11, v12);
      }
      while ( v9 != v8 );
    }
    result = sub_186B220(v6);
  }
  v13 = *(char **)(a1 + 112);
  if ( v13 )
  {
    v14 = *(unsigned int *)(a1 + 120);
    if ( (_DWORD)v14 )
    {
      v15 = *(char **)(a1 + 112);
      v16 = &v13[88 * v14];
      do
      {
        v17 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v15 + 48);
        sub_182CBA0(v17, v15 + 64);
        v18 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v15 + 16);
        v19 = v15 + 32;
        v15 += 88;
        sub_182CBA0(v18, v19);
      }
      while ( v16 != v15 );
    }
    result = sub_186B220(v13);
  }
  v20 = *(__int64 **)(a1 + 104);
  if ( v20 )
  {
    result = *((unsigned int *)v20 - 1);
    v21 = &v20[result];
    if ( v20 >= v21 )
      goto LABEL_19;
    do
    {
      while ( 1 )
      {
        v22 = *v20;
        if ( *v20 )
        {
          v23 = *(_QWORD *)(a1 + 96);
          v24 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v24 )
            break;
        }
        if ( ++v20 >= v21 )
          goto LABEL_18;
      }
      result = sub_15D7BC0(v23, v22);
      ++v20;
    }
    while ( v20 < v21 );
LABEL_18:
    v20 = *(__int64 **)(a1 + 104);
    if ( v20 )
LABEL_19:
      result = sub_186B220(v20 - 1);
  }
  v25 = *(_QWORD *)(a1 + 80);
  if ( v25 )
  {
    v26 = *(_QWORD *)(a1 + 88);
    v24 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( v24 )
      result = sub_15D7BC0(v26, v25);
  }
  v27 = *(_QWORD *)(a1 + 64);
  if ( v27 )
  {
    v28 = *(_QWORD *)(a1 + 72);
    v24 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v24 )
      result = sub_15D7BC0(v28, v27);
  }
  v29 = *(__int64 **)(a1 + 56);
  if ( v29 )
  {
    result = *((unsigned int *)v29 - 1);
    v30 = &v29[result];
    if ( v29 >= v30 )
      return sub_186B220(v29 - 1);
    do
    {
      while ( 1 )
      {
        v31 = *v29;
        if ( *v29 )
        {
          v32 = *(_QWORD *)(a1 + 48);
          v24 = (*(_DWORD *)(v31 + 8))-- == 1;
          if ( v24 )
            break;
        }
        if ( ++v29 >= v30 )
          goto LABEL_33;
      }
      result = sub_15D7BC0(v32, v31);
      ++v29;
    }
    while ( v29 < v30 );
LABEL_33:
    v29 = *(__int64 **)(a1 + 56);
    if ( v29 )
      return sub_186B220(v29 - 1);
  }
  return result;
}

