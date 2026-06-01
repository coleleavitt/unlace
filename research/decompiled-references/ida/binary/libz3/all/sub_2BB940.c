__int64 sub_2BB940()
{
  std::ostream *v0; // rbx
  _BYTE *v1; // rbp
  char v2; // si
  std::ostream *v3; // rax
  __int64 (__fastcall *v5)(__int64, unsigned int); // rax

  std::__ostream_insert<char,std::char_traits<char>>();
  v0 = (std::ostream *)std::ostream::_M_insert<void const*>();
  v1 = *(_BYTE **)((char *)v0 + *(_QWORD *)(*(_QWORD *)v0 - 24LL) + 240);
  if ( !v1 )
    std::__throw_bad_cast();
  if ( v1[56] )
  {
    v2 = v1[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v2 = 10;
    v5 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v1 + 48LL);
    if ( v5 != sub_26BE90 )
      v2 = v5((__int64)v1, 10u);
  }
  v3 = (std::ostream *)std::ostream::put(v0, v2);
  return std::ostream::flush(v3);
}

