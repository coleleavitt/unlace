__int64 __fastcall sub_9083A0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
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
  __int64 v20; // rcx
  int v21; // r8d
  int v22; // r9d
  char **exception; // rbp
  const char *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rbp
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // r14
  int v31; // ecx
  __int16 v32; // ax
  __int64 v33; // rax
  __int64 v34; // rdx
  const char *v35; // rax
  __int64 v36[9]; // [rsp+0h] [rbp-48h] BYREF

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
    if ( (unsigned __int8)sub_904C10((_QWORD *)a1, a2, 3) )
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
            sub_903BB0(a1);
            exception = (char **)__cxa_allocate_exception(0x28u);
            v24 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
            sub_8E4EB0(v36, v24);
            goto LABEL_27;
          }
          v25 = 0xFFFFFFFF0LL;
          v26 = *(_QWORD *)(a1 + 40);
          if ( v26 )
            v25 = 16LL * (unsigned int)(*(_DWORD *)(v26 - 4) - 1);
          v27 = v25 + v26;
          v28 = *(_QWORD *)v27;
          ++*(_DWORD *)(a1 + 152);
          if ( (*(_DWORD *)(v27 + 8) & 0xFFFFFFCC) != 0 )
            break;
          if ( (*(_BYTE *)(v27 + 8) & 1) == 0 )
            break;
          v29 = sub_1680FB0(*(_QWORD *)(a1 + 32), v28, 0);
          v30 = v29;
          if ( !v29 )
            break;
          v36[0] = v29;
          ++*(_DWORD *)(v29 + 8);
          sub_8F15F0((_QWORD *)(a1 + 56), v36);
          v19 = *(_QWORD *)(a1 + 40);
          v31 = *(_DWORD *)(v19 - 4);
          *(_DWORD *)(v19 - 4) = v31 - 1;
          if ( v28 != v30 && v31 != 1 )
            *(_BYTE *)(v19 + 16LL * (unsigned int)(v31 - 2) + 8) |= 2u;
        }
        v32 = *(_WORD *)(v28 + 4);
        if ( v32 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_904AA0((_QWORD *)a1, v28);
          v19 = *(_QWORD *)(a1 + 40);
        }
        else if ( v32 == 2 )
        {
          sub_907BB0(a1, v28, v27);
          v19 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v32 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_907570(a1, v28, v27, v20, v21, v22);
          v19 = *(_QWORD *)(a1 + 40);
        }
      }
LABEL_40:
      v33 = 0x7FFFFFFF8LL;
      v34 = *(_QWORD *)(a1 + 56);
      if ( v34 )
        v33 = 8LL * (unsigned int)(*(_DWORD *)(v34 - 4) - 1);
      v16 = *(_QWORD *)(v34 + v33);
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
      sub_903BB0(a1);
      exception = (char **)__cxa_allocate_exception(0x28u);
      v35 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
      sub_8E4EB0(v36, v35);
LABEL_27:
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v36);
      *exception = (char *)off_1C650D8;
      sub_233E40((__int64)v36);
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

