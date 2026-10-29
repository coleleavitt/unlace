void __fastcall sub_6B1FA0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rbp
  int v5; // eax
  unsigned int v6; // r13d
  unsigned int v7; // r15d
  size_t v8; // rsi
  unsigned int *v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r14
  _QWORD *v13; // rax
  char **exception; // rbx
  unsigned int v15; // [rsp+Ch] [rbp-5Ch]
  __int64 v16[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = *(_QWORD **)(a1 + 8);
  v4 = *(unsigned int *)(a2 + 16);
  if ( v3 )
  {
    v5 = *((_DWORD *)v3 - 1);
    v15 = v5;
    if ( (int)v4 < v5 )
      goto LABEL_3;
    v6 = v4 + 1;
    if ( v5 >= (unsigned int)(v4 + 1) )
    {
      *((_DWORD *)v3 - 1) = v6;
      goto LABEL_3;
    }
  }
  else
  {
    if ( (int)v4 < 0 )
      goto LABEL_3;
    v6 = v4 + 1;
    v13 = (_QWORD *)sub_186B270(0x18u);
    v15 = 0;
    v3 = v13 + 1;
    *v13 = 2;
    *(_QWORD *)(a1 + 8) = v13 + 1;
  }
  while ( 1 )
  {
    v10 = *((_DWORD *)v3 - 2);
    if ( v10 >= v6 )
      break;
    v7 = (3 * v10 + 1) >> 1;
    v8 = 8 * v7 + 8;
    if ( 8 * v10 + 8 >= (unsigned int)v8 || v10 >= v7 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_6A99E0(v16, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v16);
      sub_233E40((__int64)v16);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v9 = (unsigned int *)sub_186B300(v3 - 1, v8);
    v3 = v9 + 2;
    *v9 = v7;
    *(_QWORD *)(a1 + 8) = v9 + 2;
  }
  *((_DWORD *)v3 - 1) = v6;
  v11 = 8LL * v6;
  v12 = 8LL * v15;
  if ( v12 != v11 )
    memset(&v3[(unsigned __int64)v12 / 8], 0, v11 - v12);
LABEL_3:
  v3[v4] = a2;
}

