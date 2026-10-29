char *__fastcall sub_5440E0(__int64 a1, const void *a2, const void *a3, const void *a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  void *v8; // rbp
  _BYTE *v9; // rdx

  v6 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::karr_relation,
         0);
  if ( !v6 )
    goto LABEL_7;
  v7 = (__int64)v6;
  v8 = __dynamic_cast(
         a3,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::karr_relation,
         0);
  if ( !v8 )
    goto LABEL_7;
  if ( !a4 )
  {
    v9 = nullptr;
    return sub_543930(v7, (__int64)v8, v9);
  }
  v9 = __dynamic_cast(
         a4,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::karr_relation,
         0);
  if ( !v9 )
LABEL_7:
    __cxa_bad_cast();
  return sub_543930(v7, (__int64)v8, v9);
}

