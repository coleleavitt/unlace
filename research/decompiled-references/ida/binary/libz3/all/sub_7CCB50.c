__int64 __fastcall sub_7CCB50(__int64 a1)
{
  char **exception; // rbp
  __int64 v2; // rdx
  char **v3; // rbp
  __int64 v4; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rdi
  int v8; // r12d
  __int64 v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rdi
  int v13; // r12d
  __int64 v14; // rax
  _DWORD *v15; // rax
  __int64 *v16; // rbx
  __int64 *v17; // r12
  __int64 v18; // rdi
  __int64 result; // rax
  unsigned int v20; // ebx
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rax
  unsigned int v24; // ebx
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30[7]; // [rsp+0h] [rbp-38h] BYREF

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 152) + 80LL))(*(_QWORD *)(a1 + 152));
  v6 = *(_QWORD *)(a1 + 2376);
  if ( v6 )
  {
    v7 = *(_QWORD **)(a1 + 2384);
    v8 = *(_DWORD *)(v6 - 4);
    if ( v7 )
      goto LABEL_3;
LABEL_27:
    v29 = (_QWORD *)sub_186B270(0x10u);
    v7 = v29 + 1;
    *v29 = 2;
    *(_QWORD *)(a1 + 2384) = v29 + 1;
    v10 = v29 + 1;
    goto LABEL_5;
  }
  v7 = *(_QWORD **)(a1 + 2384);
  v8 = 0;
  if ( !v7 )
    goto LABEL_27;
LABEL_3:
  v9 = *((unsigned int *)v7 - 1);
  if ( (_DWORD)v9 == *((_DWORD *)v7 - 2) )
  {
    v24 = (unsigned int)(3 * v9 + 1) >> 1;
    v25 = 4 * v24 + 8;
    if ( 4 * (int)v9 + 8 >= (unsigned int)v25 || (unsigned int)v9 >= v24 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_116834(v30, "Overflow encountered when expanding vector", v2);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v30);
      sub_233E40((__int64)v30);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v26 = (unsigned int *)sub_186B300(v7 - 1, v25);
    v7 = v26 + 2;
    *v26 = v24;
    v27 = v26[1];
    *(_QWORD *)(a1 + 2384) = v7;
    v10 = (_DWORD *)v7 + v27;
  }
  else
  {
    v10 = (_DWORD *)v7 + v9;
  }
LABEL_5:
  *v10 = v8;
  ++*((_DWORD *)v7 - 1);
  sub_180C250(a1 + 2144);
  v11 = *(_QWORD *)(a1 + 2128);
  if ( v11 )
  {
    v12 = *(_QWORD **)(a1 + 2136);
    v13 = *(_DWORD *)(v11 - 4);
    if ( v12 )
      goto LABEL_7;
LABEL_25:
    v28 = (_QWORD *)sub_186B270(0x10u);
    v12 = v28 + 1;
    *v28 = 2;
    *(_QWORD *)(a1 + 2136) = v28 + 1;
    v15 = v28 + 1;
    goto LABEL_9;
  }
  v12 = *(_QWORD **)(a1 + 2136);
  v13 = 0;
  if ( !v12 )
    goto LABEL_25;
LABEL_7:
  v14 = *((unsigned int *)v12 - 1);
  if ( (_DWORD)v14 == *((_DWORD *)v12 - 2) )
  {
    v20 = (unsigned int)(3 * v14 + 1) >> 1;
    v21 = 4 * v20 + 8;
    if ( 4 * (int)v14 + 8 >= (unsigned int)v21 || (unsigned int)v14 >= v20 )
    {
      v3 = (char **)__cxa_allocate_exception(0x28u);
      sub_116834(v30, "Overflow encountered when expanding vector", v4);
      *v3 = (char *)off_1C63128;
      sub_2333C0(v3 + 1, v30);
      sub_233E40((__int64)v30);
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v22 = (unsigned int *)sub_186B300(v12 - 1, v21);
    v12 = v22 + 2;
    *v22 = v20;
    v23 = v22[1];
    *(_QWORD *)(a1 + 2136) = v12;
    v15 = (_DWORD *)v12 + v23;
  }
  else
  {
    v15 = (_DWORD *)v12 + v14;
  }
LABEL_9:
  v16 = *(__int64 **)(a1 + 2392);
  *v15 = v13;
  ++*((_DWORD *)v12 - 1);
  if ( v16 )
  {
    v17 = &v16[*((unsigned int *)v16 - 1)];
    while ( v17 != v16 )
    {
      v18 = *v16++;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 144LL))(v18);
    }
  }
  result = *(_QWORD *)(a1 + 1600);
  if ( result )
  {
    result = *(unsigned int *)(result - 4);
    if ( (_DWORD)result )
      result = sub_13D9710(a1 + 1592);
  }
  ++*(_DWORD *)(a1 + 1824);
  if ( *(_BYTE *)(a1 + 168) )
    ++*(_DWORD *)(a1 + 192);
  return result;
}

