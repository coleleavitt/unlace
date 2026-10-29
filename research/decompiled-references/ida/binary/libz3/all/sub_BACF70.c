__int64 __fastcall sub_BACF70(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rdi
  _DWORD *v17; // rbx
  __int64 v18; // r13
  int v19; // eax
  unsigned int v21; // ebp
  size_t v22; // rsi
  unsigned int *v23; // rax
  unsigned int v24; // eax
  __int64 v25; // r13
  unsigned int v26; // ebp
  size_t v27; // rsi
  unsigned int *v28; // rax
  unsigned int v29; // eax
  _QWORD *v30; // rax
  char **exception; // rbp
  __int64 v32[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = a1 + 24;
  v8 = sub_163B390(a1 + 24, 97);
  v9 = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v10 = *a3;
  if ( *a3 )
  {
    v11 = a3[1];
    v12 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v11, v10);
  }
  *a3 = v9;
  v13 = sub_163B390(v4, 98);
  v14 = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v15 = *a4;
  if ( *a4 )
  {
    v16 = a4[1];
    v12 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v16, v15);
  }
  *a4 = v14;
  v17 = *(_DWORD **)(a1 + 160);
  if ( v17 )
  {
    v18 = (unsigned int)*(v17 - 1);
    if ( (unsigned int)v18 > 3 )
    {
      v19 = v17[3] | 2;
      v17[3] = v19;
      goto LABEL_14;
    }
  }
  else
  {
    v18 = 0;
    v30 = (_QWORD *)sub_186B270(0x10u);
    v17 = v30 + 1;
    *v30 = 2;
    *(_QWORD *)(a1 + 160) = v30 + 1;
  }
  while ( 1 )
  {
    v24 = *(v17 - 2);
    if ( v24 > 3 )
      break;
    v21 = (3 * v24 + 1) >> 1;
    v22 = 4 * v21 + 8;
    if ( 4 * v24 + 8 >= (unsigned int)v22 || v24 >= v21 )
    {
LABEL_27:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v32, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v32);
      sub_233E40((__int64)v32);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v23 = (unsigned int *)sub_186B300(v17 - 2, v22);
    v17 = v23 + 2;
    *v23 = v21;
    *(_QWORD *)(a1 + 160) = v23 + 2;
  }
  *(v17 - 1) = 4;
  memset(&v17[v18], 0, 16 - 4 * v18);
  v25 = (unsigned int)*(v17 - 1);
  v19 = v17[3] | 2;
  v17[3] = v19;
  if ( (unsigned int)v25 <= 3 )
  {
    while ( 1 )
    {
      v29 = *(v17 - 2);
      if ( v29 > 3 )
        break;
      v26 = (3 * v29 + 1) >> 1;
      v27 = 4 * v26 + 8;
      if ( 4 * v29 + 8 >= (unsigned int)v27 || v29 >= v26 )
        goto LABEL_27;
      v28 = (unsigned int *)sub_186B300(v17 - 2, v27);
      v17 = v28 + 2;
      *v28 = v26;
      *(_QWORD *)(a1 + 160) = v28 + 2;
    }
    *(v17 - 1) = 4;
    memset(&v17[v25], 0, 16 - 4 * v25);
    v19 = v17[3];
  }
LABEL_14:
  v17[3] = v19 | 4;
  return 1;
}

