__int64 __fastcall sub_CAF8F0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rdi
  char **exception; // rbp
  const char *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // r12
  __int64 v23; // r14
  __int64 v24; // r13
  __int64 v25; // rcx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // r14
  int v30; // ecx
  __int16 v31; // ax
  const char *v32; // rax
  char **v33; // rbp
  __int64 v34[9]; // [rsp+0h] [rbp-48h] BYREF

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
      result = sub_C9E940(*a3, a3[1]);
      *a3 = a2;
      return result;
    }
    sub_CA1FF0(a1);
    exception = (char **)__cxa_allocate_exception(0x28u);
    v32 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
    sub_C9E960(v34, v32);
LABEL_21:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v34);
    *exception = (char *)off_1C650D8;
    sub_233E40((__int64)v34);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
  }
  *(_QWORD *)(a1 + 120) = a2;
  v12 = (__int64 *)a2;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  if ( !(unsigned __int8)sub_CAE280((_QWORD *)a1, a2, 3) )
  {
    v16 = *(_QWORD *)(a1 + 40);
LABEL_16:
    if ( !v16 )
      goto LABEL_10;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v16 - 4) )
        goto LABEL_10;
      v17 = *(_QWORD *)(a1 + 8);
      if ( !(unsigned __int8)sub_18290A0(v17) )
      {
        if ( *(_BYTE *)(a1 + 17) )
          break;
      }
      v20 = 0xFFFFFFFF0LL;
      v21 = *(_QWORD *)(a1 + 40);
      if ( v21 )
        v20 = 16LL * (unsigned int)(*(_DWORD *)(v21 - 4) - 1);
      v22 = v20 + v21;
      v23 = *(_QWORD *)(a1 + 144);
      v24 = *(_QWORD *)v22;
      ++*(_DWORD *)(a1 + 152);
      if ( *(_QWORD *)(*(_QWORD *)(v23 + 8) + 496LL) < (unsigned __int64)Z3_get_estimated_alloc_size_0(v17, v12) )
      {
        v33 = (char **)__cxa_allocate_exception(0x28u);
        sub_C9E960(v34, off_1C7E178);
        *v33 = (char *)off_1C63670;
        sub_2333C0(v33 + 1, v34);
        sub_233E40((__int64)v34);
        __cxa_throw(v33, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
      }
      if ( (*(_DWORD *)(v22 + 8) & 0xFFFFFFCC) != 0
        || (*(_BYTE *)(v22 + 8) & 1) == 0
        || (v28 = sub_1680FB0(*(_QWORD *)(a1 + 32), v24, 0), (v29 = v28) == 0) )
      {
        v31 = *(_WORD *)(v24 + 4);
        if ( v31 == 1 )
        {
          v12 = (__int64 *)v24;
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_CA7C50((_QWORD *)a1, v24);
          v16 = *(_QWORD *)(a1 + 40);
        }
        else if ( v31 == 2 )
        {
          v12 = (__int64 *)v24;
          sub_CAED80(a1, v24, v22);
          v16 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v31 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          v12 = (__int64 *)v24;
          sub_CAE730(a1, v24, v22, v25, v26, v27);
          v16 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_16;
      }
      v34[0] = v28;
      v12 = v34;
      ++*(_DWORD *)(v28 + 8);
      sub_C9F390((_QWORD *)(a1 + 56), v34);
      v16 = *(_QWORD *)(a1 + 40);
      v30 = *(_DWORD *)(v16 - 4);
      *(_DWORD *)(v16 - 4) = v30 - 1;
      if ( v24 != v29 && v30 != 1 )
        *(_BYTE *)(v16 + 16LL * (unsigned int)(v30 - 2) + 8) |= 2u;
    }
    sub_CA1FF0(a1);
    exception = (char **)__cxa_allocate_exception(0x28u);
    v19 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
    sub_C9E960(v34, v19);
    goto LABEL_21;
  }
LABEL_10:
  v13 = 0x7FFFFFFF8LL;
  v14 = *(_QWORD *)(a1 + 56);
  if ( v14 )
    v13 = 8LL * (unsigned int)(*(_DWORD *)(v14 - 4) - 1);
  v15 = *(_QWORD *)(v14 + v13);
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  sub_C9E940(*a3, a3[1]);
  *a3 = v15;
  return sub_39BF70((__int64 *)(a1 + 48));
}

