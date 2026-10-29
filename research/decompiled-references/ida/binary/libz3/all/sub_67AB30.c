unsigned int *__fastcall sub_67AB30(__int64 *a1, unsigned int **a2, unsigned int *a3, __int64 a4)
{
  unsigned int v7; // r15d
  _QWORD *v8; // rcx
  unsigned int v9; // ebp
  __int64 v10; // rbp
  __int64 *v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  unsigned int *result; // rax
  __int64 v16; // rdx
  unsigned int v17; // edx
  size_t v18; // rsi
  unsigned int v19; // r14d
  unsigned int *v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r14
  _QWORD *v24; // rax
  char **exception; // rbx
  __int64 v26; // rdx
  unsigned int v27; // [rsp+8h] [rbp-60h]
  _QWORD *v28; // [rsp+8h] [rbp-60h]
  __int64 v29[11]; // [rsp+10h] [rbp-58h] BYREF

  v7 = *a3;
  v8 = (_QWORD *)a1[1];
  v9 = *a3 + 1;
  if ( v8 )
  {
    v27 = *((_DWORD *)v8 - 1);
    if ( v27 >= v9 )
      goto LABEL_3;
  }
  else
  {
    if ( *a3 == -1 )
      goto LABEL_3;
    v24 = (_QWORD *)sub_186B270(0x18u);
    v27 = 0;
    v8 = v24 + 1;
    *v24 = 2;
    a1[1] = (__int64)(v24 + 1);
  }
  while ( 1 )
  {
    v21 = *((_DWORD *)v8 - 2);
    if ( v21 >= v9 )
      break;
    v17 = (3 * v21 + 1) >> 1;
    v18 = 8 * v17 + 8;
    v19 = v17;
    if ( 8 * v21 + 8 >= (unsigned int)v18 || v21 >= v17 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_107EF6(v29, "Overflow encountered when expanding vector", v26);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v29);
      sub_233E40((__int64)v29);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v20 = (unsigned int *)sub_186B300(v8 - 1, v18);
    v8 = v20 + 2;
    *v20 = v19;
    a1[1] = (__int64)(v20 + 2);
  }
  *((_DWORD *)v8 - 1) = v9;
  v22 = 8LL * v9;
  v23 = 8LL * v27;
  if ( v23 != v22 )
  {
    v28 = v8;
    memset(&v8[(unsigned __int64)v23 / 8], 0, v22 - v23);
    v8 = v28;
  }
LABEL_3:
  if ( a4 )
    ++*(_DWORD *)(a4 + 8);
  v10 = v7;
  v11 = &v8[v10];
  v12 = *v11;
  if ( *v11 && (v13 = *a1, v14 = *(_DWORD *)(v12 + 8) == 1, --*(_DWORD *)(v12 + 8), v14) )
  {
    sub_15D7BC0(v13, v12);
    result = *a2;
    *(_QWORD *)(v10 * 8 + a1[1]) = a4;
    if ( !result )
      goto LABEL_17;
  }
  else
  {
    result = *a2;
    *v11 = a4;
    if ( !result )
    {
LABEL_17:
      sub_2FD3F0(a2);
      result = *a2;
      v16 = *(*a2 - 1);
      goto LABEL_9;
    }
  }
  v16 = *(result - 1);
  if ( (_DWORD)v16 == *(result - 2) )
    goto LABEL_17;
LABEL_9:
  result[v16] = v7;
  ++*(result - 1);
  return result;
}

