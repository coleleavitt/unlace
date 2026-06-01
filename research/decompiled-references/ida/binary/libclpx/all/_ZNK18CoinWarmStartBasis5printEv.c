__int64 __fastcall CoinWarmStartBasis::print(CoinWarmStartBasis *this)
{
  int v2; // esi
  __int64 v3; // rdi
  int v4; // r12d
  int i; // edx
  bool v6; // al
  int v7; // esi
  int v8; // r13d
  int j; // edx
  bool v10; // al
  std::ostream *v11; // r12
  _BYTE *v12; // r13
  char v13; // si
  std::ostream *v14; // rax
  _BYTE *v15; // r12
  char v16; // si
  std::ostream *v17; // rax
  int v18; // r13d
  _BYTE *v19; // r12
  char v20; // si
  std::ostream *v21; // rax
  _BYTE *v22; // r12
  char v23; // si
  std::ostream *v24; // rax
  int v25; // r13d
  _BYTE *v26; // rbx
  char v27; // si
  std::ostream *v28; // rax
  __int64 (__fastcall *v30)(__int64, unsigned int); // rax
  __int64 (__fastcall *v31)(__int64, unsigned int); // rax
  __int64 (__fastcall *v32)(__int64, unsigned int); // rax
  __int64 (__fastcall *v33)(__int64, unsigned int); // rax
  __int64 (__fastcall *v34)(__int64, unsigned int); // rax

  v2 = *((_DWORD *)this + 2);
  if ( v2 > 0 )
  {
    v3 = *((_QWORD *)this + 3);
    v4 = 0;
    for ( i = 0; i != v2; ++i )
    {
      v6 = ((*(char *)(v3 + (i >> 2)) >> ((2 * i) & 6)) & 3) == 1;
      v4 += v6;
    }
    v7 = *((_DWORD *)this + 3);
    if ( v7 <= 0 )
      goto LABEL_7;
    goto LABEL_5;
  }
  v7 = *((_DWORD *)this + 3);
  v4 = 0;
  if ( v7 > 0 )
  {
LABEL_5:
    v8 = v4;
    for ( j = 0; j != v7; ++j )
    {
      v10 = ((*(char *)(*((_QWORD *)this + 4) + (j >> 2)) >> ((2 * j) & 6)) & 3) == 1;
      v8 += v10;
    }
  }
LABEL_7:
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<void const*>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  v11 = (std::ostream *)std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  v12 = *(_BYTE **)((char *)v11 + *(_QWORD *)(*(_QWORD *)v11 - 24LL) + 240);
  if ( !v12 )
    goto LABEL_41;
  if ( v12[56] )
  {
    v13 = v12[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v13 = 10;
    v30 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v12 + 48LL);
    if ( v30 != std::ctype<char>::do_widen )
      v13 = v30((__int64)v12, 10u);
  }
  v14 = (std::ostream *)std::ostream::put(v11, v13);
  std::ostream::flush(v14);
  std::__ostream_insert<char,std::char_traits<char>>();
  v15 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
  if ( !v15 )
    goto LABEL_41;
  if ( v15[56] )
  {
    v16 = v15[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v16 = 10;
    v34 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v15 + 48LL);
    if ( v34 != std::ctype<char>::do_widen )
      v16 = v34((__int64)v15, 10u);
  }
  v17 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v16);
  std::ostream::flush(v17);
  if ( *((int *)this + 3) > 0 )
  {
    v18 = 0;
    do
    {
      ++v18;
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    while ( *((_DWORD *)this + 3) > v18 );
  }
  v19 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
  if ( !v19 )
    goto LABEL_41;
  if ( v19[56] )
  {
    v20 = v19[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v20 = 10;
    v33 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v19 + 48LL);
    if ( v33 != std::ctype<char>::do_widen )
      v20 = v33((__int64)v19, 10u);
  }
  v21 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v20);
  std::ostream::flush(v21);
  std::__ostream_insert<char,std::char_traits<char>>();
  v22 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
  if ( !v22 )
    goto LABEL_41;
  if ( v22[56] )
  {
    v23 = v22[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v23 = 10;
    v32 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v22 + 48LL);
    if ( v32 != std::ctype<char>::do_widen )
      v23 = v32((__int64)v22, 10u);
  }
  v24 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v23);
  std::ostream::flush(v24);
  if ( *((int *)this + 2) > 0 )
  {
    v25 = 0;
    do
    {
      ++v25;
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    while ( *((_DWORD *)this + 2) > v25 );
  }
  v26 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
  if ( !v26 )
LABEL_41:
    std::__throw_bad_cast();
  if ( v26[56] )
  {
    v27 = v26[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v27 = 10;
    v31 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v26 + 48LL);
    if ( v31 != std::ctype<char>::do_widen )
      v27 = v31((__int64)v26, 10u);
  }
  v28 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v27);
  return std::ostream::flush(v28);
}

