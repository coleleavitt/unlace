__int64 *__fastcall CoinPackedVector::swap(CoinPackedVector *this, int a2, int a3)
{
  __int64 v3; // rcx
  int *v4; // rax
  int *v5; // rcx
  int v6; // r8d
  __int64 v7; // rcx
  __int64 *result; // rax
  __int64 *v9; // rdx
  __int64 v10; // xmm0_8
  void *exception; // r13
  __int64 v12; // [rsp+10h] [rbp-58h]
  __int64 v13; // [rsp+18h] [rbp-50h]
  __int64 v14; // [rsp+20h] [rbp-48h]

  if ( *((_DWORD *)this + 12) <= a2 || a2 < 0 )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v12 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C6B8(v12 - 24);
    if ( (_UNKNOWN *)(v13 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C6B8(v13 - 24);
    if ( (_UNKNOWN *)(v14 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C6B8(v14 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  v3 = *((_QWORD *)this + 4);
  v4 = (int *)(v3 + 4LL * a3);
  v5 = (int *)(v3 + 4LL * a2);
  v6 = *v5;
  *v5 = *v4;
  v7 = *((_QWORD *)this + 5);
  *v4 = v6;
  result = (__int64 *)(v7 + 8LL * a3);
  v9 = (__int64 *)(v7 + 8LL * a2);
  v10 = *v9;
  *v9 = *result;
  *result = v10;
  return result;
}

