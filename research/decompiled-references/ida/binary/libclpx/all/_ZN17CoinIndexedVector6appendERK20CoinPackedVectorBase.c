int *__fastcall CoinIndexedVector::append(CoinIndexedVector *this, const CoinPackedVectorBase *a2)
{
  int v3; // r13d
  int *v4; // rbp
  __int64 v5; // rax
  int v6; // edx
  int *v7; // rcx
  unsigned int v8; // r13d
  __int64 v9; // r12
  int v10; // esi
  __int64 v11; // rdi
  int *result; // rax
  int *v13; // rdx
  int v14; // r9d
  char v15; // r8
  double v16; // xmm0_8
  double v17; // xmm1_8
  __int64 v18; // rsi
  double *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r11
  int v22; // edx
  __int64 v23; // r10
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  double *v27; // rdx
  _DWORD *exception; // rbp
  _BYTE *v29; // r15
  char v30; // al
  std::ostream *v31; // rax
  void *v32; // r15
  std::ostream *v33; // [rsp+8h] [rbp-70h]
  __int64 v34; // [rsp+20h] [rbp-58h] BYREF
  __int64 v35; // [rsp+28h] [rbp-50h] BYREF
  __int64 v36; // [rsp+30h] [rbp-48h] BYREF
  char *v37; // [rsp+38h] [rbp-40h] BYREF

  v3 = (**(__int64 (__fastcall ***)(const CoinPackedVectorBase *))a2)(a2);
  v4 = (int *)(*(__int64 (__fastcall **)(const CoinPackedVectorBase *))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = (*(__int64 (__fastcall **)(const CoinPackedVectorBase *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v3 <= 0 )
    return (int *)CoinIndexedVector::reserve(this, 0);
  v6 = *v4;
  if ( *v4 < 0 )
  {
LABEL_24:
    exception = __cxa_allocate_exception(0x30u);
    v37 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    std::string::string();
    std::string::string();
    std::string::string();
    *(_QWORD *)exception = off_4D0500;
    std::string::string((std::string *)(exception + 2), (const std::string *)&v34);
    std::string::string((std::string *)(exception + 4), (const std::string *)&v35);
    std::string::string((std::string *)(exception + 6), (const std::string *)&v36);
    std::string::string((std::string *)(exception + 8), (const std::string *)&v37);
    exception[10] = -1;
    if ( CoinError::printErrors_ )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v33 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
      v29 = *(_BYTE **)((char *)v33 + *(_QWORD *)(*(_QWORD *)v33 - 24LL) + 240);
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
      v31 = (std::ostream *)std::ostream::put(v33, v30);
      std::ostream::flush(v31);
    }
    if ( (_UNKNOWN *)(v34 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0(v34 - 24);
    if ( (_UNKNOWN *)(v35 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0(v35 - 24);
    if ( (_UNKNOWN *)(v36 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0(v36 - 24);
    if ( v37 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0((__int64)(v37 - 24));
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  v7 = v4 + 1;
  v8 = v3 - 1;
  v9 = v5;
  v10 = -1;
  while ( 1 )
  {
    if ( v10 < v6 )
      v10 = v6;
    if ( &v4[v8 + 1] == v7 )
      break;
    v6 = *v7++;
    if ( v6 < 0 )
      goto LABEL_24;
  }
  CoinIndexedVector::reserve(this, v10 + 1);
  v11 = *((_QWORD *)this + 1);
  result = (int *)(v8 + 1LL);
  v13 = nullptr;
  v14 = 0;
  v15 = 0;
  do
  {
    while ( 1 )
    {
      v17 = *(double *)(v9 + 8LL * (_QWORD)v13);
      v18 = v4[(_QWORD)v13];
      v19 = (double *)(v11 + 8 * v18);
      if ( *v19 != 0.0 )
      {
        v16 = *v19 + v17;
        ++v14;
        *v19 = v16;
        if ( fabs(v16) < 1.0e-50 )
          v15 = 1;
        goto LABEL_11;
      }
      if ( fabs(v17) >= 1.0e-50 )
        break;
LABEL_11:
      v13 = (int *)((char *)v13 + 1);
      if ( result == v13 )
        goto LABEL_15;
    }
    *v19 = v17;
    v20 = *((int *)this + 4);
    v21 = *(_QWORD *)this;
    v13 = (int *)((char *)v13 + 1);
    *((_DWORD *)this + 4) = v20 + 1;
    *(_DWORD *)(v21 + 4 * v20) = v18;
  }
  while ( result != v13 );
LABEL_15:
  if ( v15 )
  {
    v22 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 4) = 0;
    if ( v22 > 0 )
    {
      v23 = *(_QWORD *)this;
      result = *(int **)this;
      v24 = *(_QWORD *)this + 4LL * (unsigned int)(v22 - 1) + 4;
      do
      {
        while ( 1 )
        {
          v26 = *result;
          v27 = (double *)(v11 + 8 * v26);
          if ( fabs(*v27) < 1.0e-50 )
            break;
          v25 = *((int *)this + 4);
          ++result;
          *((_DWORD *)this + 4) = v25 + 1;
          *(_DWORD *)(v23 + 4 * v25) = v26;
          if ( (int *)v24 == result )
            goto LABEL_21;
        }
        ++result;
        *v27 = 0.0;
      }
      while ( (int *)v24 != result );
    }
  }
LABEL_21:
  if ( v14 )
  {
    v32 = __cxa_allocate_exception(0x30u);
    v37 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v34 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0(v34 - 24);
    if ( (_UNKNOWN *)(v35 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0(v35 - 24);
    if ( (_UNKNOWN *)(v36 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0(v36 - 24);
    if ( v37 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
      sub_1CD0E0((__int64)(v37 - 24));
    __cxa_throw(v32, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  return result;
}

