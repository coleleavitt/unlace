_QWORD *__fastcall sub_4E81D0(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rax

  if ( a1 != a2[1] )
    return nullptr;
  v5 = (_QWORD *)sub_186B270(0x30u);
  v6 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::external_relation,
         0);
  if ( !v6 )
    __cxa_bad_cast();
  v7 = sub_15D1F10(v6[4]);
  v5[1] = a1;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = v7;
  *v5 = &off_1C4FBC0;
  v10 = sub_4D6490(v8);
  v5[2] = a3;
  v5[3] = v10;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v5[5] = sub_4D6490(*(_QWORD *)(a1 + 24));
  v5[4] = 0;
  sub_4E8120(a1, v9, a3, v5 + 4);
  return v5;
}

