__int64 __fastcall sub_CE5320(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r12
  __int64 v17; // r13
  __int16 v18; // ax
  char **exception; // rbp
  const char *v20; // rax
  __int64 v21; // rax
  __int64 v22; // r14
  int v23; // ecx
  __int64 v24[9]; // [rsp+0h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 16) )
    return sub_CDF420(a1, a2, (__int64 *)(a1 + 496));
  v4 = *(_QWORD *)(a1 + 40);
LABEL_3:
  if ( v4 )
  {
    while ( *(_DWORD *)(v4 - 4) )
    {
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
      {
        sub_CD9170(a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v20 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_CD6E90(v24, v20);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v24);
        *exception = (char *)off_1C650D8;
        sub_233E40((__int64)v24);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
      }
      v14 = 0xFFFFFFFF0LL;
      v15 = *(_QWORD *)(a1 + 40);
      if ( v15 )
        v14 = 16LL * (unsigned int)(*(_DWORD *)(v15 - 4) - 1);
      v16 = v14 + v15;
      v17 = *(_QWORD *)v16;
      ++*(_DWORD *)(a1 + 152);
      if ( (*(_DWORD *)(v16 + 8) & 0xFFFFFFCC) != 0
        || (*(_BYTE *)(v16 + 8) & 1) == 0
        || (v21 = sub_1680FB0(*(_QWORD *)(a1 + 32), v17, 0), (v22 = v21) == 0) )
      {
        v18 = *(_WORD *)(v17 + 4);
        if ( v18 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_CDC610((_QWORD *)a1, v17);
          v4 = *(_QWORD *)(a1 + 40);
        }
        else if ( v18 == 2 )
        {
          sub_CE0420(a1, v17, v16);
          v4 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v18 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_CDFB00(a1, v17, v16);
          v4 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_3;
      }
      v24[0] = v21;
      ++*(_DWORD *)(v21 + 8);
      sub_CD7660((_QWORD *)(a1 + 56), v24);
      v4 = *(_QWORD *)(a1 + 40);
      v23 = *(_DWORD *)(v4 - 4);
      *(_DWORD *)(v4 - 4) = v23 - 1;
      if ( v23 != 1 && v17 != v22 )
        *(_BYTE *)(v4 + 16LL * (unsigned int)(v23 - 2) + 8) |= 2u;
    }
  }
  v5 = 0x7FFFFFFF8LL;
  result = *(_QWORD *)(a1 + 56);
  if ( result )
    v5 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
  v7 = *(_QWORD *)(result + v5);
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v8 = *a2;
  if ( *a2 )
  {
    v9 = a2[1];
    v10 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v10 )
    {
      sub_15D7BC0(v9, v8);
      result = *(_QWORD *)(a1 + 56);
    }
  }
  v11 = *(_DWORD *)(result - 4);
  *a2 = v7;
  v12 = *(_QWORD *)(result + 8LL * (unsigned int)(v11 - 1));
  *(_DWORD *)(result - 4) = v11 - 1;
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 48);
    v10 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v10 )
      return sub_15D7BC0(v13, v12);
  }
  return result;
}

