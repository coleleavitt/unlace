_QWORD *__fastcall sub_536C80(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r12
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v3 = nullptr;
  if ( a2[1] != a1 )
    return v3;
  v3 = (_QWORD *)sub_186B270(0x18u);
  v6 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::karr_relation,
         0);
  if ( !v6 )
    __cxa_bad_cast();
  v7 = v6[4];
  *v3 = &off_1C50850;
  v8 = sub_4D6490(*(_QWORD *)(v7 + 24));
  v3[1] = a3;
  v3[2] = v8;
  if ( !a3 )
    return v3;
  ++*(_DWORD *)(a3 + 8);
  return v3;
}

