void __fastcall __noreturn ClpMatrixBase::appendMatrix(
        ClpMatrixBase *this,
        int a2,
        int a3,
        const int *a4,
        const int *a5,
        const double *a6,
        int a7)
{
  _BYTE *v7; // rbp
  char v8; // si
  std::ostream *v9; // rax
  __int64 (__fastcall *v10)(__int64, unsigned int); // rax

  std::__ostream_insert<char,std::char_traits<char>>();
  v7 = *(_BYTE **)((char *)&std::cerr + *(_QWORD *)(std::cerr - 24LL) + 240);
  if ( v7 )
  {
    if ( v7[56] )
    {
      v8 = v7[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v8 = 10;
      v10 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v7 + 48LL);
      if ( v10 != std::ctype<char>::do_widen )
        v8 = v10((__int64)v7, 10u);
    }
    v9 = (std::ostream *)std::ostream::put((std::ostream *)&std::cerr, v8);
    std::ostream::flush(v9);
    abort();
  }
  std::__throw_bad_cast();
}

