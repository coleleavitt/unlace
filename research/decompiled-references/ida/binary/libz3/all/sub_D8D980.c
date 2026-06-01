__int64 __fastcall sub_D8D980(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rdi
  int v18; // ecx
  unsigned int v19; // edx
  __int64 v20; // rsi
  __int64 v21; // rdi
  char **exception; // rbp
  const char *v23; // rax
  __int64 v24[9]; // [rsp+10h] [rbp-48h] BYREF

  v8 = *a4;
  if ( *a4 )
  {
    v9 = a4[1];
    v10 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v9, v8);
  }
  *a4 = 0;
  result = sub_18290A0(*(_QWORD *)(a1 + 8));
  if ( (_BYTE)result )
  {
    *(_QWORD *)(a1 + 120) = a2;
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 152) = 0;
    if ( (unsigned __int8)sub_D869C0(a1, a2, 3) )
    {
      v14 = 0x7FFFFFFF8LL;
      result = *(_QWORD *)(a1 + 56);
      if ( result )
        v14 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
      v15 = *(_QWORD *)(result + v14);
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
      v16 = *a3;
      if ( *a3 && (v17 = a3[1], v10 = *(_DWORD *)(v16 + 8) == 1, --*(_DWORD *)(v16 + 8), v10) )
      {
        sub_15D7BC0(v17, v16);
        result = *(_QWORD *)(a1 + 56);
        *a3 = v15;
        v19 = *(_DWORD *)(result - 4) - 1;
      }
      else
      {
        v18 = *(_DWORD *)(result - 4);
        *a3 = v15;
        v19 = v18 - 1;
      }
      v20 = *(_QWORD *)(result + 8LL * v19);
      *(_DWORD *)(result - 4) = v19;
      if ( v20 )
      {
        v21 = *(_QWORD *)(a1 + 48);
        v10 = (*(_DWORD *)(v20 + 8))-- == 1;
        if ( v10 )
          return sub_15D7BC0(v21, v20);
      }
    }
    else
    {
      return sub_D84D60(a1, a3);
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 17) )
    {
      sub_D85AF0(a1);
      exception = (char **)__cxa_allocate_exception(0x28u);
      v23 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
      sub_24ABB0(v24, v23);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v24);
      *exception = (char *)off_1C650D8;
      sub_233E40((__int64)v24);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
    }
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v12 = *a3;
    if ( *a3 )
    {
      v13 = a3[1];
      v10 = (*(_DWORD *)(v12 + 8))-- == 1;
      if ( v10 )
        result = sub_15D7BC0(v13, v12);
    }
    *a3 = a2;
  }
  return result;
}

