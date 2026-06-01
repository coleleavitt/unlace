__int64 __fastcall sub_4EABF0(_QWORD *a1, const void *a2, const void *a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rsi

  v4 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::external_relation,
         0);
  if ( !v4
    || (a1[9] = v4[4],
        (v5 = __dynamic_cast(
                a3,
                (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                (const struct __class_type_info *)&`typeinfo for'datalog::external_relation,
                0)) == nullptr) )
  {
    __cxa_bad_cast();
  }
  v6 = a1[7];
  a1[10] = v5[4];
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD *, __int64, _QWORD *))(**(_QWORD **)(a1[6] + 40LL)
                                                                                          + 32LL))(
           *(_QWORD *)(a1[6] + 40LL),
           v6,
           2,
           a1 + 9,
           1,
           a1 + 9);
}

