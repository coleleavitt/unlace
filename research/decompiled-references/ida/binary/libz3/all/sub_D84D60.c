__int64 __fastcall sub_D84D60(__int64 a1, __int64 *a2)
{
  char **v2; // rbp
  char **v3; // rbp
  __int64 v6; // rax
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r13
  unsigned int v15; // eax
  __int16 v16; // ax
  __int64 v17; // rdx
  __int64 result; // rax
  __int64 v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  int v23; // ecx
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r14
  _QWORD *v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 *v32; // rcx
  int v33; // ecx
  char **exception; // rbp
  const char *v35; // rax
  unsigned int v36; // r12d
  unsigned int v37; // ecx
  unsigned int *v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rdx
  int v41; // [rsp+0h] [rbp-58h]
  __int64 v42; // [rsp+8h] [rbp-50h]
  __int64 v43[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(a1 + 40);
LABEL_2:
  if ( v6 )
  {
    while ( *(_DWORD *)(v6 - 4) )
    {
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_BYTE *)(a1 + 17) )
      {
        sub_D85AF0(a1);
        exception = (char **)__cxa_allocate_exception(0x28u);
        v35 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
        sub_24ABB0(v43, v35);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v43);
        *exception = (char *)off_1C650D8;
        sub_233E40((__int64)v43);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
      }
      v10 = 0xFFFFFFFF0LL;
      v11 = *(_QWORD *)(a1 + 40);
      if ( v11 )
        v10 = 16LL * (unsigned int)(*(_DWORD *)(v11 - 4) - 1);
      v12 = (__int64 *)(v10 + v11);
      v13 = *(_QWORD *)(a1 + 144);
      v14 = *v12;
      v15 = *(_DWORD *)(a1 + 152) + 1;
      *(_DWORD *)(a1 + 152) = v15;
      if ( *(_DWORD *)(v13 + 56) < v15 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v43, off_1C7E168[0]);
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v43);
        *v2 = (char *)off_1C650D8;
        sub_233E40((__int64)v43);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
      }
      if ( (v12[1] & 0xFFFFFFCC) != 0
        || (v12[1] & 1) == 0
        || (v26 = sub_1680FB0(*(_QWORD *)(a1 + 32), v14, 0), (v27 = v26) == 0) )
      {
        v16 = *(_WORD *)(v14 + 4);
        if ( v16 == 1 )
        {
          --*(_DWORD *)(*(_QWORD *)(a1 + 40) - 4LL);
          sub_D86320(a1, v14, v13, v7, v8, v9, v41, v42, v43[0]);
          v6 = *(_QWORD *)(a1 + 40);
        }
        else if ( v16 == 2 )
        {
          sub_D8CAA0(a1, v14, v12);
          v6 = *(_QWORD *)(a1 + 40);
        }
        else
        {
          if ( v16 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          sub_D8BAC0(a1, v14, (_DWORD)v12, v7, v8, v9, v41, v42, v43[0], v43[1], v43[2]);
          v6 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_2;
      }
      v28 = *(_QWORD **)(a1 + 56);
      ++*(_DWORD *)(v26 + 8);
      if ( v28 )
      {
        v29 = *((_DWORD *)v28 - 1);
        if ( v29 == *((_DWORD *)v28 - 2) )
        {
          v36 = (3 * v29 + 1) >> 1;
          v37 = 8 * v36 + 8;
          if ( 8 * v29 + 8 >= v37 || v29 >= v36 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v43, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v43);
            sub_233E40((__int64)v43);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v38 = (unsigned int *)sub_186B300(v28 - 1, v37);
          v39 = v38[1];
          v28 = v38 + 2;
          *v38 = v36;
          *(_QWORD *)(a1 + 56) = v38 + 2;
          LODWORD(v38) = v39;
          v32 = &v28[v39];
          v31 = (_DWORD)v38 + 1;
        }
        else
        {
          v30 = v29;
          v31 = v29 + 1;
          v32 = &v28[v30];
        }
      }
      else
      {
        v40 = (_QWORD *)sub_186B270(0x18u);
        *v40 = 2;
        v31 = 1;
        v28 = v40 + 1;
        *(_QWORD *)(a1 + 56) = v28;
        v32 = v28;
      }
      *v32 = v27;
      *((_DWORD *)v28 - 1) = v31;
      v6 = *(_QWORD *)(a1 + 40);
      v33 = *(_DWORD *)(v6 - 4);
      *(_DWORD *)(v6 - 4) = v33 - 1;
      if ( v14 != v27 && v33 != 1 )
        *(_BYTE *)(v6 + 16LL * (unsigned int)(v33 - 2) + 8) |= 2u;
    }
  }
  v17 = 0x7FFFFFFF8LL;
  result = *(_QWORD *)(a1 + 56);
  if ( result )
    v17 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
  v19 = *(_QWORD *)(result + v17);
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  v20 = *a2;
  if ( *a2 )
  {
    v21 = a2[1];
    v22 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v22 )
    {
      sub_15D7BC0(v21, v20);
      result = *(_QWORD *)(a1 + 56);
    }
  }
  v23 = *(_DWORD *)(result - 4);
  *a2 = v19;
  v24 = *(_QWORD *)(result + 8LL * (unsigned int)(v23 - 1));
  *(_DWORD *)(result - 4) = v23 - 1;
  if ( v24 )
  {
    v25 = *(_QWORD *)(a1 + 48);
    v22 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v22 )
      return sub_15D7BC0(v25, v24);
  }
  return result;
}

