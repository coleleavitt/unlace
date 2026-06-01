__int64 __fastcall CoinParamUtils::shortOrHelpMany(__int64 *a1, const std::string *a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // r15d
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdx
  int v9; // ebp
  _BYTE *v10; // r15
  char v11; // si
  std::ostream *v12; // rax
  int v13; // edx
  _BYTE *v14; // rbp
  char v15; // si
  std::ostream *v16; // rax
  _BYTE *v17; // rbx
  char v18; // si
  std::ostream *v19; // rax
  int v20; // ecx
  __int64 (__fastcall *v21)(__int64, unsigned int); // rax
  __int64 (__fastcall *v22)(__int64, unsigned int); // rax
  __int64 (__fastcall *v23)(__int64, unsigned int); // rax
  int v24; // edx
  __int64 v25; // [rsp+0h] [rbp-88h]
  char v28; // [rsp+1Fh] [rbp-69h]
  unsigned int v29; // [rsp+20h] [rbp-68h]
  __int64 v30; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v31[8]; // [rsp+48h] [rbp-40h] BYREF

  result = *a1;
  v4 = (a1[1] - *a1) >> 3;
  if ( (int)v4 > 0 )
  {
    v5 = 0;
    v6 = 0;
    v28 = 0;
    v25 = 8LL * (unsigned int)(v4 - 1) + 8;
    while ( 1 )
    {
      v7 = *(_QWORD *)(result + v6);
      if ( v7 )
      {
        std::string::string((std::string *)v31, a2);
        result = CoinParam::matches();
        if ( (_UNKNOWN *)(v31[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create )
          {
            v20 = _InterlockedExchangeAdd((volatile signed __int32 *)(v31[0] - 8LL), 0xFFFFFFFF);
          }
          else
          {
            v20 = *(_DWORD *)(v31[0] - 8LL);
            *(_DWORD *)(v31[0] - 8LL) = v20 - 1;
          }
          if ( v20 <= 0 )
          {
            v29 = result;
            std::string::_Rep::_M_destroy();
            result = v29;
          }
        }
        if ( (int)result > 0 )
        {
          CoinParam::matchName((CoinParam *)&v30);
          v8 = *(_QWORD *)(v30 - 24);
          if ( a3 > 1 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::string::string((std::string *)v31, (const std::string *)(v7 + 136));
            std::__ostream_insert<char,std::char_traits<char>>();
            if ( (_UNKNOWN *)(v31[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
            {
              if ( &_pthread_key_create )
              {
                v24 = _InterlockedExchangeAdd((volatile signed __int32 *)(v31[0] - 8LL), 0xFFFFFFFF);
              }
              else
              {
                v24 = *(_DWORD *)(v31[0] - 8LL);
                *(_DWORD *)(v31[0] - 8LL) = v24 - 1;
              }
              if ( v24 <= 0 )
                std::string::_Rep::_M_destroy();
            }
            v14 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
            if ( !v14 )
              std::__throw_bad_cast();
            if ( v14[56] )
            {
              v15 = v14[67];
            }
            else
            {
              std::ctype<char>::_M_widen_init();
              v15 = 10;
              v21 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v14 + 48LL);
              if ( v21 != std::ctype<char>::do_widen )
                v15 = v21((__int64)v14, 10u);
            }
            v16 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v15);
            std::ostream::flush(v16);
          }
          else
          {
            v9 = v8 + 2;
            v5 += v8 + 2;
            if ( v5 > 80 )
            {
              v10 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
              if ( !v10 )
                std::__throw_bad_cast();
              if ( v10[56] )
              {
                v11 = v10[67];
              }
              else
              {
                std::ctype<char>::_M_widen_init();
                v11 = 10;
                v22 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v10 + 48LL);
                if ( v22 != std::ctype<char>::do_widen )
                  v11 = v22((__int64)v10, 10u);
              }
              v12 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v11);
              std::ostream::flush(v12);
              v5 = v9;
            }
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            v28 = 1;
          }
          result = v30;
          if ( (_UNKNOWN *)(v30 - 24) != &std::string::_Rep::_S_empty_rep_storage )
          {
            if ( &_pthread_key_create )
            {
              v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(v30 - 8), 0xFFFFFFFF);
            }
            else
            {
              v13 = *(_DWORD *)(v30 - 8);
              *(_DWORD *)(v30 - 8) = v13 - 1;
            }
            if ( v13 <= 0 )
              result = std::string::_Rep::_M_destroy();
          }
        }
      }
      v6 += 8;
      if ( v6 == v25 )
        break;
      result = *a1;
    }
    if ( v28 )
    {
      v17 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
      if ( !v17 )
        std::__throw_bad_cast();
      if ( v17[56] )
      {
        v18 = v17[67];
      }
      else
      {
        std::ctype<char>::_M_widen_init();
        v18 = 10;
        v23 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v17 + 48LL);
        if ( v23 != std::ctype<char>::do_widen )
          v18 = v23((__int64)v17, 10u);
      }
      v19 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v18);
      return std::ostream::flush(v19);
    }
  }
  return result;
}

