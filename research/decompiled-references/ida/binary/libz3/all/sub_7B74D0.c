void __fastcall sub_7B74D0(__int64 a1, unsigned int a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  _QWORD *v5; // rdi
  __int64 v6; // r12
  unsigned int v7; // ebx
  unsigned int v8; // r13d
  size_t v9; // rsi
  unsigned int *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // r12
  __int64 v13; // rdx
  char *v14; // rdi
  _QWORD *v15; // rax
  __int64 v16[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = *(_QWORD **)(a1 + 856);
  if ( v5 )
  {
    v6 = *((unsigned int *)v5 - 1);
    if ( a2 < (unsigned int)v6 )
      return;
    v7 = a2 + 1;
    if ( (unsigned int)v6 >= a2 + 1 )
    {
      *((_DWORD *)v5 - 1) = v7;
      return;
    }
  }
  else
  {
    v7 = a2 + 1;
    if ( a2 == -1 )
      return;
    v6 = 0;
    v15 = (_QWORD *)sub_186B270(0x10u);
    v5 = v15 + 1;
    *v15 = 2;
    *(_QWORD *)(a1 + 856) = v15 + 1;
  }
  while ( 1 )
  {
    v11 = *((_DWORD *)v5 - 2);
    if ( v11 >= v7 )
      break;
    v8 = (3 * v11 + 1) >> 1;
    v9 = 4 * v8 + 8;
    if ( 4 * v11 + 8 >= (unsigned int)v9 || v11 >= v8 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_113C8C(v16, "Overflow encountered when expanding vector", v3);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v16);
      sub_233E40((__int64)v16);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v10 = (unsigned int *)sub_186B300(v5 - 1, v9);
    v5 = v10 + 2;
    *v10 = v8;
    *(_QWORD *)(a1 + 856) = v10 + 2;
  }
  v12 = 4 * v6;
  *((_DWORD *)v5 - 1) = v7;
  v13 = 4LL * v7;
  v14 = (char *)v5 + v12;
  if ( v12 != v13 )
    memset(v14, 0, v13 - v12);
}

