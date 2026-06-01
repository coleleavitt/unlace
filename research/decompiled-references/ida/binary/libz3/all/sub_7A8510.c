__int64 __fastcall sub_7A8510(__int64 a1, _DWORD *a2, int *a3)
{
  char **exception; // rbx
  __int64 v5; // rax
  __int64 *v6; // r13
  unsigned int v7; // r15d
  int v8; // ecx
  __int64 v9; // rdx
  bool v10; // zf
  __int64 v11; // rcx
  bool v12; // al
  __int64 (__fastcall *v13)(__int64, __int64 *, int *); // rax
  int v14; // eax
  int v15; // edx
  __int64 v16; // rcx
  bool v18; // [rsp+1Bh] [rbp-6Dh] BYREF
  int v19; // [rsp+1Ch] [rbp-6Ch] BYREF
  __int64 v20; // [rsp+20h] [rbp-68h] BYREF
  __int64 v21; // [rsp+28h] [rbp-60h] BYREF
  __int64 v22[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( !*(_QWORD *)(a1 + 400) )
    return 0;
  if ( !sub_7E4F60(a1, (unsigned int)*a2) )
    return 0;
  v5 = sub_7E4F00(a1);
  v6 = (__int64 *)v5;
  if ( !v5 )
    return 0;
  v7 = sub_7E5030(a1, v5);
  if ( !(_BYTE)v7 )
    return 0;
  v8 = *a3;
  v9 = *v6;
  v19 = 0;
  v10 = v8 == 0;
  v11 = *(_QWORD *)(a1 + 120);
  v22[0] = v9;
  v12 = !v10;
  v10 = *(_QWORD *)(a1 + 400) == 0;
  v20 = v11;
  v21 = a1 + 112;
  v18 = v12;
  if ( v10 )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, int *, bool *))(a1 + 408))(
    a1 + 384,
    &v20,
    &v21,
    v22,
    &v19,
    &v18);
  v13 = *(__int64 (__fastcall **)(__int64, __int64 *, int *))(*(_QWORD *)a1 + 104LL);
  if ( (char *)v13 == (char *)sub_7A7320 )
  {
    v14 = *(_DWORD *)(a1 + 484);
    if ( v14 == 0x7FFFFFFF )
      return 0;
    v15 = *(_DWORD *)(a1 + 488);
    LODWORD(v21) = *(_DWORD *)(a1 + 484);
    *a3 = v15;
    *(_QWORD *)(a1 + 484) = 0x7FFFFFFF;
  }
  else
  {
    if ( !(unsigned __int8)v13(a1, &v21, a3) )
      return 0;
    v14 = v21;
  }
  if ( *a2 == v14 )
    return 0;
  v16 = *(_QWORD *)(a1 + 24);
  *a2 = v14;
  if ( *(_DWORD *)(*(_QWORD *)(v16 + 3288) + 4LL * (unsigned int)(2 * v14)) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v22, "expression in \"decide\" is already assigned");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v22);
    sub_233E40((__int64)v22);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  return v7;
}

