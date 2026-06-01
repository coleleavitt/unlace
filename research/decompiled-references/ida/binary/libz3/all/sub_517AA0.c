const void *__fastcall sub_517AA0(__int64 a1, const void *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r15
  __int64 v4; // rbp
  __int64 (__fastcall *v5)(__int64, __int64, _QWORD *); // rax
  const void *v6; // rbx
  void *v7; // rax
  unsigned int *v8; // rcx
  unsigned int v9; // edx

  v2 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::interval_relation,
         0);
  if ( !v2 )
    __cxa_bad_cast();
  v3 = v2[1];
  v4 = (__int64)v2;
  v5 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v3 + 64LL);
  if ( v5 == sub_512280 )
  {
    v6 = (const void *)sub_186B270(0xE0u);
    sub_511520((__int64)v6, v3, (_QWORD *)(a1 + 8), 0);
  }
  else
  {
    v6 = (const void *)v5(v3, 0, (_QWORD *)(a1 + 8));
    if ( !v6 )
    {
      v8 = *(unsigned int **)(a1 + 16);
      if ( v8 )
        goto LABEL_5;
LABEL_9:
      v9 = 0;
      goto LABEL_6;
    }
  }
  v7 = __dynamic_cast(
         v6,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::interval_relation,
         0);
  v8 = *(unsigned int **)(a1 + 16);
  v6 = v7;
  if ( !v8 )
    goto LABEL_9;
LABEL_5:
  v9 = *(v8 - 1);
LABEL_6:
  sub_5172C0((__int64)v6, v4, v9, v8);
  return v6;
}

