__int64 __fastcall sub_4DA7A0(__int64 a1, _QWORD *a2, std::ostream *a3, __int64 a4)
{
  __int64 v6; // r14
  void *v7; // rax
  void *v8; // r14

  std::__ostream_insert<char,std::char_traits<char>>();
  v6 = *a2;
  sub_654200(*a2, 0);
  v7 = __dynamic_cast(
         *(const void **)(v6 + 2968),
         (const struct __class_type_info *)&`typeinfo for'datalog::rel_context_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::rel_context,
         0);
  if ( !v7 )
    __cxa_bad_cast();
  v8 = v7;
  (*(void (__fastcall **)(__int64, _QWORD *, std::ostream *))(*(_QWORD *)a1 + 8LL))(a1, a2, a3);
  if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v8 + 320LL))(v8) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_629BA0(a1 + 8, a3);
    if ( *(_QWORD *)((char *)a3 + *(_QWORD *)(*(_QWORD *)a3 - 24LL) + 16) )
      std::__ostream_insert<char,std::char_traits<char>>();
    else
      std::ostream::put(a3, 125);
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  return (*(__int64 (__fastcall **)(__int64, _QWORD *, std::ostream *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2, a3, a4);
}

