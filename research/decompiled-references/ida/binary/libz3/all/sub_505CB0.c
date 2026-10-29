void *__fastcall sub_505CB0(__int64 a1, const void *a2)
{
  void *result; // rax

  result = __dynamic_cast(
             a2,
             (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
             (const struct __class_type_info *)&`typeinfo for'datalog::interval_relation,
             0);
  if ( !result )
    __cxa_bad_cast();
  *(_QWORD *)(a1 + 56) = result;
  return result;
}

