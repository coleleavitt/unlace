void __fastcall __noreturn ClpMatrixBase::modifyCoefficient(ClpMatrixBase *this, double a2)
{
  _BYTE *v2; // rbp
  char v3; // si
  std::ostream *v4; // rax
  __int64 (__fastcall *v5)(__int64, unsigned int); // rax

  std::__ostream_insert<char,std::char_traits<char>>();
  v2 = *(_BYTE **)((char *)&std::cerr + *(_QWORD *)(std::cerr - 24LL) + 240);
  if ( v2 )
  {
    if ( v2[56] )
    {
      v3 = v2[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v3 = 10;
      v5 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v2 + 48LL);
      if ( v5 != std::ctype<char>::do_widen )
        v3 = ((__int64 (__fastcall *)(_BYTE *, __int64, double))v5)(v2, 10, a2);
    }
    v4 = (std::ostream *)std::ostream::put((std::ostream *)&std::cerr, v3);
    std::ostream::flush(v4);
    abort();
  }
  std::__throw_bad_cast();
}

