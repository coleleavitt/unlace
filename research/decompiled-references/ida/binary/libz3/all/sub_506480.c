void __fastcall sub_506480(__int64 a1, const void *a2, const void *a3, const void *a4)
{
  void *v6; // rax
  __int64 v7; // rbp
  void *v8; // rsi

  v6 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::bound_relation,
         0);
  if ( !v6 )
    goto LABEL_6;
  v7 = (__int64)v6;
  if ( a4 )
    __dynamic_cast(
      a4,
      (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
      (const struct __class_type_info *)&`typeinfo for'datalog::bound_relation,
      0);
  v8 = __dynamic_cast(
         a3,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::interval_relation,
         0);
  if ( !v8 )
LABEL_6:
    __cxa_bad_cast();
  sub_4FFFA0(v7, (__int64)v8);
}

