__int64 __fastcall sub_2BBB20(double a1)
{
  std::ostream *v1; // rbx
  _BYTE *v2; // rbp
  char v3; // si
  std::ostream *v4; // rax
  __int64 (__fastcall *v6)(__int64, unsigned int); // rax

  std::__ostream_insert<char,std::char_traits<char>>();
  v1 = (std::ostream *)std::ostream::_M_insert<double>();
  v2 = *(_BYTE **)((char *)v1 + *(_QWORD *)(*(_QWORD *)v1 - 24LL) + 240);
  if ( !v2 )
    std::__throw_bad_cast();
  if ( v2[56] )
  {
    v3 = v2[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v3 = 10;
    v6 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v2 + 48LL);
    if ( v6 != sub_26BE90 )
      v3 = ((__int64 (__fastcall *)(_BYTE *, __int64, double))v6)(v2, 10, a1);
  }
  v4 = (std::ostream *)std::ostream::put(v1, v3);
  return std::ostream::flush(v4);
}

