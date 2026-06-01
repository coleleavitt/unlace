__int64 __fastcall sub_7E29E0(__int64 a1)
{
  char **exception; // rbx
  __int64 v2; // rax
  unsigned int v3; // r12d
  __int64 v5; // r13
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rbp
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned int v15; // r12d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20[9]; // [rsp+2h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 1424);
  if ( !v2 )
    return 0;
  v3 = *(_DWORD *)(a1 + 1432);
  if ( v3 >= *(_DWORD *)(v2 - 4) )
    return 0;
  v5 = *(_QWORD *)(a1 + 80);
  v6 = sub_180C100(v5 + 2144, 24);
  v7 = *(_QWORD **)(v5 + 2128);
  v8 = v6;
  *(_QWORD *)v6 = &off_1C4C070;
  *(_QWORD *)(v6 + 8) = a1 + 1432;
  *(_DWORD *)(v6 + 16) = v3;
  if ( v7 )
  {
    v9 = *((_DWORD *)v7 - 1);
    if ( v9 == *((_DWORD *)v7 - 2) )
    {
      v15 = (3 * v9 + 1) >> 1;
      v16 = 8 * v15 + 8;
      if ( 8 * v9 + 8 >= (unsigned int)v16 || v9 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v20, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v20);
        sub_233E40((__int64)v20);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = (unsigned int *)sub_186B300(v7 - 1, v16);
      v18 = v17[1];
      v7 = v17 + 2;
      *(_QWORD *)(v5 + 2128) = v17 + 2;
      *v17 = v15;
      LODWORD(v17) = v18;
      v12 = &v7[v18];
      v11 = (_DWORD)v17 + 1;
    }
    else
    {
      v10 = v9;
      v11 = v9 + 1;
      v12 = &v7[v10];
    }
  }
  else
  {
    v19 = (_QWORD *)sub_186B270(0x18u);
    v7 = v19 + 1;
    *v19 = 2;
    v11 = 1;
    *(_QWORD *)(v5 + 2128) = v7;
    v12 = v7;
  }
  v13 = *(_QWORD *)(a1 + 1424);
  *v12 = v8;
  *((_DWORD *)v7 - 1) = v11;
  if ( v13 )
  {
    v14 = *(unsigned int *)(a1 + 1432);
    do
    {
      if ( (unsigned int)v14 >= *(_DWORD *)(v13 - 4) )
        break;
      sub_7E2750((_QWORD *)a1, (char *)(16 * v14 + v13));
      v13 = *(_QWORD *)(a1 + 1424);
      v14 = (unsigned int)(*(_DWORD *)(a1 + 1432) + 1);
      *(_DWORD *)(a1 + 1432) = v14;
    }
    while ( v13 );
  }
  return 1;
}

