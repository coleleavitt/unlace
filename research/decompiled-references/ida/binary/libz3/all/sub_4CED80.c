void __fastcall sub_4CED80(_QWORD *a1, unsigned int a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // r12
  unsigned int v6; // r13d
  size_t v7; // rsi
  unsigned int *v8; // rax
  unsigned int v9; // eax
  __int64 v10; // r12
  __int64 v11; // rdx
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  char **exception; // rbx
  __int64 v15; // rdx
  __int64 v16[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = (_QWORD *)*a1;
  if ( v4 )
  {
    v5 = *((unsigned int *)v4 - 1);
    if ( (unsigned int)v5 >= a2 )
    {
      *((_DWORD *)v4 - 1) = a2;
      return;
    }
  }
  else
  {
    if ( !a2 )
      return;
    v5 = 0;
    v13 = (_QWORD *)sub_186B270(0x18u);
    v4 = v13 + 1;
    *v13 = 2;
    *a1 = v13 + 1;
  }
  while ( 1 )
  {
    v9 = *((_DWORD *)v4 - 2);
    if ( v9 >= a2 )
      break;
    v6 = (3 * v9 + 1) >> 1;
    v7 = 8 * v6 + 8;
    if ( 8 * v9 + 8 >= (unsigned int)v7 || v9 >= v6 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_DFB18(v16, "Overflow encountered when expanding vector", v15);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v16);
      sub_233E40((__int64)v16);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v8 = (unsigned int *)sub_186B300(v4 - 1, v7);
    v4 = v8 + 2;
    *v8 = v6;
    *a1 = v8 + 2;
  }
  v10 = 8 * v5;
  *((_DWORD *)v4 - 1) = a2;
  v11 = 8LL * a2;
  v12 = &v4[(unsigned __int64)v10 / 8];
  if ( v10 != v11 )
    memset(v12, 0, v11 - v10);
}

