int *__fastcall sub_A202E0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v6; // r12
  int v7; // edx
  char v8; // al
  _QWORD *v9; // rdi
  int v10; // r13d
  __int64 v11; // rax
  int *result; // rax
  unsigned int v13; // r14d
  size_t v14; // rsi
  unsigned int *v15; // rax
  _DWORD *v16; // rdi
  _QWORD *v17; // rax
  char **exception; // rbx
  __int64 v19[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(_QWORD **)(a2 + 8);
  v7 = *(_DWORD *)(a1 + 116);
  v8 = *(_BYTE *)(a1 + 216) >> 2;
  v9 = (_QWORD *)*v6;
  v10 = !(v8 & 1) + 2 * v7;
  if ( !*v6 )
  {
    v17 = (_QWORD *)sub_186B270(0x10u);
    v9 = v17 + 1;
    *v17 = 2;
    *v6 = v17 + 1;
    result = (int *)(v17 + 1);
LABEL_4:
    *result = v10;
    ++*((_DWORD *)v9 - 1);
    if ( !a4 )
      return result;
    return (int *)sub_98D840(v6 + 2, a3);
  }
  v11 = *((unsigned int *)v9 - 1);
  if ( (_DWORD)v11 != *((_DWORD *)v9 - 2) )
  {
    result = (int *)v9 + v11;
    goto LABEL_4;
  }
  v13 = (unsigned int)(3 * v11 + 1) >> 1;
  v14 = 4 * v13 + 8;
  if ( 4 * (int)v11 + 8 >= (unsigned int)v14 || (unsigned int)v11 >= v13 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_98B3B0(v19, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v19);
    sub_233E40((__int64)v19);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v15 = (unsigned int *)sub_186B300(v9 - 1, v14);
  v16 = v15 + 2;
  *v6 = v15 + 2;
  *v15 = v13;
  result = (int *)&v15[v15[1] + 2];
  *result = v10;
  ++*(v16 - 1);
  if ( a4 )
    return (int *)sub_98D840(v6 + 2, a3);
  return result;
}

