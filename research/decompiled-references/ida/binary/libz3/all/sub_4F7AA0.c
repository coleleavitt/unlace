_QWORD *__fastcall sub_4F7AA0(__int64 a1, __int64 a2, const void *a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  void *v6; // rax

  v4 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  v5 = v4;
  if ( v4 )
    v5 = __dynamic_cast(
           v4,
           (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
           (const struct __class_type_info *)&`typeinfo for'datalog::udoc_relation,
           0);
  v6 = __dynamic_cast(
         a3,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::udoc_relation,
         0);
  if ( !v6 )
    __cxa_bad_cast();
  sub_4F7040((__int64)(v5 + 5), v5[4], (__int64)v6 + 40);
  return v5;
}

