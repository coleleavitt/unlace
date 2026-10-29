void *__fastcall sub_505480(__int64 a1)
{
  __int64 (*v1)(void); // rax
  char v2; // bp
  void *v3; // rax
  __int64 v4; // r12
  _QWORD *v5; // rbx
  __int64 (__fastcall *v6)(__int64, _QWORD *); // rax
  void *v7; // rbp
  __int64 (__fastcall *v9)(__int64, __int64, _QWORD *); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)a1 + 24LL);
  if ( v1 == sub_505930 )
    v2 = *(_BYTE *)(a1 + 56);
  else
    v2 = v1();
  v3 = __dynamic_cast(
         *(const void **)(a1 + 8),
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_plugin,
         (const struct __class_type_info *)&`typeinfo for'datalog::bound_relation_plugin,
         0);
  v4 = (__int64)v3;
  if ( !v2 )
  {
    if ( !v3 )
LABEL_19:
      __cxa_bad_cast();
    v9 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v3 + 64LL);
    if ( v9 == sub_505450 )
    {
      v7 = (void *)sub_186B270(0x88u);
      sub_504C90((__int64)v7, v4, (_QWORD *)(a1 + 16), 0);
    }
    else
    {
      v7 = (void *)v9(v4, 0, (_QWORD *)(a1 + 16));
      if ( !v7 )
        goto LABEL_12;
    }
    v7 = __dynamic_cast(
           v7,
           (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
           (const struct __class_type_info *)&`typeinfo for'datalog::bound_relation,
           0);
LABEL_12:
    sub_5071D0(v7, a1);
    return v7;
  }
  if ( !v3 )
    goto LABEL_19;
  v5 = (_QWORD *)(a1 + 16);
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 40LL);
  if ( v6 == sub_505410 )
  {
    v7 = (void *)sub_186B270(0x88u);
    sub_504C90((__int64)v7, v4, v5, 1);
    return __dynamic_cast(
             v7,
             (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
             (const struct __class_type_info *)&`typeinfo for'datalog::bound_relation,
             0);
  }
  v7 = (void *)v6(v4, v5);
  if ( v7 )
    return __dynamic_cast(
             v7,
             (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
             (const struct __class_type_info *)&`typeinfo for'datalog::bound_relation,
             0);
  return v7;
}

