_DWORD *__fastcall sub_A1E0A0(_QWORD *a1, int a2, __int64 a3, char a4)
{
  _QWORD *v8; // rdi
  __int64 v9; // rax
  _DWORD *result; // rax
  unsigned int v11; // r14d
  size_t v12; // rsi
  unsigned int *v13; // rax
  _DWORD *v14; // rdi
  __int64 v15; // rax
  _QWORD *v16; // rax
  char **exception; // rbx
  __int64 v18[9]; // [rsp+0h] [rbp-48h] BYREF

  v8 = (_QWORD *)*a1;
  if ( !v8 )
  {
    v16 = (_QWORD *)sub_186B270(0x10u);
    v8 = v16 + 1;
    *v16 = 2;
    *a1 = v16 + 1;
    result = v16 + 1;
LABEL_4:
    *result = a2;
    ++*((_DWORD *)v8 - 1);
    if ( !a4 )
      return result;
    return (_DWORD *)sub_98D840(a1 + 2, a3);
  }
  v9 = *((unsigned int *)v8 - 1);
  if ( (_DWORD)v9 != *((_DWORD *)v8 - 2) )
  {
    result = (_DWORD *)v8 + v9;
    goto LABEL_4;
  }
  v11 = (unsigned int)(3 * v9 + 1) >> 1;
  v12 = 4 * v11 + 8;
  if ( 4 * (int)v9 + 8 >= (unsigned int)v12 || (unsigned int)v9 >= v11 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_98B3B0(v18, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v18);
    sub_233E40((__int64)v18);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v13 = (unsigned int *)sub_186B300(v8 - 1, v12);
  v14 = v13 + 2;
  *v13 = v11;
  v15 = v13[1];
  *a1 = v14;
  result = &v14[v15];
  *result = a2;
  ++*(v14 - 1);
  if ( a4 )
    return (_DWORD *)sub_98D840(a1 + 2, a3);
  return result;
}

