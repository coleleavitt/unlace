__int64 __fastcall sub_6F01A0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 *v11; // r12
  __int64 v12; // r13
  __int16 v13; // ax
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  int v20; // ecx
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r14
  int v25; // ecx
  char **exception; // rbp
  const char *v27; // rax
  int v28; // [rsp+0h] [rbp-58h]
  __int64 v29; // [rsp+8h] [rbp-50h]
  __int64 v30[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 40);
LABEL_2:
  if ( v4 )
  {
    while ( *(_DWORD *)(v4 - 4) )
    {
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
      {
        sub_6F1B90(a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v27 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_24ABB0(v30, v27);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v30);
        *exception = (char *)off_1C650D8;
        sub_233E40((__int64)v30);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
      }
      v9 = 0xFFFFFFFF0LL;
      v10 = *(_QWORD *)(a1 + 40);
      if ( v10 )
        v9 = 16LL * (unsigned int)(*(_DWORD *)(v10 - 4) - 1);
      v11 = (__int64 *)(v9 + v10);
      v12 = *v11;
      ++*(_DWORD *)(a1 + 152);
      if ( (v11[1] & 0xFFFFFFCC) != 0
        || (v11[1] & 1) == 0
        || (v23 = sub_1680FB0(*(_QWORD *)(a1 + 32), v12, 0), (v24 = v23) == 0) )
      {
        v13 = *(_WORD *)(v12 + 4);
        if ( v13 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_6F40E0(a1, v12, v5, v6, v7, v8, v28, v29, v30[0]);
          v4 = *(_QWORD *)(a1 + 40);
        }
        else if ( v13 == 2 )
        {
          sub_6F6DB0(a1, v12, v11);
          v4 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v13 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_6F6880(a1, v12, (_DWORD)v11, v6, v7, v8, v28, v29, v30[0]);
          v4 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_2;
      }
      v30[0] = v23;
      ++*(_DWORD *)(v23 + 8);
      sub_6EFE70((_QWORD *)(a1 + 56), v30);
      v4 = *(_QWORD *)(a1 + 40);
      v25 = *(_DWORD *)(v4 - 4);
      *(_DWORD *)(v4 - 4) = v25 - 1;
      if ( v12 != v24 && v25 != 1 )
        *(_BYTE *)(v4 + 16LL * (unsigned int)(v25 - 2) + 8) |= 2u;
    }
  }
  v14 = 0x7FFFFFFF8LL;
  result = *(_QWORD *)(a1 + 56);
  if ( result )
    v14 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
  v16 = *(_QWORD *)(result + v14);
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v17 = *a2;
  if ( *a2 )
  {
    v18 = a2[1];
    v19 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v19 )
    {
      sub_15D7BC0(v18, v17);
      result = *(_QWORD *)(a1 + 56);
    }
  }
  v20 = *(_DWORD *)(result - 4);
  *a2 = v16;
  v21 = *(_QWORD *)(result + 8LL * (unsigned int)(v20 - 1));
  *(_DWORD *)(result - 4) = v20 - 1;
  if ( v21 )
  {
    v22 = *(_QWORD *)(a1 + 48);
    v19 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v19 )
      return sub_15D7BC0(v22, v21);
  }
  return result;
}

