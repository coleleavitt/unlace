void __fastcall sub_9CB4A0(__int64 a1, unsigned int a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // r12
  unsigned int v5; // ebx
  unsigned int v6; // r13d
  size_t v7; // rsi
  unsigned int *v8; // rax
  unsigned int v9; // eax
  __int64 v10; // r12
  __int64 v11; // rdx
  char *v12; // rdi
  _QWORD *v13; // rax
  char **exception; // rbx
  __int64 v15[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *(_QWORD **)(a1 + 8);
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( a2 < (unsigned int)v4 )
      return;
    v5 = a2 + 1;
    if ( (unsigned int)v4 >= a2 + 1 )
    {
      *((_DWORD *)v3 - 1) = v5;
      return;
    }
  }
  else
  {
    v5 = a2 + 1;
    if ( a2 == -1 )
      return;
    v4 = 0;
    v13 = (_QWORD *)sub_186B270(0x10u);
    v3 = v13 + 1;
    *v13 = 2;
    *(_QWORD *)(a1 + 8) = v13 + 1;
  }
  while ( 1 )
  {
    v9 = *((_DWORD *)v3 - 2);
    if ( v9 >= v5 )
      break;
    v6 = (3 * v9 + 1) >> 1;
    v7 = 4 * v6 + 8;
    if ( 4 * v9 + 8 >= (unsigned int)v7 || v9 >= v6 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_98B3B0(v15, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v15);
      sub_233E40((__int64)v15);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v8 = (unsigned int *)sub_186B300(v3 - 1, v7);
    v3 = v8 + 2;
    *v8 = v6;
    *(_QWORD *)(a1 + 8) = v8 + 2;
  }
  v10 = 4 * v4;
  *((_DWORD *)v3 - 1) = v5;
  v11 = 4LL * v5;
  v12 = (char *)v3 + v10;
  if ( v10 != v11 )
    memset(v12, 0, v11 - v10);
}

