__int64 __fastcall sub_E81DF0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r9d
  char **exception; // rbp
  const char *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rbp
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // r14
  int v22; // ecx
  __int16 v23; // ax
  const char *v24; // rax
  __int64 v25[9]; // [rsp+0h] [rbp-48h] BYREF

  sub_E65BA0(*a4, a4[1]);
  *a4 = 0;
  if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) )
  {
    if ( !*(_BYTE *)(a1 + 17) )
    {
      if ( a2 )
        ++*(_DWORD *)(a2 + 8);
      result = sub_E65BC0(*a3, a3[1]);
      *a3 = a2;
      return result;
    }
    sub_E734C0(a1);
    exception = (char **)__cxa_allocate_exception(0x28u);
    v24 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
    sub_E65BE0(v25, v24);
LABEL_18:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v25);
    *exception = (char *)off_1C650D8;
    sub_233E40((__int64)v25);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
  }
  *(_QWORD *)(a1 + 120) = a2;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  if ( !(unsigned __int8)sub_E75040(a1, a2, 3) )
  {
    v10 = *(_QWORD *)(a1 + 40);
LABEL_13:
    if ( !v10 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v10 - 4) )
        goto LABEL_7;
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
        break;
      v16 = 0xFFFFFFFF0LL;
      v17 = *(_QWORD *)(a1 + 40);
      if ( v17 )
        v16 = 16LL * (unsigned int)(*(_DWORD *)(v17 - 4) - 1);
      v18 = v16 + v17;
      v19 = *(_QWORD *)v18;
      ++*(_DWORD *)(a1 + 152);
      if ( (*(_DWORD *)(v18 + 8) & 0xFFFFFFCC) != 0
        || (*(_BYTE *)(v18 + 8) & 1) == 0
        || (v20 = sub_1680FB0(*(_QWORD *)(a1 + 32), v19, 0), (v21 = v20) == 0) )
      {
        v23 = *(_WORD *)(v19 + 4);
        if ( v23 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_E74ED0(a1, v19);
          v10 = *(_QWORD *)(a1 + 40);
        }
        else if ( v23 == 2 )
        {
          sub_E818D0(a1, v19, v18);
          v10 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v23 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_E77140(a1, v19, v18, v11, v12, v13);
          v10 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_13;
      }
      v25[0] = v20;
      ++*(_DWORD *)(v20 + 8);
      sub_E67160((unsigned int **)(a1 + 56), v25);
      v10 = *(_QWORD *)(a1 + 40);
      v22 = *(_DWORD *)(v10 - 4);
      *(_DWORD *)(v10 - 4) = v22 - 1;
      if ( v19 != v21 && v22 != 1 )
        *(_BYTE *)(v10 + 16LL * (unsigned int)(v22 - 2) + 8) |= 2u;
    }
    sub_E734C0(a1);
    exception = (char **)__cxa_allocate_exception(0x28u);
    v15 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
    sub_E65BE0(v25, v15);
    goto LABEL_18;
  }
LABEL_7:
  v7 = 0x7FFFFFFF8LL;
  v8 = *(_QWORD *)(a1 + 56);
  if ( v8 )
    v7 = 8LL * (unsigned int)(*(_DWORD *)(v8 - 4) - 1);
  v9 = *(_QWORD *)(v8 + v7);
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  sub_E65BC0(*a3, a3[1]);
  *a3 = v9;
  return sub_39BF70((__int64 *)(a1 + 48));
}

