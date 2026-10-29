__int64 __fastcall sub_814F10(__int64 a1, double a2)
{
  char **exception; // rbx
  __int64 v3; // rax
  int v4; // r12d
  int v5; // eax
  __int64 v7; // r13
  __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rbp
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 *v17; // rdx
  unsigned __int64 v18; // r12
  unsigned __int64 *i; // rbp
  __int64 j; // rbp
  unsigned int v22; // r12d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 680);
  v4 = *(_DWORD *)(a1 + 696);
  if ( v3 )
    v5 = *(_DWORD *)(v3 - 4);
  else
    v5 = 0;
  if ( v4 == v5 )
    return 0;
  if ( *(_DWORD *)(a1 + 104) )
  {
    do
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL))(a1);
    while ( (*(_DWORD *)(a1 + 104))-- != 1 );
    v4 = *(_DWORD *)(a1 + 696);
  }
  v7 = *(_QWORD *)(a1 + 80);
  v8 = sub_180C100(v7 + 2144, 24);
  v9 = *(_QWORD **)(v7 + 2128);
  v10 = v8;
  *(_QWORD *)v8 = &off_1C4C070;
  *(_QWORD *)(v8 + 8) = a1 + 696;
  *(_DWORD *)(v8 + 16) = v4;
  if ( v9 )
  {
    v11 = *((_DWORD *)v9 - 1);
    if ( v11 == *((_DWORD *)v9 - 2) )
    {
      v22 = (3 * v11 + 1) >> 1;
      v23 = 8 * v22 + 8;
      if ( 8 * v11 + 8 >= (unsigned int)v23 || v11 >= v22 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v27, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v27);
        sub_233E40((__int64)v27);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v24 = (unsigned int *)sub_186B300(v9 - 1, v23);
      v25 = v24[1];
      v9 = v24 + 2;
      *(_QWORD *)(v7 + 2128) = v24 + 2;
      *v24 = v22;
      LODWORD(v24) = v25;
      v14 = &v9[v25];
      v13 = (_DWORD)v24 + 1;
    }
    else
    {
      v12 = v11;
      v13 = v11 + 1;
      v14 = &v9[v12];
    }
  }
  else
  {
    v26 = (_QWORD *)sub_186B270(0x18u);
    v9 = v26 + 1;
    *v26 = 2;
    v13 = 1;
    *(_QWORD *)(v7 + 2128) = v9;
    v14 = v9;
  }
  *v14 = v10;
  *((_DWORD *)v9 - 1) = v13;
  v15 = *(_QWORD *)(a1 + 680);
  if ( v15 )
  {
    v16 = *(unsigned int *)(a1 + 696);
    do
    {
      if ( (unsigned int)v16 >= *(_DWORD *)(v15 - 4) || *(_BYTE *)(*(_QWORD *)(a1 + 24) + 3184LL) )
        break;
      v17 = (unsigned __int64 *)(16 * v16 + v15);
      v18 = v17[1];
      if ( v18 )
      {
        for ( i = *(unsigned __int64 **)(v18 + 16); i; i = (unsigned __int64 *)i[1] )
          sub_814BA0((_QWORD *)a1, *i);
        for ( j = *(_QWORD *)(v18 + 8); j; j = *(_QWORD *)(j + 32) )
          sub_80F400(a1, j, a2);
      }
      else
      {
        sub_814BA0((_QWORD *)a1, *v17);
      }
      v15 = *(_QWORD *)(a1 + 680);
      v16 = (unsigned int)(*(_DWORD *)(a1 + 696) + 1);
      *(_DWORD *)(a1 + 696) = v16;
    }
    while ( v15 );
  }
  return 1;
}

