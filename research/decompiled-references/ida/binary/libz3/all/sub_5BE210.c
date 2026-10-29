_QWORD *__fastcall sub_5BE210(_QWORD *a1, __int64 a2, __int64 a3)
{
  char **exception; // r12
  __int64 v4; // rax
  unsigned int v5; // ebx
  unsigned __int64 v7; // r12
  _QWORD *v8; // rax
  unsigned __int64 *v9; // rax
  int v10; // edx
  unsigned __int64 *v11; // rcx
  unsigned int v12; // edx
  unsigned int v14; // r14d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rax
  int v18; // edx
  __int64 v19[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a2 + 32);
  v5 = *(_DWORD *)(a3 + 68);
  a1[1] = 0;
  *a1 = v4;
  if ( v5 < *(_DWORD *)(a3 + 56) )
  {
    v7 = *(_QWORD *)(a3 + 8LL * v5 + 80) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(a3 + 8LL * v5 + 80) > 7u )
      ++*(_DWORD *)(v7 + 8);
    v8 = (_QWORD *)sub_186B270(0x18u);
    *v8 = 2;
    v9 = v8 + 1;
    v10 = 1;
    a1[1] = v9;
    v11 = v9;
    while ( 1 )
    {
      *v9 = v7;
      ++v5;
      *((_DWORD *)v11 - 1) = v10;
      if ( v5 >= *(_DWORD *)(a3 + 56) )
        break;
      while ( 1 )
      {
        v7 = *(_QWORD *)(a3 + 8LL * v5 + 80) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(a3 + 8LL * v5 + 80) > 7u )
          ++*(_DWORD *)(v7 + 8);
        v12 = *((_DWORD *)v11 - 1);
        if ( v12 == *((_DWORD *)v11 - 2) )
          break;
        ++v5;
        v11[v12] = v7;
        *((_DWORD *)v11 - 1) = v12 + 1;
        if ( v5 >= *(_DWORD *)(a3 + 56) )
          goto LABEL_10;
      }
      v14 = (3 * v12 + 1) >> 1;
      v15 = 8 * v14 + 8;
      if ( 8 * v12 + 8 >= (unsigned int)v15 || v12 >= v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v19, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v19);
        sub_233E40((__int64)v19);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = (unsigned int *)sub_186B300(v11 - 1, v15);
      v11 = (unsigned __int64 *)(v16 + 2);
      *v16 = v14;
      v17 = v16[1];
      a1[1] = v11;
      v18 = v17;
      v9 = &v11[v17];
      v10 = v18 + 1;
    }
  }
LABEL_10:
  sub_15EE300(a1);
  return a1;
}

