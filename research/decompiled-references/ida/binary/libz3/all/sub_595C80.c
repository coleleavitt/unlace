__int64 __fastcall sub_595C80(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r12
  unsigned int v6; // r15d
  __int64 v7; // rdx
  __int64 result; // rax
  unsigned int v9; // edi
  __int64 v10; // rsi
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rsi
  unsigned int v14; // ebp
  size_t v15; // rsi
  unsigned int *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // r12
  __int64 v19; // rdx
  _QWORD *v20; // rax
  char **exception; // rbx
  __int64 v22[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = (_QWORD *)*a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  if ( *a2 )
  {
    if ( !v4 )
      goto LABEL_4;
    v5 = *((unsigned int *)v3 - 1);
    v6 = *(_DWORD *)(v4 - 4);
    if ( (unsigned int)v5 >= v6 )
      goto LABEL_4;
  }
  else
  {
    if ( !v4 )
      goto LABEL_4;
    v6 = *(_DWORD *)(v4 - 4);
    if ( !v6 )
      goto LABEL_4;
    v5 = 0;
    v20 = (_QWORD *)sub_186B270(0x18u);
    v3 = v20 + 1;
    *v20 = 2;
    *a2 = v20 + 1;
  }
  while ( 1 )
  {
    v17 = *((_DWORD *)v3 - 2);
    if ( v17 >= v6 )
      break;
    v14 = (3 * v17 + 1) >> 1;
    v15 = 8 * v14 + 8;
    if ( 8 * v17 + 8 >= (unsigned int)v15 || v17 >= v14 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v22, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v22);
      sub_233E40((__int64)v22);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v16 = (unsigned int *)sub_186B300(v3 - 1, v15);
    v3 = v16 + 2;
    *v16 = v14;
    *a2 = v16 + 2;
  }
  v18 = 8 * v5;
  *((_DWORD *)v3 - 1) = v6;
  v19 = 8LL * v6;
  if ( v18 != v19 )
    memset(&v3[(unsigned __int64)v18 / 8], 0, v19 - v18);
LABEL_4:
  v7 = *(_QWORD *)(a1 + 24);
  result = *(_QWORD *)(v7 + 16);
  v9 = *(_DWORD *)(v7 + 24);
  v10 = *(unsigned int *)(result + 56);
  if ( (_DWORD)v10 )
  {
    v11 = *(_QWORD *)(result + 72);
    v12 = *(_QWORD *)(result + 64);
    v13 = 4 * v10;
    result = 0;
    do
    {
      *(_QWORD *)((char *)v3 + 2 * result) = *(_DWORD *)(v11 + result) & (v9 >> *(_DWORD *)(v12 + result));
      result += 4;
    }
    while ( v13 != result );
  }
  return result;
}

