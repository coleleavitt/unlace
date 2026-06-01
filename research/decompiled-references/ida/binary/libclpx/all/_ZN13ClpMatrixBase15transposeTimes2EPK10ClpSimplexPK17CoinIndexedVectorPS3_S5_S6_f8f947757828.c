void __fastcall __noreturn ClpMatrixBase::transposeTimes2(
        ClpMatrixBase *this,
        const ClpSimplex *a2,
        const CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        const CoinIndexedVector *a5,
        CoinIndexedVector *a6,
        double a7,
        double a8,
        double a9,
        double *a10,
        double *a11,
        unsigned int *a12,
        double *a13)
{
  _BYTE *v13; // rbp
  char v14; // si
  std::ostream *v15; // rax
  __int64 (__fastcall *v16)(__int64, unsigned int); // rax

  std::__ostream_insert<char,std::char_traits<char>>();
  v13 = *(_BYTE **)((char *)&std::cerr + *(_QWORD *)(std::cerr - 24LL) + 240);
  if ( v13 )
  {
    if ( v13[56] )
    {
      v14 = v13[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v14 = 10;
      v16 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v13 + 48LL);
      if ( v16 != std::ctype<char>::do_widen )
        v14 = ((__int64 (__fastcall *)(_BYTE *, __int64, double, double, double))v16)(v13, 10, a7, a8, a9);
    }
    v15 = (std::ostream *)std::ostream::put((std::ostream *)&std::cerr, v14);
    std::ostream::flush(v15);
    abort();
  }
  std::__throw_bad_cast();
}

