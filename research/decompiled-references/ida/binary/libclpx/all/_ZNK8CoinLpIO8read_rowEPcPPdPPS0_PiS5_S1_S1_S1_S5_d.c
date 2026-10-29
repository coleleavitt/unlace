__int64 __fastcall CoinLpIO::read_row(
        CoinLpIO *this,
        char *a2,
        double **a3,
        char ***a4,
        int *a5,
        int *a6,
        double a7,
        double *a8,
        double *a9,
        double *a10,
        int *a11)
{
  int monom_row; // eax
  int v15; // r13d
  int v16; // r8d
  double *v17; // rbx
  __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  double *v22; // rcx
  _DWORD *exception; // rbx
  std::ostream *v24; // r15
  _BYTE *v25; // rbp
  char v26; // al
  std::ostream *v27; // rax
  std::ostream *v28; // r15
  _BYTE *v29; // rbp
  char v30; // al
  std::ostream *v31; // rax
  __int64 v34; // [rsp+20h] [rbp-2458h] BYREF
  __int64 v35; // [rsp+28h] [rbp-2450h] BYREF
  __int64 v36; // [rsp+30h] [rbp-2448h] BYREF
  __int64 v37; // [rsp+38h] [rbp-2440h] BYREF
  char dest[1024]; // [rsp+40h] [rbp-2438h] BYREF
  __m128i si128; // [rsp+440h] [rbp-2038h]
  __m128i v40; // [rsp+450h] [rbp-2028h]
  __int64 v41; // [rsp+460h] [rbp-2018h]

  strcpy(dest, a2);
  do
  {
    v16 = *a5;
    if ( *a5 == *a6 )
    {
      CoinLpIO::realloc_coeff(this, a3, a4, a6);
      v16 = *a5;
    }
    monom_row = CoinLpIO::read_monom_row(this, dest, *a3, *a4, v16);
    ++*a5;
    v15 = monom_row;
    if ( (int)CoinLpIO::fscanfLpIO(this, dest) <= 0 )
    {
      v41 = 0xA6C61696D6F6ELL;
      si128 = _mm_load_si128((const __m128i *)&xmmword_296AA0);
      v40 = _mm_load_si128((const __m128i *)&xmmword_296AD0);
      exception = __cxa_allocate_exception(0x30u);
      std::string::string();
      std::string::string();
      std::string::string();
      std::string::string();
      *(_QWORD *)exception = off_4D0500;
      std::string::string((std::string *)(exception + 2), (const std::string *)&v34);
      std::string::string((std::string *)(exception + 4), (const std::string *)&v35);
      std::string::string((std::string *)(exception + 6), (const std::string *)&v36);
      std::string::string((std::string *)(exception + 8), (const std::string *)&v37);
      exception[10] = 1779;
      if ( CoinError::printErrors_ )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v24 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v25 = *(_BYTE **)((char *)v24 + *(_QWORD *)(*(_QWORD *)v24 - 24LL) + 240);
        if ( !v25 )
          std::__throw_bad_cast();
        if ( v25[56] )
        {
          v26 = v25[67];
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v26 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v25 + 48LL))(v25, 10);
        }
        v27 = (std::ostream *)std::ostream::put(v24, v26);
        std::ostream::flush(v27);
        if ( (unsigned int)std::string::compare((std::string *)(exception + 6), "") )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          v28 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
          v29 = *(_BYTE **)((char *)v28 + *(_QWORD *)(*(_QWORD *)v28 - 24LL) + 240);
          if ( !v29 )
            std::__throw_bad_cast();
          if ( v29[56] )
          {
            v30 = v29[67];
          }
          else
          {
            std::ctype<char>::_M_widen_init();
            v30 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v29 + 48LL))(v29, 10);
          }
          v31 = (std::ostream *)std::ostream::put(v28, v30);
          std::ostream::flush(v31);
        }
      }
      if ( (_UNKNOWN *)(v34 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C66A(v34 - 24);
      if ( (_UNKNOWN *)(v35 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C66A(v35 - 24);
      if ( (_UNKNOWN *)(v36 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C66A(v36 - 24);
      if ( (_UNKNOWN *)(v37 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C66A(v37 - 24);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
    }
  }
  while ( v15 < 0 );
  --*a5;
  v17 = &a8[*a11];
  *v17 = strtod(dest, nullptr);
  if ( v15 == 1 )
  {
    v21 = *a11;
    v22 = &a8[v21];
    LODWORD(v18) = *a11;
    a9[v21] = *v22;
    a10[v21] = *v22;
  }
  else if ( v15 == 2 )
  {
    v20 = *a11;
    LODWORD(v18) = *a11;
    a9[v20] = a8[v20];
    a10[v20] = a7;
  }
  else if ( v15 )
  {
    LODWORD(v18) = *a11;
  }
  else
  {
    v18 = *a11;
    a9[v18] = -a7;
    a10[v18] = a8[v18];
  }
  result = (unsigned int)(v18 + 1);
  *a11 = result;
  return result;
}

