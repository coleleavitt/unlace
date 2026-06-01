__int64 __fastcall sub_4E7AF0(__int64 *a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // r14
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 result; // rax
  bool v13; // zf
  __int64 v14; // [rsp+0h] [rbp-40h]
  __int64 v15; // [rsp+0h] [rbp-40h]

  if ( a1 != (__int64 *)a2[1] )
    return 0;
  v5 = sub_4D6490(a1[3]);
  v6 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::external_relation,
         0);
  if ( !v6 )
    __cxa_bad_cast();
  v7 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(v6[4]) + 24) + 8LL) + 16LL * a4;
  if ( *(_BYTE *)(v7 + 8) != 1 )
    sub_DBF6E(0);
  v8 = sub_15DB5C0(v5, a4, *(_QWORD *)v7);
  v9 = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v10 = sub_15E1B70(v5);
  v11 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  result = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64))(*a1 + 152))(a1, a2, v10);
  if ( v9 && (v13 = *(_DWORD *)(v9 + 8) == 1, --*(_DWORD *)(v9 + 8), v13) )
  {
    v14 = result;
    sub_15D7BC0(v5, v9);
    result = v14;
    if ( !v11 )
      return result;
  }
  else if ( !v11 )
  {
    return result;
  }
  v13 = (*(_DWORD *)(v11 + 8))-- == 1;
  if ( v13 )
  {
    v15 = result;
    sub_15D7BC0(v5, v11);
    return v15;
  }
  return result;
}

