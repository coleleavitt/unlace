void __fastcall __noreturn ClpMatrixBase::subsetClone(
        ClpMatrixBase *this,
        int a2,
        const int *a3,
        int a4,
        const int *a5)
{
  _BYTE *v5; // rbp
  char v6; // si
  std::ostream *v7; // rax
  __int64 (__fastcall *v8)(__int64, unsigned int); // rax

  std::__ostream_insert<char,std::char_traits<char>>();
  v5 = *(_BYTE **)((char *)&std::cerr + *(_QWORD *)(std::cerr - 24LL) + 240);
  if ( v5 )
  {
    if ( v5[56] )
    {
      v6 = v5[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v6 = 10;
      v8 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v5 + 48LL);
      if ( v8 != std::ctype<char>::do_widen )
        v6 = v8((__int64)v5, 10u);
    }
    v7 = (std::ostream *)std::ostream::put((std::ostream *)&std::cerr, v6);
    std::ostream::flush(v7);
    abort();
  }
  std::__throw_bad_cast();
}

