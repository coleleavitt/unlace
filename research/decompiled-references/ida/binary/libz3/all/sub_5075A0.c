__int64 __fastcall sub_5075A0(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rdx
  int v6; // r14d
  __int64 v7; // rax
  _DWORD *v8; // rax
  int v9; // ecx
  __int64 v10; // rax
  int v11; // r14d
  __int64 v12; // rdi
  __int64 result; // rax
  __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rdi
  unsigned int v18; // r13d
  size_t v19; // rsi
  unsigned int *v20; // rax
  unsigned int v21; // r13d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  char **exception; // rbp
  __int64 v27[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = *(_DWORD **)(a1 + 64);
  v6 = *(_DWORD *)(a2 + 16);
  if ( v5 )
  {
    v7 = (unsigned int)*(v5 - 1);
    if ( (_DWORD)v7 == *(v5 - 2) )
    {
      v21 = (unsigned int)(3 * v7 + 1) >> 1;
      v22 = 4 * v21 + 8;
      if ( 4 * (int)v7 + 8 >= (unsigned int)v22 || (unsigned int)v7 >= v21 )
        goto LABEL_18;
      v23 = (unsigned int *)sub_186B300(v5 - 2, v22);
      v5 = v23 + 2;
      *v23 = v21;
      v24 = v23[1];
      *(_QWORD *)(a1 + 64) = v5;
      v8 = &v5[v24];
    }
    else
    {
      v8 = &v5[v7];
    }
  }
  else
  {
    v25 = (_QWORD *)sub_186B270(0x10u);
    v5 = v25 + 1;
    *v25 = 2;
    *(_QWORD *)(a1 + 64) = v25 + 1;
    v8 = v25 + 1;
  }
  *v8 = v6;
  v9 = *(v5 - 1);
  v10 = (unsigned int)(v9 + 1);
  *(v5 - 1) = v10;
  v11 = *(_DWORD *)(a3 + 16);
  if ( *(v5 - 2) != (_DWORD)v10 )
    goto LABEL_5;
  v18 = (unsigned int)(3 * v10 + 1) >> 1;
  v19 = 4 * v18 + 8;
  if ( 4 * v9 + 12 >= (unsigned int)v19 || (unsigned int)v10 >= v18 )
  {
LABEL_18:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v27, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v27);
    sub_233E40((__int64)v27);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v20 = (unsigned int *)sub_186B300(v5 - 2, v19);
  v5 = v20 + 2;
  *v20 = v18;
  v10 = v20[1];
  *(_QWORD *)(a1 + 64) = v5;
LABEL_5:
  v5[v10] = v11;
  v12 = *(_QWORD *)(a1 + 40);
  ++*(v5 - 1);
  result = sub_15E1B70(v12);
  v14 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v15 = *(_QWORD *)(a1 + 24);
  if ( v15 )
  {
    v16 = *(_QWORD *)(a1 + 32);
    if ( (*(_DWORD *)(v15 + 8))-- == 1 )
      result = sub_15D7BC0(v16, v15);
  }
  *(_QWORD *)(a1 + 24) = v14;
  *(_DWORD *)(a1 + 72) = 3;
  return result;
}

