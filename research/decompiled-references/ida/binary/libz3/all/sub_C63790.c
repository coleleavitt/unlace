__int64 __fastcall sub_C63790(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rdi
  char **exception; // rbp
  const char *v20; // rax
  __int64 v21[9]; // [rsp+10h] [rbp-48h] BYREF

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
    if ( (unsigned __int8)sub_C621C0(a1, a2, 3) )
    {
      v14 = 0x7FFFFFFF8LL;
      v15 = *(_QWORD *)(a1 + 56);
      if ( v15 )
        v14 = 8LL * (unsigned int)(*(_DWORD *)(v15 - 4) - 1);
      v16 = *(_QWORD *)(v15 + v14);
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
      v17 = *a3;
      if ( *a3 )
      {
        v18 = a3[1];
        v10 = (*(_DWORD *)(v17 + 8))-- == 1;
        if ( v10 )
          sub_15D7BC0(v18, v17);
      }
      *a3 = v16;
      return sub_39BF70((__int64 *)(a1 + 48));
    }
    else
    {
      return sub_C58B10(a1, a3);
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 17) )
    {
      sub_C598E0(a1);
      exception = (char **)__cxa_allocate_exception(0x28u);
      v20 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
      sub_24ABB0(v21, v20);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v21);
      *exception = (char *)off_1C650D8;
      sub_233E40((__int64)v21);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
    }
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v12 = *a3;
    if ( *a3 && (v13 = a3[1], v10 = *(_DWORD *)(v12 + 8) == 1, --*(_DWORD *)(v12 + 8), v10) )
    {
      result = sub_15D7BC0(v13, v12);
      *a3 = a2;
    }
    else
    {
      *a3 = a2;
    }
  }
  return result;
}

