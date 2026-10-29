_DWORD *__fastcall sub_B23840(__int64 a1)
{
  char **exception; // rbx
  __int64 v3; // rax
  _QWORD *v4; // rdi
  int v5; // r12d
  __int64 v6; // rax
  _DWORD *result; // rax
  unsigned int v8; // ebp
  size_t v9; // rsi
  unsigned int *v10; // rax
  _DWORD *v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14[7]; // [rsp+10h] [rbp-38h] BYREF

  sub_966D90(a1);
  v3 = *(_QWORD *)(a1 + 176);
  if ( v3 )
  {
    v4 = *(_QWORD **)(a1 + 184);
    v5 = *(_DWORD *)(v3 - 4);
    if ( v4 )
      goto LABEL_3;
LABEL_10:
    v13 = (_QWORD *)sub_186B270(0x10u);
    v4 = v13 + 1;
    *v13 = 2;
    *(_QWORD *)(a1 + 184) = v13 + 1;
    result = v13 + 1;
    goto LABEL_5;
  }
  v4 = *(_QWORD **)(a1 + 184);
  v5 = 0;
  if ( !v4 )
    goto LABEL_10;
LABEL_3:
  v6 = *((unsigned int *)v4 - 1);
  if ( (_DWORD)v6 != *((_DWORD *)v4 - 2) )
  {
    result = (_DWORD *)v4 + v6;
LABEL_5:
    *result = v5;
    ++*((_DWORD *)v4 - 1);
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
  v10 = (unsigned int *)sub_186B300(v4 - 1, v9);
  *v10 = v8;
  v11 = v10 + 2;
  v12 = v10[1];
  *(_QWORD *)(a1 + 184) = v11;
  result = &v11[v12];
  *result = v5;
  ++*(v11 - 1);
  return result;
}

