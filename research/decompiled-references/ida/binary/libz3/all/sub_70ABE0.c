__int64 __fastcall sub_70ABE0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rdx
  char **exception; // rbp
  const char *v17; // rax
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // r14
  int v24; // ecx
  __int16 v25; // ax
  const char *v26; // rax
  __int64 v27[9]; // [rsp+0h] [rbp-48h] BYREF

  v8 = *a4;
  if ( *a4 )
  {
    v9 = a4[1];
    if ( (*(_DWORD *)(v8 + 8))-- == 1 )
      sub_15D7BC0(v9, v8);
  }
  *a4 = 0;
  if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) )
  {
    if ( !*(_BYTE *)(a1 + 17) )
    {
      if ( a2 )
        ++*(_DWORD *)(a2 + 8);
      result = sub_6FFC80(*a3, a3[1]);
      *a3 = a2;
      return result;
    }
    sub_706EE0(a1);
    exception = (char **)__cxa_allocate_exception(0x28u);
    v26 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
    sub_6FFCA0(v27, v26);
LABEL_21:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v27);
    *exception = (char *)off_1C650D8;
    sub_233E40((__int64)v27);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
  }
  *(_QWORD *)(a1 + 120) = a2;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  if ( !(unsigned __int8)sub_707860(a1, a2, 3) )
  {
    v15 = *(_QWORD *)(a1 + 40);
LABEL_16:
    if ( !v15 )
      goto LABEL_10;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v15 - 4) )
        goto LABEL_10;
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
        break;
      v18 = 0xFFFFFFFF0LL;
      v19 = *(_QWORD *)(a1 + 40);
      if ( v19 )
        v18 = 16LL * (unsigned int)(*(_DWORD *)(v19 - 4) - 1);
      v20 = v18 + v19;
      v21 = *(_QWORD *)v20;
      ++*(_DWORD *)(a1 + 152);
      if ( (*(_DWORD *)(v20 + 8) & 0xFFFFFFCC) != 0
        || (*(_BYTE *)(v20 + 8) & 1) == 0
        || (v22 = sub_1680FB0(*(_QWORD *)(a1 + 32), v21, 0), (v23 = v22) == 0) )
      {
        v25 = *(_WORD *)(v21 + 4);
        if ( v25 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_7076F0((_QWORD *)a1, v21);
          v15 = *(_QWORD *)(a1 + 40);
        }
        else if ( v25 == 2 )
        {
          sub_70A080(a1, v21, v20);
          v15 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v25 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_7099B0(a1, v21, v20);
          v15 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_16;
      }
      v27[0] = v22;
      ++*(_DWORD *)(v22 + 8);
      sub_6FFDF0((_QWORD *)(a1 + 56), v27);
      v15 = *(_QWORD *)(a1 + 40);
      v24 = *(_DWORD *)(v15 - 4);
      *(_DWORD *)(v15 - 4) = v24 - 1;
      if ( v21 != v23 && v24 != 1 )
        *(_BYTE *)(v15 + 16LL * (unsigned int)(v24 - 2) + 8) |= 2u;
    }
    sub_706EE0(a1);
    exception = (char **)__cxa_allocate_exception(0x28u);
    v17 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
    sub_6FFCA0(v27, v17);
    goto LABEL_21;
  }
LABEL_10:
  v12 = 0x7FFFFFFF8LL;
  v13 = *(_QWORD *)(a1 + 56);
  if ( v13 )
    v12 = 8LL * (unsigned int)(*(_DWORD *)(v13 - 4) - 1);
  v14 = *(_QWORD *)(v13 + v12);
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  sub_6FFC80(*a3, a3[1]);
  *a3 = v14;
  return sub_39BF70((__int64 *)(a1 + 48));
}

