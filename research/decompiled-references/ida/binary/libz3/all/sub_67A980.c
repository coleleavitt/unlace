__int64 __fastcall sub_67A980(__int64 a1, unsigned int *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // r13
  unsigned int v5; // eax
  unsigned int v6; // r12d
  unsigned int v7; // edx
  size_t v8; // rsi
  unsigned int v9; // r14d
  unsigned int *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r14
  _DWORD *v14; // rdx
  __int64 result; // rax
  _QWORD *v16; // rax
  char **exception; // rbx
  __int64 v18; // rdx
  unsigned int v19; // [rsp+Ch] [rbp-5Ch]
  __int64 v20[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = *(_QWORD **)(a1 + 160);
  v4 = *a2;
  if ( v3 )
  {
    v5 = *((_DWORD *)v3 - 1);
    v19 = v5;
    if ( (unsigned int)v4 < v5 )
      goto LABEL_11;
    v6 = v4 + 1;
    if ( v5 >= (int)v4 + 1 )
    {
      *((_DWORD *)v3 - 1) = v6;
      goto LABEL_11;
    }
  }
  else
  {
    v6 = v4 + 1;
    if ( (_DWORD)v4 == -1 )
      goto LABEL_11;
    v16 = (_QWORD *)sub_186B270(0x10u);
    v19 = 0;
    v3 = v16 + 1;
    *v16 = 2;
    *(_QWORD *)(a1 + 160) = v16 + 1;
  }
  while ( 1 )
  {
    v11 = *((_DWORD *)v3 - 2);
    if ( v11 >= v6 )
      break;
    v7 = (3 * v11 + 1) >> 1;
    v8 = 4 * v7 + 8;
    v9 = v7;
    if ( 4 * v11 + 8 >= (unsigned int)v8 || v11 >= v7 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_107EF6(v20, "Overflow encountered when expanding vector", v18);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v20);
      sub_233E40((__int64)v20);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v10 = (unsigned int *)sub_186B300(v3 - 1, v8);
    v3 = v10 + 2;
    *v10 = v9;
    *(_QWORD *)(a1 + 160) = v10 + 2;
  }
  *((_DWORD *)v3 - 1) = v6;
  v12 = 4LL * v6;
  v13 = 4LL * v19;
  if ( v13 != v12 )
    memset((char *)v3 + v13, 0, v12 - v13);
LABEL_11:
  v14 = (_DWORD *)v3 + v4;
  result = (unsigned int)*v14;
  *v14 = result + 1;
  if ( !(_DWORD)result )
  {
    ++a2[2];
    v20[0] = (__int64)a2;
    return sub_675F80((_QWORD *)(a1 + 56), v20);
  }
  return result;
}

