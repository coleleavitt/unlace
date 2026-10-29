__int64 __fastcall sub_CADBE0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // r12
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // r14
  __int16 v13; // ax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  int v20; // ecx
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 result; // rax
  __int64 v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdi
  int v28; // ecx
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // r15
  __int64 v35; // rax
  int v36; // ecx
  char **exception; // rbp
  const char *v38; // rax
  char **v39; // rbx
  __int64 v40[11]; // [rsp+0h] [rbp-58h] BYREF

  v3 = a2;
  v6 = *(_QWORD *)(a1 + 40);
LABEL_2:
  if ( v6 )
  {
    while ( *(_DWORD *)(v6 - 4) )
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( !(unsigned __int8)sub_18290A0(v7) && *(_BYTE *)(a1 + 17) )
      {
        sub_CA1FF0(a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v38 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_C9E960(v40, v38);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v40);
        *exception = (char *)off_1C650D8;
        sub_233E40((__int64)v40);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
      }
      v8 = 0xFFFFFFFF0LL;
      v9 = *(_QWORD *)(a1 + 40);
      if ( v9 )
        v8 = 16LL * (unsigned int)(*(_DWORD *)(v9 - 4) - 1);
      v10 = v8 + v9;
      v11 = *(_QWORD *)(a1 + 144);
      v12 = *(_QWORD *)v10;
      ++*(_DWORD *)(a1 + 152);
      if ( *(_QWORD *)(*(_QWORD *)(v11 + 8) + 496LL) < (unsigned __int64)Z3_get_estimated_alloc_size_0(v7, a2) )
      {
        v39 = (char **)__cxa_allocate_exception(0x28u);
        sub_C9E960(v40, off_1C7E178);
        *v39 = (char *)off_1C63670;
        sub_2333C0(v39 + 1, v40);
        sub_233E40((__int64)v40);
        __cxa_throw(v39, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
      }
      if ( (*(_DWORD *)(v10 + 8) & 0xFFFFFFCC) != 0
        || (*(_BYTE *)(v10 + 8) & 1) == 0
        || (v33 = sub_1680FB0(*(_QWORD *)(a1 + 32), v12, 0), (v34 = v33) == 0) )
      {
        v13 = *(_WORD *)(v12 + 4);
        if ( v13 == 1 )
        {
          a2 = (__int64 *)v12;
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_CA79A0((_QWORD *)a1, v12);
          v6 = *(_QWORD *)(a1 + 40);
        }
        else if ( v13 == 2 )
        {
          a2 = (__int64 *)v12;
          sub_CACDC0(a1, v12, v10);
          v6 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v13 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          a2 = (__int64 *)v12;
          sub_CAC6C0((_QWORD *)a1, v12, v10);
          v6 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_2;
      }
      v40[0] = v33;
      ++*(_DWORD *)(v33 + 8);
      sub_C9F390((_QWORD *)(a1 + 56), v40);
      v35 = sub_1680FB0(*(_QWORD *)(a1 + 72), v12, 0);
      v40[0] = v35;
      if ( v35 )
        ++*(_DWORD *)(v35 + 8);
      a2 = v40;
      sub_C9F250((_QWORD *)(a1 + 88), v40);
      v6 = *(_QWORD *)(a1 + 40);
      v36 = *(_DWORD *)(v6 - 4);
      *(_DWORD *)(v6 - 4) = v36 - 1;
      if ( v34 != v12 && v36 != 1 )
        *(_BYTE *)(v6 + 16LL * (unsigned int)(v36 - 2) + 8) |= 2u;
    }
  }
  v14 = 0x7FFFFFFF8LL;
  v15 = *(_QWORD *)(a1 + 56);
  if ( v15 )
    v14 = 8LL * (unsigned int)(*(_DWORD *)(v15 - 4) - 1);
  v16 = *(_QWORD *)(v15 + v14);
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v17 = *v3;
  if ( *v3 )
  {
    v18 = v3[1];
    v19 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v19 )
    {
      sub_15D7BC0(v18, v17);
      v15 = *(_QWORD *)(a1 + 56);
    }
  }
  v20 = *(_DWORD *)(v15 - 4);
  *v3 = v16;
  v21 = *(_QWORD *)(v15 + 8LL * (unsigned int)(v20 - 1));
  *(_DWORD *)(v15 - 4) = v20 - 1;
  if ( v21 )
  {
    v22 = *(_QWORD *)(a1 + 48);
    v19 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v22, v21);
  }
  v23 = 0x7FFFFFFF8LL;
  result = *(_QWORD *)(a1 + 88);
  if ( result )
    v23 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
  v25 = *(_QWORD *)(result + v23);
  if ( v25 )
    ++*(_DWORD *)(v25 + 8);
  v26 = *a3;
  if ( *a3 )
  {
    v27 = a3[1];
    v19 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v19 )
    {
      sub_15D7BC0(v27, v26);
      result = *(_QWORD *)(a1 + 88);
    }
  }
  v28 = *(_DWORD *)(result - 4);
  *a3 = v25;
  v29 = *(_QWORD *)(result + 8LL * (unsigned int)(v28 - 1));
  *(_DWORD *)(result - 4) = v28 - 1;
  if ( v29 && (v30 = *(_QWORD *)(a1 + 80), v19 = *(_DWORD *)(v29 + 8) == 1, --*(_DWORD *)(v29 + 8), v19) )
  {
    result = sub_15D7BC0(v30, v29);
    if ( *a3 )
      return result;
  }
  else if ( v25 )
  {
    return result;
  }
  v31 = sub_15DE1B0(*(_QWORD *)(a1 + 8));
  v32 = v31;
  if ( v31 )
    ++*(_DWORD *)(v31 + 8);
  result = sub_C9E920(*a3, a3[1]);
  *a3 = v32;
  return result;
}

