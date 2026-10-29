void __noreturn sub_8EB60()
{
  _BYTE *v0; // rbp
  char v1; // al
  std::ostream *v2; // rax

  std::__ostream_insert<char,std::char_traits<char>>();
  v0 = *(_BYTE **)((char *)&std::cerr + *(_QWORD *)(std::cerr - 24LL) + 240);
  if ( v0 )
  {
    if ( v0[56] )
    {
      v1 = v0[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v1 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v0 + 48LL))(v0, 10);
    }
    v2 = (std::ostream *)std::ostream::put((std::ostream *)&std::cerr, v1);
    std::ostream::flush(v2);
    abort();
  }
  std::__throw_bad_cast();
}

