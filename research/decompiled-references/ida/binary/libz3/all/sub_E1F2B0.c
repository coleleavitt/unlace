_DWORD *__fastcall sub_E1F2B0(_QWORD *a1)
{
  char **exception; // rbx
  __int64 v2; // rdx
  __int64 v4; // rax
  int v5; // ebp
  _QWORD *v6; // rdi
  __int64 v7; // rax
  _DWORD *result; // rax
  unsigned int v9; // r12d
  size_t v10; // rsi
  unsigned int *v11; // rax
  _DWORD *v12; // rdi
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = a1[13];
  if ( v4 )
    v5 = *(_DWORD *)(v4 - 4);
  else
    v5 = 0;
  (*(void (__fastcall **)(_QWORD *))(*a1 + 400LL))(a1);
  v6 = (_QWORD *)a1[14];
  if ( !v6 )
  {
    v14 = (_QWORD *)sub_186B270(0x10u);
    v6 = v14 + 1;
    *v14 = 2;
    a1[14] = v14 + 1;
    result = v14 + 1;
    goto LABEL_6;
  }
  v7 = *((unsigned int *)v6 - 1);
  if ( (_DWORD)v7 != *((_DWORD *)v6 - 2) )
  {
    result = (_DWORD *)v6 + v7;
LABEL_6:
    *result = v5;
    ++*((_DWORD *)v6 - 1);
    return result;
  }
  v9 = (unsigned int)(3 * v7 + 1) >> 1;
  v10 = 4 * v9 + 8;
  if ( 4 * (int)v7 + 8 >= (unsigned int)v10 || (unsigned int)v7 >= v9 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_180760(v15, "Overflow encountered when expanding vector", v2);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v15);
    sub_233E40((__int64)v15);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v11 = (unsigned int *)sub_186B300(v6 - 1, v10);
  *v11 = v9;
  v12 = v11 + 2;
  v13 = v11[1];
  a1[14] = v12;
  result = &v12[v13];
  *result = v5;
  ++*(v12 - 1);
  return result;
}

