__int64 __fastcall sub_BD0180(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  _QWORD *v3; // rdi
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 result; // rax
  _QWORD *v7; // rdx
  unsigned int v8; // ebp
  size_t v9; // rsi
  unsigned int *v10; // rax
  __int64 v11; // rdx
  _DWORD *v12; // rdi
  _QWORD *v13; // rax
  char **exception; // rbx
  __int64 v15; // rdx
  __int64 v16[7]; // [rsp+0h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD **)(v1 + 1176);
  if ( !v3 )
  {
    v13 = (_QWORD *)sub_186B270(0x18u);
    v3 = v13 + 1;
    *v13 = 2;
    result = 1;
    *(_QWORD *)(v1 + 1176) = v3;
    v7 = v3;
    goto LABEL_4;
  }
  v4 = *((_DWORD *)v3 - 1);
  if ( v4 != *((_DWORD *)v3 - 2) )
  {
    v5 = v4;
    result = v4 + 1;
    v7 = &v3[v5];
LABEL_4:
    *v7 = v2;
    *((_DWORD *)v3 - 1) = result;
    return result;
  }
  v8 = (3 * v4 + 1) >> 1;
  v9 = 8 * v8 + 8;
  if ( 8 * v4 + 8 >= (unsigned int)v9 || v4 >= v8 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_154526(v16, "Overflow encountered when expanding vector", v15);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v16);
    sub_233E40((__int64)v16);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v10 = (unsigned int *)sub_186B300(v3 - 1, v9);
  v11 = v10[1];
  v12 = v10 + 2;
  *(_QWORD *)(v1 + 1176) = v10 + 2;
  *v10 = v8;
  result = (unsigned int)(v11 + 1);
  *(_QWORD *)&v12[2 * v11] = v2;
  *(v12 - 1) = result;
  return result;
}

