unsigned int *__fastcall sub_223E30(int a1, unsigned int *a2, signed int a3)
{
  unsigned int *result; // rax
  __int64 v4; // rdi
  unsigned int *v5; // rdx
  void *exception; // r13
  __int64 v7; // [rsp+10h] [rbp-58h]
  __int64 v8; // [rsp+18h] [rbp-50h]
  __int64 v9; // [rsp+20h] [rbp-48h]

  result = (unsigned int *)*a2;
  if ( (int)result < 0 )
    goto LABEL_10;
  v4 = a1;
  if ( (int)a2[v4 - 1] >= a3 )
    goto LABEL_10;
  v5 = &a2[v4];
  if ( &a2[v4] != a2 )
  {
    while ( 1 )
    {
      result = a2 + 1;
      if ( v5 == a2 + 1 )
        return result;
      if ( *a2 == a2[1] )
        break;
      ++a2;
    }
    if ( v5 != a2 )
    {
LABEL_10:
      exception = __cxa_allocate_exception(0x30u);
      std::string::string();
      std::string::string();
      std::string::string();
      CoinError::CoinError();
      if ( (_UNKNOWN *)(v7 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_223D40(v7 - 24);
      if ( (_UNKNOWN *)(v8 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_223D40(v8 - 24);
      if ( (_UNKNOWN *)(v9 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_223D40(v9 - 24);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
    }
  }
  return result;
}

