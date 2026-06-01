__int64 __fastcall sub_639100(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r9d
  char **exception; // rbp
  const char *v20; // rax
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // r14
  int v27; // ecx
  __int16 v28; // ax
  const char *v29; // rax
  __int64 v30[9]; // [rsp+10h] [rbp-48h] BYREF

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
      result = sub_629FE0(*a3, a3[1]);
      *a3 = a2;
      return result;
    }
    sub_6356C0(a1);
    exception = (char **)__cxa_allocate_exception(0x28u);
    v29 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
    sub_24ABB0(v30, v29);
LABEL_21:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v30);
    *exception = (char *)off_1C650D8;
    sub_233E40((__int64)v30);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
  }
  *(_QWORD *)(a1 + 120) = a2;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  if ( !(unsigned __int8)sub_637A50((_QWORD *)a1, a2, 3) )
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
      v21 = 0xFFFFFFFF0LL;
      v22 = *(_QWORD *)(a1 + 40);
      if ( v22 )
        v21 = 16LL * (unsigned int)(*(_DWORD *)(v22 - 4) - 1);
      v23 = v21 + v22;
      v24 = *(_QWORD *)v23;
      ++*(_DWORD *)(a1 + 152);
      if ( (*(_DWORD *)(v23 + 8) & 0xFFFFFFCC) != 0
        || (*(_BYTE *)(v23 + 8) & 1) == 0
        || (v25 = sub_1680FB0(*(_QWORD *)(a1 + 32), v24, 0), (v26 = v25) == 0) )
      {
        v28 = *(_WORD *)(v24 + 4);
        if ( v28 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_6378E0((_QWORD *)a1, v24);
          v15 = *(_QWORD *)(a1 + 40);
        }
        else if ( v28 == 2 )
        {
          sub_638480(a1, v24, v23);
          v15 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v28 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_637E40(a1, v24, v23, v16, v17, v18);
          v15 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_16;
      }
      v30[0] = v25;
      ++*(_DWORD *)(v25 + 8);
      sub_62BD60((_QWORD *)(a1 + 56), v30);
      v15 = *(_QWORD *)(a1 + 40);
      v27 = *(_DWORD *)(v15 - 4);
      *(_DWORD *)(v15 - 4) = v27 - 1;
      if ( v24 != v26 && v27 != 1 )
        *(_BYTE *)(v15 + 16LL * (unsigned int)(v27 - 2) + 8) |= 2u;
    }
    sub_6356C0(a1);
    exception = (char **)__cxa_allocate_exception(0x28u);
    v20 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
    sub_24ABB0(v30, v20);
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
  sub_629FE0(*a3, a3[1]);
  *a3 = v14;
  return sub_39BF70((__int64 *)(a1 + 48));
}

