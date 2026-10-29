__int64 __fastcall sub_50B210(__int64 a1, const void *a2, const void *a3, void *a4)
{
  _QWORD *v6; // rax
  char v7; // r13
  _QWORD *v8; // rbp
  void *v9; // rsi

  v6 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::bound_relation,
         0);
  if ( !v6 )
    goto LABEL_6;
  v7 = *(_BYTE *)(a1 + 8);
  v8 = v6;
  if ( a4 )
    a4 = __dynamic_cast(
           a4,
           (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
           (const struct __class_type_info *)&`typeinfo for'datalog::bound_relation,
           0);
  v9 = __dynamic_cast(
         a3,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::bound_relation,
         0);
  if ( !v9 )
LABEL_6:
    __cxa_bad_cast();
  return sub_509C00(v8, (__int64)v9, (__int64)a4, v7);
}

