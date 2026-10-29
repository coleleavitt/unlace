void __fastcall __noreturn ClpMatrixBase::partialPricing(
        ClpMatrixBase *this,
        ClpSimplex *a2,
        double a3,
        double a4,
        int *a5,
        int *a6)
{
  _BYTE *v6; // rbp
  char v7; // si
  std::ostream *v8; // rax
  __int64 (__fastcall *v9)(__int64, unsigned int); // rax

  std::__ostream_insert<char,std::char_traits<char>>();
  v6 = *(_BYTE **)((char *)&std::cerr + *(_QWORD *)(std::cerr - 24LL) + 240);
  if ( v6 )
  {
    if ( v6[56] )
    {
      v7 = v6[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v7 = 10;
      v9 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v6 + 48LL);
      if ( v9 != std::ctype<char>::do_widen )
        v7 = ((__int64 (__fastcall *)(_BYTE *, __int64, double, double))v9)(v6, 10, a3, a4);
    }
    v8 = (std::ostream *)std::ostream::put((std::ostream *)&std::cerr, v7);
    std::ostream::flush(v8);
    abort();
  }
  std::__throw_bad_cast();
}

