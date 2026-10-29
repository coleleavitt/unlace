__int64 __fastcall sub_E23360(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  void *v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  char *v10; // r13
  __int64 v11; // r12
  __int64 v12; // rbx
  char *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 *v16; // rbx
  __int64 v17; // rax
  __int64 *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  bool v21; // zf
  __int64 v22; // rsi
  __int64 v23; // rdi
  void (__fastcall ***v24)(void *); // rbx
  void (__fastcall ***v25)(void *); // rbx
  __int64 result; // rax
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 *v29; // rbx
  __int64 *v30; // r12
  __int64 v31; // rsi
  __int64 v32; // rdi

  *(_QWORD *)(a1 - 72) = &off_1C761F8;
  *(_QWORD *)a1 = off_1C763E0;
  v2 = *(_QWORD *)(a1 + 200);
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = *(void **)(a1 + 192);
  *(_QWORD *)(a1 + 144) = &off_1C62200;
  if ( v3 )
    sub_186B220(v3);
  v4 = *(void **)(a1 + 168);
  if ( v4 )
    sub_186B220(v4);
  v5 = *(_QWORD *)(a1 + 128);
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = *(_QWORD *)(a1 + 120);
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = *(void **)(a1 + 96);
  if ( v7 )
    sub_186B220(v7);
  v8 = *(_QWORD *)(a1 + 88);
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = *(_QWORD *)(a1 + 80);
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = *(char **)(a1 + 56);
  if ( v10 )
  {
    v11 = *(unsigned int *)(a1 + 64);
    if ( (_DWORD)v11 )
    {
      v12 = *(_QWORD *)(a1 + 56);
      v13 = &v10[16 * v11];
      do
      {
        while ( 1 )
        {
          v14 = *(_QWORD *)(v12 + 8);
          if ( !v14 )
            break;
          v12 += 16;
          sub_186B220((void *)(v14 - 8));
          if ( v13 == (char *)v12 )
            goto LABEL_22;
        }
        v12 += 16;
      }
      while ( (char *)v12 != v13 );
    }
LABEL_22:
    sub_186B220(v10);
  }
  v15 = *(_QWORD *)(a1 + 48);
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = *(__int64 **)(a1 + 40);
  if ( v16 )
  {
    v17 = *((unsigned int *)v16 - 1);
    if ( (_DWORD)v17 )
    {
      v18 = &v16[5 * v17];
      do
      {
        v22 = v16[2];
        if ( v22 )
        {
          v23 = v16[3];
          v21 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v21 )
            sub_15D7BC0(v23, v22);
        }
        v19 = *v16;
        if ( *v16 )
        {
          v20 = v16[1];
          v21 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v21 )
            sub_15D7BC0(v20, v19);
        }
        v16 += 5;
      }
      while ( v16 != v18 );
      v16 = *(__int64 **)(a1 + 40);
    }
    sub_186B220(v16 - 1);
  }
  v24 = *(void (__fastcall ****)(void *))(a1 + 32);
  if ( v24 )
  {
    v21 = (*((_DWORD *)v24 + 12))-- == 1;
    if ( v21 )
    {
      (**v24)(v24);
      sub_186B220(v24);
    }
  }
  *(_QWORD *)a1 = qword_1C77178;
  *(_QWORD *)(a1 - 72) = qword_1C76FE8;
  sub_18572D0((void *)(a1 + 8));
  v25 = *(void (__fastcall ****)(void *))(a1 - 16);
  result = (__int64)qword_1C63FB0;
  *(_QWORD *)(a1 - 72) = qword_1C63FB0;
  if ( v25 )
  {
    v21 = (*((_DWORD *)v25 + 2))-- == 1;
    if ( v21 )
    {
      (**v25)(v25);
      result = sub_186B220(v25);
    }
  }
  v27 = *(_QWORD *)(a1 - 40);
  if ( v27 )
  {
    v28 = *(_QWORD *)(a1 - 32);
    v21 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v21 )
      result = sub_15D7BC0(v28, v27);
  }
  v29 = *(__int64 **)(a1 - 48);
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
          v32 = *(_QWORD *)(a1 - 56);
          v21 = (*(_DWORD *)(v31 + 8))-- == 1;
          if ( v21 )
            break;
        }
        if ( ++v29 >= v30 )
          goto LABEL_53;
      }
      result = sub_15D7BC0(v32, v31);
      ++v29;
    }
    while ( v29 < v30 );
LABEL_53:
    v29 = *(__int64 **)(a1 - 48);
    if ( v29 )
      return sub_186B220(v29 - 1);
  }
  return result;
}

