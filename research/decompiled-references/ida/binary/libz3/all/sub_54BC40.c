__int64 __fastcall sub_54BC40(__int64 a1)
{
  __int64 v1; // r12
  __int64 (__fastcall *v2)(__int64); // rax
  char v3; // al
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v11; // rax
  unsigned int v12; // r13d
  unsigned int i; // eax
  unsigned int v14; // ebp
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  char **exception; // rbx
  __int64 v20[9]; // [rsp+10h] [rbp-48h] BYREF

  v1 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 40LL))(*(_QWORD *)(a1 + 8), a1 + 16);
  v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL);
  if ( v2 == sub_54A3A0 )
    v3 = *(_BYTE *)(a1 + 28);
  else
    v3 = v2(a1);
  if ( !v3 )
    return v1;
  v5 = *(_QWORD **)(v1 + 40);
  *(_BYTE *)(v1 + 28) = 0;
  v6 = v5;
  if ( !v5 )
    goto LABEL_22;
  v7 = (unsigned __int64)&v5[*((unsigned int *)v5 - 1)];
  if ( (unsigned __int64)v5 < v7 )
  {
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = *(_QWORD *)(v1 + 32);
          if ( (*(_DWORD *)(v8 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v6 >= v7 )
          goto LABEL_12;
      }
      sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( (unsigned __int64)v6 < v7 );
LABEL_12:
    v6 = *(_QWORD **)(v1 + 40);
    v5 = v6;
    if ( !v6 )
    {
LABEL_22:
      v17 = *(_QWORD *)(v1 + 16);
      if ( v17 )
      {
        v12 = *(_DWORD *)(v17 - 4);
        if ( v12 )
        {
          v18 = (_QWORD *)sub_186B270(0x18u);
          v6 = v18 + 1;
          *v18 = 2;
          *(_QWORD *)(v1 + 40) = v18 + 1;
          goto LABEL_19;
        }
      }
      return v1;
    }
  }
  *((_DWORD *)v5 - 1) = 0;
  v11 = *(_QWORD *)(v1 + 16);
  if ( !v11 )
    return v1;
  v12 = *(_DWORD *)(v11 - 4);
  if ( !v12 )
    return v1;
  for ( i = *((_DWORD *)v6 - 2); i < v12; i = *((_DWORD *)v6 - 2) )
  {
    v14 = (3 * i + 1) >> 1;
    v15 = 8 * v14 + 8;
    if ( 8 * i + 8 >= (unsigned int)v15 || i >= v14 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v20, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v20);
      sub_233E40((__int64)v20);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v16 = (unsigned int *)sub_186B300(v6 - 1, v15);
    v6 = v16 + 2;
    *(_QWORD *)(v1 + 40) = v16 + 2;
    *v16 = v14;
LABEL_19:
    ;
  }
  *((_DWORD *)v6 - 1) = v12;
  memset(v6, 0, 8LL * v12);
  return v1;
}

