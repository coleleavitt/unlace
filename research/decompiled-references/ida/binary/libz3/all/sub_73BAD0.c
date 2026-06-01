__int64 __fastcall sub_73BAD0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rdi
  int v19; // ecx
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdi
  char **v24; // r12
  const char *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rbp
  __int64 v29; // r12
  __int64 v30; // r14
  unsigned __int64 v31; // rax
  char **exception; // rbx
  unsigned int v33; // r12d
  __int16 v34; // ax
  __int64 v35; // rax
  __int64 v36; // r15
  _QWORD *v37; // rax
  int v38; // ecx
  unsigned int v39; // ebp
  unsigned int v40; // edx
  unsigned int *v41; // rdx
  _QWORD *v42; // rax
  char **v43; // rbx
  char **v44; // rbx
  __int64 v45[11]; // [rsp+0h] [rbp-58h] BYREF

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
    v14 = a2;
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 152) = 0;
    if ( !(unsigned __int8)sub_740AE0(a1, a2, 3) )
    {
      v22 = *(_QWORD *)(a1 + 40);
LABEL_25:
      if ( v22 )
      {
        while ( *(_DWORD *)(v22 - 4) )
        {
          v23 = *(_QWORD *)(a1 + 8);
          if ( !(unsigned __int8)sub_18290A0(v23) && *(_BYTE *)(a1 + 17) )
            goto LABEL_29;
          v26 = 0xFFFFFFFF0LL;
          v27 = *(_QWORD *)(a1 + 40);
          if ( v27 )
            v26 = 16LL * (unsigned int)(*(_DWORD *)(v27 - 4) - 1);
          v28 = v26 + v27;
          v29 = *(_QWORD *)(a1 + 144);
          v30 = *(_QWORD *)v28;
          v31 = (unsigned int)(*(_DWORD *)(a1 + 152) + 1);
          *(_DWORD *)(a1 + 152) = v31;
          if ( *(_QWORD *)(v29 + 232) < v31 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_737700(v45, off_1C7E168[0]);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v45);
            *exception = (char *)off_1C650D8;
            sub_233E40((__int64)v45);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
          }
          if ( *(_QWORD *)(v29 + 240) < (unsigned __int64)Z3_get_estimated_alloc_size_0(v23, v14) )
          {
            v44 = (char **)__cxa_allocate_exception(0x28u);
            sub_737700(v45, off_1C7E178);
            *v44 = (char *)off_1C63670;
            sub_2333C0(v44 + 1, v45);
            sub_233E40((__int64)v45);
            __cxa_throw(v44, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
          }
          v33 = *(_DWORD *)(v28 + 8) & 0xFFFFFFCC;
          if ( v33
            || (*(_BYTE *)(v28 + 8) & 1) == 0
            || (v14 = v30, v35 = sub_1680FB0(*(_QWORD *)(a1 + 32), v30, 0), (v36 = v35) == 0) )
          {
            v34 = *(_WORD *)(v30 + 4);
            if ( v34 == 1 )
            {
              v14 = v30;
              --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
              sub_73AA70((_QWORD *)a1, v30);
              v22 = *(_QWORD *)(a1 + 40);
            }
            else if ( v34 == 2 )
            {
              v14 = v30;
              sub_73AF80(a1, v30, v28);
              v22 = *(_QWORD *)(a1 + 40);
            }
            else
            {
              if ( v34 )
              {
                sub_1872CE0("");
                sub_1873130(114, 793);
              }
              v14 = v30;
              sub_741B80(a1, v30, v28);
              v22 = *(_QWORD *)(a1 + 40);
            }
            goto LABEL_25;
          }
          ++*(_DWORD *)(v35 + 8);
          v37 = *(_QWORD **)(a1 + 56);
          if ( v37 )
          {
            v33 = *((_DWORD *)v37 - 1);
            if ( v33 == *((_DWORD *)v37 - 2) )
            {
              v39 = (3 * v33 + 1) >> 1;
              v40 = 8 * v39 + 8;
              if ( 8 * v33 + 8 >= v40 || v33 >= v39 )
              {
                v43 = (char **)__cxa_allocate_exception(0x28u);
                sub_737700(v45, "Overflow encountered when expanding vector");
                *v43 = (char *)off_1C63128;
                sub_2333C0(v43 + 1, v45);
                sub_233E40((__int64)v45);
                __cxa_throw(v43, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v14 = v40;
              v41 = (unsigned int *)sub_186B300(v37 - 1, v40);
              v37 = v41 + 2;
              *(_QWORD *)(a1 + 56) = v41 + 2;
              v33 = v41[1];
              *v41 = v39;
            }
          }
          else
          {
            v42 = (_QWORD *)sub_186B270(0x18u);
            *v42 = 2;
            v37 = v42 + 1;
            *(_QWORD *)(a1 + 56) = v37;
          }
          v37[v33] = v36;
          *((_DWORD *)v37 - 1) = v33 + 1;
          v22 = *(_QWORD *)(a1 + 40);
          v38 = *(_DWORD *)(v22 - 4);
          *(_DWORD *)(v22 - 4) = v38 - 1;
          if ( v30 != v36 && v38 != 1 )
            *(_BYTE *)(v22 + 16LL * (unsigned int)(v38 - 2) + 8) |= 2u;
        }
      }
    }
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
  }
  else
  {
    if ( *(_BYTE *)(a1 + 17) )
    {
LABEL_29:
      sub_738C10(a1);
      v24 = (char **)__cxa_allocate_exception(0x28u);
      v25 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
      sub_737700(v45, v25);
      *v24 = (char *)off_1C63128;
      sub_2333C0(v24 + 1, v45);
      *v24 = (char *)off_1C650D8;
      sub_233E40((__int64)v45);
      __cxa_throw(v24, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
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

