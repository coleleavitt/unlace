__int64 __fastcall sub_4D0100(_QWORD *a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // rdi
  __int64 *v5; // rax
  _QWORD *v6; // rbp
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 v8; // r14
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+8h] [rbp-40h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h] BYREF
  __int64 v13[6]; // [rsp+18h] [rbp-30h] BYREF

  result = sub_64B080(a1[6]);
  if ( result )
  {
    sub_180C5A0(&v11, "null");
    result = sub_64B080(a1[6]);
    if ( v11 != result )
    {
      sub_180C5A0(&v12, "check_relation");
      sub_64B020(a1[6], &v12);
      v3 = *(__int64 (__fastcall **)(__int64))(*a1 + 192LL);
      if ( v3 == sub_4D0080 )
        v4 = (__int64)(a1 + 8);
      else
        v4 = v3((__int64)a1);
      v5 = sub_4C3D70(v4, &v12);
      v6 = v5;
      if ( v5 )
        v6 = __dynamic_cast(
               v5,
               (const struct __class_type_info *)&`typeinfo for'datalog::relation_plugin,
               (const struct __class_type_info *)&`typeinfo for'datalog::check_relation_plugin,
               0);
      v7 = *(__int64 (__fastcall **)(__int64))(*a1 + 192LL);
      if ( v7 == sub_4D0080 )
        v8 = (__int64)(a1 + 8);
      else
        v8 = v7((__int64)a1);
      v13[0] = sub_64B080(a1[6]);
      v6[6] = sub_4C3D70(v8, v13);
      v9 = *(__int64 (__fastcall **)(__int64))(*a1 + 192LL);
      if ( v9 == sub_4D0080 )
        v10 = (__int64)(a1 + 8);
      else
        v10 = v9((__int64)a1);
      *(_QWORD *)(v10 + 112) = v6;
      sub_180C5A0(v13, "doc");
      result = sub_64B080(a1[6]);
      if ( v13[0] == result )
        return sub_64B1D0(a1[6], 0);
    }
  }
  return result;
}

