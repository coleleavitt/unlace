__int64 __fastcall sub_7A15C0(__int64 a1, unsigned int a2, __int64 a3)
{
  char **exception; // rbx
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // r14
  unsigned int v7; // r12d
  unsigned int v8; // edx
  size_t v9; // rsi
  unsigned int v10; // r15d
  unsigned int *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rdx
  _QWORD *v16; // rax
  __int64 v18[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a2;
  v5 = *(_QWORD **)(a1 + 2328);
  if ( v5 )
  {
    v6 = *((unsigned int *)v5 - 1);
    if ( a2 < (unsigned int)v6 )
      goto LABEL_11;
    v7 = a2 + 1;
    if ( (unsigned int)v6 >= a2 + 1 )
    {
      *((_DWORD *)v5 - 1) = v7;
      goto LABEL_11;
    }
  }
  else
  {
    v7 = a2 + 1;
    if ( a2 == -1 )
      goto LABEL_11;
    v6 = 0;
    v16 = (_QWORD *)sub_186B270(0x18u);
    v5 = v16 + 1;
    *v16 = 2;
    *(_QWORD *)(a1 + 2328) = v16 + 1;
  }
  while ( 1 )
  {
    v12 = *((_DWORD *)v5 - 2);
    if ( v12 >= v7 )
      break;
    v8 = (3 * v12 + 1) >> 1;
    v9 = 8 * v8 + 8;
    v10 = v8;
    if ( 8 * v12 + 8 >= (unsigned int)v9 || v12 >= v8 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v18, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v18);
      sub_233E40((__int64)v18);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v11 = (unsigned int *)sub_186B300(v5 - 1, v9);
    v5 = v11 + 2;
    *v11 = v10;
    *(_QWORD *)(a1 + 2328) = v11 + 2;
  }
  v13 = 8 * v6;
  *((_DWORD *)v5 - 1) = v7;
  v14 = 8LL * v7;
  if ( v13 != v14 )
    memset(&v5[(unsigned __int64)v13 / 8], 0, v14 - v13);
LABEL_11:
  v5[v4] = a3;
  return a3;
}

