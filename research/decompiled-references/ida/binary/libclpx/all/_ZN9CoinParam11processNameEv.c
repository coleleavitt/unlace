__int64 __fastcall CoinParam::processName(CoinParam *this)
{
  const std::string *v1; // rbp
  unsigned __int64 v2; // r12
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rax
  int v8; // edx
  int v9; // edx
  int v10; // edx
  char *v11; // [rsp+8h] [rbp-40h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h] BYREF
  _QWORD v13[6]; // [rsp+18h] [rbp-30h] BYREF

  v1 = (CoinParam *)((char *)this + 16);
  v2 = std::string::find((CoinParam *)((char *)this + 16), 33, 0);
  result = *((_QWORD *)this + 2);
  v4 = *(_QWORD *)(result - 24);
  *((_QWORD *)this + 3) = v4;
  if ( v2 == -1 )
  {
    *((_QWORD *)this + 4) = v4;
  }
  else
  {
    *((_QWORD *)this + 4) = v2;
    if ( v2 + 1 > v4 )
      std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
    std::string::string((std::string *)&v12, v1, v2 + 1, 0xFFFFFFFFFFFFFFFFLL);
    std::string::string((std::string *)&v11, v1, 0, v2);
    v5 = *((_QWORD *)v11 - 3);
    v6 = v5 + *(_QWORD *)(v12 - 24);
    if ( v6 > *((_QWORD *)v11 - 2) && v6 <= *(_QWORD *)(v12 - 16) )
      v7 = (_QWORD *)std::string::insert((std::string *)&v12, 0, v11, v5);
    else
      v7 = (_QWORD *)std::string::append((std::string *)&v11, (const std::string *)&v12);
    v13[0] = *v7;
    *v7 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    std::string::swap(v1, (std::string *)v13);
    if ( (_UNKNOWN *)(v13[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(v13[0] - 8LL), 0xFFFFFFFF);
      }
      else
      {
        v10 = *(_DWORD *)(v13[0] - 8LL);
        *(_DWORD *)(v13[0] - 8LL) = v10 - 1;
      }
      if ( v10 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( v11 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v9 = _InterlockedExchangeAdd((volatile signed __int32 *)v11 - 2, 0xFFFFFFFF);
      }
      else
      {
        v9 = *((_DWORD *)v11 - 2);
        *((_DWORD *)v11 - 2) = v9 - 1;
      }
      if ( v9 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    result = v12;
    if ( (_UNKNOWN *)(v12 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v12 - 8), 0xFFFFFFFF);
      }
      else
      {
        v8 = *(_DWORD *)(v12 - 8);
        *(_DWORD *)(v12 - 8) = v8 - 1;
      }
      if ( v8 <= 0 )
        result = std::string::_Rep::_M_destroy();
    }
    --*((_QWORD *)this + 3);
  }
  return result;
}

