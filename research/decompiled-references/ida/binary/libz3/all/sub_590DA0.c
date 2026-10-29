__int64 __fastcall sub_590DA0(__int64 a1, void *a2, _QWORD *a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r14
  __int64 *v8; // rbx
  __int64 v9; // rbp

  v4 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
         0);
  if ( !v4
    || (v5 = v4,
        (v6 = __dynamic_cast(
                a3,
                (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
                0)) == nullptr) )
  {
    __cxa_bad_cast();
  }
  v7 = v5[1];
  v8 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 16LL))(
                    *(_QWORD *)(a1 + 32),
                    v5[5],
                    v6[5]);
  sub_58B010(v7, (__int64 *)a2, a3, v8, a1 + 16, a1 + 24);
  v9 = sub_186B270(0x40u);
  sub_587100(v9, v7, v8 + 2, v8);
  return v9;
}

