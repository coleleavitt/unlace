__int64 __fastcall sub_4EAB00(__int64 a1, const void *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rsi
  _QWORD v5[2]; // [rsp+8h] [rbp-10h] BYREF

  v2 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::external_relation,
         0);
  if ( !v2 )
    __cxa_bad_cast();
  v3 = *(_QWORD *)(a1 + 32);
  v5[0] = v2[4];
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD *, __int64, _QWORD *))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 40LL)
                                                                                          + 32LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL),
           v3,
           1,
           v5,
           1,
           v5);
}

