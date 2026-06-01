void *__fastcall sub_4DF0F0(__int64 a1, unsigned int a2, void *a3)
{
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // r15
  unsigned int v7; // r13d
  unsigned int v8; // edx
  size_t v9; // rsi
  unsigned int v10; // r14d
  unsigned int *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rbp
  void **v16; // rbx
  void *v17; // r13
  void *v18; // rdi
  __int64 (__fastcall *v19)(void (__fastcall ***)(_QWORD)); // rdx
  _QWORD *v21; // rax
  char **v22; // rbx
  void *exception; // rbx
  __int64 v25[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = a2;
  v5 = *(_QWORD **)(a1 + 8);
  if ( !v5 )
  {
    if ( a2 != -1 )
    {
      v7 = a2 + 1;
      v6 = 0;
      v21 = (_QWORD *)sub_186B270(0x18u);
      v5 = v21 + 1;
      *v21 = 2;
      *(_QWORD *)(a1 + 8) = v21 + 1;
      goto LABEL_8;
    }
LABEL_20:
    exception = __cxa_allocate_exception(0x10u);
    sub_186AE40(exception);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'out_of_memory_error, (void (*)(void *))sub_4DD990);
  }
  v6 = *((unsigned int *)v5 - 1);
  if ( a2 < (unsigned int)v6 )
    goto LABEL_11;
  if ( a2 == -1 )
    goto LABEL_20;
  v7 = a2 + 1;
LABEL_8:
  while ( 1 )
  {
    v12 = *((_DWORD *)v5 - 2);
    if ( v12 >= v7 )
      break;
    v8 = (3 * v12 + 1) >> 1;
    v9 = 8 * v8 + 8;
    v10 = v8;
    if ( 8 * v12 + 8 >= (unsigned int)v9 || v12 >= v8 )
    {
      v22 = (char **)__cxa_allocate_exception(0x28u);
      sub_4D9940(v25, "Overflow encountered when expanding vector");
      *v22 = (char *)off_1C63128;
      sub_2333C0(v22 + 1, v25);
      sub_233E40((__int64)v25);
      __cxa_throw(v22, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v11 = (unsigned int *)sub_186B300(v5 - 1, v9);
    v5 = v11 + 2;
    *v11 = v10;
    *(_QWORD *)(a1 + 8) = v11 + 2;
  }
  v13 = 8 * v6;
  *((_DWORD *)v5 - 1) = v7;
  v14 = 8LL * v7;
  if ( v13 != v14 )
    memset(&v5[(unsigned __int64)v13 / 8], 0, v14 - v13);
LABEL_11:
  v15 = v4;
  v16 = (void **)&v5[v15];
  v17 = *v16;
  if ( *v16 )
  {
    v18 = *v16;
    v19 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v17 + 16LL);
    if ( v19 == sub_4C9C10 )
    {
      (**(void (__fastcall ***)(void *))v17)(v18);
      sub_186B220(v17);
    }
    else
    {
      v19((void (__fastcall ***)(_QWORD))v18);
    }
    v16 = (void **)(v15 * 8 + *(_QWORD *)(a1 + 8));
  }
  *v16 = a3;
  return a3;
}

