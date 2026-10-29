__int64 __fastcall sub_CE0F70(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
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
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdx
  char **exception; // rbp
  const char *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rbp
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // r14
  int v30; // ecx
  __int16 v31; // ax
  const char *v32; // rax
  __int64 v33[9]; // [rsp+0h] [rbp-48h] BYREF

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
  if ( !(_BYTE)result )
  {
    if ( !*(_BYTE *)(a1 + 17) )
    {
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
      return result;
    }
    sub_CD9170(a1);
    exception = (char **)__cxa_allocate_exception(0x28u);
    v32 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
    sub_CD6E90(v33, v32);
LABEL_30:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v33);
    *exception = (char *)off_1C650D8;
    sub_233E40((__int64)v33);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
  }
  *(_QWORD *)(a1 + 120) = a2;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  if ( !(unsigned __int8)sub_CDC980((_QWORD *)a1, a2, 3) )
  {
    v21 = *(_QWORD *)(a1 + 40);
LABEL_25:
    if ( !v21 )
      goto LABEL_14;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v21 - 4) )
        goto LABEL_14;
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
        break;
      v24 = 0xFFFFFFFF0LL;
      v25 = *(_QWORD *)(a1 + 40);
      if ( v25 )
        v24 = 16LL * (unsigned int)(*(_DWORD *)(v25 - 4) - 1);
      v26 = v24 + v25;
      v27 = *(_QWORD *)v26;
      ++*(_DWORD *)(a1 + 152);
      if ( (*(_DWORD *)(v26 + 8) & 0xFFFFFFCC) != 0
        || (*(_BYTE *)(v26 + 8) & 1) == 0
        || (v28 = sub_1680FB0(*(_QWORD *)(a1 + 32), v27, 0), (v29 = v28) == 0) )
      {
        v31 = *(_WORD *)(v27 + 4);
        if ( v31 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_CDC610((_QWORD *)a1, v27);
          v21 = *(_QWORD *)(a1 + 40);
        }
        else if ( v31 == 2 )
        {
          sub_CE0420(a1, v27, v26);
          v21 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v31 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_CDFB00(a1, v27, v26);
          v21 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_25;
      }
      v33[0] = v28;
      ++*(_DWORD *)(v28 + 8);
      sub_CD7660((_QWORD *)(a1 + 56), v33);
      v21 = *(_QWORD *)(a1 + 40);
      v30 = *(_DWORD *)(v21 - 4);
      *(_DWORD *)(v21 - 4) = v30 - 1;
      if ( v30 != 1 && v27 != v29 )
        *(_BYTE *)(v21 + 16LL * (unsigned int)(v30 - 2) + 8) |= 2u;
    }
    sub_CD9170(a1);
    exception = (char **)__cxa_allocate_exception(0x28u);
    v23 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
    sub_CD6E90(v33, v23);
    goto LABEL_30;
  }
LABEL_14:
  v14 = 0x7FFFFFFF8LL;
  result = *(_QWORD *)(a1 + 56);
  if ( result )
    v14 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
  v15 = *(_QWORD *)(result + v14);
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  v16 = *a3;
  if ( *a3 )
  {
    v17 = a3[1];
    v10 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v10 )
    {
      sub_15D7BC0(v17, v16);
      result = *(_QWORD *)(a1 + 56);
    }
  }
  v18 = *(_DWORD *)(result - 4);
  *a3 = v15;
  v19 = *(_QWORD *)(result + 8LL * (unsigned int)(v18 - 1));
  *(_DWORD *)(result - 4) = v18 - 1;
  if ( v19 )
  {
    v20 = *(_QWORD *)(a1 + 48);
    v10 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v10 )
      return sub_15D7BC0(v20, v19);
  }
  return result;
}

