CoinIndexedVector *__fastcall CoinIndexedVector::operator/(CoinIndexedVector *this, CoinIndexedVector *a2, int **a3)
{
  int v6; // ebp
  int v7; // esi
  int v8; // edx
  int *v9; // rax
  int *v10; // r10
  __int64 v11; // rdi
  char v12; // cl
  __int64 v13; // rsi
  __int64 v14; // rdx
  double v15; // xmm0_8
  double v16; // xmm2_8
  double v17; // xmm0_8
  __int64 v18; // r9
  __int64 v19; // rdi
  int *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  double *v24; // rdx
  _DWORD *exception; // rbp
  std::ostream *v27; // r15
  _BYTE *v28; // r13
  char v29; // al
  std::ostream *v30; // rax
  __int64 v31; // [rsp+20h] [rbp-58h] BYREF
  __int64 v32; // [rsp+28h] [rbp-50h] BYREF
  __int64 v33; // [rsp+30h] [rbp-48h] BYREF
  char *v34; // [rsp+38h] [rbp-40h] BYREF

  v6 = *((_DWORD *)a2 + 4);
  v7 = *((_DWORD *)a2 + 5);
  if ( *((_DWORD *)a3 + 5) >= v7 )
    v7 = *((_DWORD *)a3 + 5);
  CoinIndexedVector::CoinIndexedVector(this, a2);
  CoinIndexedVector::reserve(this, v7);
  v8 = *((_DWORD *)a3 + 4);
  if ( v8 <= 0 )
    goto LABEL_17;
  v9 = *a3;
  v10 = a3[1];
  v11 = *((_QWORD *)a2 + 1);
  v12 = 0;
  v13 = (__int64)&(*a3)[v8 - 1 + 1];
  do
  {
    v14 = *v9;
    v15 = *(double *)(v11 + 8 * v14);
    if ( v15 != 0.0 )
    {
      v16 = *(double *)&v10[2 * v14];
      if ( v16 == 0.0 )
      {
        exception = __cxa_allocate_exception(0x30u);
        v34 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
        std::string::string();
        std::string::string();
        std::string::string();
        *(_QWORD *)exception = off_4D0500;
        std::string::string((std::string *)(exception + 2), (const std::string *)&v31);
        std::string::string((std::string *)(exception + 4), (const std::string *)&v32);
        std::string::string((std::string *)(exception + 6), (const std::string *)&v33);
        std::string::string((std::string *)(exception + 8), (const std::string *)&v34);
        exception[10] = -1;
        if ( CoinError::printErrors_ )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          v27 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
          v28 = *(_BYTE **)((char *)v27 + *(_QWORD *)(*(_QWORD *)v27 - 24LL) + 240);
          if ( !v28 )
            std::__throw_bad_cast();
          if ( v28[56] )
          {
            v29 = v28[67];
          }
          else
          {
            std::ctype<char>::_M_widen_init();
            v29 = (*(__int64 (__fastcall **)(_BYTE *, __int64, double, double, double, double))(*(_QWORD *)v28 + 48LL))(
                    v28,
                    10,
                    v15,
                    0.0,
                    v16,
                    1.0e-50);
          }
          v30 = (std::ostream *)std::ostream::put(v27, v29);
          std::ostream::flush(v30);
        }
        if ( (_UNKNOWN *)(v31 - 24) != &std::string::_Rep::_S_empty_rep_storage )
          sub_1CD0E0(v31 - 24);
        if ( (_UNKNOWN *)(v32 - 24) != &std::string::_Rep::_S_empty_rep_storage )
          sub_1CD0E0(v32 - 24);
        if ( (_UNKNOWN *)(v33 - 24) != &std::string::_Rep::_S_empty_rep_storage )
          sub_1CD0E0(v33 - 24);
        if ( v34 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
          sub_1CD0E0((__int64)(v34 - 24));
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
      }
      v17 = v15 / v16;
      *(double *)(*((_QWORD *)this + 1) + 8 * v14) = v17;
      if ( fabs(v17) < 1.0e-50 )
        v12 = 1;
    }
    ++v9;
  }
  while ( (int *)v13 != v9 );
  if ( v12 )
  {
    *((_DWORD *)this + 4) = 0;
    if ( v6 > 0 )
    {
      v18 = *(_QWORD *)this;
      v19 = *((_QWORD *)this + 1);
      v20 = *(int **)this;
      v21 = *(_QWORD *)this + 4LL * (unsigned int)(v6 - 1) + 4;
      do
      {
        while ( 1 )
        {
          v23 = *v20;
          v24 = (double *)(v19 + 8 * v23);
          if ( fabs(*v24) < 1.0e-50 )
            break;
          v22 = *((int *)this + 4);
          ++v20;
          *((_DWORD *)this + 4) = v22 + 1;
          *(_DWORD *)(v18 + 4 * v22) = v23;
          if ( (int *)v21 == v20 )
            return this;
        }
        ++v20;
        *v24 = 0.0;
      }
      while ( (int *)v21 != v20 );
    }
  }
  else
  {
LABEL_17:
    *((_DWORD *)this + 4) = v6;
  }
  return this;
}

