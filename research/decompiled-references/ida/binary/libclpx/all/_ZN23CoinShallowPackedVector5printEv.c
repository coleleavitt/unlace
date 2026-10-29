__int64 __fastcall CoinShallowPackedVector::print(CoinShallowPackedVector *this, double a2)
{
  __int64 v2; // rbx
  int v3; // ebp
  int v4; // eax
  _BYTE *v5; // rbx
  char v6; // si
  std::ostream *v7; // rax
  __int64 (__fastcall *v9)(__int64, unsigned int); // rax

  if ( *((int *)this + 12) > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      while ( 1 )
      {
        std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
        a2 = *(double *)(*((_QWORD *)this + 5) + 2 * v2);
        std::ostream::_M_insert<double>();
        v4 = *((_DWORD *)this + 12);
        if ( v4 - 1 > v3 )
          break;
        ++v3;
        v2 += 4;
        if ( v4 <= v3 )
          goto LABEL_5;
      }
      ++v3;
      v2 += 4;
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    while ( *((_DWORD *)this + 12) > v3 );
  }
LABEL_5:
  v5 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
  if ( !v5 )
    std::__throw_bad_cast();
  if ( v5[56] )
  {
    v6 = v5[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v6 = 10;
    v9 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v5 + 48LL);
    if ( v9 != std::ctype<char>::do_widen )
      v6 = ((__int64 (__fastcall *)(_BYTE *, __int64, double))v9)(v5, 10, a2);
  }
  v7 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v6);
  return std::ostream::flush(v7);
}

