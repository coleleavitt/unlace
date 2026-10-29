__int64 __fastcall ClpLsqr::setParam(ClpLsqr *this, char *a2, int a3)
{
  std::ostream *v5; // r13
  _BYTE *v6; // r12
  char v7; // si
  std::ostream *v8; // rax
  __int64 (__fastcall *v10)(__int64, unsigned int); // rax
  _BYTE *v11; // rbp
  char v12; // si
  std::ostream *v13; // rax
  __int64 (__fastcall *v14)(__int64, unsigned int); // rax

  std::__ostream_insert<char,std::char_traits<char>>();
  if ( a2 )
  {
    strlen(a2);
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  else
  {
    std::ios::clear();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v5 = (std::ostream *)std::ostream::operator<<();
  v6 = *(_BYTE **)((char *)v5 + *(_QWORD *)(*(_QWORD *)v5 - 24LL) + 240);
  if ( !v6 )
    goto LABEL_19;
  if ( v6[56] )
  {
    v7 = v6[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v7 = 10;
    v10 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v6 + 48LL);
    if ( v10 != std::ctype<char>::do_widen )
      v7 = v10((__int64)v6, 10u);
  }
  v8 = (std::ostream *)std::ostream::put(v5, v7);
  std::ostream::flush(v8);
  if ( !strcmp(a2, "nrows") )
  {
    *(_DWORD *)this = a3;
    return 1;
  }
  if ( !strcmp(a2, "ncols") )
  {
    *((_DWORD *)this + 1) = a3;
    return 1;
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  strlen(a2);
  std::__ostream_insert<char,std::char_traits<char>>();
  v11 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
  if ( !v11 )
LABEL_19:
    std::__throw_bad_cast();
  if ( v11[56] )
  {
    v12 = v11[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v12 = 10;
    v14 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v11 + 48LL);
    if ( v14 != std::ctype<char>::do_widen )
      v12 = v14((__int64)v11, 10u);
  }
  v13 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v12);
  std::ostream::flush(v13);
  return 0;
}

