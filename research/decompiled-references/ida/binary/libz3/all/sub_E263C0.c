_DWORD *__fastcall sub_E263C0(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  int v4; // r12d
  __int64 v5; // rax
  _DWORD *v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdi
  int v9; // r12d
  __int64 v10; // rax
  _DWORD *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rdi
  int v14; // r12d
  __int64 v15; // rax
  _DWORD *result; // rax
  unsigned int v17; // ebp
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rax
  unsigned int v21; // ebp
  size_t v22; // rsi
  unsigned int *v23; // rax
  _DWORD *v24; // rdi
  __int64 v25; // rax
  unsigned int v26; // ebp
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  char **exception; // rbp
  __int64 v34[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = a1[14];
  if ( v2 )
  {
    v3 = (_QWORD *)a1[15];
    v4 = *(_DWORD *)(v2 - 4);
    if ( v3 )
      goto LABEL_3;
LABEL_24:
    v30 = (_QWORD *)sub_186B270(0x10u);
    v3 = v30 + 1;
    *v30 = 2;
    a1[15] = v30 + 1;
    v6 = v30 + 1;
    goto LABEL_5;
  }
  v3 = (_QWORD *)a1[15];
  v4 = 0;
  if ( !v3 )
    goto LABEL_24;
LABEL_3:
  v5 = *((unsigned int *)v3 - 1);
  if ( (_DWORD)v5 == *((_DWORD *)v3 - 2) )
  {
    v17 = (unsigned int)(3 * v5 + 1) >> 1;
    v18 = 4 * v17 + 8;
    if ( 4 * (int)v5 + 8 >= (unsigned int)v18 || (unsigned int)v5 >= v17 )
      goto LABEL_29;
    v19 = (unsigned int *)sub_186B300(v3 - 1, v18);
    v3 = v19 + 2;
    *v19 = v17;
    v20 = v19[1];
    a1[15] = v3;
    v6 = (_DWORD *)v3 + v20;
  }
  else
  {
    v6 = (_DWORD *)v3 + v5;
  }
LABEL_5:
  *v6 = v4;
  v7 = a1[19];
  ++*((_DWORD *)v3 - 1);
  if ( v7 )
  {
    v8 = (_QWORD *)a1[20];
    v9 = *(_DWORD *)(v7 - 4);
    if ( v8 )
      goto LABEL_7;
LABEL_26:
    v31 = (_QWORD *)sub_186B270(0x10u);
    v8 = v31 + 1;
    *v31 = 2;
    a1[20] = v31 + 1;
    v11 = v31 + 1;
    goto LABEL_9;
  }
  v8 = (_QWORD *)a1[20];
  v9 = 0;
  if ( !v8 )
    goto LABEL_26;
LABEL_7:
  v10 = *((unsigned int *)v8 - 1);
  if ( (_DWORD)v10 == *((_DWORD *)v8 - 2) )
  {
    v26 = (unsigned int)(3 * v10 + 1) >> 1;
    v27 = 4 * v26 + 8;
    if ( 4 * (int)v10 + 8 >= (unsigned int)v27 || (unsigned int)v10 >= v26 )
      goto LABEL_29;
    v28 = (unsigned int *)sub_186B300(v8 - 1, v27);
    v8 = v28 + 2;
    *v28 = v26;
    v29 = v28[1];
    a1[20] = v8;
    v11 = (_DWORD *)v8 + v29;
  }
  else
  {
    v11 = (_DWORD *)v8 + v10;
  }
LABEL_9:
  *v11 = v9;
  v12 = a1[24];
  ++*((_DWORD *)v8 - 1);
  if ( v12 )
  {
    v13 = (_QWORD *)a1[25];
    v14 = *(_DWORD *)(v12 - 4);
    if ( v13 )
      goto LABEL_11;
LABEL_28:
    v32 = (_QWORD *)sub_186B270(0x10u);
    v13 = v32 + 1;
    *v32 = 2;
    a1[25] = v32 + 1;
    result = v32 + 1;
    goto LABEL_13;
  }
  v13 = (_QWORD *)a1[25];
  v14 = 0;
  if ( !v13 )
    goto LABEL_28;
LABEL_11:
  v15 = *((unsigned int *)v13 - 1);
  if ( (_DWORD)v15 != *((_DWORD *)v13 - 2) )
  {
    result = (_DWORD *)v13 + v15;
LABEL_13:
    *result = v14;
    ++*((_DWORD *)v13 - 1);
    return result;
  }
  v21 = (unsigned int)(3 * v15 + 1) >> 1;
  v22 = 4 * v21 + 8;
  if ( 4 * (int)v15 + 8 >= (unsigned int)v22 || (unsigned int)v15 >= v21 )
  {
LABEL_29:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v34, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v34);
    sub_233E40((__int64)v34);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v23 = (unsigned int *)sub_186B300(v13 - 1, v22);
  *v23 = v21;
  v24 = v23 + 2;
  v25 = v23[1];
  a1[25] = v24;
  result = &v24[v25];
  *result = v14;
  ++*(v24 - 1);
  return result;
}

