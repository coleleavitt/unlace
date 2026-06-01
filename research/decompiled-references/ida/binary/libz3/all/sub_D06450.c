__int64 __fastcall sub_D06450(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
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
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  char **exception; // rbp
  const char *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rbp
  __int64 v30; // rdx
  __int64 v31; // r14
  unsigned int v32; // eax
  unsigned int v33; // r12d
  __int64 v34; // rax
  __int64 v35; // r15
  _QWORD *v36; // rax
  int v37; // ecx
  __int16 v38; // ax
  unsigned int v39; // ebp
  unsigned int v40; // edx
  unsigned int *v41; // rdx
  _QWORD *v42; // rax
  char **v43; // rbp
  __int64 v44[11]; // [rsp+0h] [rbp-58h] BYREF

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
LABEL_29:
    sub_D049A0(a1);
    exception = (char **)__cxa_allocate_exception(0x28u);
    v26 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
    sub_D03640(v44, v26);
LABEL_30:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v44);
    *exception = (char *)off_1C650D8;
    sub_233E40((__int64)v44);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
  }
  *(_QWORD *)(a1 + 120) = a2;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  if ( !(unsigned __int8)sub_D09F90(a1, a2, 3) )
  {
    v21 = *(_QWORD *)(a1 + 40);
LABEL_25:
    if ( !v21 )
      goto LABEL_14;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v21 - 4) )
        goto LABEL_14;
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
        goto LABEL_29;
      v27 = 0xFFFFFFFF0LL;
      v28 = *(_QWORD *)(a1 + 40);
      if ( v28 )
        v27 = 16LL * (unsigned int)(*(_DWORD *)(v28 - 4) - 1);
      v29 = v27 + v28;
      v30 = *(_QWORD *)(a1 + 144);
      v31 = *(_QWORD *)v29;
      v32 = *(_DWORD *)(a1 + 152) + 1;
      *(_DWORD *)(a1 + 152) = v32;
      if ( v32 >= *(_DWORD *)(v30 + 20) )
        break;
      v33 = *(_DWORD *)(v29 + 8) & 0xFFFFFFCC;
      if ( v33 || (*(_BYTE *)(v29 + 8) & 1) == 0 || (v34 = sub_1680FB0(*(_QWORD *)(a1 + 32), v31, 0), (v35 = v34) == 0) )
      {
        v38 = *(_WORD *)(v31 + 4);
        if ( v38 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_D053E0((_QWORD *)a1, v31);
          v21 = *(_QWORD *)(a1 + 40);
        }
        else if ( v38 == 2 )
        {
          sub_D05900(a1, v31, v29);
          v21 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v38 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_D0A480(a1, v31, v29, v22, v23, v24, v44[0], v44[1], v44[2]);
          v21 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_25;
      }
      ++*(_DWORD *)(v34 + 8);
      v36 = *(_QWORD **)(a1 + 56);
      if ( v36 )
      {
        v33 = *((_DWORD *)v36 - 1);
        if ( v33 == *((_DWORD *)v36 - 2) )
        {
          v39 = (3 * v33 + 1) >> 1;
          v40 = 8 * v39 + 8;
          if ( 8 * v33 + 8 >= v40 || v33 >= v39 )
          {
            v43 = (char **)__cxa_allocate_exception(0x28u);
            sub_D03640(v44, "Overflow encountered when expanding vector");
            *v43 = (char *)off_1C63128;
            sub_2333C0(v43 + 1, v44);
            sub_233E40((__int64)v44);
            __cxa_throw(v43, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v41 = (unsigned int *)sub_186B300(v36 - 1, v40);
          v36 = v41 + 2;
          *(_QWORD *)(a1 + 56) = v41 + 2;
          v33 = v41[1];
          *v41 = v39;
        }
      }
      else
      {
        v42 = (_QWORD *)sub_186B270(0x18u);
        *v42 = 2;
        v36 = v42 + 1;
        *(_QWORD *)(a1 + 56) = v36;
      }
      v36[v33] = v35;
      *((_DWORD *)v36 - 1) = v33 + 1;
      v21 = *(_QWORD *)(a1 + 40);
      v37 = *(_DWORD *)(v21 - 4);
      *(_DWORD *)(v21 - 4) = v37 - 1;
      if ( v31 != v35 && v37 != 1 )
        *(_BYTE *)(v21 + 16LL * (unsigned int)(v37 - 2) + 8) |= 2u;
    }
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_D03640(v44, off_1C7E168[0]);
    goto LABEL_30;
  }
LABEL_14:
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
  return result;
}

