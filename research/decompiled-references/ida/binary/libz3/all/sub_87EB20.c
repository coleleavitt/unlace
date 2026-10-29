__int64 __fastcall sub_87EB20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v4)(__int64, __int64, __int64); // rax

  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 232LL);
  if ( v4 != sub_87EA80 )
    return v4(a1, a2, a3);
  std::__ostream_insert<char,std::char_traits<char>>();
  return sub_7E6020(a3 + 8, a2);
}

