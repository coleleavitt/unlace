void __fastcall __noreturn ClpObjective::subsetClone(ClpObjective *this, int a2, const int *a3)
{
  _BYTE *v3; // rbp
  char v4; // si
  std::ostream *v5; // rax
  __int64 (__fastcall *v6)(__int64, unsigned int); // rax

  std::__ostream_insert<char,std::char_traits<char>>();
  v3 = *(_BYTE **)((char *)&std::cerr + *(_QWORD *)(std::cerr - 24LL) + 240);
  if ( v3 )
  {
    if ( v3[56] )
    {
      v4 = v3[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v4 = 10;
      v6 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v3 + 48LL);
      if ( v6 != std::ctype<char>::do_widen )
        v4 = v6((__int64)v3, 10u);
    }
    v5 = (std::ostream *)std::ostream::put((std::ostream *)&std::cerr, v4);
    std::ostream::flush(v5);
    abort();
  }
  std::__throw_bad_cast();
}

