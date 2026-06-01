__int64 __fastcall sub_5C3020(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  char *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbx
  char *v11; // r12
  void *v12; // rdi
  void *v13; // rdi
  __int64 v14; // rdi
  __int64 *v15; // rbx
  __int64 *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi

  result = (__int64)&off_1C52508;
  v3 = *(__int64 **)(a1 + 144);
  *(_QWORD *)a1 = &off_1C52508;
  if ( v3 )
  {
    result = *((unsigned int *)v3 - 1);
    v4 = &v3[result];
    if ( v3 >= v4 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = *(_QWORD *)(a1 + 136);
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_8;
      }
      result = sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_8:
    v3 = *(__int64 **)(a1 + 144);
    if ( v3 )
LABEL_9:
      result = sub_186B220(v3 - 1);
  }
  v8 = *(char **)(a1 + 112);
  if ( v8 )
  {
    v9 = *(unsigned int *)(a1 + 120);
    if ( (_DWORD)v9 )
    {
      v10 = *(_QWORD *)(a1 + 112);
      v11 = &v8[24 * v9];
      do
      {
        while ( 1 )
        {
          v12 = *(void **)(v10 + 16);
          if ( !v12 )
            break;
          sub_186B220(v12);
          v10 += 24;
          if ( v11 == (char *)v10 )
            goto LABEL_15;
        }
        v10 += 24;
      }
      while ( (char *)v10 != v11 );
    }
LABEL_15:
    result = sub_186B220(v8);
  }
  v13 = *(void **)(a1 + 88);
  if ( v13 )
    result = sub_186B220(v13);
  v14 = *(_QWORD *)(a1 + 80);
  if ( v14 )
    result = sub_186B220((void *)(v14 - 8));
  v15 = *(__int64 **)(a1 + 72);
  if ( v15 )
  {
    result = *((unsigned int *)v15 - 1);
    v16 = &v15[result];
    if ( v15 >= v16 )
      goto LABEL_28;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = *(_QWORD *)(a1 + 64);
          v7 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v15 >= v16 )
          goto LABEL_27;
      }
      result = sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( v15 < v16 );
LABEL_27:
    v15 = *(__int64 **)(a1 + 72);
    if ( v15 )
LABEL_28:
      result = sub_186B220(v15 - 1);
  }
  v19 = *(_QWORD *)(a1 + 56);
  if ( v19 )
    result = sub_186B220((void *)(v19 - 8));
  v20 = *(_QWORD *)(a1 + 48);
  if ( v20 )
    return sub_186B220((void *)(v20 - 8));
  return result;
}

