_QWORD *__fastcall sub_586AF0(__int64 a1, const void *a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 (__fastcall *v5)(__int64, _QWORD, __int64); // r13
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r12
  int v10; // edx
  _QWORD *result; // rax
  _QWORD *v12; // [rsp+8h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v4 + 152LL);
  v6 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
         0);
  if ( !v6 )
    __cxa_bad_cast();
  v7 = v5(v4, v6[5], a3);
  v8 = *(_QWORD *)(a1 + 40);
  v9 = v7;
  if ( a3 )
  {
    v10 = *(_DWORD *)(a3 + 8);
    *(_DWORD *)(a3 + 8) = v10 + 1;
    if ( v7 )
    {
      result = (_QWORD *)sub_186B270(0x20u);
      result[1] = v9;
      v10 = *(_DWORD *)(a3 + 8);
      *result = &off_1C51978;
      result[2] = a3;
      result[3] = v8;
    }
    else
    {
      result = nullptr;
    }
    *(_DWORD *)(a3 + 8) = v10;
    if ( !v10 )
    {
      v12 = result;
      sub_15D7BC0(v8, a3);
      return v12;
    }
  }
  else if ( v7 )
  {
    result = (_QWORD *)sub_186B270(0x20u);
    result[1] = v9;
    *result = &off_1C51978;
    result[2] = 0;
    result[3] = v8;
  }
  else
  {
    return nullptr;
  }
  return result;
}

