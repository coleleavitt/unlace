__int64 __fastcall sub_4EB030(_QWORD *a1, const void *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v9; // [rsp+8h] [rbp-30h] BYREF
  __int64 v10; // [rsp+10h] [rbp-28h] BYREF
  __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = sub_4D6490(*(_QWORD *)(a1[3] + 24LL));
  v10 = 0;
  v2 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::external_relation,
         0);
  if ( !v2 )
    __cxa_bad_cast();
  v3 = a1[4];
  v9 = v2[4];
  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *, __int64 *))(**(_QWORD **)(a1[3] + 40LL) + 24LL))(
    *(_QWORD *)(a1[3] + 40LL),
    v3,
    1,
    &v9,
    &v10);
  v4 = sub_186B270(0x60u);
  sub_4E7C60(v4, a1[3], a1 + 1, v10);
  v5 = v10;
  if ( !v10 )
    return v4;
  v6 = v11;
  if ( (*(_DWORD *)(v10 + 8))-- != 1 )
    return v4;
  sub_15D7BC0(v6, v5);
  return v4;
}

