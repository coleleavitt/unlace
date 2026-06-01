__int64 __fastcall CoinPackedVector::truncate(CoinPackedVector *this, int a2)
{
  void *exception; // r13
  __int64 v4; // [rsp+10h] [rbp-58h]
  __int64 v5; // [rsp+18h] [rbp-50h]
  __int64 v6; // [rsp+20h] [rbp-48h]

  if ( *((_DWORD *)this + 12) < a2 || a2 < 0 )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v4 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C6B8(v4 - 24);
    if ( (_UNKNOWN *)(v5 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C6B8(v5 - 24);
    if ( (_UNKNOWN *)(v6 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C6B8(v6 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  *((_DWORD *)this + 12) = a2;
  return CoinPackedVectorBase::clearBase(this);
}

