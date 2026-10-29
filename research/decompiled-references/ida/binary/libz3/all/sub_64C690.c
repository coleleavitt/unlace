void (*__fastcall sub_64C690(__int64 *a1, std::ostream *a2))()
{
  void (*result)(); // rax
  __int64 v3; // rdi

  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_63C8E0(a1 + 295, a2);
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  result = (void (*)())sub_63C8E0(a1 + 326, a2);
  v3 = a1[371];
  if ( v3 )
  {
    result = *(void (**)())(*(_QWORD *)v3 + 64LL);
    if ( result != nullsub_186 )
      return (void (*)())((__int64 (__fastcall *)(__int64, std::ostream *))result)(v3, a2);
  }
  return result;
}

