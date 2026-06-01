void *__fastcall sub_56A010(const void *a1)
{
  void *result; // rax

  result = __dynamic_cast(
             a1,
             (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
             (const struct __class_type_info *)&`typeinfo for'datalog::sparse_table,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

