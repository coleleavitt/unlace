void __fastcall sub_6B2860(__int64 a1, int a2, __int64 *a3)
{
  __int64 *v3; // r14
  __int64 *v4; // rbx
  __int64 v5; // r12
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  int v8; // eax
  _QWORD *v9; // rdx
  unsigned int v10; // eax
  unsigned int v11; // r13d
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rdx
  char **exception; // rbx
  __int64 v16[9]; // [rsp-48h] [rbp-48h] BYREF

  if ( a2 )
  {
    v3 = &a3[a2];
    v4 = a3;
    v5 = *a3;
    v6 = *(_QWORD **)(a1 + 8);
    if ( *a3 )
      ++*(_DWORD *)(v5 + 8);
    if ( v6 )
      goto LABEL_9;
    v7 = (_QWORD *)sub_186B270(0x18u);
    v6 = v7 + 1;
    *v7 = 2;
    v8 = 1;
    *(_QWORD *)(a1 + 8) = v6;
    v9 = v6;
    while ( 1 )
    {
      ++v4;
      *v9 = v5;
      *((_DWORD *)v6 - 1) = v8;
      if ( v3 == v4 )
        break;
      while ( 1 )
      {
        v5 = *v4;
        if ( *v4 )
          ++*(_DWORD *)(v5 + 8);
LABEL_9:
        v10 = *((_DWORD *)v6 - 1);
        if ( v10 == *((_DWORD *)v6 - 2) )
          break;
        ++v4;
        v6[v10] = v5;
        *((_DWORD *)v6 - 1) = v10 + 1;
        if ( v3 == v4 )
          return;
      }
      v11 = (3 * v10 + 1) >> 1;
      v12 = 8 * v11 + 8;
      if ( 8 * v10 + 8 >= (unsigned int)v12 || v10 >= v11 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_6A99E0(v16, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v16);
        sub_233E40((__int64)v16);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v13 = (unsigned int *)sub_186B300(v6 - 1, v12);
      v14 = v13[1];
      v6 = v13 + 2;
      *v13 = v11;
      *(_QWORD *)(a1 + 8) = v13 + 2;
      LODWORD(v13) = v14;
      v9 = &v6[v14];
      v8 = (_DWORD)v13 + 1;
    }
  }
}

