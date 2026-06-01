__int64 __fastcall sub_ADA620(__int64 a1)
{
  char **exception; // rbx
  __int64 v3; // r12
  __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rbp
  unsigned int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 *v10; // rcx
  unsigned int v11; // r13d
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16[9]; // [rsp+2h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 53) )
    return 0;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = sub_180C100(v3 + 8400, 24);
  v5 = *(_QWORD **)(v3 + 9456);
  v6 = v4;
  *(_QWORD *)v4 = off_1C54EE8;
  *(_QWORD *)(v4 + 8) = a1 + 53;
  *(_BYTE *)(v4 + 16) = 0;
  if ( v5 )
  {
    v7 = *((_DWORD *)v5 - 1);
    if ( v7 == *((_DWORD *)v5 - 2) )
    {
      v11 = (3 * v7 + 1) >> 1;
      v12 = 8 * v11 + 8;
      if ( 8 * v7 + 8 >= (unsigned int)v12 || v7 >= v11 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v16, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v16);
        sub_233E40((__int64)v16);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v13 = (unsigned int *)sub_186B300(v5 - 1, v12);
      v14 = v13[1];
      v5 = v13 + 2;
      *(_QWORD *)(v3 + 9456) = v13 + 2;
      *v13 = v11;
      LODWORD(v13) = v14;
      v10 = &v5[v14];
      v9 = (_DWORD)v13 + 1;
    }
    else
    {
      v8 = v7;
      v9 = v7 + 1;
      v10 = &v5[v8];
    }
  }
  else
  {
    v15 = (_QWORD *)sub_186B270(0x18u);
    v5 = v15 + 1;
    *v15 = 2;
    v9 = 1;
    *(_QWORD *)(v3 + 9456) = v5;
    v10 = v5;
  }
  *v10 = v6;
  *((_DWORD *)v5 - 1) = v9;
  *(_BYTE *)(a1 + 53) = 1;
  return 0;
}

