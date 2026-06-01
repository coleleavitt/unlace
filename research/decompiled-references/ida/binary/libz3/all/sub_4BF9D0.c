__int64 __fastcall sub_4BF9D0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r13
  __int64 v10; // r14
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rdi
  int v23; // ecx
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rax
  int v31; // ecx
  char **exception; // rbp
  const char *v33; // rax
  __int64 v34[11]; // [rsp+0h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a1 + 40);
LABEL_2:
  if ( v6 )
  {
    while ( *(_DWORD *)(v6 - 4) )
    {
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
      {
        sub_4B6D70(a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v33 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_4B1880(v34, v33);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v34);
        *exception = (char *)off_1C650D8;
        sub_233E40((__int64)v34);
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
        || (v28 = sub_1680FB0(*(_QWORD *)(a1 + 32), v10, 0), (v29 = v28) == 0) )
      {
        v11 = *(_WORD *)(v10 + 4);
        if ( v11 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_4BA8C0((_QWORD *)a1, v10);
          v6 = *(_QWORD *)(a1 + 40);
        }
        else if ( v11 == 2 )
        {
          sub_4BEE00(a1, v10, v9);
          v6 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v11 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_4BB910((_QWORD *)a1, v10, v9);
          v6 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_2;
      }
      v34[0] = v28;
      ++*(_DWORD *)(v28 + 8);
      sub_4B2920((_QWORD *)(a1 + 56), v34);
      v30 = sub_1680FB0(*(_QWORD *)(a1 + 72), v10, 0);
      v34[0] = v30;
      if ( v30 )
        ++*(_DWORD *)(v30 + 8);
      sub_4B2860((_QWORD *)(a1 + 88), v34);
      v6 = *(_QWORD *)(a1 + 40);
      v31 = *(_DWORD *)(v6 - 4);
      *(_DWORD *)(v6 - 4) = v31 - 1;
      if ( v10 != v29 && v31 != 1 )
        *(_BYTE *)(v6 + 16LL * (unsigned int)(v31 - 2) + 8) |= 2u;
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
      sub_15D7BC0(v16, v15);
  }
  *a2 = v14;
  sub_39BF70((__int64 *)(a1 + 48));
  result = *(_QWORD *)(a1 + 88);
  v19 = 0x7FFFFFFF8LL;
  if ( result )
    v19 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
  v20 = *(_QWORD *)(result + v19);
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  v21 = *a3;
  if ( *a3 )
  {
    v22 = a3[1];
    v17 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v17 )
    {
      sub_15D7BC0(v22, v21);
      result = *(_QWORD *)(a1 + 88);
    }
  }
  v23 = *(_DWORD *)(result - 4);
  *a3 = v20;
  v24 = *(_QWORD *)(result + 8LL * (unsigned int)(v23 - 1));
  *(_DWORD *)(result - 4) = v23 - 1;
  if ( v24 && (v25 = *(_QWORD *)(a1 + 80), v17 = *(_DWORD *)(v24 + 8) == 1, --*(_DWORD *)(v24 + 8), v17) )
  {
    result = sub_15D7BC0(v25, v24);
    if ( *a3 )
      return result;
  }
  else if ( v20 )
  {
    return result;
  }
  v26 = sub_15DE1B0(*(_QWORD *)(a1 + 8));
  v27 = v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  result = sub_4B1840(*a3, a3[1]);
  *a3 = v27;
  return result;
}

