__int64 __fastcall sub_4B4910(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 *v10; // r12
  __int64 v11; // r13
  __int16 v12; // ax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v20; // rax
  __int64 v21; // r14
  int v22; // ecx
  char **exception; // rbp
  const char *v24; // rax
  __int64 v25[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 40);
LABEL_2:
  if ( v4 )
  {
    while ( *(_DWORD *)(v4 - 4) )
    {
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
      {
        sub_4B66E0(a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v24 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_4B1880(v25, v24);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v25);
        *exception = (char *)off_1C650D8;
        sub_233E40((__int64)v25);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
      }
      v8 = 0xFFFFFFFF0LL;
      v9 = *(_QWORD *)(a1 + 40);
      if ( v9 )
        v8 = 16LL * (unsigned int)(*(_DWORD *)(v9 - 4) - 1);
      v10 = (__int64 *)(v8 + v9);
      v11 = *v10;
      ++*(_DWORD *)(a1 + 152);
      if ( (v10[1] & 0xFFFFFFCC) != 0
        || (v10[1] & 1) == 0
        || (v20 = sub_1680FB0(*(_QWORD *)(a1 + 32), v11, 0), (v21 = v20) == 0) )
      {
        v12 = *(_WORD *)(v11 + 4);
        if ( v12 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_4B29E0((_QWORD *)a1);
          v4 = *(_QWORD *)(a1 + 40);
        }
        else if ( v12 == 2 )
        {
          sub_4BC4E0(a1, v11, v10);
          v4 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v12 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_4B9D30(a1, v11, (_DWORD)v10, v5, v6, v7, v25[0], v25[1], v25[2]);
          v4 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_2;
      }
      v25[0] = v20;
      ++*(_DWORD *)(v20 + 8);
      sub_4B2920((_QWORD *)(a1 + 56), v25);
      v4 = *(_QWORD *)(a1 + 40);
      v22 = *(_DWORD *)(v4 - 4);
      *(_DWORD *)(v4 - 4) = v22 - 1;
      if ( v22 != 1 && v11 != v21 )
        *(_BYTE *)(v4 + 16LL * (unsigned int)(v22 - 2) + 8) |= 2u;
    }
  }
  v13 = 0x7FFFFFFF8LL;
  v14 = *(_QWORD *)(a1 + 56);
  if ( v14 )
    v13 = 8LL * (unsigned int)(*(_DWORD *)(v14 - 4) - 1);
  v15 = *(_QWORD *)(v14 + v13);
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  v16 = *a2;
  if ( *a2 )
  {
    v17 = a2[1];
    if ( (*(_DWORD *)(v16 + 8))-- == 1 )
      sub_15D7BC0(v17, v16);
  }
  *a2 = v15;
  return sub_39BF70((__int64 *)(a1 + 48));
}

