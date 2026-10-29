__int64 __fastcall sub_4DECD0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r13
  void *v3; // rax
  __int64 v4; // rax
  __int64 v5; // r12
  void *v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rbx
  std::locale *v11; // [rsp+8h] [rbp-80h] BYREF
  void *v12; // [rsp+10h] [rbp-78h] BYREF
  __int64 v13; // [rsp+20h] [rbp-68h] BYREF
  void *v14; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+40h] [rbp-48h] BYREF

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
  sub_4C7370((__int64)&v12, v4, *(_QWORD **)(a1 + 72));
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v5 = *a2;
  sub_654200(*a2, 0);
  v6 = __dynamic_cast(
         *(const void **)(v5 + 2968),
         (const struct __class_type_info *)&`typeinfo for'datalog::rel_context_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::rel_context,
         0);
  if ( !v6 )
    __cxa_bad_cast();
  v7 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v6 + 200LL))(v6);
  v8 = *(_QWORD **)(a1 + 72);
  v11 = **(std::locale ***)(a1 + 104);
  sub_4C80B0((__int64)&v14, v7, v8, &v11);
  v9 = std::__ostream_insert<char,std::char_traits<char>>();
  if ( v14 != &v15 )
    operator delete(v14, v15 + 1);
  if ( v12 != &v13 )
    operator delete(v12, v13 + 1);
  return v9;
}

