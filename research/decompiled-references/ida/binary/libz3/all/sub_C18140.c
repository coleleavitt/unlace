__int64 __fastcall sub_C18140(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 result; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  int v22; // r8d
  int v23; // r9d
  char **exception; // rbp
  const char *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rbp
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // r14
  int v32; // ecx
  __int16 v33; // ax
  const char *v34; // rax
  __int64 v35; // [rsp+0h] [rbp-48h] BYREF
  int v36; // [rsp+8h] [rbp-40h]
  int v37; // [rsp+10h] [rbp-38h]
  __int64 v38; // [rsp+18h] [rbp-30h]
  __int64 v39; // [rsp+20h] [rbp-28h]

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
      v15 = *a3;
      if ( *a3 )
      {
        v16 = a3[1];
        v10 = (*(_DWORD *)(v15 + 8))-- == 1;
        if ( v10 )
          result = sub_15D7BC0(v16, v15);
      }
      *a3 = a2;
      return result;
    }
    sub_C17170((_QWORD *)a1);
    exception = (char **)__cxa_allocate_exception(0x28u);
    v34 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
    sub_C0E620(&v35, v34);
LABEL_24:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v35);
    *exception = (char *)off_1C650D8;
    sub_233E40((__int64)&v35);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
  }
  *(_QWORD *)(a1 + 120) = a2;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  if ( !(unsigned __int8)sub_C1A5C0(a1, a2, 3, v12, v13, v14, v35, v36, v37, v38, v39) )
  {
    v20 = *(_QWORD *)(a1 + 40);
LABEL_19:
    if ( !v20 )
      goto LABEL_13;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v20 - 4) )
        goto LABEL_13;
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
        break;
      v26 = 0xFFFFFFFF0LL;
      v27 = *(_QWORD *)(a1 + 40);
      if ( v27 )
        v26 = 16LL * (unsigned int)(*(_DWORD *)(v27 - 4) - 1);
      v28 = v26 + v27;
      v29 = *(_QWORD *)v28;
      ++*(_DWORD *)(a1 + 152);
      if ( (*(_DWORD *)(v28 + 8) & 0xFFFFFFCC) != 0
        || (*(_BYTE *)(v28 + 8) & 1) == 0
        || (v30 = sub_1680FB0(*(_QWORD *)(a1 + 32), v29, 0), (v31 = v30) == 0) )
      {
        v33 = *(_WORD *)(v29 + 4);
        if ( v33 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_C17830((_QWORD *)a1, v29);
          v20 = *(_QWORD *)(a1 + 40);
        }
        else if ( v33 == 2 )
        {
          sub_C179A0(a1, v29, v28, v21, v22, v23);
          v20 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v33 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_C1A980(a1, v29, v28, (_DWORD)v21, v22, v23, v35, v36, v37, v38, v39);
          v20 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_19;
      }
      v35 = v30;
      ++*(_DWORD *)(v30 + 8);
      sub_C10880((_QWORD *)(a1 + 56), &v35);
      v20 = *(_QWORD *)(a1 + 40);
      v32 = *(_DWORD *)(v20 - 4);
      *(_DWORD *)(v20 - 4) = v32 - 1;
      if ( v29 != v31 && v32 != 1 )
        *(_BYTE *)(v20 + 16LL * (unsigned int)(v32 - 2) + 8) |= 2u;
    }
    sub_C17170((_QWORD *)a1);
    exception = (char **)__cxa_allocate_exception(0x28u);
    v25 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
    sub_C0E620(&v35, v25);
    goto LABEL_24;
  }
LABEL_13:
  v17 = 0x7FFFFFFF8LL;
  v18 = *(_QWORD *)(a1 + 56);
  if ( v18 )
    v17 = 8LL * (unsigned int)(*(_DWORD *)(v18 - 4) - 1);
  v19 = *(_QWORD *)(v18 + v17);
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  sub_C0E600(*a3, a3[1]);
  *a3 = v19;
  return sub_39BF70((__int64 *)(a1 + 48));
}

