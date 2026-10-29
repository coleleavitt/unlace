void __fastcall CoinPackedMatrix::setExtraGap(CoinPackedMatrix *this, double a2)
{
  void *exception; // r13
  __int64 v3; // [rsp+4h] [rbp-58h]
  __int64 v4; // [rsp+Ch] [rbp-50h]
  __int64 v5; // [rsp+14h] [rbp-48h]

  if ( a2 < 0.0 )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v3 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_223D40(v3 - 24);
    if ( (_UNKNOWN *)(v4 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_223D40(v4 - 24);
    if ( (_UNKNOWN *)(v5 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_223D40(v5 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  *((double *)this + 2) = a2;
}

