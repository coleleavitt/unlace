__int64 __fastcall sub_4F1120(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // r13
  void *v7; // rsi

  if ( a2[1] != a1 )
    return 0;
  v6 = sub_186B270(0x20u);
  v7 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::udoc_relation,
         0);
  if ( !v7 )
    __cxa_bad_cast();
  sub_4F9500(v6, v7, a3, a4);
  return v6;
}

