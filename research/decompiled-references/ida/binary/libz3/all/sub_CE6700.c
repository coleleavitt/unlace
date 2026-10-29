__int64 __fastcall sub_CE6700(__int64 a1, __int64 a2, int a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  _DWORD *v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 result; // rax
  _DWORD *v11; // rdx
  unsigned int v12; // r12d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rdx
  _DWORD *v16; // rdi
  _QWORD *v17; // rax
  __int64 v18[7]; // [rsp+0h] [rbp-38h] BYREF

  v7 = *(_DWORD **)(a1 + 96);
  if ( !v7 )
  {
    v17 = (_QWORD *)sub_186B270(0x10u);
    v7 = v17 + 1;
    *v17 = 2;
    result = 1;
    *(_QWORD *)(a1 + 96) = v7;
    v11 = v7;
    goto LABEL_4;
  }
  v8 = *(v7 - 1);
  if ( v8 != *(v7 - 2) )
  {
    v9 = v8;
    result = v8 + 1;
    v11 = &v7[v9];
LABEL_4:
    *v11 = a3;
    *(v7 - 1) = result;
    return result;
  }
  v12 = (3 * v8 + 1) >> 1;
  v13 = 4 * v12 + 8;
  if ( 4 * v8 + 8 >= (unsigned int)v13 || v8 >= v12 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_1643DA(v18, "Overflow encountered when expanding vector", v4);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v18);
    sub_233E40((__int64)v18);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v14 = (unsigned int *)sub_186B300(v7 - 2, v13);
  v15 = v14[1];
  *v14 = v12;
  v16 = v14 + 2;
  *(_QWORD *)(a1 + 96) = v14 + 2;
  result = (unsigned int)(v15 + 1);
  v16[v15] = a3;
  *(v16 - 1) = result;
  return result;
}

