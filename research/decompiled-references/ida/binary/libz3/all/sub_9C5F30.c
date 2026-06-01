__int64 __fastcall sub_9C5F30(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // r14
  unsigned int v6; // r12d
  unsigned int v7; // edx
  size_t v8; // rsi
  unsigned int v9; // r15d
  unsigned int *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rdx
  _QWORD *v15; // rax
  char **exception; // rbx
  __int64 v18[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = a2;
  v4 = *(_QWORD **)(a1 + 776);
  if ( v4 )
  {
    v5 = *((unsigned int *)v4 - 1);
    if ( a2 < (unsigned int)v5 )
      goto LABEL_11;
    v6 = a2 + 1;
    if ( (unsigned int)v5 >= a2 + 1 )
    {
      *((_DWORD *)v4 - 1) = v6;
      goto LABEL_11;
    }
  }
  else
  {
    v6 = a2 + 1;
    if ( a2 == -1 )
      goto LABEL_11;
    v5 = 0;
    v15 = (_QWORD *)sub_186B270(0x18u);
    v4 = v15 + 1;
    *v15 = 2;
    *(_QWORD *)(a1 + 776) = v15 + 1;
  }
  while ( 1 )
  {
    v11 = *((_DWORD *)v4 - 2);
    if ( v11 >= v6 )
      break;
    v7 = (3 * v11 + 1) >> 1;
    v8 = 8 * v7 + 8;
    v9 = v7;
    if ( 8 * v11 + 8 >= (unsigned int)v8 || v11 >= v7 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_98B3B0(v18, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v18);
      sub_233E40((__int64)v18);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v10 = (unsigned int *)sub_186B300(v4 - 1, v8);
    v4 = v10 + 2;
    *v10 = v9;
    *(_QWORD *)(a1 + 776) = v10 + 2;
  }
  v12 = 8 * v5;
  *((_DWORD *)v4 - 1) = v6;
  v13 = 8LL * v6;
  if ( v12 != v13 )
    memset(&v4[(unsigned __int64)v12 / 8], 0, v13 - v12);
LABEL_11:
  v4[v3] = a3;
  return a3;
}

