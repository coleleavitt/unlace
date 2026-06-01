__int64 __fastcall CoinParamUtils::shortOrHelpOne(__int64 *a1, int a2, const std::string *a3, int a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rax
  _BYTE *v10; // r15
  char v11; // si
  std::ostream *v12; // rax
  __int64 v13; // rax
  char v14; // si
  std::ostream *v15; // rax
  int v17; // eax
  int v18; // edx
  __int64 (__fastcall *v19)(__int64, unsigned int); // rax
  __int64 (__fastcall *v20)(__int64, unsigned int); // rax
  int v21; // edx
  int v22; // ecx
  __int64 v23; // [rsp+8h] [rbp-60h]
  int v25; // [rsp+1Ch] [rbp-4Ch]
  int v26; // [rsp+1Ch] [rbp-4Ch]
  _QWORD v27[8]; // [rsp+28h] [rbp-40h] BYREF

  if ( a2 >= 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v7 = 8LL * a2;
    CoinParam::matchName((CoinParam *)v27);
    std::__ostream_insert<char,std::char_traits<char>>();
    v9 = v27[0];
    if ( (_UNKNOWN *)(v27[0] - 24LL) == &std::string::_Rep::_S_empty_rep_storage )
      goto LABEL_12;
    goto LABEL_30;
  }
  v5 = *a1;
  v6 = (a1[1] - *a1) >> 3;
  if ( (int)v6 <= 0 )
  {
LABEL_10:
    v7 = -8;
  }
  else
  {
    v7 = 0;
    v23 = 8LL * (unsigned int)(v6 - 1) + 8;
    if ( &_pthread_key_create )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v5 + v7) )
        {
          std::string::string((std::string *)v27, a3);
          v8 = CoinParam::matches();
          if ( (_UNKNOWN *)(v27[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage
            && _InterlockedExchangeAdd((volatile signed __int32 *)(v27[0] - 8LL), 0xFFFFFFFF) <= 0 )
          {
            v25 = v8;
            std::string::_Rep::_M_destroy();
            v8 = v25;
          }
          if ( v8 )
            break;
        }
        v7 += 8;
        if ( v7 == v23 )
          goto LABEL_10;
        v5 = *a1;
      }
    }
    else
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v5 + v7) )
        {
          std::string::string((std::string *)v27, a3);
          v17 = CoinParam::matches();
          if ( (_UNKNOWN *)(v27[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
          {
            v22 = *(_DWORD *)(v27[0] - 8LL);
            *(_DWORD *)(v27[0] - 8LL) = v22 - 1;
            if ( v22 <= 0 )
            {
              v26 = v17;
              std::string::_Rep::_M_destroy();
              v17 = v26;
            }
          }
          if ( v17 )
            break;
        }
        v7 += 8;
        if ( v23 == v7 )
          goto LABEL_10;
        v5 = *a1;
      }
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  CoinParam::matchName((CoinParam *)v27);
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v9 = v27[0];
  if ( (_UNKNOWN *)(v27[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
LABEL_30:
    if ( &_pthread_key_create )
    {
      v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 - 8), 0xFFFFFFFF);
    }
    else
    {
      v18 = *(_DWORD *)(v9 - 8);
      *(_DWORD *)(v9 - 8) = v18 - 1;
    }
    if ( v18 <= 0 )
      std::string::_Rep::_M_destroy();
  }
LABEL_12:
  v10 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
  if ( a4 > 0 )
  {
    if ( !v10 )
      goto LABEL_50;
    if ( v10[56] )
    {
      v11 = v10[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v11 = 10;
      v20 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v10 + 48LL);
      if ( v20 != std::ctype<char>::do_widen )
        v11 = v20((__int64)v10, 10u);
    }
    v12 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v11);
    std::ostream::flush(v12);
    v13 = *a1;
    if ( a4 == 1 )
    {
      std::string::string((std::string *)v27, (const std::string *)(*(_QWORD *)(v13 + v7) + 136LL));
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( (_UNKNOWN *)(v27[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v21 = _InterlockedExchangeAdd((volatile signed __int32 *)(v27[0] - 8LL), 0xFFFFFFFF);
        }
        else
        {
          v21 = *(_DWORD *)(v27[0] - 8LL);
          *(_DWORD *)(v27[0] - 8LL) = v21 - 1;
        }
        if ( v21 <= 0 )
          std::string::_Rep::_M_destroy();
      }
    }
    else
    {
      CoinParam::printLongHelp(*(CoinParam **)(v13 + v7));
    }
    v10 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
  }
  if ( !v10 )
LABEL_50:
    std::__throw_bad_cast();
  if ( v10[56] )
  {
    v14 = v10[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v14 = 10;
    v19 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v10 + 48LL);
    if ( v19 != std::ctype<char>::do_widen )
      v14 = v19((__int64)v10, 10u);
  }
  v15 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v14);
  return std::ostream::flush(v15);
}

