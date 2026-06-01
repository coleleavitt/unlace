double __fastcall CoinPackedMatrix::getMatrixElement(CoinPackedMatrix *this, int a2, int a3)
{
  int v3; // r12d
  __int64 v4; // rbx
  int v5; // edx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  std::ostream *v10; // rbp
  _BYTE *v11; // rbx
  char v12; // si
  std::ostream *v13; // rax
  __int64 (__fastcall *v14)(__int64, unsigned int); // rax

  v3 = a3;
  v4 = a2;
  if ( *((_BYTE *)this + 8) )
  {
    v4 = a3;
    v3 = a2;
  }
  if ( (int)v4 < 0 || (int)v4 >= *((_DWORD *)this + 16) || v3 < 0 || v3 >= *((_DWORD *)this + 17) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    v10 = (std::ostream *)std::ostream::operator<<();
    v11 = *(_BYTE **)((char *)v10 + *(_QWORD *)(*(_QWORD *)v10 - 24LL) + 240);
    if ( !v11 )
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
    v13 = (std::ostream *)std::ostream::put(v10, v12);
    std::ostream::flush(v13);
    return 0.0;
  }
  else
  {
    v5 = *(_DWORD *)(*((_QWORD *)this + 6) + 4 * v4);
    if ( v5 >= v5 + *(_DWORD *)(*((_QWORD *)this + 7) + 4 * v4) )
      return 0.0;
    v6 = *((_QWORD *)this + 5);
    v7 = v5;
    if ( v3 != *(_DWORD *)(v6 + 4LL * v5) )
    {
      v7 = v5 + 1LL;
      v8 = v7 + (unsigned int)(*(_DWORD *)(*((_QWORD *)this + 7) + 4 * v4) - 1);
      while ( v8 != v7 )
      {
        if ( *(_DWORD *)(v6 + 4 * (v7 + 1) - 4) == v3 )
          return *(double *)(*((_QWORD *)this + 4) + 8 * v7);
        ++v7;
      }
      return 0.0;
    }
    return *(double *)(*((_QWORD *)this + 4) + 8 * v7);
  }
}

