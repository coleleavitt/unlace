void *__fastcall sub_536E00(const void *a1)
{
  void *result; // rax

  result = __dynamic_cast(
             a1,
             (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
             (const struct __class_type_info *)&`typeinfo for'datalog::karr_relation,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

