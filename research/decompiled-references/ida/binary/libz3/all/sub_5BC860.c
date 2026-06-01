__int64 __fastcall sub_5BC860(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  bool v5; // zf
  void *v6; // rdi
  char *v7; // r13
  __int64 v8; // r12
  __int64 v9; // rbx
  char *v10; // r12
  __int64 v11; // rdi
  char *v12; // r13
  __int64 v13; // r12
  __int64 v14; // rbx
  char *v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rdi
  void *v21; // rdi
  __int64 *v22; // rbx
  __int64 *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi

  result = (__int64)&off_1C52498;
  v3 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)a1 = &off_1C52498;
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 176);
    v5 = (*(_DWORD *)(v3 + 8))-- == 1;
    if ( v5 )
      result = sub_15D7BC0(v4, v3);
  }
  v6 = *(void **)(a1 + 144);
  if ( v6 )
    result = sub_186B220(v6);
  v7 = *(char **)(a1 + 120);
  if ( v7 )
  {
    v8 = *(unsigned int *)(a1 + 128);
    if ( (_DWORD)v8 )
    {
      v9 = *(_QWORD *)(a1 + 120);
      v10 = &v7[16 * v8];
      do
      {
        while ( 1 )
        {
          v11 = *(_QWORD *)(v9 + 8);
          if ( !v11 )
            break;
          v9 += 16;
          sub_186B220((void *)(v11 - 8));
          if ( v10 == (char *)v9 )
            goto LABEL_11;
        }
        v9 += 16;
      }
      while ( v10 != (char *)v9 );
    }
LABEL_11:
    result = sub_186B220(v7);
  }
  v12 = *(char **)(a1 + 96);
  if ( v12 )
  {
    v13 = *(unsigned int *)(a1 + 104);
    if ( (_DWORD)v13 )
    {
      v14 = *(_QWORD *)(a1 + 96);
      v15 = &v12[32 * v13];
      do
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(v14 + 16);
          if ( !v16 )
            break;
          v14 += 32;
          sub_186B220((void *)(v16 - 8));
          if ( v15 == (char *)v14 )
            goto LABEL_17;
        }
        v14 += 32;
      }
      while ( v15 != (char *)v14 );
    }
LABEL_17:
    result = sub_186B220(v12);
  }
  v17 = *(_QWORD *)(a1 + 88);
  if ( v17 )
  {
    v18 = *(unsigned int *)(v17 - 4);
    if ( (_DWORD)v18 )
    {
      v19 = v17 + 16 * v18;
      do
      {
        while ( 1 )
        {
          v20 = *(_QWORD *)(v17 + 8);
          if ( !v20 )
            break;
          v17 += 16;
          sub_186B220((void *)(v20 - 8));
          if ( v19 == v17 )
          {
            v17 = *(_QWORD *)(a1 + 88);
            goto LABEL_24;
          }
        }
        v17 += 16;
      }
      while ( v17 != v19 );
      v17 = *(_QWORD *)(a1 + 88);
    }
LABEL_24:
    result = sub_186B220((void *)(v17 - 8));
  }
  v21 = *(void **)(a1 + 64);
  if ( v21 )
    result = sub_186B220(v21);
  v22 = *(__int64 **)(a1 + 56);
  if ( v22 )
  {
    result = *((unsigned int *)v22 - 1);
    v23 = &v22[result];
    if ( v22 >= v23 )
      return sub_186B220(v22 - 1);
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = *(_QWORD *)(a1 + 48);
          v5 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v22 >= v23 )
          goto LABEL_34;
      }
      result = sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( v22 < v23 );
LABEL_34:
    v22 = *(__int64 **)(a1 + 56);
    if ( v22 )
      return sub_186B220(v22 - 1);
  }
  return result;
}

