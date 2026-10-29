__int64 __fastcall sub_4F8FC0(__int64 a1, const void *a2, const void *a3)
{
  void *v3; // rax
  void *v4; // rbx
  void *v5; // rsi

  v3 = __dynamic_cast(
         a3,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::udoc_relation,
         0);
  if ( !v3
    || (v4 = v3,
        (v5 = __dynamic_cast(
                a2,
                (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                (const struct __class_type_info *)&`typeinfo for'datalog::udoc_relation,
                0)) == nullptr) )
  {
    __cxa_bad_cast();
  }
  return sub_4F8480(a1, v5, v4);
}

