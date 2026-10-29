__int64 __fastcall sub_4DEB60(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  void *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  void *v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+10h] [rbp-28h] BYREF

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
  sub_4C7740((__int64)&v9, v4, (_QWORD **)(a1 + 72));
  v5 = std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v6 = *(_QWORD *)(a1 + 80);
  v7 = *(_QWORD *)(v6 + 16);
  if ( (v7 & 7) != 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
  }
  else
  {
    if ( v7 )
      strlen(*(const char **)(v6 + 16));
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  if ( v9 != &v10 )
    operator delete(v9, v10 + 1);
  return v5;
}

