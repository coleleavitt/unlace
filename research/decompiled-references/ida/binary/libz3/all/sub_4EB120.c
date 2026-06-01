__int64 __fastcall sub_4EB120(_QWORD *a1, const void *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v10; // [rsp+8h] [rbp-30h] BYREF
  __int64 v11; // [rsp+10h] [rbp-28h] BYREF
  __int64 v12; // [rsp+18h] [rbp-20h]

  v2 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::external_relation,
         0);
  if ( !v2 )
    __cxa_bad_cast();
  v10 = v2[4];
  v3 = sub_4D6490(*(_QWORD *)(a1[3] + 24LL));
  v4 = a1[4];
  v11 = 0;
  v12 = v3;
  a1[6] = v10;
  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *, __int64 *))(**(_QWORD **)(a1[3] + 40LL) + 24LL))(
    *(_QWORD *)(a1[3] + 40LL),
    v4,
    1,
    &v10,
    &v11);
  v5 = sub_186B270(0x60u);
  sub_4E7C60(v5, a1[3], a1 + 1, v11);
  v6 = v11;
  if ( !v11 )
    return v5;
  v7 = v12;
  if ( (*(_DWORD *)(v11 + 8))-- != 1 )
    return v5;
  sub_15D7BC0(v7, v6);
  return v5;
}

