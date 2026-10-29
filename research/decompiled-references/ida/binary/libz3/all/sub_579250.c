void *__fastcall sub_579250(__int64 a1)
{
  void *result; // rax

  result = __dynamic_cast(
             *(const void **)(a1 + 8),
             (const struct __class_type_info *)&`typeinfo for'datalog::relation_plugin,
             (const struct __class_type_info *)&`typeinfo for'datalog::product_relation_plugin,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

