__int64 __fastcall sub_5797A0(__int64 a1, const void *a2, __int64 a3)
{
  __int64 v4; // rbx
  void *v5; // rax

  v4 = sub_186B270(0x18u);
  v5 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::product_relation,
         0);
  if ( !v5 )
    __cxa_bad_cast();
  sub_57ED20(v4, v5, a3);
  return v4;
}

