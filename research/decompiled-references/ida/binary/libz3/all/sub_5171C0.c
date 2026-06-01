__int64 __fastcall sub_5171C0(__int64 a1, const void *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  void *v4; // rbp
  void *v5; // rbx
  __m128i v7; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v8[16]; // [rsp+10h] [rbp-78h] BYREF
  _BYTE v9[24]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v10[16]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v11[64]; // [rsp+48h] [rbp-40h] BYREF

  v2 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::interval_relation,
         0);
  if ( !v2 )
    __cxa_bad_cast();
  v3 = (__int64)v2;
  sub_B28AA0(&v7, v2[1] + 40LL, a1 + 16, 0, 0);
  sub_50E7C0(v3, *(_DWORD *)(a1 + 8), &v7);
  v4 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v10);
  sub_182CBA0(v4, v11);
  v5 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v8);
  return sub_182CBA0(v5, v9);
}

