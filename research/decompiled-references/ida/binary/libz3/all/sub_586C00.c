_QWORD *__fastcall sub_586C00(__int64 a1, const void *a2, const void *a3, const void *a4)
{
  const void *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rbp
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64, const void *); // r12
  _QWORD *v9; // rax
  __int64 v10; // r13
  _QWORD *v11; // rax
  __int64 v12; // rbx
  _QWORD *result; // rax

  v5 = a4;
  if ( a4 )
  {
    v6 = __dynamic_cast(
           a4,
           (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
           (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
           0);
    if ( !v6 )
      goto LABEL_10;
    v5 = (const void *)v6[5];
  }
  v7 = *(_QWORD *)(a1 + 48);
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, const void *))(*(_QWORD *)v7 + 120LL);
  v9 = __dynamic_cast(
         a3,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
         0);
  if ( !v9
    || (v10 = v9[5],
        (v11 = __dynamic_cast(
                 a2,
                 (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                 (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
                 0)) == nullptr) )
  {
LABEL_10:
    __cxa_bad_cast();
  }
  v12 = v8(v7, v11[5], v10, v5);
  result = nullptr;
  if ( v12 )
  {
    result = (_QWORD *)sub_186B270(0x10u);
    *result = &off_1C51918;
    result[1] = v12;
  }
  return result;
}

