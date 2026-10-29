__int64 __fastcall sub_4EAF00(_QWORD *a1, const void *a2, const void *a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  __int64 v14; // [rsp+8h] [rbp-30h]

  v4 = sub_4D6490(*(_QWORD *)(a1[4] + 24LL));
  v13 = 0;
  v14 = v4;
  v5 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::external_relation,
         0);
  if ( !v5 )
    __cxa_bad_cast();
  a1[7] = v5[4];
  v6 = __dynamic_cast(
         a3,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::external_relation,
         0);
  if ( !v6 )
    __cxa_bad_cast();
  v7 = a1[5];
  a1[8] = v6[4];
  (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD *, __int64 *))(**(_QWORD **)(a1[4] + 40LL) + 24LL))(
    *(_QWORD *)(a1[4] + 40LL),
    v7,
    2,
    a1 + 7,
    &v13);
  v8 = sub_186B270(0x60u);
  sub_4E7C60(v8, a1[4], a1 + 1, v13);
  v9 = v13;
  if ( !v13 )
    return v8;
  v10 = v14;
  if ( (*(_DWORD *)(v13 + 8))-- != 1 )
    return v8;
  sub_15D7BC0(v10, v9);
  return v8;
}

