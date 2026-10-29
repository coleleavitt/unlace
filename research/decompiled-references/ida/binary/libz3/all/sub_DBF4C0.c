__int64 __fastcall sub_DBF4C0(_QWORD *a1)
{
  __int64 (*v1)(void); // rax
  std::ostream *v2; // rbx
  _BYTE *v3; // rbp
  char v4; // si
  std::ostream *v5; // rax
  __int64 (__fastcall *v7)(__int64, unsigned int); // rax

  v1 = *(__int64 (**)(void))(*a1 + 40LL);
  if ( (char *)v1 == (char *)sub_305010 )
    v2 = (std::ostream *)a1[51];
  else
    v2 = (std::ostream *)v1();
  std::__ostream_insert<char,std::char_traits<char>>();
  v3 = *(_BYTE **)((char *)v2 + *(_QWORD *)(*(_QWORD *)v2 - 24LL) + 240);
  if ( !v3 )
    std::__throw_bad_cast();
  if ( v3[56] )
  {
    v4 = v3[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v4 = 10;
    v7 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v3 + 48LL);
    if ( v7 != sub_26BE90 )
      v4 = v7((__int64)v3, 10u);
  }
  v5 = (std::ostream *)std::ostream::put(v2, v4);
  return std::ostream::flush(v5);
}

