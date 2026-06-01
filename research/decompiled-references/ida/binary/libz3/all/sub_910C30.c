__int64 __fastcall sub_910C30(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdx
  char **exception; // rbp
  const char *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rbp
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // r14
  int v28; // ecx
  __int16 v29; // ax
  __int64 v30; // rax
  __int64 v31; // rdx
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
  if ( (_BYTE)result )
  {
    *(_QWORD *)(a1 + 120) = a2;
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 152) = 0;
    if ( (unsigned __int8)sub_90F960(a1, a2, 3) )
    {
      v14 = 0x7FFFFFFF8LL;
      v15 = *(_QWORD *)(a1 + 56);
      if ( v15 )
        v14 = 8LL * (unsigned int)(*(_DWORD *)(v15 - 4) - 1);
      v16 = *(_QWORD *)(v15 + v14);
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
      v17 = *a3;
      if ( *a3 )
      {
        v18 = a3[1];
        v10 = (*(_DWORD *)(v17 + 8))-- == 1;
        if ( v10 )
          sub_15D7BC0(v18, v17);
      }
    }
    else
    {
      v19 = *(_QWORD *)(a1 + 40);
      while ( v19 )
      {
        while ( 1 )
        {
          if ( !*(_DWORD *)(v19 - 4) )
            goto LABEL_40;
          if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
          {
            sub_903C50(a1);
            exception = (char **)__cxa_allocate_exception(0x28u);
            v21 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
            sub_8E4EB0(v33, v21);
            goto LABEL_27;
          }
          v22 = 0xFFFFFFFF0LL;
          v23 = *(_QWORD *)(a1 + 40);
          if ( v23 )
            v22 = 16LL * (unsigned int)(*(_DWORD *)(v23 - 4) - 1);
          v24 = v22 + v23;
          v25 = *(_QWORD *)v24;
          ++*(_DWORD *)(a1 + 152);
          if ( (*(_DWORD *)(v24 + 8) & 0xFFFFFFCC) != 0 )
            break;
          if ( (*(_BYTE *)(v24 + 8) & 1) == 0 )
            break;
          v26 = sub_1680FB0(*(_QWORD *)(a1 + 32), v25, 0);
          v27 = v26;
          if ( !v26 )
            break;
          v33[0] = v26;
          ++*(_DWORD *)(v26 + 8);
          sub_8F15F0((_QWORD *)(a1 + 56), v33);
          v19 = *(_QWORD *)(a1 + 40);
          v28 = *(_DWORD *)(v19 - 4);
          *(_DWORD *)(v19 - 4) = v28 - 1;
          if ( v25 != v27 && v28 != 1 )
            *(_BYTE *)(v19 + 16LL * (unsigned int)(v28 - 2) + 8) |= 2u;
        }
        v29 = *(_WORD *)(v25 + 4);
        if ( v29 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_905D40((_QWORD *)a1, v25);
          v19 = *(_QWORD *)(a1 + 40);
        }
        else if ( v29 == 2 )
        {
          sub_910600(a1, v25, v24);
          v19 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v29 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_90FE40(a1, v25, v24);
          v19 = *(_QWORD *)(a1 + 40);
        }
      }
LABEL_40:
      v30 = 0x7FFFFFFF8LL;
      v31 = *(_QWORD *)(a1 + 56);
      if ( v31 )
        v30 = 8LL * (unsigned int)(*(_DWORD *)(v31 - 4) - 1);
      v16 = *(_QWORD *)(v31 + v30);
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
      sub_8E4E90(*a3, a3[1]);
    }
    *a3 = v16;
    return sub_39BF70((__int64 *)(a1 + 48));
  }
  else
  {
    if ( *(_BYTE *)(a1 + 17) )
    {
      sub_903C50(a1);
      exception = (char **)__cxa_allocate_exception(0x28u);
      v32 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
      sub_8E4EB0(v33, v32);
LABEL_27:
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v33);
      *exception = (char *)off_1C650D8;
      sub_233E40((__int64)v33);
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

