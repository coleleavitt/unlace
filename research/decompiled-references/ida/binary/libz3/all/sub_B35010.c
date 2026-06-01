void __fastcall sub_B35010(__int64 a1, unsigned int *a2, char *a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  __int64 v7; // rbp
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  int v12; // edx
  __int64 v13; // rdi
  int v14; // r15d
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // eax
  char v23; // [rsp+1h] [rbp-8Dh] BYREF
  int v24; // [rsp+2h] [rbp-8Ch] BYREF
  __int64 v25; // [rsp+6h] [rbp-88h] BYREF
  __int64 v26; // [rsp+Eh] [rbp-80h] BYREF
  _DWORD v27[8]; // [rsp+16h] [rbp-78h] BYREF
  __int64 v28[11]; // [rsp+36h] [rbp-58h] BYREF

  if ( !*(_QWORD *)(a1 + 344) )
    return;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8872LL) + 16LL * *a2;
  if ( (*(_BYTE *)(v7 + 11) & 0x40) == 0 && !*(_BYTE *)(v7 + 15) )
    return;
  sub_16744A0(v27, *(_QWORD *)(a1 + 24));
  v8 = *(_QWORD **)(a1 + 16);
  if ( (*(_BYTE *)(v7 + 11) & 0x40) == 0 )
    goto LABEL_5;
  v14 = 0;
  v22 = sub_B39350(*(_QWORD *)(v8[1082] + 8LL * **(unsigned int **)(v8[1105] + 8LL * *a2)), *(unsigned int *)(a1 + 8));
  v15 = v22;
  if ( v22 == -1 )
  {
    v8 = *(_QWORD **)(a1 + 16);
LABEL_5:
    v9 = *(unsigned __int8 *)(v7 + 15);
    if ( !(_BYTE)v9 )
      return;
    v10 = v8[1084];
    if ( !v10 )
      return;
    if ( (unsigned int)(unsigned __int8)v9 >= *(_DWORD *)(v10 - 4) )
      return;
    v11 = *(_QWORD *)(v10 + 8 * v9);
    if ( !v11 )
      return;
    if ( v27[0] != *(_DWORD *)(v11 + 8) )
      return;
    v13 = sub_AB5980(v11, *a2, *(_DWORD *)(a1 + 8));
    if ( !v13 )
      return;
    v14 = v12;
    v15 = (unsigned int)sub_B39350(v13, *(unsigned int *)(a1 + 8));
  }
  sub_B34CD0(a1);
  v16 = *(_QWORD *)(a1 + 448);
  v17 = *(_QWORD *)(a1 + 64);
  v24 = v14;
  v18 = *(_QWORD *)(a1 + 344) == 0;
  v19 = *(_QWORD *)(v16 + 8 * v15);
  LOBYTE(v16) = *a3;
  v25 = v17;
  v26 = a1 + 56;
  v28[0] = v19;
  v23 = v16;
  if ( v18 )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, int *, char *))(a1 + 352))(
    a1 + 328,
    &v25,
    &v26,
    v28,
    &v24,
    &v23);
  if ( (unsigned __int8)sub_B34A60(a1, &v26, a3) )
  {
    v20 = v26;
    if ( *a2 != (_DWORD)v26 )
    {
      v21 = *(_QWORD *)(a1 + 16);
      *a2 = v26;
      if ( *(_BYTE *)(*(_QWORD *)(v21 + 8848) + (unsigned int)(2 * v20)) )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_147B96(v28, "expression in \"decide\" is already assigned", v4);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v28);
        sub_233E40((__int64)v28);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
    }
  }
}

