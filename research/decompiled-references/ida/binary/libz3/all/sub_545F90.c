__int64 __fastcall sub_545F90(__int64 a1, const void *a2)
{
  void *v2; // rax

  v2 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::karr_relation,
         0);
  if ( !v2 )
    __cxa_bad_cast();
  return sub_544180((__int64)v2, *(_QWORD *)(a1 + 8));
}

