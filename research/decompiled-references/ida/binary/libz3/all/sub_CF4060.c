__int64 __fastcall sub_CF4060(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rdi
  int v18; // ecx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  char **v25; // rbp
  const char *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rbp
  int v30; // r12d
  __int64 v31; // r14
  unsigned int v32; // r12d
  __int64 v33; // rax
  __int64 v34; // r15
  _QWORD *v35; // rax
  int v36; // ecx
  __int16 v37; // ax
  unsigned int v38; // ebp
  unsigned int v39; // edx
  unsigned int *v40; // rdx
  _QWORD *v41; // rax
  char **exception; // rbp
  __int64 v43[11]; // [rsp+0h] [rbp-58h] BYREF

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
    if ( !(unsigned __int8)sub_CF1AB0((_QWORD *)a1, a2, 3) )
    {
      v21 = *(_QWORD *)(a1 + 40);
LABEL_25:
      if ( v21 )
      {
        while ( *(_DWORD *)(v21 - 4) )
        {
          if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
            goto LABEL_29;
          v27 = 0xFFFFFFFF0LL;
          v28 = *(_QWORD *)(a1 + 40);
          if ( v28 )
            v27 = 16LL * (unsigned int)(*(_DWORD *)(v28 - 4) - 1);
          v29 = v27 + v28;
          v30 = *(_DWORD *)(v29 + 8);
          v31 = *(_QWORD *)v29;
          ++*(_DWORD *)(a1 + 152);
          v32 = v30 & 0xFFFFFFCC;
          if ( v32
            || (*(_BYTE *)(v29 + 8) & 1) == 0
            || (v33 = sub_1680FB0(*(_QWORD *)(a1 + 32), v31, 0), (v34 = v33) == 0) )
          {
            v37 = *(_WORD *)(v31 + 4);
            if ( v37 == 1 )
            {
              --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
              sub_CF15A0((_QWORD *)a1, v31);
              v21 = *(_QWORD *)(a1 + 40);
            }
            else if ( v37 == 2 )
            {
              sub_CF3200(a1, v31, v29);
              v21 = *(_QWORD *)(a1 + 40);
            }
            else
            {
              if ( v37 )
              {
                sub_1872CE0("");
                sub_1873130(114, 793);
              }
              sub_CF2140(a1, v31, v29, v22, v23, v24);
              v21 = *(_QWORD *)(a1 + 40);
            }
            goto LABEL_25;
          }
          ++*(_DWORD *)(v33 + 8);
          v35 = *(_QWORD **)(a1 + 56);
          if ( v35 )
          {
            v32 = *((_DWORD *)v35 - 1);
            if ( v32 == *((_DWORD *)v35 - 2) )
            {
              v38 = (3 * v32 + 1) >> 1;
              v39 = 8 * v38 + 8;
              if ( 8 * v32 + 8 >= v39 || v32 >= v38 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_CECA40(v43, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v43);
                sub_233E40((__int64)v43);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v40 = (unsigned int *)sub_186B300(v35 - 1, v39);
              v35 = v40 + 2;
              *(_QWORD *)(a1 + 56) = v40 + 2;
              v32 = v40[1];
              *v40 = v38;
            }
          }
          else
          {
            v41 = (_QWORD *)sub_186B270(0x18u);
            *v41 = 2;
            v35 = v41 + 1;
            *(_QWORD *)(a1 + 56) = v35;
          }
          v35[v32] = v34;
          *((_DWORD *)v35 - 1) = v32 + 1;
          v21 = *(_QWORD *)(a1 + 40);
          v36 = *(_DWORD *)(v21 - 4);
          *(_DWORD *)(v21 - 4) = v36 - 1;
          if ( v31 != v34 && v36 != 1 )
            *(_BYTE *)(v21 + 16LL * (unsigned int)(v36 - 2) + 8) |= 2u;
        }
      }
    }
    v14 = 0x7FFFFFFF8LL;
    result = *(_QWORD *)(a1 + 56);
    if ( result )
      v14 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
    v15 = *(_QWORD *)(result + v14);
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    v16 = *a3;
    if ( *a3 )
    {
      v17 = a3[1];
      v10 = (*(_DWORD *)(v16 + 8))-- == 1;
      if ( v10 )
      {
        sub_15D7BC0(v17, v16);
        result = *(_QWORD *)(a1 + 56);
      }
    }
    v18 = *(_DWORD *)(result - 4);
    *a3 = v15;
    v19 = *(_QWORD *)(result + 8LL * (unsigned int)(v18 - 1));
    *(_DWORD *)(result - 4) = v18 - 1;
    if ( v19 )
    {
      v20 = *(_QWORD *)(a1 + 48);
      v10 = (*(_DWORD *)(v19 + 8))-- == 1;
      if ( v10 )
        return sub_15D7BC0(v20, v19);
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 17) )
    {
LABEL_29:
      sub_CED990(a1);
      v25 = (char **)__cxa_allocate_exception(0x28u);
      v26 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
      sub_CECA40(v43, v26);
      *v25 = (char *)off_1C63128;
      sub_2333C0(v25 + 1, v43);
      *v25 = (char *)off_1C650D8;
      sub_233E40((__int64)v43);
      __cxa_throw(v25, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
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

