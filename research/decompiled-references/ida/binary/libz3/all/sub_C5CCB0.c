__int64 __fastcall sub_C5CCB0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r13
  __int64 v13; // r14
  __int16 v14; // ax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rsi
  __int64 v19; // rdi
  bool v20; // zf
  int v21; // ecx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 result; // rax
  __int64 v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rdi
  int v29; // ecx
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // r15
  __int64 v36; // rax
  int v37; // ecx
  char **exception; // rbp
  const char *v39; // rax
  __int64 v40[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a1 + 40);
LABEL_2:
  if ( v6 )
  {
    while ( *(_DWORD *)(v6 - 4) )
    {
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
      {
        sub_C593D0(a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v39 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_24ABB0(v40, v39);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v40);
        *exception = (char *)off_1C650D8;
        sub_233E40((__int64)v40);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
      }
      v10 = 0xFFFFFFFF0LL;
      v11 = *(_QWORD *)(a1 + 40);
      if ( v11 )
        v10 = 16LL * (unsigned int)(*(_DWORD *)(v11 - 4) - 1);
      v12 = v10 + v11;
      v13 = *(_QWORD *)v12;
      ++*(_DWORD *)(a1 + 152);
      if ( (*(_DWORD *)(v12 + 8) & 0xFFFFFFCC) != 0
        || (*(_BYTE *)(v12 + 8) & 1) == 0
        || (v34 = sub_1680FB0(*(_QWORD *)(a1 + 32), v13, 0), (v35 = v34) == 0) )
      {
        v14 = *(_WORD *)(v13 + 4);
        if ( v14 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_C5B960((_QWORD *)a1, v13);
          v6 = *(_QWORD *)(a1 + 40);
        }
        else if ( v14 == 2 )
        {
          sub_C5EFE0(a1, v13, v12);
          v6 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v14 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_C5C300(a1, v13, v12, v7, v8, v9);
          v6 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_2;
      }
      v40[0] = v34;
      ++*(_DWORD *)(v34 + 8);
      sub_C516F0((_QWORD *)(a1 + 56), v40);
      v36 = sub_1680FB0(*(_QWORD *)(a1 + 72), v13, 0);
      v40[0] = v36;
      if ( v36 )
        ++*(_DWORD *)(v36 + 8);
      sub_C50B00((_QWORD *)(a1 + 88), v40);
      v6 = *(_QWORD *)(a1 + 40);
      v37 = *(_DWORD *)(v6 - 4);
      *(_DWORD *)(v6 - 4) = v37 - 1;
      if ( v13 != v35 && v37 != 1 )
        *(_BYTE *)(v6 + 16LL * (unsigned int)(v37 - 2) + 8) |= 2u;
    }
  }
  v15 = 0x7FFFFFFF8LL;
  v16 = *(_QWORD *)(a1 + 56);
  if ( v16 )
    v15 = 8LL * (unsigned int)(*(_DWORD *)(v16 - 4) - 1);
  v17 = *(_QWORD *)(v16 + v15);
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  v18 = *a2;
  if ( *a2 )
  {
    v19 = a2[1];
    v20 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v20 )
    {
      sub_15D7BC0(v19, v18);
      v16 = *(_QWORD *)(a1 + 56);
    }
  }
  v21 = *(_DWORD *)(v16 - 4);
  *a2 = v17;
  v22 = *(_QWORD *)(v16 + 8LL * (unsigned int)(v21 - 1));
  *(_DWORD *)(v16 - 4) = v21 - 1;
  if ( v22 )
  {
    v23 = *(_QWORD *)(a1 + 48);
    v20 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v20 )
      sub_15D7BC0(v23, v22);
  }
  v24 = 0x7FFFFFFF8LL;
  result = *(_QWORD *)(a1 + 88);
  if ( result )
    v24 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
  v26 = *(_QWORD *)(result + v24);
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  v27 = *a3;
  if ( *a3 )
  {
    v28 = a3[1];
    v20 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v20 )
    {
      sub_15D7BC0(v28, v27);
      result = *(_QWORD *)(a1 + 88);
    }
  }
  v29 = *(_DWORD *)(result - 4);
  *a3 = v26;
  v30 = *(_QWORD *)(result + 8LL * (unsigned int)(v29 - 1));
  *(_DWORD *)(result - 4) = v29 - 1;
  if ( v30 && (v31 = *(_QWORD *)(a1 + 80), v20 = *(_DWORD *)(v30 + 8) == 1, --*(_DWORD *)(v30 + 8), v20) )
  {
    result = sub_15D7BC0(v31, v30);
    if ( *a3 )
      return result;
  }
  else if ( v26 )
  {
    return result;
  }
  v32 = sub_15DE1B0(*(_QWORD *)(a1 + 8));
  v33 = v32;
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  result = sub_C4E200(*a3, a3[1]);
  *a3 = v33;
  return result;
}

