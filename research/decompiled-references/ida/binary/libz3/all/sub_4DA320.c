void *__fastcall sub_4DA320(_QWORD *a1)
{
  __int64 v1; // rbx
  void *result; // rax

  v1 = *a1;
  sub_654200(*a1, 0);
  result = __dynamic_cast(
             *(const void **)(v1 + 2968),
             (const struct __class_type_info *)&`typeinfo for'datalog::rel_context_base,
             (const struct __class_type_info *)&`typeinfo for'datalog::rel_context,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

