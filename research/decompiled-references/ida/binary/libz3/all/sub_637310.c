__int64 __fastcall sub_637310(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 v9; // r14
  __int16 v10; // ax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 result; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // rax
  int v32; // ecx
  char **exception; // rbp
  const char *v34; // rax
  __int64 v35[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a1 + 40);
LABEL_2:
  if ( v5 )
  {
    while ( *(_DWORD *)(v5 - 4) )
    {
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
      {
        sub_6356C0(a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v34 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_24ABB0(v35, v34);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v35);
        *exception = (char *)off_1C650D8;
        sub_233E40((__int64)v35);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
      }
      v6 = 0xFFFFFFFF0LL;
      v7 = *(_QWORD *)(a1 + 40);
      if ( v7 )
        v6 = 16LL * (unsigned int)(*(_DWORD *)(v7 - 4) - 1);
      v8 = v6 + v7;
      v9 = *(_QWORD *)v8;
      ++*(_DWORD *)(a1 + 152);
      if ( (*(_DWORD *)(v8 + 8) & 0xFFFFFFCC) != 0
        || (*(_BYTE *)(v8 + 8) & 1) == 0
        || (v29 = sub_1680FB0(*(_QWORD *)(a1 + 32), v9, 0), (v30 = v29) == 0) )
      {
        v10 = *(_WORD *)(v9 + 4);
        if ( v10 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_635710((_QWORD *)a1, v9);
          v5 = *(_QWORD *)(a1 + 40);
        }
        else if ( v10 == 2 )
        {
          sub_6363E0(a1, v9, v8);
          v5 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v10 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_635CE0((_QWORD *)a1, v9, v8);
          v5 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_2;
      }
      v35[0] = v29;
      ++*(_DWORD *)(v29 + 8);
      sub_62BD60((_QWORD *)(a1 + 56), v35);
      v31 = sub_1680FB0(*(_QWORD *)(a1 + 72), v9, 0);
      v35[0] = v31;
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
      sub_62BCA0((_QWORD *)(a1 + 88), v35);
      v5 = *(_QWORD *)(a1 + 40);
      v32 = *(_DWORD *)(v5 - 4);
      *(_DWORD *)(v5 - 4) = v32 - 1;
      if ( v9 != v30 && v32 != 1 )
        *(_BYTE *)(v5 + 16LL * (unsigned int)(v32 - 2) + 8) |= 2u;
    }
  }
  v11 = 0x7FFFFFFF8LL;
  v12 = *(_QWORD *)(a1 + 56);
  if ( v12 )
    v11 = 8LL * (unsigned int)(*(_DWORD *)(v12 - 4) - 1);
  v13 = *(_QWORD *)(v12 + v11);
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  sub_629FE0(*a2, a2[1]);
  v14 = *(_QWORD *)(a1 + 56);
  *a2 = v13;
  v15 = (unsigned int)(*(_DWORD *)(v14 - 4) - 1);
  v16 = *(_QWORD *)(v14 + 8 * v15);
  *(_DWORD *)(v14 - 4) = v15;
  if ( v16 )
  {
    v17 = *(_QWORD *)(a1 + 48);
    v18 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v18 )
      sub_15D7BC0(v17, v16);
  }
  v19 = 0x7FFFFFFF8LL;
  v20 = *(_QWORD *)(a1 + 88);
  if ( v20 )
    v19 = 8LL * (unsigned int)(*(_DWORD *)(v20 - 4) - 1);
  v21 = *(_QWORD *)(v20 + v19);
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  sub_629F20(*a3, a3[1]);
  v22 = *(_QWORD *)(a1 + 88);
  *a3 = v21;
  result = *(unsigned int *)(v22 - 4);
  v24 = (unsigned int)(result - 1);
  v25 = *(_QWORD *)(v22 + 8 * v24);
  *(_DWORD *)(v22 - 4) = v24;
  if ( v25 && (v26 = *(_QWORD *)(a1 + 80), v18 = *(_DWORD *)(v25 + 8) == 1, --*(_DWORD *)(v25 + 8), v18) )
  {
    result = sub_15D7BC0(v26, v25);
    if ( *a3 )
      return result;
  }
  else if ( v21 )
  {
    return result;
  }
  v27 = sub_15DE1B0(*(_QWORD *)(a1 + 8));
  v28 = v27;
  if ( v27 )
    ++*(_DWORD *)(v27 + 8);
  result = sub_629F20(*a3, a3[1]);
  *a3 = v28;
  return result;
}

