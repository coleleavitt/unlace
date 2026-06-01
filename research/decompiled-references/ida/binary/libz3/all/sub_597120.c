_DWORD *__fastcall sub_597120(__int64 a1, int a2)
{
  char **exception; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rax
  _DWORD *result; // rax
  unsigned int v8; // ebp
  size_t v9; // rsi
  unsigned int *v10; // rax
  _DWORD *v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14[7]; // [rsp+10h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 8) = a2;
  v5 = *(_QWORD **)(a1 + 48);
  if ( !v5 )
  {
    v13 = (_QWORD *)sub_186B270(0x10u);
    v5 = v13 + 1;
    *v13 = 2;
    *(_QWORD *)(a1 + 48) = v13 + 1;
    result = v13 + 1;
    goto LABEL_4;
  }
  v6 = *((unsigned int *)v5 - 1);
  if ( (_DWORD)v6 != *((_DWORD *)v5 - 2) )
  {
    result = (_DWORD *)v5 + v6;
LABEL_4:
    *result = a2;
    ++*((_DWORD *)v5 - 1);
    return result;
  }
  v8 = (unsigned int)(3 * v6 + 1) >> 1;
  v9 = 4 * v8 + 8;
  if ( 4 * (int)v6 + 8 >= (unsigned int)v9 || (unsigned int)v6 >= v8 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v14, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v14);
    sub_233E40((__int64)v14);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v10 = (unsigned int *)sub_186B300(v5 - 1, v9);
  *v10 = v8;
  v11 = v10 + 2;
  v12 = v10[1];
  *(_QWORD *)(a1 + 48) = v11;
  result = &v11[v12];
  *result = a2;
  ++*(v11 - 1);
  return result;
}

