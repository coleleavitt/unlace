void __fastcall sub_2AB5B0(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        unsigned int *a4,
        __int64 *a5,
        unsigned int *a6,
        __int64 **a7)
{
  char **exception; // r13
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 *v11; // rbx
  _QWORD *v12; // rbp
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 *v15; // r15
  __int64 v16; // r14
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  int v19; // eax
  _QWORD *v20; // rsi
  unsigned int v21; // eax
  unsigned int v23; // r8d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rsi
  __int64 v27; // [rsp+0h] [rbp-88h]
  unsigned int v28; // [rsp+8h] [rbp-80h]
  unsigned int v29; // [rsp+Ch] [rbp-7Ch]
  __int64 v30; // [rsp+10h] [rbp-78h]
  __int64 v31; // [rsp+18h] [rbp-70h]
  __int64 v32[11]; // [rsp+30h] [rbp-58h] BYREF

  v9 = *a6;
  v10 = *a3;
  v11 = *a7;
  v27 = *a5;
  v29 = *a4;
  v30 = *a2;
  v12 = (_QWORD *)sub_186B270(0x28u);
  v13 = *(_QWORD *)(*(_QWORD *)a1 + 232LL);
  sub_2518F0((__int64)v12, *(_QWORD *)a1);
  v14 = *(_QWORD *)a1;
  *v12 = &off_1C4CA20;
  v12[3] = v13;
  v12[4] = 0;
  sub_24FBE0(v14, (__int64)v12);
  v31 = *(_QWORD *)(*(_QWORD *)a1 + 232LL);
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  sub_24E8F0((__int64)v12);
  if ( (_DWORD)v9 )
  {
    v15 = &v11[v9];
    v16 = *v11;
    v17 = (_QWORD *)v12[4];
    if ( *v11 )
      ++*(_DWORD *)(v16 + 8);
    if ( v17 )
      goto LABEL_11;
    v18 = (_QWORD *)sub_186B270(0x18u);
    v17 = v18 + 1;
    *v18 = 2;
    v19 = 1;
    v12[4] = v17;
    v20 = v17;
    while ( 1 )
    {
      ++v11;
      *v20 = v16;
      *((_DWORD *)v17 - 1) = v19;
      if ( v11 == v15 )
        break;
      while ( 1 )
      {
        v16 = *v11;
        if ( *v11 )
          ++*(_DWORD *)(v16 + 8);
LABEL_11:
        v21 = *((_DWORD *)v17 - 1);
        if ( v21 == *((_DWORD *)v17 - 2) )
          break;
        ++v11;
        v17[v21] = v16;
        *((_DWORD *)v17 - 1) = v21 + 1;
        if ( v11 == v15 )
          goto LABEL_13;
      }
      v23 = (3 * v21 + 1) >> 1;
      v24 = 8 * v23 + 8;
      if ( 8 * v21 + 8 >= (unsigned int)v24 || v21 >= v23 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v32, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v32);
        sub_233E40((__int64)v32);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v28 = (3 * v21 + 1) >> 1;
      v25 = (unsigned int *)sub_186B300(v17 - 1, v24);
      v26 = v25[1];
      v17 = v25 + 2;
      v12[4] = v25 + 2;
      *v25 = v28;
      LODWORD(v25) = v26;
      v20 = &v17[v26];
      v19 = (_DWORD)v25 + 1;
    }
  }
LABEL_13:
  (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *))(a1 + 8))(v30, v10, v29, v27, v12);
  sub_24FBC0((__int64)v12);
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 8))-- == 1 )
      sub_15D7BC0(v31, v10);
  }
}

