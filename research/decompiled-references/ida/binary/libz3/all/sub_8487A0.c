__int64 __fastcall sub_8487A0(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  char **exception; // rbx
  _DWORD *v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // r12d
  unsigned int v10; // r14d
  size_t v11; // rsi
  unsigned int *v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // r12d
  __int64 result; // rax
  _QWORD *v17; // rax
  __int64 v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v7 = (_DWORD *)*a2;
  v8 = *(_QWORD *)(a3 + 8);
  if ( *a2 )
  {
    *(v7 - 1) = 0;
    if ( !v8 )
      return 1;
    v9 = *(_DWORD *)(v8 - 4);
    if ( !v9 )
      return 1;
  }
  else
  {
    if ( !v8 )
      return 1;
    v9 = *(_DWORD *)(v8 - 4);
    if ( !v9 )
      return 1;
    v17 = (_QWORD *)sub_186B270(0x10u);
    v7 = v17 + 1;
    *v17 = 2;
    *a2 = v17 + 1;
  }
  while ( 1 )
  {
    v13 = *(v7 - 2);
    if ( v13 >= v9 )
      break;
    v10 = (3 * v13 + 1) >> 1;
    v11 = 4 * v10 + 8;
    if ( 4 * v13 + 8 >= (unsigned int)v11 || v13 >= v10 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v18, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v18);
      sub_233E40((__int64)v18);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v12 = (unsigned int *)sub_186B300(v7 - 2, v11);
    v7 = v12 + 2;
    *v12 = v10;
    *a2 = v12 + 2;
  }
  *(v7 - 1) = v9;
  memset(v7, 0, 4LL * v9);
  v14 = *(_QWORD *)(a3 + 8);
  if ( v14 )
  {
    v15 = 0;
    do
    {
      if ( v15 >= *(_DWORD *)(v14 - 4) )
        break;
      result = sub_8480B0(a1, a2, a3, v15, 0);
      if ( !(_BYTE)result )
        return result;
      v14 = *(_QWORD *)(a3 + 8);
      ++v15;
    }
    while ( v14 );
  }
  return 1;
}

