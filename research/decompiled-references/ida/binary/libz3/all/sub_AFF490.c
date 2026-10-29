__int64 __fastcall sub_AFF490(__int64 a1)
{
  _QWORD *v2; // rbp
  __int64 *v3; // rbx
  __int64 *v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 *v8; // rbx
  __int64 *v9; // rbp
  __int64 *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 *v15; // rax
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  __int64 v21; // rax
  __int64 *v22; // rbx
  __int64 *v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // rdi
  void (__fastcall ***v26)(void *); // rbx
  __int64 result; // rax
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 *v30; // rbx
  __int64 *v31; // rbp
  __int64 v32; // rsi
  __int64 v33; // rdi

  v2 = *(_QWORD **)(a1 + 888);
  *(_QWORD *)a1 = &off_1C71A08;
  *(_QWORD *)(a1 + 72) = off_1C71C10;
  if ( v2 )
  {
    v3 = (__int64 *)v2[3];
    if ( v3 )
    {
      v4 = &v3[*((unsigned int *)v3 - 1)];
      if ( v3 >= v4 )
        goto LABEL_10;
      do
      {
        while ( 1 )
        {
          v5 = *v3;
          if ( *v3 )
          {
            v6 = v2[2];
            v7 = (*(_DWORD *)(v5 + 8))-- == 1;
            if ( v7 )
              break;
          }
          if ( ++v3 >= v4 )
            goto LABEL_9;
        }
        sub_15D7BC0(v6, v5);
        ++v3;
      }
      while ( v3 < v4 );
LABEL_9:
      v3 = (__int64 *)v2[3];
      if ( v3 )
LABEL_10:
        sub_186B220(v3 - 1);
    }
    sub_186B220(v2);
  }
  v8 = *(__int64 **)(a1 + 920);
  v9 = &v8[2 * *(unsigned int *)(a1 + 928)];
  if ( v8 == v9 )
    goto LABEL_66;
  while ( (unsigned __int64)*v8 <= 1 )
  {
    v8 += 2;
    if ( v9 == v8 )
      goto LABEL_66;
  }
  if ( v9 == v8 )
  {
LABEL_66:
    v10 = (__int64 *)(a1 + 880);
  }
  else
  {
    v10 = (__int64 *)(a1 + 880);
    do
    {
      v11 = sub_8E35C0(a1 + 880);
      v12 = *v8;
      if ( *v8 )
      {
        v7 = (*(_DWORD *)(v12 + 8))-- == 1;
        if ( v7 )
          sub_15D7BC0(v11, v12);
      }
      v13 = sub_8E35C0(a1 + 880);
      v14 = v8[1];
      if ( v14 )
      {
        v7 = (*(_DWORD *)(v14 + 8))-- == 1;
        if ( v7 )
          sub_15D7BC0(v13, v14);
      }
      v15 = v8 + 2;
      if ( v9 == v8 + 2 )
        break;
      while ( 1 )
      {
        v8 = v15;
        if ( (unsigned __int64)*v15 > 1 )
          break;
        v15 += 2;
        if ( v9 == v15 )
          goto LABEL_29;
      }
    }
    while ( v9 != v15 );
  }
LABEL_29:
  v16 = *(void **)(a1 + 1088);
  if ( v16 != (void *)(a1 + 1104) )
    operator delete(v16, *(_QWORD *)(a1 + 1104) + 1LL);
  v17 = *(void **)(a1 + 1056);
  if ( v17 != (void *)(a1 + 1072) )
    operator delete(v17, *(_QWORD *)(a1 + 1072) + 1LL);
  sub_18572D0((void *)(a1 + 944));
  v18 = *(void **)(a1 + 920);
  if ( v18 )
    sub_186B220(v18);
  sub_8E4B60(v10);
  v19 = *(void **)(a1 + 256);
  if ( v19 != (void *)(a1 + 272) )
    operator delete(v19, *(_QWORD *)(a1 + 272) + 1LL);
  v20 = *(void **)(a1 + 224);
  if ( v20 != (void *)(a1 + 240) )
    operator delete(v20, *(_QWORD *)(a1 + 240) + 1LL);
  *(_QWORD *)(a1 + 72) = qword_1C76160;
  v21 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)a1 = qword_1C75FB0;
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = *(__int64 **)(a1 + 104);
  if ( v22 )
  {
    v23 = &v22[*((unsigned int *)v22 - 1)];
    if ( v22 >= v23 )
      goto LABEL_49;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = *(_QWORD *)(a1 + 96);
          v7 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v22 >= v23 )
          goto LABEL_48;
      }
      sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( v22 < v23 );
LABEL_48:
    v22 = *(__int64 **)(a1 + 104);
    if ( v22 )
LABEL_49:
      sub_186B220(v22 - 1);
  }
  *(_QWORD *)(a1 + 72) = qword_1C77178;
  *(_QWORD *)a1 = qword_1C76FE8;
  sub_18572D0((void *)(a1 + 80));
  v26 = *(void (__fastcall ****)(void *))(a1 + 56);
  result = (__int64)qword_1C63FB0;
  *(_QWORD *)a1 = qword_1C63FB0;
  if ( v26 )
  {
    v7 = (*((_DWORD *)v26 + 2))-- == 1;
    if ( v7 )
    {
      (**v26)(v26);
      result = sub_186B220(v26);
    }
  }
  v28 = *(_QWORD *)(a1 + 32);
  if ( v28 )
  {
    v29 = *(_QWORD *)(a1 + 40);
    v7 = (*(_DWORD *)(v28 + 8))-- == 1;
    if ( v7 )
      result = sub_15D7BC0(v29, v28);
  }
  v30 = *(__int64 **)(a1 + 24);
  if ( v30 )
  {
    result = *((unsigned int *)v30 - 1);
    v31 = &v30[result];
    if ( v30 >= v31 )
      return sub_186B220(v30 - 1);
    do
    {
      while ( 1 )
      {
        v32 = *v30;
        if ( *v30 )
        {
          v33 = *(_QWORD *)(a1 + 16);
          v7 = (*(_DWORD *)(v32 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v30 >= v31 )
          goto LABEL_63;
      }
      result = sub_15D7BC0(v33, v32);
      ++v30;
    }
    while ( v30 < v31 );
LABEL_63:
    v30 = *(__int64 **)(a1 + 24);
    if ( v30 )
      return sub_186B220(v30 - 1);
  }
  return result;
}

