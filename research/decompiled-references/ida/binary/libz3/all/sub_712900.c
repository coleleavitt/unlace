__int64 __fastcall sub_712900(_QWORD *a1, int a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  __int64 result; // rax
  int v6; // r13d
  unsigned int v7; // r13d
  unsigned int v8; // ebx
  _QWORD *v9; // rdx
  __int64 v10; // r12
  unsigned int v11; // r14d
  size_t v12; // rsi
  unsigned int *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // r12
  _QWORD *v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // r14
  __int64 *v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi
  _QWORD *v23; // rax
  __int64 v24[9]; // [rsp+0h] [rbp-48h] BYREF

  result = a1[4];
  if ( result )
    v6 = *(_DWORD *)(result - 4);
  else
    v6 = 0;
  v7 = v6 - a2;
  v8 = *(_DWORD *)(result + 4LL * v7);
  v9 = (_QWORD *)a1[3];
  if ( !v9 )
    goto LABEL_27;
  v10 = *((unsigned int *)v9 - 1);
  if ( v8 >= (unsigned int)v10 )
  {
    if ( (unsigned int)v10 >= v8 )
      goto LABEL_25;
    goto LABEL_10;
  }
  v18 = (unsigned __int64)&v9[v10];
  v19 = &v9[v8];
  if ( (unsigned __int64)v19 >= v18 )
    goto LABEL_26;
  do
  {
    while ( 1 )
    {
      v20 = *v19;
      if ( *v19 )
      {
        v21 = a1[2];
        if ( (*(_DWORD *)(v20 + 8))-- == 1 )
          break;
      }
      if ( (unsigned __int64)++v19 >= v18 )
        goto LABEL_23;
    }
    sub_15D7BC0(v21, v20);
    ++v19;
  }
  while ( (unsigned __int64)v19 < v18 );
LABEL_23:
  v9 = (_QWORD *)a1[3];
  if ( !v9 )
  {
LABEL_27:
    if ( !v8 )
    {
LABEL_13:
      result = a1[4];
      goto LABEL_14;
    }
    v10 = 0;
    v23 = (_QWORD *)sub_186B270(0x18u);
    v9 = v23 + 1;
    *v23 = 2;
    a1[3] = v23 + 1;
LABEL_10:
    while ( 1 )
    {
      v14 = *((_DWORD *)v9 - 2);
      if ( v14 >= v8 )
        break;
      v11 = (3 * v14 + 1) >> 1;
      v12 = 8 * v11 + 8;
      if ( 8 * v14 + 8 >= (unsigned int)v12 || v14 >= v11 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_109F38(v24, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v24);
        sub_233E40((__int64)v24);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v13 = (unsigned int *)sub_186B300(v9 - 1, v12);
      v9 = v13 + 2;
      *v13 = v11;
      a1[3] = v13 + 2;
    }
    v15 = 8 * v10;
    *((_DWORD *)v9 - 1) = v8;
    v16 = &v9[(unsigned __int64)v15 / 8];
    v17 = 8LL * v8;
    if ( v15 != v17 )
      memset(v16, 0, v17 - v15);
    goto LABEL_13;
  }
  v10 = *((unsigned int *)v9 - 1);
  if ( (unsigned int)v10 < v8 )
    goto LABEL_10;
LABEL_25:
  result = a1[4];
LABEL_26:
  *((_DWORD *)v9 - 1) = v8;
LABEL_14:
  if ( result )
    *(_DWORD *)(result - 4) = v7;
  return result;
}

