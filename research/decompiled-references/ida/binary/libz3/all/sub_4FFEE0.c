void *__fastcall sub_4FFEE0(const void *a1)
{
  void *result; // rax

  result = __dynamic_cast(
             a1,
             (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
             (const struct __class_type_info *)&`typeinfo for'datalog::interval_relation,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

