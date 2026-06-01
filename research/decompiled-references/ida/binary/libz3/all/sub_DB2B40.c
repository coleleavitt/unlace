__int64 __fastcall sub_DB2B40(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char **exception; // rbx
  _DWORD *v7; // rbx
  __int64 v8; // r13
  unsigned int v9; // edx
  size_t v10; // rsi
  unsigned int v11; // r14d
  unsigned int *v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rdx
  _QWORD *v18; // rax
  __int64 v20[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = (_DWORD *)*a1;
  if ( *a1 )
  {
    v8 = (unsigned int)*(v7 - 1);
    if ( (unsigned int)v8 >= a2 )
    {
      *(v7 - 1) = a2;
      v15 = a2;
      if ( !a2 )
        return sub_DB2380((__int64)a1, a3, a4);
      goto LABEL_10;
    }
  }
  else
  {
    if ( !a2 )
      return sub_DB2380((__int64)a1, a3, a4);
    v8 = 0;
    v18 = (_QWORD *)sub_186B270(0x18u);
    v7 = v18 + 1;
    *v18 = 2;
    *a1 = v18 + 1;
  }
  while ( 1 )
  {
    v13 = *(v7 - 2);
    if ( v13 >= a2 )
      break;
    v9 = (3 * v13 + 1) >> 1;
    v10 = 8 * v9 + 8;
    v11 = v9;
    if ( 8 * v13 + 8 >= (unsigned int)v10 || v13 >= v9 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v20, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v20);
      sub_233E40((__int64)v20);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v12 = (unsigned int *)sub_186B300(v7 - 2, v10);
    v7 = v12 + 2;
    *v12 = v11;
    *a1 = v12 + 2;
  }
  v14 = 8 * v8;
  v15 = a2;
  *(v7 - 1) = a2;
  v16 = 8LL * a2;
  if ( v14 != v16 )
    memset(&v7[(unsigned __int64)v14 / 4], 0, v16 - v14);
LABEL_10:
  memset(v7, 0, 8 * v15);
  return sub_DB2380((__int64)a1, a3, a4);
}

