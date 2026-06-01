__int64 __fastcall sub_7F0860(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdi
  int v19; // ecx
  unsigned int v20; // edx
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rdi
  int v27; // ecx
  unsigned int v28; // edx
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rsi
  __int64 v33; // rdi
  char **exception; // rbp
  const char *v35; // rax
  __int64 v36[9]; // [rsp+10h] [rbp-48h] BYREF

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
    if ( (unsigned __int8)sub_5F2580((_QWORD *)a1, a2, 3) )
    {
      v14 = 0x7FFFFFFF8LL;
      v15 = *(_QWORD *)(a1 + 56);
      if ( v15 )
        v14 = 8LL * (unsigned int)(*(_DWORD *)(v15 - 4) - 1);
      v16 = *(_QWORD *)(v15 + v14);
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
      v17 = *a3;
      if ( *a3 && (v18 = a3[1], v10 = *(_DWORD *)(v17 + 8) == 1, --*(_DWORD *)(v17 + 8), v10) )
      {
        sub_15D7BC0(v18, v17);
        v15 = *(_QWORD *)(a1 + 56);
        *a3 = v16;
        v20 = *(_DWORD *)(v15 - 4) - 1;
      }
      else
      {
        v19 = *(_DWORD *)(v15 - 4);
        *a3 = v16;
        v20 = v19 - 1;
      }
      v21 = *(_QWORD *)(v15 + 8LL * v20);
      *(_DWORD *)(v15 - 4) = v20;
      if ( v21 )
      {
        v22 = *(_QWORD *)(a1 + 48);
        v10 = (*(_DWORD *)(v21 + 8))-- == 1;
        if ( v10 )
          sub_15D7BC0(v22, v21);
      }
      v23 = 0x7FFFFFFF8LL;
      result = *(_QWORD *)(a1 + 88);
      if ( result )
        v23 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
      v24 = *(_QWORD *)(result + v23);
      if ( v24 )
        ++*(_DWORD *)(v24 + 8);
      v25 = *a4;
      if ( *a4 && (v26 = a4[1], v10 = *(_DWORD *)(v25 + 8) == 1, --*(_DWORD *)(v25 + 8), v10) )
      {
        sub_15D7BC0(v26, v25);
        result = *(_QWORD *)(a1 + 88);
        *a4 = v24;
        v28 = *(_DWORD *)(result - 4) - 1;
      }
      else
      {
        v27 = *(_DWORD *)(result - 4);
        *a4 = v24;
        v28 = v27 - 1;
      }
      v29 = *(_QWORD *)(result + 8LL * v28);
      *(_DWORD *)(result - 4) = v28;
      if ( v29 )
      {
        v30 = *(_QWORD *)(a1 + 80);
        v10 = (*(_DWORD *)(v29 + 8))-- == 1;
        if ( v10 )
        {
          result = sub_15D7BC0(v30, v29);
          v24 = *a4;
        }
      }
      if ( !v24 )
      {
        result = sub_15DE1B0(*(_QWORD *)(a1 + 8));
        v31 = result;
        if ( result )
          ++*(_DWORD *)(result + 8);
        v32 = *a4;
        if ( *a4 )
        {
          v33 = a4[1];
          v10 = (*(_DWORD *)(v32 + 8))-- == 1;
          if ( v10 )
            result = sub_15D7BC0(v33, v32);
        }
        *a4 = v31;
      }
    }
    else
    {
      return sub_5F4F40(a1, a3, a4);
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 17) )
    {
      sub_5F1F10(a1);
      exception = (char **)__cxa_allocate_exception(0x28u);
      v35 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
      sub_24ABB0(v36, v35);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v36);
      *exception = (char *)off_1C650D8;
      sub_233E40((__int64)v36);
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

