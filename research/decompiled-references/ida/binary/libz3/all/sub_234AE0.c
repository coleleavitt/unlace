_DWORD *__fastcall sub_234AE0(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  int v4; // r12d
  __int64 v5; // rax
  _DWORD *result; // rax
  unsigned int v7; // ebp
  size_t v8; // rsi
  unsigned int *v9; // rax
  _DWORD *v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rax
  char **exception; // rbx
  __int64 v14; // rdx
  __int64 v15[7]; // [rsp+0h] [rbp-38h] BYREF

  sub_13A33F0(a1 + 32);
  v2 = *(_QWORD *)(a1 + 608);
  if ( v2 )
  {
    v3 = *(_QWORD **)(a1 + 616);
    v4 = *(_DWORD *)(v2 - 4);
    if ( v3 )
      goto LABEL_3;
LABEL_10:
    v12 = (_QWORD *)sub_186B270(0x10u);
    v3 = v12 + 1;
    *v12 = 2;
    *(_QWORD *)(a1 + 616) = v12 + 1;
    result = v12 + 1;
    goto LABEL_5;
  }
  v3 = *(_QWORD **)(a1 + 616);
  v4 = 0;
  if ( !v3 )
    goto LABEL_10;
LABEL_3:
  v5 = *((unsigned int *)v3 - 1);
  if ( (_DWORD)v5 != *((_DWORD *)v3 - 2) )
  {
    result = (_DWORD *)v3 + v5;
LABEL_5:
    *result = v4;
    ++*((_DWORD *)v3 - 1);
    return result;
  }
  v7 = (unsigned int)(3 * v5 + 1) >> 1;
  v8 = 4 * v7 + 8;
  if ( 4 * (int)v5 + 8 >= (unsigned int)v8 || (unsigned int)v5 >= v7 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_A3E10(v15, "Overflow encountered when expanding vector", v14);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v15);
    sub_233E40((__int64)v15);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v9 = (unsigned int *)sub_186B300(v3 - 1, v8);
  *v9 = v7;
  v10 = v9 + 2;
  v11 = v9[1];
  *(_QWORD *)(a1 + 616) = v10;
  result = &v10[v11];
  *result = v4;
  ++*(v10 - 1);
  return result;
}

