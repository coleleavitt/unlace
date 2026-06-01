__int64 __fastcall sub_4479D0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  _QWORD *v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 result; // rax
  _QWORD *v9; // rdx
  unsigned int v10; // r12d
  size_t v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // rdx
  _DWORD *v14; // rdi
  _QWORD *v15; // rax
  __int64 v16[7]; // [rsp+10h] [rbp-38h] BYREF

  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v5 = *(_QWORD **)(a1 + 96);
  if ( !v5 )
  {
    v15 = (_QWORD *)sub_186B270(0x18u);
    v5 = v15 + 1;
    *v15 = 2;
    result = 1;
    *(_QWORD *)(a1 + 96) = v5;
    v9 = v5;
    goto LABEL_6;
  }
  v6 = *((_DWORD *)v5 - 1);
  if ( v6 != *((_DWORD *)v5 - 2) )
  {
    v7 = v6;
    result = v6 + 1;
    v9 = &v5[v7];
LABEL_6:
    *v9 = a2;
    *((_DWORD *)v5 - 1) = result;
    return result;
  }
  v10 = (3 * v6 + 1) >> 1;
  v11 = 8 * v10 + 8;
  if ( 8 * v6 + 8 >= (unsigned int)v11 || v6 >= v10 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v16, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v16);
    sub_233E40((__int64)v16);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v12 = (unsigned int *)sub_186B300(v5 - 1, v11);
  v13 = v12[1];
  *v12 = v10;
  v14 = v12 + 2;
  *(_QWORD *)(a1 + 96) = v12 + 2;
  result = (unsigned int)(v13 + 1);
  *(_QWORD *)&v14[2 * v13] = a2;
  *(v14 - 1) = result;
  return result;
}

