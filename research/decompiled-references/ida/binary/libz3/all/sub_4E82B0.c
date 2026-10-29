__int64 __fastcall sub_4E82B0(_QWORD *a1, int a2, __int64 *a3, __int64 a4, char a5, __int64 *a6)
{
  char **exception; // r12
  unsigned int v7; // r14d
  int v10; // eax
  __int64 v11; // r15
  _QWORD *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 i; // rdx
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdi
  bool v24; // zf
  unsigned int v26; // r9d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // [rsp+0h] [rbp-90h]
  int v33; // [rsp+Ch] [rbp-84h]
  unsigned int v37; // [rsp+24h] [rbp-6Ch]
  __int64 v38; // [rsp+28h] [rbp-68h]
  __int64 v39[10]; // [rsp+40h] [rbp-50h] BYREF

  v7 = 0;
  v31 = a1[5];
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1[1] + 40LL) + 16LL))(*(_QWORD *)(a1[1] + 40LL));
  v11 = a1[4];
  v33 = v10;
  v12 = (_QWORD *)sub_186B270(0x18u);
  v12[1] = v11;
  v13 = (__int64)(v12 + 1);
  *v12 = 0x100000002LL;
  v14 = *(_QWORD *)(a4 + 8);
  for ( i = 1; v14; *(_DWORD *)(v13 - 4) = i )
  {
    if ( v7 >= *(_DWORD *)(v14 - 4) )
      break;
    v16 = *(_QWORD *)(v14 + 8LL * v7);
    if ( (_DWORD)i == *(_DWORD *)(v13 - 8) )
    {
      v26 = (unsigned int)(3 * i + 1) >> 1;
      v27 = 8 * v26 + 8;
      if ( 8 * (int)i + 8 >= (unsigned int)v27 || (unsigned int)i >= v26 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v39, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v39);
        sub_233E40((__int64)v39);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v37 = (unsigned int)(3 * i + 1) >> 1;
      v38 = *(_QWORD *)(v14 + 8LL * v7);
      v28 = (unsigned int *)sub_186B300((void *)(v13 - 8), v27);
      LODWORD(i) = v28[1];
      v13 = (__int64)(v28 + 2);
      v16 = v38;
      *v28 = v37;
      v14 = *(_QWORD *)(a4 + 8);
    }
    v17 = (unsigned int)i;
    i = (unsigned int)(i + 1);
    ++v7;
    *(_QWORD *)(v13 + 8 * v17) = v16;
  }
  v18 = *a3;
  if ( !*a3 )
  {
    v18 = sub_15D2D60(v31, v33, a2, 0, 0, i, v13, 0);
    if ( v18 )
      ++*(_DWORD *)(v18 + 8);
    v29 = *a3;
    if ( *a3 )
    {
      v30 = a3[1];
      v24 = (*(_DWORD *)(v29 + 8))-- == 1;
      if ( v24 )
        sub_15D7BC0(v30, v29);
    }
    *a3 = v18;
    i = *(unsigned int *)(v13 - 4);
  }
  v19 = *(__int64 **)(a1[1] + 40LL);
  v20 = *v19;
  if ( a5 )
  {
    (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64, __int64, __int64))(v20 + 32))(
      v19,
      v18,
      i,
      v13,
      1,
      v13);
    v21 = *a6;
    v22 = a1[4];
    if ( *a6 != v22 )
    {
      if ( v21 )
      {
        v23 = a6[1];
        v24 = (*(_DWORD *)(v21 + 8))-- == 1;
        if ( v24 )
        {
          sub_15D7BC0(v23, v21);
          v22 = a1[4];
        }
      }
      *a6 = v22;
      if ( v22 )
        ++*(_DWORD *)(v22 + 8);
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64, __int64 *))(v20 + 24))(v19, v18, i, v13, a6);
  }
  return sub_186B220((void *)(v13 - 8));
}

