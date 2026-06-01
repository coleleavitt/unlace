_DWORD *__fastcall sub_DE67F0(_QWORD *a1)
{
  char **v1; // rbp
  char **exception; // rbp
  __int64 v4; // rax
  _QWORD *v5; // rdi
  int v6; // r12d
  __int64 v7; // rax
  _DWORD *v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rdi
  int v11; // r12d
  __int64 v12; // rax
  _DWORD *result; // rax
  unsigned int v14; // ebp
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rax
  unsigned int v18; // ebp
  size_t v19; // rsi
  unsigned int *v20; // rax
  _DWORD *v21; // rdi
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25[7]; // [rsp+10h] [rbp-38h] BYREF

  v4 = a1[20];
  if ( v4 )
  {
    v5 = (_QWORD *)a1[21];
    v6 = *(_DWORD *)(v4 - 4);
    if ( v5 )
      goto LABEL_3;
LABEL_17:
    v23 = (_QWORD *)sub_186B270(0x10u);
    v5 = v23 + 1;
    *v23 = 2;
    a1[21] = v23 + 1;
    v8 = v23 + 1;
    goto LABEL_5;
  }
  v5 = (_QWORD *)a1[21];
  v6 = 0;
  if ( !v5 )
    goto LABEL_17;
LABEL_3:
  v7 = *((unsigned int *)v5 - 1);
  if ( (_DWORD)v7 == *((_DWORD *)v5 - 2) )
  {
    v14 = (unsigned int)(3 * v7 + 1) >> 1;
    v15 = 4 * v14 + 8;
    if ( 4 * (int)v7 + 8 >= (unsigned int)v15 || (unsigned int)v7 >= v14 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v25, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v25);
      sub_233E40((__int64)v25);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v16 = (unsigned int *)sub_186B300(v5 - 1, v15);
    v5 = v16 + 2;
    *v16 = v14;
    v17 = v16[1];
    a1[21] = v5;
    v8 = (_DWORD *)v5 + v17;
  }
  else
  {
    v8 = (_DWORD *)v5 + v7;
  }
LABEL_5:
  *v8 = v6;
  v9 = a1[22];
  ++*((_DWORD *)v5 - 1);
  if ( v9 )
  {
    v10 = (_QWORD *)a1[23];
    v11 = *(_DWORD *)(v9 - 4);
    if ( v10 )
      goto LABEL_7;
LABEL_19:
    v24 = (_QWORD *)sub_186B270(0x10u);
    v10 = v24 + 1;
    *v24 = 2;
    a1[23] = v24 + 1;
    result = v24 + 1;
    goto LABEL_9;
  }
  v10 = (_QWORD *)a1[23];
  v11 = 0;
  if ( !v10 )
    goto LABEL_19;
LABEL_7:
  v12 = *((unsigned int *)v10 - 1);
  if ( (_DWORD)v12 != *((_DWORD *)v10 - 2) )
  {
    result = (_DWORD *)v10 + v12;
LABEL_9:
    *result = v11;
    ++*((_DWORD *)v10 - 1);
    return result;
  }
  v18 = (unsigned int)(3 * v12 + 1) >> 1;
  v19 = 4 * v18 + 8;
  if ( 4 * (int)v12 + 8 >= (unsigned int)v19 || (unsigned int)v12 >= v18 )
  {
    v1 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v25, "Overflow encountered when expanding vector");
    *v1 = (char *)off_1C63128;
    sub_2333C0(v1 + 1, v25);
    sub_233E40((__int64)v25);
    __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v20 = (unsigned int *)sub_186B300(v10 - 1, v19);
  *v20 = v18;
  v21 = v20 + 2;
  v22 = v20[1];
  a1[23] = v21;
  result = &v21[v22];
  *result = v11;
  ++*(v21 - 1);
  return result;
}

