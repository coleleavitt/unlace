__int64 __fastcall sub_586A60(__int64 a1, const void *a2, __int64 *a3, unsigned int a4)
{
  __int64 v6; // r12
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64 *, _QWORD); // r13
  _QWORD *v8; // rax
  __int64 v9; // r12
  __int64 result; // rax
  __int64 v11; // rdx

  v6 = *(_QWORD *)(a1 + 48);
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD))(*(_QWORD *)v6 + 144LL);
  v8 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
         0);
  if ( !v8 )
    __cxa_bad_cast();
  v9 = v7(v6, v8[5], a3, a4);
  result = 0;
  if ( v9 )
  {
    result = sub_186B270(0x20u);
    v11 = *a3;
    *(_QWORD *)result = &off_1C51A00;
    *(_QWORD *)(result + 8) = v9;
    *(_QWORD *)(result + 16) = v11;
    *(_DWORD *)(result + 24) = a4;
  }
  return result;
}

