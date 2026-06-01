__int64 __fastcall sub_57D980(__int64 a1, __int64 a2, const void *a3, __int64 a4)
{
  _QWORD *v5; // rax

  v5 = __dynamic_cast(
         a3,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::product_relation,
         0);
  if ( !v5 )
    __cxa_bad_cast();
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 16LL))(
           *(_QWORD *)(a1 + 16),
           a2,
           *(_QWORD *)(v5[4] + 8LL * *(unsigned int *)(a1 + 8)),
           a4);
}

