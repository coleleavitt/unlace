__int64 __fastcall sub_7685D0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rdi
  int v19; // ecx
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rdi
  char **exception; // rbp
  const char *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rbp
  __int64 v29; // r14
  __int64 v30; // r15
  unsigned int v31; // r12d
  __int64 v32; // rax
  __int64 v33; // r12
  int v34; // ecx
  __int16 v35; // ax
  const char *v36; // rax
  char **v37; // rbp
  __int64 v38[11]; // [rsp+0h] [rbp-58h] BYREF

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
    sub_762C40(a1);
    exception = (char **)__cxa_allocate_exception(0x28u);
    v36 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
    sub_75C2B0(v38, v36);
LABEL_30:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v38);
    *exception = (char *)off_1C650D8;
    sub_233E40((__int64)v38);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
  }
  *(_QWORD *)(a1 + 120) = a2;
  v14 = (__int64 *)a2;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  if ( !(unsigned __int8)sub_7667D0((_QWORD *)a1, a2, 3) )
  {
    v22 = *(_QWORD *)(a1 + 40);
LABEL_25:
    if ( !v22 )
      goto LABEL_14;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v22 - 4) )
        goto LABEL_14;
      v23 = *(_QWORD *)(a1 + 8);
      if ( !(unsigned __int8)sub_18290A0(v23) && *(_BYTE *)(a1 + 17) )
      {
        sub_762C40(a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v25 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_75C2B0(v38, v25);
        goto LABEL_30;
      }
      v26 = 0xFFFFFFFF0LL;
      v27 = *(_QWORD *)(a1 + 40);
      if ( v27 )
        v26 = 16LL * (unsigned int)(*(_DWORD *)(v27 - 4) - 1);
      v28 = v26 + v27;
      v29 = *(_QWORD *)(a1 + 144);
      v30 = *(_QWORD *)v28;
      v31 = *(_DWORD *)(a1 + 152) + 1;
      *(_DWORD *)(a1 + 152) = v31;
      if ( *(_QWORD *)(v29 + 112) < (unsigned __int64)Z3_get_estimated_alloc_size_0(v23, v14) )
      {
        v37 = (char **)__cxa_allocate_exception(0x28u);
        sub_75C2B0(v38, off_1C7E178);
        *v37 = (char *)off_1C63670;
        sub_2333C0(v37 + 1, v38);
        sub_233E40((__int64)v38);
        __cxa_throw(v37, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
      }
      if ( *(_DWORD *)(v29 + 120) < v31 )
        break;
      if ( (*(_DWORD *)(v28 + 8) & 0xFFFFFFCC) != 0
        || (*(_BYTE *)(v28 + 8) & 1) == 0
        || (v32 = sub_1680FB0(*(_QWORD *)(a1 + 32), v30, 0), (v33 = v32) == 0) )
      {
        v35 = *(_WORD *)(v30 + 4);
        if ( v35 == 1 )
        {
          v14 = (__int64 *)v30;
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_7662C0((_QWORD *)a1, v30);
          v22 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v35 == 2 )
            sub_767A00(a1, v30, v28);
          if ( v35 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          v14 = (__int64 *)v30;
          sub_766DC0(a1, v30, v28);
          v22 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_25;
      }
      v38[0] = v32;
      v14 = v38;
      ++*(_DWORD *)(v32 + 8);
      sub_75C790((_QWORD *)(a1 + 56), v38);
      v22 = *(_QWORD *)(a1 + 40);
      v34 = *(_DWORD *)(v22 - 4);
      *(_DWORD *)(v22 - 4) = v34 - 1;
      if ( v34 != 1 && v30 != v33 )
        *(_BYTE *)(v22 + 16LL * (unsigned int)(v34 - 2) + 8) |= 2u;
    }
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_75C2B0(v38, off_1C7E168[0]);
    goto LABEL_30;
  }
LABEL_14:
  v15 = 0x7FFFFFFF8LL;
  result = *(_QWORD *)(a1 + 56);
  if ( result )
    v15 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
  v16 = *(_QWORD *)(result + v15);
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v17 = *a3;
  if ( *a3 )
  {
    v18 = a3[1];
    v10 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v10 )
    {
      sub_15D7BC0(v18, v17);
      result = *(_QWORD *)(a1 + 56);
    }
  }
  v19 = *(_DWORD *)(result - 4);
  *a3 = v16;
  v20 = *(_QWORD *)(result + 8LL * (unsigned int)(v19 - 1));
  *(_DWORD *)(result - 4) = v19 - 1;
  if ( v20 )
  {
    v21 = *(_QWORD *)(a1 + 48);
    v10 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v10 )
      return sub_15D7BC0(v21, v20);
  }
  return result;
}

