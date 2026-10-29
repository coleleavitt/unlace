std::string *__fastcall CoinParamUtils::getCommand(
        std::string *a1,
        int a2,
        __int64 a3,
        const char **a4,
        std::string *a5)
{
  const char *v8; // r15
  size_t v9; // rax
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rax
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // r13
  __int64 v17; // rax
  __int64 v18; // r15
  char v19; // si
  std::ostream *v20; // rax
  int v21; // edx
  __int64 (__fastcall *v22)(__int64, unsigned int); // rax
  int v23; // edx
  int v24; // edx
  int v25; // edx
  _QWORD v28[8]; // [rsp+28h] [rbp-40h] BYREF

  std::string::string();
  std::string::assign((std::string *)&qword_4D71E8, "", 0);
  if ( a5 )
    std::string::assign(a5, "", 0);
  while ( !(unsigned int)std::string::compare(a1, "EOL") )
  {
    if ( dword_4D6D4C <= 0 )
    {
      sub_23D1F0((std::string *)v28, *a4);
      std::string::swap(a1, (std::string *)v28);
      v10 = v28[0];
      if ( (_UNKNOWN *)(v28[0] - 24LL) == &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_6;
LABEL_12:
      if ( &_pthread_key_create )
      {
        v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 - 8), 0xFFFFFFFF);
      }
      else
      {
        v11 = *(_DWORD *)(v10 - 8);
        *(_DWORD *)(v10 - 8) = v11 - 1;
      }
      if ( v11 <= 0 )
        std::string::_Rep::_M_destroy();
      goto LABEL_6;
    }
    if ( dword_4D6D4C >= a2 )
    {
      std::string::assign(a1, "", 0);
      goto LABEL_6;
    }
    v8 = *(const char **)(a3 + 8LL * dword_4D6D4C++);
    v9 = strlen(v8);
    std::string::assign(a1, v8, v9);
    if ( !(unsigned int)std::string::compare(a1, "-") )
    {
      std::string::assign(a1, "stdin", 5u);
      goto LABEL_6;
    }
    if ( (unsigned int)std::string::compare(a1, "--") )
    {
      if ( *(int *)(*(_QWORD *)a1 - 8LL) >= 0 )
        std::string::_M_leak_hard(a1);
      v12 = *(_QWORD *)a1;
      if ( **(_BYTE **)a1 == 45 )
      {
        if ( *(int *)(v12 - 8) >= 0 )
        {
          std::string::_M_leak_hard(a1);
          v12 = *(_QWORD *)a1;
        }
        v13 = (*(_BYTE *)(v12 + 1) == 45) + 1LL;
        if ( a5 )
        {
          std::string::string((std::string *)v28, a1, 0, (*(_BYTE *)(v12 + 1) == 45) + 1LL);
          std::string::swap(a5, (std::string *)v28);
          if ( (_UNKNOWN *)(v28[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
          {
            if ( &_pthread_key_create )
            {
              v25 = _InterlockedExchangeAdd((volatile signed __int32 *)(v28[0] - 8LL), 0xFFFFFFFF);
            }
            else
            {
              v25 = *(_DWORD *)(v28[0] - 8LL);
              *(_DWORD *)(v28[0] - 8LL) = v25 - 1;
            }
            if ( v25 <= 0 )
              std::string::_Rep::_M_destroy();
          }
          v12 = *(_QWORD *)a1;
        }
        if ( *(_QWORD *)(v12 - 24) < v13 )
          std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
        std::string::string((std::string *)v28, a1, v13, 0xFFFFFFFFFFFFFFFFLL);
        std::string::swap(a1, (std::string *)v28);
        v10 = v28[0];
        if ( (_UNKNOWN *)(v28[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
          goto LABEL_12;
      }
    }
LABEL_6:
    if ( !(unsigned int)std::string::compare(a1, "stdin") )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v17 = *(_QWORD *)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
      v18 = v17;
      if ( !v17 )
        std::__throw_bad_cast();
      if ( *(_BYTE *)(v17 + 56) )
      {
        v19 = *(_BYTE *)(v17 + 67);
      }
      else
      {
        std::ctype<char>::_M_widen_init();
        v19 = 10;
        v22 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v18 + 48LL);
        if ( v22 != std::ctype<char>::do_widen )
          v19 = v22(v18, 10u);
      }
      v20 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v19);
      std::ostream::flush(v20);
      dword_4D6D4C = -1;
      sub_23D1F0((std::string *)v28, *a4);
      std::string::swap(a1, (std::string *)v28);
      if ( (_UNKNOWN *)(v28[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v21 = _InterlockedExchangeAdd((volatile signed __int32 *)(v28[0] - 8LL), 0xFFFFFFFF);
        }
        else
        {
          v21 = *(_DWORD *)(v28[0] - 8LL);
          *(_DWORD *)(v28[0] - 8LL) = v21 - 1;
        }
        if ( v21 <= 0 )
          std::string::_Rep::_M_destroy();
      }
    }
  }
  v14 = std::string::find(a1, 61, 0);
  v15 = v14;
  if ( v14 != -1 )
  {
    if ( (unsigned __int64)(v14 + 1) > *(_QWORD *)(*(_QWORD *)a1 - 24LL) )
      std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
    std::string::string((std::string *)v28, a1, v14 + 1, 0xFFFFFFFFFFFFFFFFLL);
    std::string::swap((std::string *)&qword_4D71E8, (std::string *)v28);
    if ( (_UNKNOWN *)(v28[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v24 = _InterlockedExchangeAdd((volatile signed __int32 *)(v28[0] - 8LL), 0xFFFFFFFF);
      }
      else
      {
        v24 = *(_DWORD *)(v28[0] - 8LL);
        *(_DWORD *)(v28[0] - 8LL) = v24 - 1;
      }
      if ( v24 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    std::string::string((std::string *)v28, a1, 0, v15);
    std::string::swap(a1, (std::string *)v28);
    if ( (_UNKNOWN *)(v28[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(v28[0] - 8LL), 0xFFFFFFFF);
      }
      else
      {
        v23 = *(_DWORD *)(v28[0] - 8LL);
        *(_DWORD *)(v28[0] - 8LL) = v23 - 1;
      }
      if ( v23 <= 0 )
        std::string::_Rep::_M_destroy();
    }
  }
  return a1;
}

