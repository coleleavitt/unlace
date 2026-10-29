_QWORD *__fastcall sub_7FC040(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // r13
  int v11; // ecx
  _DWORD *v12; // rdi
  unsigned int v13; // ecx
  unsigned int v15; // r14d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rax
  int v19; // ecx
  char **exception; // r12
  __int64 v21[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(unsigned int *)(a3 + 24);
  a1[1] = 0;
  *a1 = v4;
  if ( (_DWORD)v5 )
  {
    v6 = *(_QWORD *)(a3 + 32);
    v7 = a3;
    if ( v6 )
      ++*(_DWORD *)(v6 + 8);
    v8 = (_QWORD *)sub_186B270(0x18u);
    *v8 = 2;
    v9 = v8 + 1;
    v10 = v7 + 8 * v5;
    v11 = 1;
    a1[1] = v9;
    v12 = v9;
    while ( 1 )
    {
      v7 += 8;
      *v9 = v6;
      *(v12 - 1) = v11;
      if ( v7 == v10 )
        break;
      while ( 1 )
      {
        v6 = *(_QWORD *)(v7 + 32);
        if ( v6 )
          ++*(_DWORD *)(v6 + 8);
        v13 = *(v12 - 1);
        if ( v13 == *(v12 - 2) )
          break;
        v7 += 8;
        *(_QWORD *)&v12[2 * v13] = v6;
        *(v12 - 1) = v13 + 1;
        if ( v7 == v10 )
          return a1;
      }
      v15 = (3 * v13 + 1) >> 1;
      v16 = 8 * v15 + 8;
      if ( 8 * v13 + 8 >= (unsigned int)v16 || v13 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v21, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v21);
        sub_233E40((__int64)v21);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = (unsigned int *)sub_186B300(v12 - 2, v16);
      v12 = v17 + 2;
      *v17 = v15;
      v18 = v17[1];
      a1[1] = v12;
      v19 = v18;
      v9 = &v12[2 * v18];
      v11 = v19 + 1;
    }
  }
  return a1;
}

