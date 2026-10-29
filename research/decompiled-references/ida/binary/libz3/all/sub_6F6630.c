__int64 __fastcall sub_6F6630(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rbx
  char **exception; // rbp
  const char *v25; // rax
  __int64 v26[9]; // [rsp+10h] [rbp-48h] BYREF

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
    if ( (unsigned __int8)sub_6F4990((_QWORD *)a1, a2, 3) )
    {
      v14 = 0x7FFFFFFF8LL;
      v15 = *(_QWORD *)(a1 + 56);
      if ( v15 )
        v14 = 8LL * (unsigned int)(*(_DWORD *)(v15 - 4) - 1);
      v16 = *(_QWORD *)(v15 + v14);
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
      sub_6EF400(*a3, a3[1]);
      *a3 = v16;
      sub_39BF70((__int64 *)(a1 + 48));
      v17 = *(_QWORD *)(a1 + 88);
      v18 = 0x7FFFFFFF8LL;
      if ( v17 )
        v18 = 8LL * (unsigned int)(*(_DWORD *)(v17 - 4) - 1);
      v19 = *(_QWORD *)(v17 + v18);
      if ( v19 )
        ++*(_DWORD *)(v19 + 8);
      v20 = *a4;
      if ( *a4 )
      {
        v21 = a4[1];
        v10 = (*(_DWORD *)(v20 + 8))-- == 1;
        if ( v10 )
          sub_15D7BC0(v21, v20);
      }
      *a4 = v19;
      result = sub_3A8160((__int64 *)(a1 + 80));
      if ( !*a4 )
      {
        v22 = sub_15DE1B0(*(_QWORD *)(a1 + 8));
        v23 = v22;
        if ( v22 )
          ++*(_DWORD *)(v22 + 8);
        result = sub_6EF3E0(*a4, a4[1]);
        *a4 = v23;
      }
    }
    else
    {
      return sub_6F6260(a1, a3, a4);
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 17) )
    {
      sub_6F1B90(a1);
      exception = (char **)__cxa_allocate_exception(0x28u);
      v25 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
      sub_24ABB0(v26, v25);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v26);
      *exception = (char *)off_1C650D8;
      sub_233E40((__int64)v26);
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

