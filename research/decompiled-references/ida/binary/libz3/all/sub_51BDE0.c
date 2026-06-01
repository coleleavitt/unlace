__int64 __fastcall sub_51BDE0(__int64 a1, const void *a2, const void *a3, const void *a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned __int8 *v8; // rbp
  _QWORD *v9; // rdx
  __int64 *v10; // rcx

  v6 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::interval_relation,
         0);
  if ( !v6 )
    goto LABEL_8;
  v7 = (__int64)v6;
  v8 = (unsigned __int8 *)__dynamic_cast(
                            a3,
                            (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                            (const struct __class_type_info *)&`typeinfo for'datalog::interval_relation,
                            0);
  if ( !v8 )
    goto LABEL_8;
  if ( !a4 )
  {
    v10 = (__int64 *)*(unsigned __int8 *)(a1 + 8);
    v9 = nullptr;
    return sub_5194E0(v7, v8, v9, v10);
  }
  v9 = __dynamic_cast(
         a4,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::interval_relation,
         0);
  if ( !v9 )
LABEL_8:
    __cxa_bad_cast();
  v10 = (__int64 *)*(unsigned __int8 *)(a1 + 8);
  return sub_5194E0(v7, v8, v9, v10);
}

