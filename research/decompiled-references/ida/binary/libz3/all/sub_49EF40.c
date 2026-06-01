__int64 __fastcall sub_49EF40(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  int v12; // ecx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // r12
  __int64 v18; // r13
  __int16 v19; // ax
  char **exception; // rbp
  const char *v21; // rax
  __int64 v22; // rax
  __int64 v23; // r14
  _QWORD *v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 *v28; // rcx
  int v29; // ecx
  unsigned int v30; // r12d
  unsigned int v31; // ecx
  unsigned int *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rdx
  char **v35; // rbp
  __int64 v36[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 16) )
    return sub_49BB60(a1, a2, a3);
  v5 = *(_QWORD *)(a1 + 40);
LABEL_3:
  if ( v5 )
  {
    while ( *(_DWORD *)(v5 - 4) )
    {
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
      {
        sub_4927B0(a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v21 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_24ABB0(v36, v21);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v36);
        *exception = (char *)off_1C650D8;
        sub_233E40((__int64)v36);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
      }
      v15 = 0xFFFFFFFF0LL;
      v16 = *(_QWORD *)(a1 + 40);
      if ( v16 )
        v15 = 16LL * (unsigned int)(*(_DWORD *)(v16 - 4) - 1);
      v17 = v15 + v16;
      v18 = *(_QWORD *)v17;
      ++*(_DWORD *)(a1 + 152);
      if ( (*(_DWORD *)(v17 + 8) & 0xFFFFFFCC) != 0
        || (*(_BYTE *)(v17 + 8) & 1) == 0
        || (v22 = sub_1680FB0(*(_QWORD *)(a1 + 32), v18, 0), (v23 = v22) == 0) )
      {
        v19 = *(_WORD *)(v18 + 4);
        if ( v19 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_492F20((_QWORD *)a1, v18);
          v5 = *(_QWORD *)(a1 + 40);
        }
        else if ( v19 == 2 )
        {
          sub_49CD60(a1, v18, v17);
          v5 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v19 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_49DC80(a1, v18, v17);
          v5 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_3;
      }
      v24 = *(_QWORD **)(a1 + 56);
      ++*(_DWORD *)(v22 + 8);
      if ( v24 )
      {
        v25 = *((_DWORD *)v24 - 1);
        if ( v25 == *((_DWORD *)v24 - 2) )
        {
          v30 = (3 * v25 + 1) >> 1;
          v31 = 8 * v30 + 8;
          if ( 8 * v25 + 8 >= v31 || v25 >= v30 )
          {
            v35 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v36, "Overflow encountered when expanding vector");
            *v35 = (char *)off_1C63128;
            sub_2333C0(v35 + 1, v36);
            sub_233E40((__int64)v36);
            __cxa_throw(v35, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v32 = (unsigned int *)sub_186B300(v24 - 1, v31);
          v33 = v32[1];
          v24 = v32 + 2;
          *v32 = v30;
          *(_QWORD *)(a1 + 56) = v32 + 2;
          LODWORD(v32) = v33;
          v28 = &v24[v33];
          v27 = (_DWORD)v32 + 1;
        }
        else
        {
          v26 = v25;
          v27 = v25 + 1;
          v28 = &v24[v26];
        }
      }
      else
      {
        v34 = (_QWORD *)sub_186B270(0x18u);
        *v34 = 2;
        v27 = 1;
        v24 = v34 + 1;
        *(_QWORD *)(a1 + 56) = v24;
        v28 = v24;
      }
      *v28 = v23;
      *((_DWORD *)v24 - 1) = v27;
      v5 = *(_QWORD *)(a1 + 40);
      v29 = *(_DWORD *)(v5 - 4);
      *(_DWORD *)(v5 - 4) = v29 - 1;
      if ( v18 != v23 && v29 != 1 )
        *(_BYTE *)(v5 + 16LL * (unsigned int)(v29 - 2) + 8) |= 2u;
    }
  }
  v6 = 0x7FFFFFFF8LL;
  result = *(_QWORD *)(a1 + 56);
  if ( result )
    v6 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
  v8 = *(_QWORD *)(result + v6);
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v9 = *a2;
  if ( *a2 )
  {
    v10 = a2[1];
    v11 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v11 )
    {
      sub_15D7BC0(v10, v9);
      result = *(_QWORD *)(a1 + 56);
    }
  }
  v12 = *(_DWORD *)(result - 4);
  *a2 = v8;
  v13 = *(_QWORD *)(result + 8LL * (unsigned int)(v12 - 1));
  *(_DWORD *)(result - 4) = v12 - 1;
  if ( v13 )
  {
    v14 = *(_QWORD *)(a1 + 48);
    v11 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v11 )
      return sub_15D7BC0(v14, v13);
  }
  return result;
}

