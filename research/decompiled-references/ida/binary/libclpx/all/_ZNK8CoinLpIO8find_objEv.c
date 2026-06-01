__int64 __fastcall CoinLpIO::find_obj(CoinLpIO *this)
{
  unsigned __int64 v1; // rcx
  int v2; // eax
  _DWORD *exception; // rbx
  std::ostream *v4; // r15
  _BYTE *v5; // rbp
  char v6; // al
  std::ostream *v7; // rax
  __int64 v8; // r13
  char v9; // bp
  int v10; // r12d
  __int64 v11; // r13
  char v12; // bp
  int v13; // r12d
  __int64 v14; // rbp
  char v15; // r12
  int v16; // r13d
  unsigned int v17; // ebx
  int v18; // r12d
  int v19; // ebp
  char v20; // bp
  int v21; // r13d
  char v22; // r13
  int v23; // r12d
  int v24; // ebp
  int v25; // ebx
  int v27; // ebp
  int v28; // r13d
  std::ostream *v29; // r15
  _BYTE *v30; // rbp
  char v31; // al
  std::ostream *v32; // rax
  int v33; // [rsp+Ch] [rbp-246Ch]
  int v34; // [rsp+Ch] [rbp-246Ch]
  __int64 v35; // [rsp+20h] [rbp-2458h] BYREF
  __int64 v36; // [rsp+28h] [rbp-2450h] BYREF
  __int64 v37; // [rsp+30h] [rbp-2448h] BYREF
  __int64 v38; // [rsp+38h] [rbp-2440h] BYREF
  char v39[1024]; // [rsp+40h] [rbp-2438h] BYREF
  __m128i si128; // [rsp+440h] [rbp-2038h]
  __m128i v41; // [rsp+450h] [rbp-2028h]
  __m128i v42; // [rsp+460h] [rbp-2018h]

  v1 = 2;
  strcpy(v39, "aa");
  while ( v1 == 8 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = aMinimize_0[v8];
      if ( !v39[v8] )
        break;
      if ( !v9 )
        goto LABEL_24;
      v10 = tolower(v39[v8]);
      if ( v10 != tolower(v9) )
        goto LABEL_24;
      if ( ++v8 == 8 )
        goto LABEL_29;
    }
    if ( !v9 )
    {
LABEL_29:
      v14 = 0;
      while ( 1 )
      {
        v15 = aMinimize_0[v14];
        if ( !v39[v14] )
          break;
        if ( !v15 )
          return (unsigned int)-1;
        v16 = tolower(v39[v14]);
        if ( v16 != tolower(v15) )
          return (unsigned int)-1;
        if ( ++v14 == 8 )
          return 1;
      }
      return v15 == 0 ? 1 : -1;
    }
LABEL_24:
    v11 = 0;
    while ( 1 )
    {
      v12 = aMaximize[v11];
      if ( !v39[v11] )
        break;
      if ( !v12 )
        goto LABEL_4;
      v13 = tolower(v39[v11]);
      if ( v13 != tolower(v12) )
        goto LABEL_4;
      if ( ++v11 == 8 )
        goto LABEL_29;
    }
    if ( !v12 )
      goto LABEL_29;
LABEL_4:
    v2 = CoinLpIO::fscanfLpIO(this, v39);
    v1 = strlen(v39);
    if ( v2 <= 0 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_296AA0);
      v41 = _mm_load_si128((const __m128i *)&xmmword_296AB0);
      v42 = _mm_load_si128((const __m128i *)&xmmword_296AC0);
      exception = __cxa_allocate_exception(0x30u);
      std::string::string();
      std::string::string();
      std::string::string();
      std::string::string();
      *(_QWORD *)exception = off_4D0500;
      std::string::string((std::string *)(exception + 2), (const std::string *)&v35);
      std::string::string((std::string *)(exception + 4), (const std::string *)&v36);
      std::string::string((std::string *)(exception + 6), (const std::string *)&v37);
      std::string::string((std::string *)(exception + 8), (const std::string *)&v38);
      exception[10] = 1330;
      if ( CoinError::printErrors_ )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v4 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v5 = *(_BYTE **)((char *)v4 + *(_QWORD *)(*(_QWORD *)v4 - 24LL) + 240);
        if ( !v5 )
          std::__throw_bad_cast();
        if ( v5[56] )
        {
          v6 = v5[67];
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v6 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v5 + 48LL))(v5, 10);
        }
        v7 = (std::ostream *)std::ostream::put(v4, v6);
        std::ostream::flush(v7);
        if ( (unsigned int)std::string::compare((std::string *)(exception + 6), "") )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          v29 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
          v30 = *(_BYTE **)((char *)v29 + *(_QWORD *)(*(_QWORD *)v29 - 24LL) + 240);
          if ( !v30 )
            std::__throw_bad_cast();
          if ( v30[56] )
          {
            v31 = v30[67];
          }
          else
          {
            std::ctype<char>::_M_widen_init();
            v31 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v30 + 48LL))(v30, 10);
          }
          v32 = (std::ostream *)std::ostream::put(v29, v31);
          std::ostream::flush(v32);
        }
      }
      if ( (_UNKNOWN *)(v35 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C66A(v35 - 24);
      if ( (_UNKNOWN *)(v36 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C66A(v36 - 24);
      if ( (_UNKNOWN *)(v37 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C66A(v37 - 24);
      if ( (_UNKNOWN *)(v38 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C66A(v38 - 24);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
    }
  }
  if ( v1 != 3 )
    goto LABEL_4;
  v18 = v39[0];
  if ( !v39[0] )
    goto LABEL_4;
  v19 = tolower(v39[0]);
  if ( tolower(109) != v19
    || (v20 = v39[1]) == 0
    || (v21 = tolower(v39[1]), v21 != tolower(105))
    || (v22 = v39[2]) == 0
    || (v33 = tolower(v39[2]), v33 != tolower(110)) )
  {
    v27 = tolower(v18);
    if ( tolower(109) != v27 )
      goto LABEL_4;
    v20 = v39[1];
    if ( !v39[1] )
      goto LABEL_4;
    v28 = tolower(v39[1]);
    if ( tolower(97) != v28 )
      goto LABEL_4;
    v22 = v39[2];
    if ( !v39[2] )
      goto LABEL_4;
    v34 = tolower(v39[2]);
    if ( v34 != tolower(120) )
      goto LABEL_4;
  }
  v17 = -1;
  v23 = tolower(v18);
  if ( tolower(109) == v23 )
  {
    if ( v20 )
    {
      v24 = tolower(v20);
      if ( tolower(105) == v24 )
      {
        if ( v22 )
        {
          v25 = tolower(v22);
          return 2 * (unsigned int)(v25 == tolower(110)) - 1;
        }
      }
    }
  }
  return v17;
}

