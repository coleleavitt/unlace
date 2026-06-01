__int64 __fastcall sub_C19FA0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r13
  __int64 v10; // r14
  __int16 v11; // ax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  int v18; // ecx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 result; // rax
  __int64 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  int v26; // ecx
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // rax
  int v34; // ecx
  char **exception; // rbp
  const char *v36; // rax
  __int64 v37[11]; // [rsp+0h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a1 + 40);
LABEL_2:
  if ( v6 )
  {
    while ( *(_DWORD *)(v6 - 4) )
    {
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
      {
        sub_C17170((_QWORD *)a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v36 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_C0E620(v37, v36);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v37);
        *exception = (char *)off_1C650D8;
        sub_233E40((__int64)v37);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
      }
      v7 = 0xFFFFFFFF0LL;
      v8 = *(_QWORD *)(a1 + 40);
      if ( v8 )
        v7 = 16LL * (unsigned int)(*(_DWORD *)(v8 - 4) - 1);
      v9 = v7 + v8;
      v10 = *(_QWORD *)v9;
      ++*(_DWORD *)(a1 + 152);
      if ( (*(_DWORD *)(v9 + 8) & 0xFFFFFFCC) != 0
        || (*(_BYTE *)(v9 + 8) & 1) == 0
        || (v31 = sub_1680FB0(*(_QWORD *)(a1 + 32), v10, 0), (v32 = v31) == 0) )
      {
        v11 = *(_WORD *)(v10 + 4);
        if ( v11 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_C174A0((_QWORD *)a1, v10);
          v6 = *(_QWORD *)(a1 + 40);
        }
        else if ( v11 == 2 )
        {
          sub_C19380(a1, v10, v9);
          v6 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v11 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_C18A00((__int64 *)a1, v10, v9);
          v6 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_2;
      }
      v37[0] = v31;
      ++*(_DWORD *)(v31 + 8);
      sub_C10880((_QWORD *)(a1 + 56), v37);
      v33 = sub_1680FB0(*(_QWORD *)(a1 + 72), v10, 0);
      v37[0] = v33;
      if ( v33 )
        ++*(_DWORD *)(v33 + 8);
      sub_C0FED0((_QWORD *)(a1 + 88), v37);
      v6 = *(_QWORD *)(a1 + 40);
      v34 = *(_DWORD *)(v6 - 4);
      *(_DWORD *)(v6 - 4) = v34 - 1;
      if ( v10 != v32 && v34 != 1 )
        *(_BYTE *)(v6 + 16LL * (unsigned int)(v34 - 2) + 8) |= 2u;
    }
  }
  v12 = 0x7FFFFFFF8LL;
  v13 = *(_QWORD *)(a1 + 56);
  if ( v13 )
    v12 = 8LL * (unsigned int)(*(_DWORD *)(v13 - 4) - 1);
  v14 = *(_QWORD *)(v13 + v12);
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v15 = *a2;
  if ( *a2 )
  {
    v16 = a2[1];
    v17 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v17 )
    {
      sub_15D7BC0(v16, v15);
      v13 = *(_QWORD *)(a1 + 56);
    }
  }
  v18 = *(_DWORD *)(v13 - 4);
  *a2 = v14;
  v19 = *(_QWORD *)(v13 + 8LL * (unsigned int)(v18 - 1));
  *(_DWORD *)(v13 - 4) = v18 - 1;
  if ( v19 )
  {
    v20 = *(_QWORD *)(a1 + 48);
    v17 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v20, v19);
  }
  v21 = 0x7FFFFFFF8LL;
  result = *(_QWORD *)(a1 + 88);
  if ( result )
    v21 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
  v23 = *(_QWORD *)(result + v21);
  if ( v23 )
    ++*(_DWORD *)(v23 + 8);
  v24 = *a3;
  if ( *a3 )
  {
    v25 = a3[1];
    v17 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v17 )
    {
      sub_15D7BC0(v25, v24);
      result = *(_QWORD *)(a1 + 88);
    }
  }
  v26 = *(_DWORD *)(result - 4);
  *a3 = v23;
  v27 = *(_QWORD *)(result + 8LL * (unsigned int)(v26 - 1));
  *(_DWORD *)(result - 4) = v26 - 1;
  if ( v27 && (v28 = *(_QWORD *)(a1 + 80), v17 = *(_DWORD *)(v27 + 8) == 1, --*(_DWORD *)(v27 + 8), v17) )
  {
    result = sub_15D7BC0(v28, v27);
    if ( *a3 )
      return result;
  }
  else if ( v23 )
  {
    return result;
  }
  v29 = sub_15DE1B0(*(_QWORD *)(a1 + 8));
  v30 = v29;
  if ( v29 )
    ++*(_DWORD *)(v29 + 8);
  result = sub_C0E540(*a3, a3[1]);
  *a3 = v30;
  return result;
}

