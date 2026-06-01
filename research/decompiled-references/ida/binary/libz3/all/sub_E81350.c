__int64 __fastcall sub_E81350(__int64 a1, __int64 *a2, __int64 *a3)
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
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rax
  int v28; // ecx
  char **exception; // rbp
  const char *v30; // rax
  __int64 v31[11]; // [rsp+0h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a1 + 40);
LABEL_2:
  if ( v5 )
  {
    while ( *(_DWORD *)(v5 - 4) )
    {
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
      {
        sub_E734C0(a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v30 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_E65BE0(v31, v30);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v31);
        *exception = (char *)off_1C650D8;
        sub_233E40((__int64)v31);
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
        || (v25 = sub_1680FB0(*(_QWORD *)(a1 + 32), v9, 0), (v26 = v25) == 0) )
      {
        v10 = *(_WORD *)(v9 + 4);
        if ( v10 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_E74B30(a1, v9);
          v5 = *(_QWORD *)(a1 + 40);
        }
        else if ( v10 == 2 )
        {
          sub_E808A0(a1, v9, v8);
          v5 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v10 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_E76B20(a1, v9, v8);
          v5 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_2;
      }
      v31[0] = v25;
      ++*(_DWORD *)(v25 + 8);
      sub_E67160((unsigned int **)(a1 + 56), v31);
      v27 = sub_1680FB0(*(_QWORD *)(a1 + 72), v9, 0);
      v31[0] = v27;
      if ( v27 )
        ++*(_DWORD *)(v27 + 8);
      sub_E66670((_QWORD *)(a1 + 88), v31);
      v5 = *(_QWORD *)(a1 + 40);
      v28 = *(_DWORD *)(v5 - 4);
      *(_DWORD *)(v5 - 4) = v28 - 1;
      if ( v9 != v26 && v28 != 1 )
        *(_BYTE *)(v5 + 16LL * (unsigned int)(v28 - 2) + 8) |= 2u;
    }
  }
  v11 = 0x7FFFFFFF8LL;
  v12 = *(_QWORD *)(a1 + 56);
  if ( v12 )
    v11 = 8LL * (unsigned int)(*(_DWORD *)(v12 - 4) - 1);
  v13 = *(_QWORD *)(v12 + v11);
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  sub_E65BC0(*a2, a2[1]);
  *a2 = v13;
  sub_39BF70((__int64 *)(a1 + 48));
  v14 = *(_QWORD *)(a1 + 88);
  v15 = 0x7FFFFFFF8LL;
  if ( v14 )
    v15 = 8LL * (unsigned int)(*(_DWORD *)(v14 - 4) - 1);
  v16 = *(_QWORD *)(v14 + v15);
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  sub_E65BA0(*a3, a3[1]);
  v17 = *(_QWORD *)(a1 + 88);
  *a3 = v16;
  result = *(unsigned int *)(v17 - 4);
  v19 = (unsigned int)(result - 1);
  v20 = *(_QWORD *)(v17 + 8 * v19);
  *(_DWORD *)(v17 - 4) = v19;
  if ( v20 && (v21 = *(_QWORD *)(a1 + 80), v22 = *(_DWORD *)(v20 + 8) == 1, --*(_DWORD *)(v20 + 8), v22) )
  {
    result = sub_15D7BC0(v21, v20);
    if ( *a3 )
      return result;
  }
  else if ( v16 )
  {
    return result;
  }
  v23 = sub_15DE1B0(*(_QWORD *)(a1 + 8));
  v24 = v23;
  if ( v23 )
    ++*(_DWORD *)(v23 + 8);
  result = sub_E65BA0(*a3, a3[1]);
  *a3 = v24;
  return result;
}

