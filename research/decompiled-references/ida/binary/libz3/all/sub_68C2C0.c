__int64 __fastcall sub_68C2C0(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 result; // rax
  _QWORD *v8; // rdx
  unsigned int v9; // r12d
  size_t v10; // rsi
  unsigned int *v11; // rax
  __int64 v12; // rdx
  _DWORD *v13; // rdi
  _QWORD *v14; // rax
  char **exception; // rbx
  __int64 v16; // rdx
  __int64 v17[7]; // [rsp+0h] [rbp-38h] BYREF

  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v4 = *(_QWORD **)(a1 + 136);
  if ( !v4 )
  {
    v14 = (_QWORD *)sub_186B270(0x18u);
    v4 = v14 + 1;
    *v14 = 2;
    result = 1;
    *(_QWORD *)(a1 + 136) = v4;
    v8 = v4;
    goto LABEL_6;
  }
  v5 = *((_DWORD *)v4 - 1);
  if ( v5 != *((_DWORD *)v4 - 2) )
  {
    v6 = v5;
    result = v5 + 1;
    v8 = &v4[v6];
LABEL_6:
    *v8 = a2;
    *((_DWORD *)v4 - 1) = result;
    return result;
  }
  v9 = (3 * v5 + 1) >> 1;
  v10 = 8 * v9 + 8;
  if ( 8 * v5 + 8 >= (unsigned int)v10 || v5 >= v9 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_10810A(v17, "Overflow encountered when expanding vector", v16);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v17);
    sub_233E40((__int64)v17);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v11 = (unsigned int *)sub_186B300(v4 - 1, v10);
  v12 = v11[1];
  *v11 = v9;
  v13 = v11 + 2;
  *(_QWORD *)(a1 + 136) = v11 + 2;
  result = (unsigned int)(v12 + 1);
  *(_QWORD *)&v13[2 * v12] = a2;
  *(v13 - 1) = result;
  return result;
}

