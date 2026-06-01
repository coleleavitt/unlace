void __fastcall sub_6AB850(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  _QWORD *v4; // rbx
  __int64 v5; // rbp
  int v6; // eax
  unsigned int v7; // r13d
  unsigned int v8; // r15d
  size_t v9; // rsi
  unsigned int *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r14
  _QWORD *v14; // rax
  unsigned int v15; // [rsp+Ch] [rbp-5Ch]
  __int64 v16[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = *(_QWORD **)(a1 + 40);
  v5 = *(unsigned int *)(a2 + 16);
  if ( v4 )
  {
    v6 = *((_DWORD *)v4 - 1);
    v15 = v6;
    if ( (int)v5 < v6 )
      goto LABEL_3;
    v7 = v5 + 1;
    if ( v6 >= (unsigned int)(v5 + 1) )
    {
      *((_DWORD *)v4 - 1) = v7;
      goto LABEL_3;
    }
  }
  else
  {
    if ( (int)v5 < 0 )
      goto LABEL_3;
    v7 = v5 + 1;
    v14 = (_QWORD *)sub_186B270(0x18u);
    v15 = 0;
    v4 = v14 + 1;
    *v14 = 2;
    *(_QWORD *)(a1 + 40) = v14 + 1;
  }
  while ( 1 )
  {
    v11 = *((_DWORD *)v4 - 2);
    if ( v11 >= v7 )
      break;
    v8 = (3 * v11 + 1) >> 1;
    v9 = 8 * v8 + 8;
    if ( 8 * v11 + 8 >= (unsigned int)v9 || v11 >= v8 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_6A99E0(v16, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v16);
      sub_233E40((__int64)v16);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v10 = (unsigned int *)sub_186B300(v4 - 1, v9);
    v4 = v10 + 2;
    *v10 = v8;
    *(_QWORD *)(a1 + 40) = v10 + 2;
  }
  *((_DWORD *)v4 - 1) = v7;
  v12 = 8LL * v7;
  v13 = 8LL * v15;
  if ( v13 != v12 )
    memset(&v4[(unsigned __int64)v13 / 8], 0, v12 - v13);
LABEL_3:
  v4[v5] = a2;
}

