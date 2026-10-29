_DWORD *__fastcall sub_9C8250(__int64 a1, int a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax
  _DWORD *result; // rax
  unsigned int v7; // ebp
  size_t v8; // rsi
  unsigned int *v9; // rax
  _DWORD *v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rax
  char **exception; // rbx
  __int64 v14[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_QWORD **)(a1 + 120);
  if ( !v4 )
  {
    v12 = (_QWORD *)sub_186B270(0x10u);
    v4 = v12 + 1;
    *v12 = 2;
    *(_QWORD *)(a1 + 120) = v12 + 1;
    result = v12 + 1;
    goto LABEL_4;
  }
  v5 = *((unsigned int *)v4 - 1);
  if ( (_DWORD)v5 != *((_DWORD *)v4 - 2) )
  {
    result = (_DWORD *)v4 + v5;
LABEL_4:
    *result = a2;
    ++*((_DWORD *)v4 - 1);
    return result;
  }
  v7 = (unsigned int)(3 * v5 + 1) >> 1;
  v8 = 4 * v7 + 8;
  if ( 4 * (int)v5 + 8 >= (unsigned int)v8 || (unsigned int)v5 >= v7 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_98B3B0(v14, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v14);
    sub_233E40((__int64)v14);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v9 = (unsigned int *)sub_186B300(v4 - 1, v8);
  *v9 = v7;
  v10 = v9 + 2;
  v11 = v9[1];
  *(_QWORD *)(a1 + 120) = v10;
  result = &v10[v11];
  *result = a2;
  ++*(v10 - 1);
  return result;
}

