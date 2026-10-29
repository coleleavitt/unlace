__int64 __fastcall sub_C5D080(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 result; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rbx
  char **exception; // rbp
  const char *v30; // rax
  __int64 v31[9]; // [rsp+10h] [rbp-48h] BYREF

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
    if ( (unsigned __int8)sub_C5EC00(a1, a2, 3, v12, v13, v14) )
    {
      v17 = 0x7FFFFFFF8LL;
      v18 = *(_QWORD *)(a1 + 56);
      if ( v18 )
        v17 = 8LL * (unsigned int)(*(_DWORD *)(v18 - 4) - 1);
      v19 = *(_QWORD *)(v18 + v17);
      if ( v19 )
        ++*(_DWORD *)(v19 + 8);
      v20 = *a3;
      if ( *a3 )
      {
        v21 = a3[1];
        v10 = (*(_DWORD *)(v20 + 8))-- == 1;
        if ( v10 )
          sub_15D7BC0(v21, v20);
      }
      *a3 = v19;
      sub_39BF70((__int64 *)(a1 + 48));
      v22 = *(_QWORD *)(a1 + 88);
      v23 = 0x7FFFFFFF8LL;
      if ( v22 )
        v23 = 8LL * (unsigned int)(*(_DWORD *)(v22 - 4) - 1);
      v24 = *(_QWORD *)(v22 + v23);
      if ( v24 )
        ++*(_DWORD *)(v24 + 8);
      v25 = *a4;
      if ( *a4 )
      {
        v26 = a4[1];
        v10 = (*(_DWORD *)(v25 + 8))-- == 1;
        if ( v10 )
          sub_15D7BC0(v26, v25);
      }
      *a4 = v24;
      result = sub_3A8160((__int64 *)(a1 + 80));
      if ( !*a4 )
      {
        v27 = sub_15DE1B0(*(_QWORD *)(a1 + 8));
        v28 = v27;
        if ( v27 )
          ++*(_DWORD *)(v27 + 8);
        result = sub_C4E200(*a4, a4[1]);
        *a4 = v28;
      }
    }
    else
    {
      return sub_C5CCB0(a1, a3, a4);
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 17) )
    {
      sub_C593D0(a1);
      exception = (char **)__cxa_allocate_exception(0x28u);
      v30 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
      sub_24ABB0(v31, v30);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v31);
      *exception = (char *)off_1C650D8;
      sub_233E40((__int64)v31);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
    }
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v15 = *a3;
    if ( *a3 )
    {
      v16 = a3[1];
      v10 = (*(_DWORD *)(v15 + 8))-- == 1;
      if ( v10 )
        result = sub_15D7BC0(v16, v15);
    }
    *a3 = a2;
  }
  return result;
}

