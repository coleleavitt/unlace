_DWORD *__fastcall sub_BDFAB0(__int64 a1, int a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 v6; // r13
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // r12
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  _QWORD *v14; // rdi
  __int64 v15; // rax
  _DWORD *result; // rax
  unsigned int v17; // r14d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned int v22; // r12d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(a1 + 16);
  v7 = (_QWORD *)sub_180C100(v6 + 8400, 16);
  v8 = *(_QWORD **)(v6 + 9456);
  v9 = v7;
  *v7 = off_1C56018;
  v7[1] = a1 + 64;
  if ( v8 )
  {
    v10 = *((_DWORD *)v8 - 1);
    if ( v10 == *((_DWORD *)v8 - 2) )
    {
      v17 = (3 * v10 + 1) >> 1;
      v18 = 8 * v17 + 8;
      if ( 8 * v10 + 8 >= (unsigned int)v18 || v10 >= v17 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v27, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v27);
        sub_233E40((__int64)v27);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v19 = (unsigned int *)sub_186B300(v8 - 1, v18);
      v14 = *(_QWORD **)(a1 + 64);
      v20 = v19[1];
      *(_QWORD *)(v6 + 9456) = v19 + 2;
      *v19 = v17;
      *(_QWORD *)&v19[2 * v20 + 2] = v9;
      v19[1] = v20 + 1;
      if ( v14 )
        goto LABEL_5;
LABEL_11:
      v21 = (_QWORD *)sub_186B270(0x10u);
      v14 = v21 + 1;
      *v21 = 2;
      *(_QWORD *)(a1 + 64) = v21 + 1;
      result = v21 + 1;
      goto LABEL_7;
    }
    v11 = v10;
    v12 = v10 + 1;
    v13 = &v8[v11];
  }
  else
  {
    v26 = (_QWORD *)sub_186B270(0x18u);
    v8 = v26 + 1;
    *v26 = 2;
    v12 = 1;
    *(_QWORD *)(v6 + 9456) = v8;
    v13 = v8;
  }
  v14 = *(_QWORD **)(a1 + 64);
  *v13 = v9;
  *((_DWORD *)v8 - 1) = v12;
  if ( !v14 )
    goto LABEL_11;
LABEL_5:
  v15 = *((unsigned int *)v14 - 1);
  if ( (_DWORD)v15 == *((_DWORD *)v14 - 2) )
  {
    v22 = (unsigned int)(3 * v15 + 1) >> 1;
    v23 = 4 * v22 + 8;
    if ( 4 * (int)v15 + 8 >= (unsigned int)v23 || (unsigned int)v15 >= v22 )
    {
      v2 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v27, "Overflow encountered when expanding vector");
      *v2 = (char *)off_1C63128;
      sub_2333C0(v2 + 1, v27);
      sub_233E40((__int64)v27);
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v24 = (unsigned int *)sub_186B300(v14 - 1, v23);
    v14 = v24 + 2;
    *v24 = v22;
    v25 = v24[1];
    *(_QWORD *)(a1 + 64) = v14;
    result = (_DWORD *)v14 + v25;
  }
  else
  {
    result = (_DWORD *)v14 + v15;
  }
LABEL_7:
  *result = a2;
  ++*((_DWORD *)v14 - 1);
  return result;
}

