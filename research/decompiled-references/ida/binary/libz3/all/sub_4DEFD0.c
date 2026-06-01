__int64 __fastcall sub_4DEFD0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  void *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  std::locale *v7; // [rsp+8h] [rbp-40h] BYREF
  void *v8; // [rsp+10h] [rbp-38h] BYREF
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF

  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v2 = *a2;
  sub_654200(*a2, 0);
  v3 = __dynamic_cast(
         *(const void **)(v2 + 2968),
         (const struct __class_type_info *)&`typeinfo for'datalog::rel_context_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::rel_context,
         0);
  if ( !v3 )
    __cxa_bad_cast();
  v4 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v3 + 200LL))(v3);
  v7 = *(std::locale **)(a1 + 80);
  sub_4C7BB0((__int64)&v8, v4, &v7);
  v5 = std::__ostream_insert<char,std::char_traits<char>>();
  if ( v8 != &v9 )
    operator delete(v8, v9 + 1);
  return v5;
}

