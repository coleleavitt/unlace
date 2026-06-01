_DWORD *__fastcall sub_CCED90(__int64 a1)
{
  char **exception; // rbx
  __int64 v2; // rdx
  __int64 v4; // rax
  _QWORD *v5; // rdi
  int v6; // r12d
  __int64 v7; // rax
  _DWORD *result; // rax
  unsigned int v9; // ebp
  size_t v10; // rsi
  unsigned int *v11; // rax
  _DWORD *v12; // rdi
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
  {
    v5 = *(_QWORD **)(a1 + 64);
    v6 = *(_DWORD *)(v4 - 4);
    if ( v5 )
      goto LABEL_3;
LABEL_10:
    v14 = (_QWORD *)sub_186B270(0x10u);
    v5 = v14 + 1;
    *v14 = 2;
    *(_QWORD *)(a1 + 64) = v14 + 1;
    result = v14 + 1;
    goto LABEL_5;
  }
  v5 = *(_QWORD **)(a1 + 64);
  v6 = 0;
  if ( !v5 )
    goto LABEL_10;
LABEL_3:
  v7 = *((unsigned int *)v5 - 1);
  if ( (_DWORD)v7 != *((_DWORD *)v5 - 2) )
  {
    result = (_DWORD *)v5 + v7;
LABEL_5:
    *result = v6;
    ++*((_DWORD *)v5 - 1);
    return result;
  }
  v9 = (unsigned int)(3 * v7 + 1) >> 1;
  v10 = 4 * v9 + 8;
  if ( 4 * (int)v7 + 8 >= (unsigned int)v10 || (unsigned int)v7 >= v9 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_163D96(v15, "Overflow encountered when expanding vector", v2);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v15);
    sub_233E40((__int64)v15);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v11 = (unsigned int *)sub_186B300(v5 - 1, v10);
  *v11 = v9;
  v12 = v11 + 2;
  v13 = v11[1];
  *(_QWORD *)(a1 + 64) = v12;
  result = &v12[v13];
  *result = v6;
  ++*(v12 - 1);
  return result;
}

