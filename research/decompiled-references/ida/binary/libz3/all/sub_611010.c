__int64 __fastcall sub_611010(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
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
  char **v22; // rbp
  const char *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rbp
  int v27; // r12d
  __int64 v28; // r14
  unsigned int v29; // r12d
  __int64 v30; // rax
  __int64 v31; // r15
  _QWORD *v32; // rax
  int v33; // ecx
  __int16 v34; // ax
  unsigned int v35; // ebp
  unsigned int v36; // edx
  unsigned int *v37; // rdx
  _QWORD *v38; // rax
  char **exception; // rbp
  __int64 v40[11]; // [rsp+10h] [rbp-58h] BYREF

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
    if ( !(unsigned __int8)sub_60E5E0((_QWORD *)a1, a2, 3) )
    {
      v21 = *(_QWORD *)(a1 + 40);
LABEL_25:
      if ( v21 )
      {
        while ( *(_DWORD *)(v21 - 4) )
        {
          if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
            goto LABEL_29;
          v24 = 0xFFFFFFFF0LL;
          v25 = *(_QWORD *)(a1 + 40);
          if ( v25 )
            v24 = 16LL * (unsigned int)(*(_DWORD *)(v25 - 4) - 1);
          v26 = v24 + v25;
          v27 = *(_DWORD *)(v26 + 8);
          v28 = *(_QWORD *)v26;
          ++*(_DWORD *)(a1 + 152);
          v29 = v27 & 0xFFFFFFCC;
          if ( v29
            || (*(_BYTE *)(v26 + 8) & 1) == 0
            || (v30 = sub_1680FB0(*(_QWORD *)(a1 + 32), v28, 0), (v31 = v30) == 0) )
          {
            v34 = *(_WORD *)(v28 + 4);
            if ( v34 == 1 )
            {
              --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
              sub_60E090((_QWORD *)a1, v28);
              v21 = *(_QWORD *)(a1 + 40);
            }
            else if ( v34 == 2 )
            {
              sub_610100(a1, v28, v26);
              v21 = *(_QWORD *)(a1 + 40);
            }
            else
            {
              if ( v34 )
              {
                sub_1872CE0("");
                sub_1873130(114, 793);
              }
              sub_60F120(a1, v28, v26);
              v21 = *(_QWORD *)(a1 + 40);
            }
            goto LABEL_25;
          }
          ++*(_DWORD *)(v30 + 8);
          v32 = *(_QWORD **)(a1 + 56);
          if ( v32 )
          {
            v29 = *((_DWORD *)v32 - 1);
            if ( v29 == *((_DWORD *)v32 - 2) )
            {
              v35 = (3 * v29 + 1) >> 1;
              v36 = 8 * v35 + 8;
              if ( 8 * v29 + 8 >= v36 || v29 >= v35 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v40, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v40);
                sub_233E40((__int64)v40);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v37 = (unsigned int *)sub_186B300(v32 - 1, v36);
              v32 = v37 + 2;
              *(_QWORD *)(a1 + 56) = v37 + 2;
              v29 = v37[1];
              *v37 = v35;
            }
          }
          else
          {
            v38 = (_QWORD *)sub_186B270(0x18u);
            *v38 = 2;
            v32 = v38 + 1;
            *(_QWORD *)(a1 + 56) = v32;
          }
          v32[v29] = v31;
          *((_DWORD *)v32 - 1) = v29 + 1;
          v21 = *(_QWORD *)(a1 + 40);
          v33 = *(_DWORD *)(v21 - 4);
          *(_DWORD *)(v21 - 4) = v33 - 1;
          if ( v28 != v31 && v33 != 1 )
            *(_BYTE *)(v21 + 16LL * (unsigned int)(v33 - 2) + 8) |= 2u;
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
      sub_609FA0(a1);
      v22 = (char **)__cxa_allocate_exception(0x28u);
      v23 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
      sub_24ABB0(v40, v23);
      *v22 = (char *)off_1C63128;
      sub_2333C0(v22 + 1, v40);
      *v22 = (char *)off_1C650D8;
      sub_233E40((__int64)v40);
      __cxa_throw(v22, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
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

