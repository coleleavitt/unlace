CoinParam *__fastcall CoinParam::matchName(CoinParam *this, _QWORD *a2)
{
  unsigned __int64 v2; // rdx
  char **v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  __int64 v13; // [rsp+10h] [rbp-48h] BYREF
  char *v14; // [rsp+18h] [rbp-40h] BYREF
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v16[6]; // [rsp+28h] [rbp-30h] BYREF

  v2 = a2[4];
  if ( v2 == a2[3] )
  {
    std::string::string(this, (const std::string *)(a2 + 2));
    return this;
  }
  else
  {
    if ( v2 > *(_QWORD *)(a2[2] - 24LL) )
      std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
    std::string::string((std::string *)&v15, (const std::string *)(a2 + 2), v2, 0xFFFFFFFFFFFFFFFFLL);
    std::string::string((std::string *)&v13, (const std::string *)(a2 + 2), 0, a2[4]);
    v3 = (char **)std::string::append((std::string *)&v13, "(", 1u);
    v14 = *v3;
    *v3 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    v4 = *((_QWORD *)v14 - 3);
    v5 = v4 + *(_QWORD *)(v15 - 24);
    if ( v5 > *((_QWORD *)v14 - 2) && v5 <= *(_QWORD *)(v15 - 16) )
      v6 = (_QWORD *)std::string::insert((std::string *)&v15, 0, v14, v4);
    else
      v6 = (_QWORD *)std::string::append((std::string *)&v14, (const std::string *)&v15);
    v16[0] = *v6;
    *v6 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    v7 = (_QWORD *)std::string::append((std::string *)v16, ")", 1u);
    *(_QWORD *)this = *v7;
    *v7 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    if ( (_UNKNOWN *)(v16[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v16[0] - 8LL), 0xFFFFFFFF);
      }
      else
      {
        v9 = *(_DWORD *)(v16[0] - 8LL);
        *(_DWORD *)(v16[0] - 8LL) = v9 - 1;
      }
      if ( v9 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( v14 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v10 = _InterlockedExchangeAdd((volatile signed __int32 *)v14 - 2, 0xFFFFFFFF);
      }
      else
      {
        v10 = *((_DWORD *)v14 - 2);
        *((_DWORD *)v14 - 2) = v10 - 1;
      }
      if ( v10 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v13 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(v13 - 8), 0xFFFFFFFF);
      }
      else
      {
        v11 = *(_DWORD *)(v13 - 8);
        *(_DWORD *)(v13 - 8) = v11 - 1;
      }
      if ( v11 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v15 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v15 - 8), 0xFFFFFFFF);
      }
      else
      {
        v12 = *(_DWORD *)(v15 - 8);
        *(_DWORD *)(v15 - 8) = v12 - 1;
      }
      if ( v12 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    return this;
  }
}

