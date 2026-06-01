__int64 __fastcall ClpPESimplex::printTimer(ClpPESimplex *this, std::ostream *a2)
{
  double v2; // xmm0_8
  std::ostream *v3; // rbx
  _BYTE *v4; // rbp
  char v5; // si
  std::ostream *v6; // rax
  __int64 (__fastcall *v8)(__int64, unsigned int); // rax

  std::__ostream_insert<char,std::char_traits<char>>();
  v2 = *((double *)this + 25);
  v3 = (std::ostream *)std::ostream::_M_insert<double>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v4 = *(_BYTE **)((char *)v3 + *(_QWORD *)(*(_QWORD *)v3 - 24LL) + 240);
  if ( !v4 )
    std::__throw_bad_cast();
  if ( v4[56] )
  {
    v5 = v4[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v5 = 10;
    v8 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v4 + 48LL);
    if ( v8 != std::ctype<char>::do_widen )
      v5 = ((__int64 (__fastcall *)(_BYTE *, __int64, double))v8)(v4, 10, v2);
  }
  v6 = (std::ostream *)std::ostream::put(v3, v5);
  return std::ostream::flush(v6);
}

